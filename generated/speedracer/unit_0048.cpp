#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0048[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0,
    0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0,
    0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0,
    68, 0, 0, 69, 0, 0, 0, 0, 70, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0,
    0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0,
    206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0048(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00220000;
    case 2u: goto L_00220064;
    case 3u: goto L_00220074;
    case 4u: goto L_00220088;
    case 5u: goto L_00220098;
    case 6u: goto L_002200B8;
    case 7u: goto L_002200C8;
    case 8u: goto L_002200E4;
    case 9u: goto L_002200F8;
    case 10u: goto L_00220108;
    case 11u: goto L_0022011C;
    case 12u: goto L_00220134;
    case 13u: goto L_00220154;
    case 14u: goto L_00220164;
    case 15u: goto L_00220180;
    case 16u: goto L_00220194;
    case 17u: goto L_002201A4;
    case 18u: goto L_002201B4;
    case 19u: goto L_002201CC;
    case 20u: goto L_002201DC;
    case 21u: goto L_002201F8;
    case 22u: goto L_00220220;
    case 23u: goto L_0022026C;
    case 24u: goto L_00220284;
    case 25u: goto L_0022028C;
    case 26u: goto L_0022029C;
    case 27u: goto L_002202A8;
    case 28u: goto L_002202F8;
    case 29u: goto L_0022030C;
    case 30u: goto L_00220314;
    case 31u: goto L_00220320;
    case 32u: goto L_0022032C;
    case 33u: goto L_00220350;
    case 34u: goto L_00220394;
    case 35u: goto L_002203B4;
    case 36u: goto L_002203C0;
    case 37u: goto L_00220470;
    case 38u: goto L_00220480;
    case 39u: goto L_00220490;
    case 40u: goto L_002204E0;
    case 41u: goto L_002204F0;
    case 42u: goto L_00220548;
    case 43u: goto L_0022055C;
    case 44u: goto L_00220564;
    case 45u: goto L_00220570;
    case 46u: goto L_0022057C;
    case 47u: goto L_002205C4;
    case 48u: goto L_002205D8;
    case 49u: goto L_002205E0;
    case 50u: goto L_002205EC;
    case 51u: goto L_002205F8;
    case 52u: goto L_00220620;
    case 53u: goto L_00220650;
    case 54u: goto L_00220670;
    case 55u: goto L_002206B0;
    case 56u: goto L_002206C8;
    case 57u: goto L_00220700;
    case 58u: goto L_00220704;
    case 59u: goto L_00220730;
    case 60u: goto L_00220734;
    case 61u: goto L_00220760;
    case 62u: goto L_00220764;
    case 63u: goto L_00220790;
    case 64u: goto L_002207A0;
    case 65u: goto L_002207D0;
    case 66u: goto L_002207E4;
    case 67u: goto L_002207F8;
    case 68u: goto L_00220800;
    case 69u: goto L_0022080C;
    case 70u: goto L_00220820;
    case 71u: goto L_00220824;
    case 72u: goto L_00220834;
    case 73u: goto L_00220848;
    case 74u: goto L_00220854;
    case 75u: goto L_00220868;
    case 76u: goto L_0022087C;
    case 77u: goto L_00220890;
    case 78u: goto L_002208A4;
    case 79u: goto L_002208B8;
    case 80u: goto L_002208CC;
    case 81u: goto L_002208E4;
    case 82u: goto L_00220904;
    case 83u: goto L_00220924;
    case 84u: goto L_00220938;
    case 85u: goto L_0022094C;
    case 86u: goto L_00220960;
    case 87u: goto L_00220974;
    case 88u: goto L_00220988;
    case 89u: goto L_0022099C;
    case 90u: goto L_002209B0;
    case 91u: goto L_002209C4;
    case 92u: goto L_002209D8;
    case 93u: goto L_002209EC;
    case 94u: goto L_00220A00;
    case 95u: goto L_00220A14;
    case 96u: goto L_00220A28;
    case 97u: goto L_00220A3C;
    case 98u: goto L_00220A54;
    case 99u: goto L_00220A68;
    case 100u: goto L_00220A7C;
    case 101u: goto L_00220A90;
    case 102u: goto L_00220AA4;
    case 103u: goto L_00220AB8;
    case 104u: goto L_00220ACC;
    case 105u: goto L_00220AE0;
    case 106u: goto L_00220AF4;
    case 107u: goto L_00220B08;
    case 108u: goto L_00220B20;
    case 109u: goto L_00220B54;
    case 110u: goto L_00220B60;
    case 111u: goto L_00220B6C;
    case 112u: goto L_00220B98;
    case 113u: goto L_00220BA4;
    case 114u: goto L_00220BB0;
    case 115u: goto L_00220BD0;
    case 116u: goto L_00220C14;
    case 117u: goto L_00220C2C;
    case 118u: goto L_00220C44;
    case 119u: goto L_00220C5C;
    case 120u: goto L_00220C74;
    case 121u: goto L_00220C8C;
    case 122u: goto L_00220CA4;
    case 123u: goto L_00220CBC;
    case 124u: goto L_00220CD4;
    case 125u: goto L_00220CE0;
    case 126u: goto L_00220CEC;
    case 127u: goto L_00220CF8;
    case 128u: goto L_00220D04;
    case 129u: goto L_00220D10;
    case 130u: goto L_00220D1C;
    case 131u: goto L_00220D28;
    case 132u: goto L_00220D34;
    case 133u: goto L_00220D40;
    case 134u: goto L_00220D5C;
    case 135u: goto L_00220D90;
    case 136u: goto L_00220DC0;
    case 137u: goto L_00220DDC;
    case 138u: goto L_00220DE8;
    case 139u: goto L_00220E44;
    case 140u: goto L_00220E60;
    case 141u: goto L_00220E70;
    case 142u: goto L_00220F44;
    case 143u: goto L_00220F50;
    case 144u: goto L_00220F84;
    case 145u: goto L_00220FA0;
    case 146u: goto L_00220FC0;
    case 147u: goto L_00220FF0;
    case 148u: goto L_0022100C;
    case 149u: goto L_00221030;
    case 150u: goto L_00221060;
    case 151u: goto L_0022107C;
    case 152u: goto L_002210A0;
    case 153u: goto L_002210B0;
    case 154u: goto L_002210D8;
    case 155u: goto L_002210E8;
    case 156u: goto L_00221104;
    case 157u: goto L_00221118;
    case 158u: goto L_00221128;
    case 159u: goto L_00221140;
    case 160u: goto L_0022115C;
    case 161u: goto L_0022116C;
    case 162u: goto L_00221194;
    case 163u: goto L_002211A4;
    case 164u: goto L_002211C0;
    case 165u: goto L_002211D4;
    case 166u: goto L_002211E4;
    case 167u: goto L_00221200;
    case 168u: goto L_00221210;
    case 169u: goto L_0022123C;
    case 170u: goto L_00221248;
    case 171u: goto L_00221250;
    case 172u: goto L_00221258;
    case 173u: goto L_0022127C;
    case 174u: goto L_00221288;
    case 175u: goto L_002212C8;
    case 176u: goto L_002212E8;
    case 177u: goto L_002212F4;
    case 178u: goto L_00221300;
    case 179u: goto L_00221328;
    case 180u: goto L_00221348;
    case 181u: goto L_00221358;
    case 182u: goto L_00221374;
    case 183u: goto L_0022138C;
    case 184u: goto L_002213D0;
    case 185u: goto L_002213E0;
    case 186u: goto L_00221414;
    case 187u: goto L_00221424;
    case 188u: goto L_00221440;
    case 189u: goto L_0022145C;
    case 190u: goto L_00221480;
    case 191u: goto L_002214BC;
    case 192u: goto L_002214DC;
    case 193u: goto L_002214E8;
    case 194u: goto L_00221630;
    case 195u: goto L_00221720;
    case 196u: goto L_002217AC;
    case 197u: goto L_002217DC;
    case 198u: goto L_002217FC;
    case 199u: goto L_00221834;
    case 200u: goto L_0022186C;
    case 201u: goto L_002218EC;
    case 202u: goto L_002219A0;
    case 203u: goto L_00221AB0;
    case 204u: goto L_00221CE0;
    case 205u: goto L_00221CF0;
    case 206u: goto L_00221D00;
    case 207u: goto L_00221D10;
    case 208u: goto L_00221DFC;
    case 209u: goto L_00221EB4;
    case 210u: goto L_00221F04;
    case 211u: goto L_00221F1C;
    case 212u: goto L_00221F28;
    case 213u: goto L_00221F58;
    case 214u: goto L_00221F78;
    case 215u: goto L_00221F84;
    case 216u: goto L_00221FD0;
    case 217u: goto L_00222030;
    case 218u: goto L_002220A0;
    case 219u: goto L_00222104;
    case 220u: goto L_0022214C;
    case 221u: goto L_002221A0;
    case 222u: goto L_002221D4;
    case 223u: goto L_002221F0;
    case 224u: goto L_00222210;
    case 225u: goto L_0022222C;
    case 226u: goto L_002222A0;
    case 227u: goto L_002222D0;
    case 228u: goto L_002222EC;
    case 229u: goto L_00222310;
    case 230u: goto L_00222320;
    case 231u: goto L_0022234C;
    case 232u: goto L_00222360;
    case 233u: goto L_00222368;
    case 234u: goto L_002223C0;
    case 235u: goto L_002223DC;
    case 236u: goto L_00222428;
    case 237u: goto L_00222448;
    case 238u: goto L_00222470;
    case 239u: goto L_00222480;
    case 240u: goto L_002224B0;
    case 241u: goto L_002224BC;
    case 242u: goto L_002224D0;
    case 243u: goto L_00222500;
    case 244u: goto L_00222520;
    case 245u: goto L_00222558;
    case 246u: goto L_00222570;
    case 247u: goto L_00222610;
    case 248u: goto L_00222648;
    case 249u: goto L_0022265C;
    case 250u: goto L_00222694;
    case 251u: goto L_002226C8;
    case 252u: goto L_002226DC;
    case 253u: goto L_00222714;
    case 254u: goto L_00222748;
    case 255u: goto L_0022275C;
    case 256u: goto L_00222794;
    case 257u: goto L_002227C0;
    case 258u: goto L_002227D4;
    case 259u: goto L_002227DC;
    case 260u: goto L_00222808;
    case 261u: goto L_0022281C;
    case 262u: goto L_00222854;
    case 263u: goto L_00222890;
    case 264u: goto L_002228A4;
    case 265u: goto L_002228DC;
    case 266u: goto L_00222918;
    case 267u: goto L_0022292C;
    case 268u: goto L_00222964;
    case 269u: goto L_00222990;
    case 270u: goto L_002229D8;
    case 271u: goto L_002229FC;
    case 272u: goto L_00222A20;
    case 273u: goto L_00222A38;
    case 274u: goto L_00222A70;
    case 275u: goto L_00222A90;
    case 276u: goto L_00222A9C;
    case 277u: goto L_00222AA8;
    case 278u: goto L_00222AB4;
    case 279u: goto L_00222AC4;
    case 280u: goto L_00222AD0;
    case 281u: goto L_00222AE0;
    case 282u: goto L_00222B00;
    case 283u: goto L_00222B08;
    case 284u: goto L_00222B2C;
    case 285u: goto L_00222B80;
    case 286u: goto L_00222C24;
    case 287u: goto L_00222C30;
    case 288u: goto L_00222C64;
    case 289u: goto L_00222CBC;
    case 290u: goto L_00222CDC;
    case 291u: goto L_00222D14;
    case 292u: goto L_00222D30;
    case 293u: goto L_00222DB0;
    case 294u: goto L_00222E2C;
    case 295u: goto L_00222E9C;
    case 296u: goto L_00222EEC;
    case 297u: goto L_00222F40;
    case 298u: goto L_00222F50;
    case 299u: goto L_00222F70;
    case 300u: goto L_00222FCC;
    case 301u: goto L_00223000;
    case 302u: goto L_0022309C;
    case 303u: goto L_002230B0;
    case 304u: goto L_002230E8;
    case 305u: goto L_00223144;
    case 306u: goto L_00223154;
    case 307u: goto L_00223160;
    case 308u: goto L_002231A0;
    case 309u: goto L_002231C8;
    case 310u: goto L_002231E4;
    case 311u: goto L_00223200;
    case 312u: goto L_0022321C;
    case 313u: goto L_00223240;
    case 314u: goto L_00223270;
    case 315u: goto L_00223280;
    case 316u: goto L_002232A4;
    case 317u: goto L_002232C0;
    case 318u: goto L_002232F0;
    case 319u: goto L_0022330C;
    case 320u: goto L_00223330;
    case 321u: goto L_00223350;
    case 322u: goto L_00223380;
    case 323u: goto L_0022339C;
    case 324u: goto L_002233C0;
    case 325u: goto L_002233E0;
    case 326u: goto L_00223400;
    case 327u: goto L_00223670;
    case 328u: goto L_002238C0;
    case 329u: goto L_00223CD8;
    case 330u: goto L_00223DE0;
    case 331u: goto L_00223E08;
    case 332u: goto L_00223E24;
    case 333u: goto L_00223E40;
    case 334u: goto L_00223EA4;
    case 335u: goto L_00223EB0;
    case 336u: goto L_00223EC0;
    case 337u: goto L_00223EE0;
    default: bad_entry(c, 0x00220000u); return;
    }
L_00220000:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] - 6144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 6112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 42u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 40u), static_cast<std::uint16_t>(0u));
    c.budget -= 23;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 48u), 0u);  if (t) { goto L_00220074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220064u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00220064u) [[unlikely]] return; }
L_00220064:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220074u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00220074u) [[unlikely]] return; }
L_00220074:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 108u), 0u);  if (t) { goto L_00220098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220088u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00220088u) [[unlikely]] return; }
L_00220088:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220098u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00220098u) [[unlikely]] return; }
L_00220098:
    set32(c.r[17], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  goto L_0022010C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 108u), c.r[17].w[0]);  goto L_002200E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002200B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002200B8u) [[unlikely]] return; }
L_002200B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002200C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002200C8u) [[unlikely]] return; }
L_002200C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002200E4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002200E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002200E4u) [[unlikely]] return; }
L_002200E4:
    st32((c.r[29].w[0] + 108u), c.r[17].w[0]);
    c.budget -= 1;
L_002200E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00220108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002200F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002200F8u) [[unlikely]] return; }
L_002200F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220108u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00220108u) [[unlikely]] return; }
L_00220108:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_0022010C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[18].w[0] + 2832u));  goto L_002201A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022011Cu);  if (depth < kMaxDepth) unit_006A(c, 165u, depth + 1u); else { c.pc = 0x002A9920u; return; } if (c.pc != 0x0022011Cu) [[unlikely]] return; }
L_0022011C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00220134u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00220134u) [[unlikely]] return; }
L_00220134:
    set32(c.r[17], ld32((c.r[29].w[0] + 108u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002201A4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[29].w[0] + 108u), c.r[16].w[0]);  goto L_00220184; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220154u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00220154u) [[unlikely]] return; }
L_00220154:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220164u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00220164u) [[unlikely]] return; }
L_00220164:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00220180; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00220180u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00220180u) [[unlikely]] return; }
L_00220180:
    st32((c.r[29].w[0] + 108u), c.r[16].w[0]);
    c.budget -= 1;
L_00220184:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002201A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220194u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00220194u) [[unlikely]] return; }
L_00220194:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002201A4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002201A4u) [[unlikely]] return; }
L_002201A4:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 2832u));
    c.budget -= 1;
L_002201A8:
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002201B4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 422u, depth + 1u); else { c.pc = 0x0021FC20u; return; } if (c.pc != 0x002201B4u) [[unlikely]] return; }
L_002201B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0] + 20u), c.r[20].w[0]);  if (t) { goto L_002201F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002201CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002201CCu) [[unlikely]] return; }
L_002201CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002201DCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002201DCu) [[unlikely]] return; }
L_002201DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_002201FC; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002201F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002201F8u) [[unlikely]] return; }
L_002201F8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002201FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00220220:
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
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002202B4; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[20].w[0] + 8u), c.r[16].w[0]);  goto L_002202AC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022026Cu); set32(c.r[4], c.r[4].w[0] - 23216u);  if (depth < kMaxDepth) unit_0048(c, 40u, depth + 1u); else { c.pc = 0x002204E0u; return; } if (c.pc != 0x0022026Cu) [[unlikely]] return; }
L_0022026C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220284u); set32(c.r[7], c.r[7].w[0] - 23200u);  if (depth < kMaxDepth) unit_0048(c, 39u, depth + 1u); else { c.pc = 0x00220490u; return; } if (c.pc != 0x00220284u) [[unlikely]] return; }
L_00220284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022028Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 38u, depth + 1u); else { c.pc = 0x00220480u; return; } if (c.pc != 0x0022028Cu) [[unlikely]] return; }
L_0022028C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = ld64((c.r[3].w[0] - 23208u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022029Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 37u, depth + 1u); else { c.pc = 0x00220470u; return; } if (c.pc != 0x0022029Cu) [[unlikely]] return; }
L_0022029C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002202A8u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 33u, depth + 1u); else { c.pc = 0x00220350u; return; } if (c.pc != 0x002202A8u) [[unlikely]] return; }
L_002202A8:
    st32((c.r[20].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_002202AC:
    set32(c.r[3], 0u - 1u);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_002202B4:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[18].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00220334; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_002202E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22560u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0])));  if (t) { goto L_002202F0; } }
L_002202E0:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 22576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_002202F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002202F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 40u, depth + 1u); else { c.pc = 0x002204E0u; return; } if (c.pc != 0x002202F8u) [[unlikely]] return; }
L_002202F8:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022030Cu); set32(c.r[7], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0048(c, 39u, depth + 1u); else { c.pc = 0x00220490u; return; } if (c.pc != 0x0022030Cu) [[unlikely]] return; }
L_0022030C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220314u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 38u, depth + 1u); else { c.pc = 0x00220480u; return; } if (c.pc != 0x00220314u) [[unlikely]] return; }
L_00220314:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220320u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 37u, depth + 1u); else { c.pc = 0x00220470u; return; } if (c.pc != 0x00220320u) [[unlikely]] return; }
L_00220320:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022032Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 33u, depth + 1u); else { c.pc = 0x00220350u; return; } if (c.pc != 0x0022032Cu) [[unlikely]] return; }
L_0022032C:
    st32((c.r[20].w[0] + 12u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_00220334:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00220350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_00220434; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_002203D0; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220394u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00220394u) [[unlikely]] return; }
L_00220394:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_002203C8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002203B4u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x002203B4u) [[unlikely]] return; }
L_002203B4:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002203C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x002203C0u) [[unlikely]] return; }
L_002203C0:
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_002203C8:
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_002203D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_002203F4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
L_002203F4:
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[4], c.r[0], c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 16;
L_00220434:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00220470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; mmi::pcpyld(c.r[2], c.r[4], c.r[5]);  c.pc = t; return; }
L_00220480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[4].w[0]));  c.pc = t; return; }
L_00220490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[7].d[0] << 32;  goto L_002204AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[7].d[0] << 32;
    c.budget -= 3;
L_002204AC:
    set32(c.r[3], c.r[6].w[0] << 28);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0]), c.r[3].d[0]);  c.pc = t; return; }
L_002204E0:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_002204F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0022057C; } }
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0022053C; }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] - 29056u);  if (t) { goto L_00220540; } }
L_0022053C:
    set32(c.r[19], c.r[19].w[0] - 29024u);
    c.budget -= 1;
L_00220540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220548u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 40u, depth + 1u); else { c.pc = 0x002204E0u; return; } if (c.pc != 0x00220548u) [[unlikely]] return; }
L_00220548:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022055Cu); set32(c.r[7], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0048(c, 39u, depth + 1u); else { c.pc = 0x00220490u; return; } if (c.pc != 0x0022055Cu) [[unlikely]] return; }
L_0022055C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220564u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 38u, depth + 1u); else { c.pc = 0x00220480u; return; } if (c.pc != 0x00220564u) [[unlikely]] return; }
L_00220564:
    c.r[4].d[0] = ld64((c.r[19].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220570u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 37u, depth + 1u); else { c.pc = 0x00220470u; return; } if (c.pc != 0x00220570u) [[unlikely]] return; }
L_00220570:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022057Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 33u, depth + 1u); else { c.pc = 0x00220350u; return; } if (c.pc != 0x0022057Cu) [[unlikely]] return; }
L_0022057C:
    c.r[3].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[3].d[0] & 255ull;  goto L_0022059C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 476u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
L_0022059C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00220600; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 28736u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002205C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 40u, depth + 1u); else { c.pc = 0x002204E0u; return; } if (c.pc != 0x002205C4u) [[unlikely]] return; }
L_002205C4:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002205D8u); set32(c.r[7], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0048(c, 39u, depth + 1u); else { c.pc = 0x00220490u; return; } if (c.pc != 0x002205D8u) [[unlikely]] return; }
L_002205D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002205E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 38u, depth + 1u); else { c.pc = 0x00220480u; return; } if (c.pc != 0x002205E0u) [[unlikely]] return; }
L_002205E0:
    c.r[4].d[0] = ld64((c.r[19].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002205ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 37u, depth + 1u); else { c.pc = 0x00220470u; return; } if (c.pc != 0x002205ECu) [[unlikely]] return; }
L_002205EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002205F8u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 33u, depth + 1u); else { c.pc = 0x00220350u; return; } if (c.pc != 0x002205F8u) [[unlikely]] return; }
L_002205F8:
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_00220600:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00220620:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00220650:
    set32(c.r[5], ld32((c.r[4].w[0] + 272u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4A000000u);
    c.r[3].d[0] = c.r[3].d[0] | 1690ull;
    set32(c.r[5], c.r[5].w[0] << 17);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_00220670:
    set32(c.r[8], ld32((c.r[4].w[0] + 272u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x420F0000u);
    set32(c.r[6], c.r[8].w[0] + 1u);
    set32(c.r[7], c.r[8].w[0] << 1);
    st32((c.r[4].w[0] + 272u), c.r[6].w[0]);
    set32(c.r[6], c.r[7].w[0] + 1691u);
    set32(c.r[6], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[8].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[6].d[0] & 2047ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_002206B0:
    set32(c.r[7], c.r[4].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], 0u + 767u);
    c.r[6].d[0] = c.r[2].d[0] | 828ull;
    set32(c.r[3], c.r[4].w[0] + 272u);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 6;
L_002206C8:
    st32((c.r[7].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { st32((c.r[7].w[0]), c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002206C8u | kUnwind; return; } goto L_002206C8; }
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 272u), 0u);  c.pc = t; return; }
L_00220700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.budget -= 1;
L_00220704:
    set32(c.r[4], ld32((c.r[3].w[0] - 11264u)));
    c.r[4].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220704u | kUnwind; return; } goto L_00220704; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00220730:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.budget -= 1;
L_00220734:
    set32(c.r[4], ld32((c.r[3].w[0] - 12288u)));
    c.r[4].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220734u | kUnwind; return; } goto L_00220734; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00220760:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.budget -= 1;
L_00220764:
    set32(c.r[4], ld32((c.r[3].w[0] - 24576u)));
    c.r[4].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00220764u | kUnwind; return; } goto L_00220764; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00220790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002207A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 28672u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00220B14; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00980000u);
    c.r[3].d[0] = c.r[3].d[0] | 38528ull;
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002207A0u | kUnwind; return; } goto L_002207A0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002207D0u); set32(c.r[4], c.r[4].w[0] + 7504u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x002207D0u) [[unlikely]] return; }
L_002207D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 28672u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002207E4u); set32(c.r[4], c.r[4].w[0] + 7519u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x002207E4u) [[unlikely]] return; }
L_002207E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 28656u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002207F8u); set32(c.r[4], c.r[4].w[0] + 7532u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x002207F8u) [[unlikely]] return; }
L_002207F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 2;
L_00220800:
    set32(c.r[5], ld32((c.r[2].w[0] - 28624u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022080Cu); set32(c.r[4], c.r[4].w[0] + 7545u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x0022080Cu) [[unlikely]] return; }
L_0022080C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 28608u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220820u); set32(c.r[4], c.r[4].w[0] + 7558u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220820u) [[unlikely]] return; }
L_00220820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.budget -= 1;
L_00220824:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 28592u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220834u); set32(c.r[4], c.r[4].w[0] + 7571u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220834u) [[unlikely]] return; }
L_00220834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 28640u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220848u); set32(c.r[4], c.r[4].w[0] + 7584u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220848u) [[unlikely]] return; }
L_00220848:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220854u); set32(c.r[4], c.r[4].w[0] + 7596u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220854u) [[unlikely]] return; }
L_00220854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 24576u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220868u); set32(c.r[4], c.r[4].w[0] + 7519u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220868u) [[unlikely]] return; }
L_00220868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 24560u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022087Cu); set32(c.r[4], c.r[4].w[0] + 7532u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x0022087Cu) [[unlikely]] return; }
L_0022087C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 24528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220890u); set32(c.r[4], c.r[4].w[0] + 7545u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220890u) [[unlikely]] return; }
L_00220890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 24512u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002208A4u); set32(c.r[4], c.r[4].w[0] + 7558u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x002208A4u) [[unlikely]] return; }
L_002208A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 24496u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002208B8u); set32(c.r[4], c.r[4].w[0] + 7571u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x002208B8u) [[unlikely]] return; }
L_002208B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 24544u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002208CCu); set32(c.r[4], c.r[4].w[0] + 7584u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x002208CCu) [[unlikely]] return; }
L_002208CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], c.r[4].w[0] + 7611u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002208E4u); st32((c.r[2].w[0] + 15376u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x002208E4u) [[unlikely]] return; }
L_002208E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15616u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 15632u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 15648u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 15664u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220904u); set32(c.r[4], c.r[4].w[0] + 7617u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220904u) [[unlikely]] return; }
L_00220904:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15680u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 15696u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 15712u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 15728u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220924u); set32(c.r[4], c.r[4].w[0] + 7644u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220924u) [[unlikely]] return; }
L_00220924:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15424u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220938u); set32(c.r[4], c.r[4].w[0] + 7671u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220938u) [[unlikely]] return; }
L_00220938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15472u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022094Cu); set32(c.r[4], c.r[4].w[0] + 7685u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x0022094Cu) [[unlikely]] return; }
L_0022094C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220960u); set32(c.r[4], c.r[4].w[0] + 7698u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220960u) [[unlikely]] return; }
L_00220960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15568u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220974u); set32(c.r[4], c.r[4].w[0] + 7711u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220974u) [[unlikely]] return; }
L_00220974:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15504u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220988u); set32(c.r[4], c.r[4].w[0] + 7724u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220988u) [[unlikely]] return; }
L_00220988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15520u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022099Cu); set32(c.r[4], c.r[4].w[0] + 7738u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x0022099Cu) [[unlikely]] return; }
L_0022099C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15536u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002209B0u); set32(c.r[4], c.r[4].w[0] + 7751u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x002209B0u) [[unlikely]] return; }
L_002209B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002209C4u); set32(c.r[4], c.r[4].w[0] + 7764u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x002209C4u) [[unlikely]] return; }
L_002209C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15552u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002209D8u); set32(c.r[4], c.r[4].w[0] + 7776u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x002209D8u) [[unlikely]] return; }
L_002209D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15408u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002209ECu); set32(c.r[4], c.r[4].w[0] + 7789u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x002209ECu) [[unlikely]] return; }
L_002209EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15456u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220A00u); set32(c.r[4], c.r[4].w[0] + 7802u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220A00u) [[unlikely]] return; }
L_00220A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15488u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220A14u); set32(c.r[4], c.r[4].w[0] + 7814u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220A14u) [[unlikely]] return; }
L_00220A14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15360u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220A28u); set32(c.r[4], c.r[4].w[0] + 7827u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220A28u) [[unlikely]] return; }
L_00220A28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 15392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220A3Cu); set32(c.r[4], c.r[4].w[0] + 7840u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220A3Cu) [[unlikely]] return; }
L_00220A3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], c.r[4].w[0] + 7852u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220A54u); st32((c.r[2].w[0] + 12288u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220A54u) [[unlikely]] return; }
L_00220A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12304u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220A68u); set32(c.r[4], c.r[4].w[0] + 7698u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220A68u) [[unlikely]] return; }
L_00220A68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220A7Cu); set32(c.r[4], c.r[4].w[0] + 7827u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220A7Cu) [[unlikely]] return; }
L_00220A7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12352u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220A90u); set32(c.r[4], c.r[4].w[0] + 7857u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220A90u) [[unlikely]] return; }
L_00220A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12368u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220AA4u); set32(c.r[4], c.r[4].w[0] + 7870u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220AA4u) [[unlikely]] return; }
L_00220AA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12384u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220AB8u); set32(c.r[4], c.r[4].w[0] + 7883u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220AB8u) [[unlikely]] return; }
L_00220AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12400u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220ACCu); set32(c.r[4], c.r[4].w[0] + 7896u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220ACCu) [[unlikely]] return; }
L_00220ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12416u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220AE0u); set32(c.r[4], c.r[4].w[0] + 7909u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220AE0u) [[unlikely]] return; }
L_00220AE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12432u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220AF4u); set32(c.r[4], c.r[4].w[0] + 7921u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220AF4u) [[unlikely]] return; }
L_00220AF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 12448u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B08u); set32(c.r[4], c.r[4].w[0] + 7935u);  if (depth < kMaxDepth) unit_00AE(c, 22u, depth + 1u); else { c.pc = 0x003B83A8u; return; } if (c.pc != 0x00220B08u) [[unlikely]] return; }
L_00220B08:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002207A0u | kUnwind; return; } goto L_002207A0; } }
L_00220B14:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00220B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00220B74; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_00220B70; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00220B54u) [[unlikely]] return; }
L_00220B54:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0048(c, 115u, depth + 1u); else { c.pc = 0x00220BD0u; return; } if (c.pc != 0x00220B60u) [[unlikely]] return; }
L_00220B60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B6Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220B6Cu) [[unlikely]] return; }
L_00220B6C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00220B70:
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 1;
L_00220B74:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00220BBC; }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00220BB4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220B98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00220B98u) [[unlikely]] return; }
L_00220B98:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220BA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0048(c, 115u, depth + 1u); else { c.pc = 0x00220BD0u; return; } if (c.pc != 0x00220BA4u) [[unlikely]] return; }
L_00220BA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220BB0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220BB0u) [[unlikely]] return; }
L_00220BB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00220BB4:
    st32((c.r[3].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_00220BBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00220BD0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] == 0ull; st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00220D5C; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00220C14u) [[unlikely]] return; }
L_00220C14:
    set32(c.r[20], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 174u)));  goto L_00220D44; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00220C2Cu) [[unlikely]] return; }
L_00220C2C:
    set32(c.r[19], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00220D38; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00220C44u) [[unlikely]] return; }
L_00220C44:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00220D2C; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00220C5Cu) [[unlikely]] return; }
L_00220C5C:
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00220D20; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00220C74u) [[unlikely]] return; }
L_00220C74:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00220D14; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220C8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00220C8Cu) [[unlikely]] return; }
L_00220C8C:
    set32(c.r[22], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[22].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00220D08; }
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220CA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00220CA4u) [[unlikely]] return; }
L_00220CA4:
    set32(c.r[23], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[23].d[0] == 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_00220CFC; }
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220CBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00220CBCu) [[unlikely]] return; }
L_00220CBC:
    set32(c.r[30], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[30].d[0] == 0ull) { c.r[4].d[0] = c.r[23].d[0] + 0ull;  goto L_00220CF0; }
    set32(c.r[4], ld32((c.r[30].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220CD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00220CD4u) [[unlikely]] return; }
L_00220CD4:
    set32(c.r[4], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220CE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0048(c, 115u, depth + 1u); else { c.pc = 0x00220BD0u; return; } if (c.pc != 0x00220CE0u) [[unlikely]] return; }
L_00220CE0:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220CECu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220CECu) [[unlikely]] return; }
L_00220CEC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_00220CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220CF8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220CF8u) [[unlikely]] return; }
L_00220CF8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_00220CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D04u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220D04u) [[unlikely]] return; }
L_00220D04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00220D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D10u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220D10u) [[unlikely]] return; }
L_00220D10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00220D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D1Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220D1Cu) [[unlikely]] return; }
L_00220D1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00220D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D28u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220D28u) [[unlikely]] return; }
L_00220D28:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00220D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D34u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220D34u) [[unlikely]] return; }
L_00220D34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00220D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D40u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220D40u) [[unlikely]] return; }
L_00220D40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 174u)));
    c.budget -= 1;
L_00220D44:
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_00220D60; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220D5Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220D5Cu) [[unlikely]] return; }
L_00220D5C:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00220D60:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00220D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220DC0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00220DC0u) [[unlikely]] return; }
L_00220DC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3680u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220DDCu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00220DDCu) [[unlikely]] return; }
L_00220DDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00220E08; } }
L_00220DE8:
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
L_00220E08:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00220DE8u | kUnwind; return; } goto L_00220DE8; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220E44u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00220E44u) [[unlikely]] return; }
L_00220E44:
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00220E60:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_00220E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[10], c.r[5].w[0] << 1);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[10].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[9], c.r[10].w[0] + 1u);  if (t) { goto L_00220EBC; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[10].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.r[10].d[0] = c.r[5].d[0] + 0ull;  goto L_00220EC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;  if (t) { goto L_00220EC4; } }
L_00220EBC:
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00220EC0:
    c.r[1].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00220EC4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00220EF8; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[9].w[0] << 3);
    set32(c.r[3], c.r[10].w[0] << 3);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00220EF8; } }
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_00220EF8:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[5].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00220F48; }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[10].w[0] << 3);
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[9], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0])));
    set32(c.r[7], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[9].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220F44u); st32((c.r[2].w[0] + 4u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0048(c, 141u, depth + 1u); else { c.pc = 0x00220E70u; return; } if (c.pc != 0x00220F44u) [[unlikely]] return; }
L_00220F44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00220F48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00220F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00220FA0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220F84u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00220F84u) [[unlikely]] return; }
L_00220F84:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00220FA4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220FA0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00220FA0u) [[unlikely]] return; }
L_00220FA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00220FA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00220FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] << 3);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00220FF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00220FF0u) [[unlikely]] return; }
L_00220FF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3680u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022100Cu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0022100Cu) [[unlikely]] return; }
L_0022100C:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00221030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022107C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221060u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x00221060u) [[unlikely]] return; }
L_00221060:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00221080; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022107Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0022107Cu) [[unlikely]] return; }
L_0022107C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00221080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002210A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 7952u);  c.pc = t; return; }
L_002210B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 28576u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0022112C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00221108; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002210D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002210D8u) [[unlikely]] return; }
L_002210D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002210E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002210E8u) [[unlikely]] return; }
L_002210E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00221104; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00221104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00221104u) [[unlikely]] return; }
L_00221104:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00221108:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 28576u), 0u);  if (t) { goto L_00221128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221118u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00221118u) [[unlikely]] return; }
L_00221118:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221128u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00221128u) [[unlikely]] return; }
L_00221128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0022112C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00221140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 8u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022115Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0022115Cu) [[unlikely]] return; }
L_0022115C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00221178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022116Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0022116Cu) [[unlikely]] return; }
L_0022116C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 6080u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_00221178:
    set32(c.r[17], ld32((c.r[28].w[0] - 28576u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002211E8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 28576u), c.r[16].w[0]);  goto L_002211C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221194u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00221194u) [[unlikely]] return; }
L_00221194:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002211A4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002211A4u) [[unlikely]] return; }
L_002211A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002211C0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002211C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002211C0u) [[unlikely]] return; }
L_002211C0:
    st32((c.r[28].w[0] - 28576u), c.r[16].w[0]);
    c.budget -= 1;
L_002211C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002211E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002211D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002211D4u) [[unlikely]] return; }
L_002211D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002211E4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002211E4u) [[unlikely]] return; }
L_002211E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002211E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00221200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00221210:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022123Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0022123Cu) [[unlikely]] return; }
L_0022123C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221248u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00221248u) [[unlikely]] return; }
L_00221248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00221390; } }
L_00221250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221258u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x00221258u) [[unlikely]] return; }
L_00221258:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], 0u + 34u);  if (t) { goto L_0022126C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002212A8; } }
L_0022126C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022127Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022127Cu) [[unlikely]] return; }
L_0022127C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 28960u);  if (t) { goto L_00221298; } }
L_00221288:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00221298; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002212A4; } }
L_00221298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221288u | kUnwind; return; } goto L_00221288; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002212A4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002212A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 48u);  goto L_0022131C; }
    set32(c.r[22], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[22].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002212C8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002212C8u) [[unlikely]] return; }
L_002212C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12864u);
    set32(c.r[6], c.r[6].w[0] + 12704u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002212E8u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002212E8u) [[unlikely]] return; }
L_002212E8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00221304; } }
L_002212F4:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221300u); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 274u, depth + 1u); else { c.pc = 0x00222A70u; return; } if (c.pc != 0x00221300u) [[unlikely]] return; }
L_00221300:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00221304:
    c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002212F4u | kUnwind; return; } goto L_002212F4; }
    st32((c.r[18].w[0] + 20u), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { goto L_0022135C; } }
L_0022131C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221328u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00221328u) [[unlikely]] return; }
L_00221328:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12864u);
    set32(c.r[6], c.r[6].w[0] + 12704u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221348u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00221348u) [[unlikely]] return; }
L_00221348:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221358u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 274u, depth + 1u); else { c.pc = 0x00222A70u; return; } if (c.pc != 0x00221358u) [[unlikely]] return; }
L_00221358:
    st32((c.r[16].w[0] + 68u), c.r[19].w[0]);
    c.budget -= 1;
L_0022135C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221374u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 198u, depth + 1u); else { c.pc = 0x0022D550u; return; } if (c.pc != 0x00221374u) [[unlikely]] return; }
L_00221374:
    set32(c.r[7], c.r[17].w[0] + 75u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022138Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004B(c, 198u, depth + 1u); else { c.pc = 0x0022D550u; return; } if (c.pc != 0x0022138Cu) [[unlikely]] return; }
L_0022138C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00221390:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221250u | kUnwind; return; } goto L_00221250; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002213D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 28576u)));  c.pc = t; return; }
L_002213E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022145C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_00221444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221414u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00221414u) [[unlikely]] return; }
L_00221414:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221424u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00221424u) [[unlikely]] return; }
L_00221424:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00221440; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00221440u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00221440u) [[unlikely]] return; }
L_00221440:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_00221444:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00221460; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022145Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0022145Cu) [[unlikely]] return; }
L_0022145C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00221460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00221480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022155C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_002214F8; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002214BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002214BCu) [[unlikely]] return; }
L_002214BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_002214F0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002214DCu); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x002214DCu) [[unlikely]] return; }
L_002214DC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002214E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x002214E8u) [[unlikely]] return; }
L_002214E8:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_002214F0:
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_002214F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_0022151C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
L_0022151C:
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
L_0022155C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u + 14u);
    mmi::pcpyld(c.r[7], c.r[3], c.r[4]);
    set32(c.r[4], c.r[5].w[0] + 16u);
    set32(c.r[3], 0u + 63u);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    mmi::pcpyld(c.r[6], c.r[3], c.r[4]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[7]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 35;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_002215F0; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_002215F0:
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00221630:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[7].d[0] == 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 8u)));  goto L_00221678; }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 20u));
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], c.r[5].w[0] << 3);  goto L_0022166C; }
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_00221674; } }
L_0022166C:
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 2;
L_00221674:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_00221678:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 12u)));  goto L_002216B4; }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 20u));
    c.r[6].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], c.r[5].w[0] << 1);  goto L_002216A0; }
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[6].w[0]);  if (t) { goto L_002216B0; } }
L_002216A0:
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 4;
L_002216B0:
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_002216B4:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 16u)));  goto L_002216E4; }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 20u));
    c.r[6].d[0] = c.r[6].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);  goto L_002216DC; }
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[6].w[0]);  if (t) { goto L_002216E0; } }
L_002216DC:
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 1;
L_002216E0:
    set32(c.r[7], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_002216E4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00221710; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 20u));
    c.r[6].d[0] = c.r[6].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);  goto L_0022170C; }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00221710; } }
L_0022170C:
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 1;
L_00221710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00221720:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 188u), c.r[8].w[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    ctc2(c, 21u, c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 20u));
    c.r[3].d[0] = c.r[4].d[0] & 17ull;
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], c.r[18].w[0] + 20u);  if (t) { goto L_002217B0; } }
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 56u)));  if (t) { goto L_0022179C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 7408u);  if (t) { goto L_002217A4; } }
L_0022179C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    c.budget -= 2;
L_002217A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002217ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002217ACu) [[unlikely]] return; }
L_002217AC:
    set32(c.r[30], c.r[2].w[0] << 7);
    c.budget -= 1;
L_002217B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[14], ld32((c.r[19].w[0] + 48u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[9], c.r[22].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.r[13].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[28].w[0] - 32640u));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[6] = c.r[3].w[0];
    c.budget -= 11;
L_002217DC:
    c.budget -= 2;
    if (c.r[13].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  goto L_00221970; }
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[13].d[0] = ld16((c.r[14].w[0]));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] + c.r[3].w[0]);  if (t) { goto L_0022181C; } }
L_002217FC:
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + 336u);
    set32(c.r[3], c.r[3].w[0] + 272u);
    st32((c.r[4].w[0]), c.f[2]);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.budget -= 8;
L_0022181C:
    c.r[3].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002217FCu | kUnwind; return; } goto L_002217FC; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] << 1);  if (t) { goto L_002218CC; } }
L_00221834:
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = ld16((c.r[5].w[0]));  if (t) { goto L_0022185C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 4;
L_0022185C:
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002218BC; } }
L_0022186C:
    set32(c.r[8], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[11], c.r[10].w[0] + c.r[29].w[0]);
    set32(c.r[10], c.r[11].w[0] + 336u);
    c.f[3] = ld32((c.r[10].w[0]));
    c.f[5] = ld32((c.r[8].w[0]));
    c.f[3] = fp::min(c.f[3], c.f[5]);
    st32((c.r[10].w[0]), c.f[3]);
    c.f[4] = ld32((c.r[8].w[0] + 4u));
    c.f[3] = ld32((c.r[10].w[0] + 4u));
    c.f[3] = fp::min(c.f[3], c.f[4]);
    set32(c.r[8], c.r[11].w[0] + 272u);
    st32((c.r[10].w[0] + 4u), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0]));
    c.f[3] = fp::max(c.f[3], c.f[5]);
    st32((c.r[8].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[8].w[0] + 4u));
    c.f[3] = fp::max(c.f[3], c.f[4]);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[8].w[0] + 4u), c.f[3]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
L_002218BC:
    c.r[8].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[10], c.r[5].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022186Cu | kUnwind; return; } goto L_0022186C; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002218CC:
    c.r[3].d[0] = c.r[7].d[0] < c.r[13].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221834u | kUnwind; return; } goto L_00221834; }
    c.f[9] = ld32((c.r[15].w[0] + 31000u));
    set32(c.r[4], 0u + 1u);
    c.f[8] = ld32((c.r[23].w[0] + 31004u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00221960; } }
L_002218EC:
    c.r[5].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] << 3);  goto L_00221948; }
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[7], c.r[5].w[0] + 272u);
    set32(c.r[6], c.r[5].w[0] + 336u);
    c.f[7] = ld32((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 208u);
    c.f[5] = ld32((c.r[7].w[0]));
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    c.f[5] = fp::add(c.f[7], c.f[5]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[4] = fp::mul(c.f[0], c.f[5]);
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    st32((c.r[5].w[0]), c.f[4]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.f[3]);  if (t) { goto L_00221958; } }
L_00221948:
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 208u);
    st32((c.r[5].w[0]), c.f[9]);
    st32((c.r[5].w[0] + 4u), c.f[8]);
    c.budget -= 4;
L_00221958:
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_00221960:
    c.r[5].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 188u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002218ECu | kUnwind; return; } goto L_002218EC; }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_00221970:
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[6], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[12].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[13], c.r[13].w[0] - 1u);  if (t) { goto L_00221A30; } }
    set32(c.r[5], c.r[12].w[0] << 4);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[7], 0u + 1u);
    c.f[4] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[7].w[0] << 2);
    c.budget -= 6;
L_002219A0:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[4]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002219C0; }
    c.f[4] = c.f[3];
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
L_002219C0:
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002219A0u | kUnwind; return; } goto L_002219A0; }
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);  goto L_00221A0C; }
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[16].w[0] << 2);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.i);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    vu::ftoi(c.vu0, 15u, 1u, 1u, 0);
    c.r[4] = c.vu0.vf[1];
    mmi::ppach(c.r[4], c.r[0], c.r[4]);
    mmi::ppacb(c.r[4], c.r[0], c.r[4]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_00221A20; } }
L_00221A0C:
    set32(c.r[4], c.r[16].w[0] << 4);
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[5]);
    c.budget -= 5;
L_00221A20:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], c.r[12].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[12].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 4;
L_00221A30:
    set32(c.r[3], c.r[12].w[0] << 1);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    st32((c.r[29].w[0] + 204u), 0u);
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[16].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0] + 192u), c.f[3]);
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[29].w[0] + 196u), c.f[4]);
    st32((c.r[29].w[0] + 200u), c.f[3]);
    c.f[3] = ld32((c.r[29].w[0] + 192u));
    c.f[5] = ld32((c.r[29].w[0] + 196u));
    c.f[4] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[3].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[3].w[0] + 4u), c.f[5]);
    st32((c.r[3].w[0] + 8u), c.f[4]);
    st32((c.r[3].w[0] + 12u), c.f[3]);
    set32(c.r[11], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 26;
    if (c.r[11].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_00221B48; }
    set32(c.r[22], ld32((c.r[18].w[0] + 4u)));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[12].w[0] << 3);
    set32(c.r[5], c.r[16].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] << 3);  if (t) { goto L_00221B38; } }
L_00221AB0:
    set32(c.r[3], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[25], c.r[24].w[0] + c.r[29].w[0]);
    set32(c.r[25], c.r[25].w[0] + 208u);
    c.r[24].d[0] = ld8((c.r[20].w[0]));
    c.f[7] = ld32((c.r[3].w[0]));
    c.f[5] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[25].w[0]));
    c.f[3] = ld32((c.r[25].w[0] + 4u));
    c.r[3].d[0] = c.r[24].d[0] & 1ull;
    c.f[4] = fp::sub(c.f[7], c.f[4]);
    c.f[3] = fp::sub(c.f[5], c.f[3]);
    st32((c.r[29].w[0] + 408u), c.f[4]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 412u), c.f[3]);  if (t) { goto L_00221B10; } }
    c.r[3].d[0] = ld64((c.r[29].w[0] + 408u));
    c.r[24].d[0] = c.r[22].d[0] << 32;
    c.r[24].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 32);
    set32(c.r[24], c.r[5].w[0] + c.r[24].w[0]);
    c.vu0.vf[1] = c.r[3];
    vu::ftoi(c.vu0, 15u, 1u, 1u, 12);
    c.r[3] = c.vu0.vf[1];
    mmi::ppach(c.r[3], c.r[0], c.r[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[24].w[0]), c.r[3].w[0]);  if (t) { goto L_00221B24; } }
L_00221B10:
    c.r[3].d[0] = c.r[22].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[4]);
    st32((c.r[3].w[0] + 4u), c.f[3]);
    c.budget -= 5;
L_00221B24:
    c.r[3].d[0] = c.r[22].d[0] << 32;
    set32(c.r[11], c.r[11].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[22], c.r[3].w[0] + c.r[30].w[0]);
    c.budget -= 5;
L_00221B38:
    c.r[3].d[0] = c.r[10].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[24], c.r[10].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221AB0u | kUnwind; return; } goto L_00221AB0; }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00221B48:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 12u)));  goto L_00221C20; }
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[4].w[0] + c.r[8].w[0]);  goto L_00221BC4; }
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[21].w[0] << 2);
    c.f[5] = ld32((c.r[5].w[0]));
    st8((c.r[29].w[0] + 427u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[4], c.r[16].w[0] << 2);
    c.f[5] = fp::mul(c.f[6], c.f[5]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[4] = fp::mul(c.f[6], c.f[4]);
    c.f[3] = fp::mul(c.f[6], c.f[3]);
    c.f[5] = fp::cvt_w_s(c.f[5]);
    set32(c.r[4], c.f[5]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    st8((c.r[29].w[0] + 424u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.f[4]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    st8((c.r[29].w[0] + 425u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.f[3]);
    st8((c.r[29].w[0] + 426u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 424u)));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_00221C1C; } }
L_00221BC4:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    c.f[3] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[3]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[3]);
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00221C1C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u - 16u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_00221C1C:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_00221C20:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  goto L_00221CA0; }
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[12].w[0] << 4);  goto L_00221C70; }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[12].w[0] << 4);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.i);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    vu::ftoi(c.vu0, 15u, 1u, 1u, 0);
    c.r[4] = c.vu0.vf[1];
    mmi::ppach(c.r[4], c.r[0], c.r[4]);
    mmi::ppacb(c.r[4], c.r[0], c.r[4]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_00221C9C; } }
L_00221C70:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.f[3]);
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[3]);
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[3]);
    c.f[3] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.f[3]);
    c.budget -= 11;
L_00221C9C:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_00221CA0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002217DCu | kUnwind; return; } goto L_002217DC; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_00221CE0:
    set32(c.r[2], c.r[4].w[0] + 15u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 4);  c.pc = t; return; }
L_00221CF0:
    set32(c.r[2], c.r[4].w[0] + 31u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 5);  c.pc = t; return; }
L_00221D00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00221D10:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].d[0] = c.r[9].d[0] & 16ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[29].w[0] + 204u), c.r[10].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[30].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[19].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[18].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 34;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_00221DE8; } }
    c.r[2].d[0] = c.r[9].d[0] & 1ull;
    c.r[3].d[0] = c.r[30].d[0] & 255ull;
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[9].d[0] & 8ull;
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[30].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[9].d[0] & 2ull;
    c.r[19].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[9].d[0] & 4ull;
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[18].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 20;
L_00221DE8:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221DFCu); st8((c.r[29].w[0] + 228u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0048(c, 293u, depth + 1u); else { c.pc = 0x00222DB0u; return; } if (c.pc != 0x00221DFCu) [[unlikely]] return; }
L_00221DFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[5].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[29].w[0] + 208u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[21].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[21].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[21].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[23].w[0] + 21u);  if (t) { goto L_00221E7C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00221E7C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_00221E94; }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_00221E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_00221EBC; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 204u)));
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221EB4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 195u, depth + 1u); else { c.pc = 0x00221720u; return; } if (c.pc != 0x00221EB4u) [[unlikely]] return; }
L_00221EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00221F68; } }
L_00221EBC:
    c.r[2].d[0] = c.r[30].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8000u);
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F04u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00221F04u) [[unlikely]] return; }
L_00221F04:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00221F68; } }
    set32(c.r[3], c.r[22].w[0] << 3);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_00221F5C; } }
L_00221F1C:
    set32(c.r[5], c.r[29].w[0] + 212u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F28u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 299u, depth + 1u); else { c.pc = 0x00222F70u; return; } if (c.pc != 0x00221F28u) [[unlikely]] return; }
L_00221F28:
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F58u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 402u, depth + 1u); else { c.pc = 0x0021F698u; return; } if (c.pc != 0x00221F58u) [[unlikely]] return; }
L_00221F58:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_00221F5C:
    c.r[3].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221F1Cu | kUnwind; return; } goto L_00221F1C; }
L_00221F68:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00221FFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00221FF0; } }
L_00221F78:
    set32(c.r[5], c.r[29].w[0] + 236u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00221F84u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 299u, depth + 1u); else { c.pc = 0x00222F70u; return; } if (c.pc != 0x00221F84u) [[unlikely]] return; }
L_00221F84:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 236u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 56u)));  goto L_00221FB8; }
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 236u), c.r[3].w[0]);  if (t) { goto L_00221FC4; } }
L_00221FB8:
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    c.budget -= 3;
L_00221FC4:
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (t) { goto L_00221FD8; } }
L_00221FD0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_00221FD8:
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00221FD0u | kUnwind; return; } goto L_00221FD0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00221FF0:
    c.r[3].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00221F78u | kUnwind; return; } goto L_00221F78; }
L_00221FFC:
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { set32(c.r[7], ld32((c.r[21].w[0] + 48u)));  goto L_00222024; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00222020; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00222020; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_0022216C; }
L_00222020:
    set32(c.r[7], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 1;
L_00222024:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull | 32768ull;  if (t) { goto L_00222060; } }
L_00222030:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    st32((c.r[3].w[0] + 28u), c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[21].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 12;
L_00222060:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 52u));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00222030u | kUnwind; return; } goto L_00222030; }
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002220BC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002220BC; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002220A8; } }
L_002220A0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_002220A8:
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002220A0u | kUnwind; return; } goto L_002220A0; } }
L_002220BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00222120; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 56u)));  goto L_002220E8; }
    set32(c.r[4], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002220FC; } }
L_002220E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_002220FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 15ull;  if (t) { goto L_00222110; } }
L_00222104:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 3;
L_00222110:
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00222104u | kUnwind; return; } goto L_00222104; } }
L_00222120:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00222168; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00222168; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00222154; } }
L_0022214C:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_00222154:
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022214Cu | kUnwind; return; } goto L_0022214C; } }
L_00222168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0022216C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002221A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002221F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002221D4u); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0048(c, 239u, depth + 1u); else { c.pc = 0x00222480u; return; } if (c.pc != 0x002221D4u) [[unlikely]] return; }
L_002221D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002221F4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002221F0u); set32(c.r[5], 0u + 112u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002221F0u) [[unlikely]] return; }
L_002221F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002221F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00222210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022222Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 246u, depth + 1u); else { c.pc = 0x00222570u; return; } if (c.pc != 0x0022222Cu) [[unlikely]] return; }
L_0022222C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] - 6000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[17].w[0] + 68u), 0u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st64((c.r[17].w[0] + 48u), c.r[4].d[0]);
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[17].w[0] + 16u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002222A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002222EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 5984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002222D0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 239u, depth + 1u); else { c.pc = 0x00222480u; return; } if (c.pc != 0x002222D0u) [[unlikely]] return; }
L_002222D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002222F0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002222ECu); set32(c.r[5], 0u + 112u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002222ECu) [[unlikely]] return; }
L_002222EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002222F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00222310:
    set32(c.r[29], c.r[29].w[0] - 1040u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 4;
L_00222320:
    set32(c.r[3], c.r[5].w[0] << 24);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00222320u | kUnwind; return; } goto L_00222320; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022234Cu); set32(c.r[5], c.r[29].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022234Cu) [[unlikely]] return; }
L_0022234C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1040u);  c.pc = t; return; }
L_00222360:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[4].d[0] = 0ull | 8ull;
    c.budget -= 2;
L_00222368:
    ld128((c.r[5].w[0]) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[3].w[0]) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 64u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 80u) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 80u) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 96u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 112u) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 96u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 112u) & ~15u, c.r[6]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 128u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00222368u | kUnwind; return; } goto L_00222368; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002223C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002223DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 246u, depth + 1u); else { c.pc = 0x00222570u; return; } if (c.pc != 0x002223DCu) [[unlikely]] return; }
L_002223DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 64u);
    set32(c.r[3], c.r[3].w[0] - 5984u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[17].w[0] + 68u), 0u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 56u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    st64((c.r[17].w[0] + 48u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[17].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[4], 0u + 1024u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222428u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00222428u) [[unlikely]] return; }
L_00222428:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_0022244C; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00222448u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00222448u) [[unlikely]] return; }
L_00222448:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0022244C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00222470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00222480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00222500; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 5968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002224B0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004A(c, 80u, depth + 1u); else { c.pc = 0x00228E50u; return; } if (c.pc != 0x002224B0u) [[unlikely]] return; }
L_002224B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002224BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002224BCu) [[unlikely]] return; }
L_002224BC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002224D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002224D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00239120u; return; } if (c.pc != 0x002224D0u) [[unlikely]] return; }
L_002224D0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002224E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 5952u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_002224E8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00222504; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222500u); set32(c.r[5], 0u + 112u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00222500u) [[unlikely]] return; }
L_00222500:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00222504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00222520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0022255C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 5952u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00222558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222558u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00222558u) [[unlikely]] return; }
L_00222558:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022255C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00222570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 5952u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 5968u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st8((c.r[4].w[0] + 109u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 106u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 110u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 76u), 0u);
    st8((c.r[4].w[0] + 107u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st64((c.r[4].w[0] + 48u), 0ull);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st8((c.r[4].w[0] + 105u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 92u), 0u);
    st8((c.r[4].w[0] + 106u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    st8((c.r[4].w[0] + 110u), static_cast<std::uint8_t>(0u));
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), c.r[3].w[0]);  c.pc = t; return; }
L_00222610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 12452u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_002226A4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00222684; }
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222648u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00222648u) [[unlikely]] return; }
L_00222648:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_00222674; } }
L_0022265C:
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_00222674:
    set32(c.r[4], ld32((c.r[2].w[0] + 12456u)));
    c.r[4].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 12448u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022265Cu | kUnwind; return; } goto L_0022265C; }
L_00222684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12448u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222694u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00222694u) [[unlikely]] return; }
L_00222694:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 12448u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 12452u), c.r[17].w[0]);
    c.budget -= 4;
L_002226A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12464u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00222724; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00222704; }
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002226C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002226C8u) [[unlikely]] return; }
L_002226C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_002226F4; } }
L_002226DC:
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_002226F4:
    set32(c.r[4], ld32((c.r[2].w[0] + 12468u)));
    c.r[4].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 12460u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002226DCu | kUnwind; return; } goto L_002226DC; }
L_00222704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12460u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222714u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00222714u) [[unlikely]] return; }
L_00222714:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 12460u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 12464u), c.r[17].w[0]);
    c.budget -= 4;
L_00222724:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12492u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002227A8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00222784; }
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222748u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00222748u) [[unlikely]] return; }
L_00222748:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_00222774; } }
L_0022275C:
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_00222774:
    set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));
    c.r[4].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 12488u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022275Cu | kUnwind; return; } goto L_0022275C; }
L_00222784:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12488u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00222794u) [[unlikely]] return; }
L_00222794:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 12488u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 12492u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
L_002227A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002227C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002227D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0048(c, 269u, depth + 1u); else { c.pc = 0x00222990u; return; } if (c.pc != 0x002227D4u) [[unlikely]] return; }
L_002227D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002227DCu);  if (depth < kMaxDepth) unit_0048(c, 269u, depth + 1u); else { c.pc = 0x00222990u; return; } if (c.pc != 0x002227DCu) [[unlikely]] return; }
L_002227DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], ld32((c.r[4].w[0] + 12456u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12452u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00222864; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00222844; }
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222808u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00222808u) [[unlikely]] return; }
L_00222808:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_00222834; } }
L_0022281C:
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_00222834:
    set32(c.r[4], ld32((c.r[2].w[0] + 12456u)));
    c.r[4].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 12448u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022281Cu | kUnwind; return; } goto L_0022281C; }
L_00222844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12448u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00222854u) [[unlikely]] return; }
L_00222854:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 12448u), c.r[17].w[0]);
    st32((c.r[3].w[0] + 12452u), c.r[16].w[0]);
    c.budget -= 4;
L_00222864:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], ld32((c.r[4].w[0] + 12468u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12464u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002228EC; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002228CC; }
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222890u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00222890u) [[unlikely]] return; }
L_00222890:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_002228BC; } }
L_002228A4:
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_002228BC:
    set32(c.r[4], ld32((c.r[2].w[0] + 12468u)));
    c.r[4].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 12460u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002228A4u | kUnwind; return; } goto L_002228A4; }
L_002228CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12460u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002228DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002228DCu) [[unlikely]] return; }
L_002228DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 12460u), c.r[17].w[0]);
    st32((c.r[3].w[0] + 12464u), c.r[16].w[0]);
    c.budget -= 4;
L_002228EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], ld32((c.r[4].w[0] + 12496u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12492u)));
    c.budget -= 6;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00222978; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00222954; }
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222918u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00222918u) [[unlikely]] return; }
L_00222918:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_00222944; } }
L_0022292C:
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_00222944:
    set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));
    c.r[4].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 12488u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022292Cu | kUnwind; return; } goto L_0022292C; }
L_00222954:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12488u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222964u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00222964u) [[unlikely]] return; }
L_00222964:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 12488u), c.r[17].w[0]);
    st32((c.r[3].w[0] + 12492u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
L_00222978:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00222990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 12448u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 28556u));
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    st8((c.r[28].w[0] - 28556u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00222A00; } }
L_002229D8:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 15840u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002229FCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002229FCu) [[unlikely]] return; }
L_002229FC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00222A00:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002229D8u | kUnwind; return; } goto L_002229D8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[16], ld32((c.r[3].w[0] + 12496u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00222A3C; } }
L_00222A20:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 12488u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222A38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00222A38u) [[unlikely]] return; }
L_00222A38:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00222A3C:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00222A20u | kUnwind; return; } goto L_00222A20; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 12496u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00222A70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222A90u); set32(c.r[4], c.r[17].w[0] + 21u);  if (depth < kMaxDepth) unit_004D(c, 167u, depth + 1u); else { c.pc = 0x00236D50u; return; } if (c.pc != 0x00222A90u) [[unlikely]] return; }
L_00222A90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222A9Cu); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00222A9Cu) [[unlikely]] return; }
L_00222A9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222AA8u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00222AA8u) [[unlikely]] return; }
L_00222AA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222AB4u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00222AB4u) [[unlikely]] return; }
L_00222AB4:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222AC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x00222AC4u) [[unlikely]] return; }
L_00222AC4:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222AD0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x00222AD0u) [[unlikely]] return; }
L_00222AD0:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222AE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 314u, depth + 1u); else { c.pc = 0x00223270u; return; } if (c.pc != 0x00222AE0u) [[unlikely]] return; }
L_00222AE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00222B00:
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[10].w[0] << 2);
    c.budget -= 2;
L_00222B08:
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[8], ld32((c.r[6].w[0])));  if (t) { goto L_00222B60; } }
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_00222B64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00222B50; } }
L_00222B2C:
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 9;
L_00222B50:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.r[3].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00222B2Cu | kUnwind; return; } goto L_00222B2C; }
L_00222B60:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_00222B64:
    c.r[3].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[10].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00222B08u | kUnwind; return; } goto L_00222B08; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00222B80:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[23], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00222CA0; } }
    c.r[4].d[0] = ld8((c.r[28].w[0] - 28556u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 12448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], c.r[22].w[0] << 2);  goto L_00222C70; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], 0u + 1u);  goto L_00222C08; }
    set32(c.r[19], c.r[3].w[0] << 1);
    c.budget -= 1;
L_00222C08:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_00222C6C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_00222C58; }
    set32(c.r[4], c.r[19].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222C24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00222C24u) [[unlikely]] return; }
L_00222C24:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00222C48; } }
L_00222C30:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00222C48:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00222C30u | kUnwind; return; } goto L_00222C30; }
L_00222C58:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222C64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00222C64u) [[unlikely]] return; }
L_00222C64:
    st32((c.r[20].w[0]), c.r[21].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 2;
L_00222C6C:
    set32(c.r[3], c.r[22].w[0] << 2);
    c.budget -= 1;
L_00222C70:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[6], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[22].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st32((c.r[6].w[0]), 0u);
    st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_00222CA0:
    c.r[19].d[0] = ld8((c.r[18].w[0] + 20u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222CBCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00222CBCu) [[unlikely]] return; }
L_00222CBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16064u);
    set32(c.r[6], c.r[6].w[0] + 15840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222CDCu); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00222CDCu) [[unlikely]] return; }
L_00222CDC:
    set32(c.r[3], c.r[18].w[0] + c.r[23].w[0]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00222CF0; } }
    set32(c.r[16], c.r[16].w[0] - 4u);
    c.budget -= 1;
L_00222CF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; mmi::divu(c, 0, c.r[3].w[0], c.r[16].w[0]);  if (t) { goto L_00222D08; } }
    breakpoint(c, 0x00222D04u);
    c.budget -= 1;
L_00222D08:
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00222D34; } }
L_00222D14:
    set32(c.r[5], c.r[18].w[0] + 21u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00222D30u); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 333u, depth + 1u); else { c.pc = 0x00223E40u; return; } if (c.pc != 0x00222D30u) [[unlikely]] return; }
L_00222D30:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00222D34:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 20u));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00222D14u | kUnwind; return; } goto L_00222D14; }
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[23].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st32((c.r[4].w[0] + 24u), c.r[30].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_00222D7C; }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 5;
L_00222D7C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00222DB0:
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
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 21u));
    set32(c.r[3], c.r[6].w[0] + 7u);
    set32(c.r[4], c.r[3].w[0] >> 3);
    c.r[3].d[0] = c.r[5].d[0] & 17ull;
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[4].w[0] << 7);  if (t) { goto L_00222E50; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[17].w[0]);  if (t) { goto L_00222E1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 7408u);  if (t) { goto L_00222E24; } }
L_00222E1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    c.budget -= 2;
L_00222E24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00222E2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00222E2Cu) [[unlikely]] return; }
L_00222E2C:
    set32(c.r[3], c.r[2].w[0] << 7);
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 20u));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_00222E54; } }
L_00222E50:
    st32((c.r[19].w[0] + 4u), 0u);
    c.budget -= 1;
L_00222E54:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 21u));
    c.r[3].d[0] = c.r[3].d[0] & 34ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_00222EA4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 21u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (t) { goto L_00222E8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 7408u);  if (t) { goto L_00222E94; } }
L_00222E8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 12112u);
    c.budget -= 2;
L_00222E94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00222E9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00222E9Cu) [[unlikely]] return; }
L_00222E9C:
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00222EA4:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 21u));
    c.r[3].d[0] = c.r[3].d[0] & 68ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[19].w[0] + 12u), 0u);  goto L_00222EF4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 21u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (t) { goto L_00222EDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 7408u);  if (t) { goto L_00222EE4; } }
L_00222EDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 12096u);
    c.budget -= 2;
L_00222EE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00222EECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00222EECu) [[unlikely]] return; }
L_00222EEC:
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00222EF4:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 21u));
    c.r[3].d[0] = c.r[3].d[0] & 136ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00222F0C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 2;
L_00222F0C:
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 21u));
    st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00222F40:
    set32(c.r[2], c.r[4].w[0] + 7u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 3);  c.pc = t; return; }
L_00222F50:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 5);  c.pc = t; return; }
L_00222F70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 21u));
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], c.r[3].w[0] >> 3);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] << 7);  if (t) { goto L_00222FBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 7408u);  if (t) { goto L_00222FC4; } }
L_00222FBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    c.budget -= 2;
L_00222FC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00222FCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00222FCCu) [[unlikely]] return; }
L_00222FCC:
    set32(c.r[4], c.r[2].w[0] << 7);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00223000:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 1u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    mmi::pmaxw(c.r[2], c.r[20], c.r[16]);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 23;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 12u)));  goto L_00223128; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 12492u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12496u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002230F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00223080; } }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_00223080:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002230F8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002230D8; }
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022309Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0022309Cu) [[unlikely]] return; }
L_0022309C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (t) { goto L_002230C8; } }
L_002230B0:
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_002230C8:
    set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));
    c.r[4].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0] + 12488u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002230B0u | kUnwind; return; } goto L_002230B0; }
L_002230D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12488u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002230E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002230E8u) [[unlikely]] return; }
L_002230E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 12488u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12492u), c.r[16].w[0]);
    c.budget -= 4;
L_002230F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12496u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12488u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    st32((c.r[3].w[0] + 12496u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 12;
L_00223128:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    c.r[10].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223144u); set32(c.r[4], c.r[21].w[0] + 21u);  if (depth < kMaxDepth) unit_004D(c, 168u, depth + 1u); else { c.pc = 0x00236D60u; return; } if (c.pc != 0x00223144u) [[unlikely]] return; }
L_00223144:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223154u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x00223154u) [[unlikely]] return; }
L_00223154:
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223160u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x00223160u) [[unlikely]] return; }
L_00223160:
    st32((c.r[21].w[0] + 28u), 0u);
    st32((c.r[21].w[0] + 24u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002231A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022321C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002231C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x002231C8u) [[unlikely]] return; }
L_002231C8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 15840u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002231E4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002231E4u) [[unlikely]] return; }
L_002231E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 15840u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223200u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00223200u) [[unlikely]] return; }
L_00223200:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00223220; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022321Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0022321Cu) [[unlikely]] return; }
L_0022321C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00223220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00223240:
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), 0u);
    st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_00223270:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_00223280; }
L_00223280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002232A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002232A4u) [[unlikely]] return; }
L_002232A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002232C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022330C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002232F4; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002232F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002232F0u) [[unlikely]] return; }
L_002232F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002232F4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00223310; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022330Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0022330Cu) [[unlikely]] return; }
L_0022330C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00223310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00223330:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], c.r[4].w[0] + 12448u);
    set32(c.r[5], c.r[5].w[0] + 13136u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 7;
    { set32(c.r[7], 0u + 2u);  [[clang::musttail]] return unit_00A5(c, 157u, depth); }
L_00223350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022339C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00223384; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223380u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00223380u) [[unlikely]] return; }
L_00223380:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00223384:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002233A0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022339Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0022339Cu) [[unlikely]] return; }
L_0022339C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002233A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002233C0:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_002233E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x60000000u);
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] - 64u) & ~15u, c.r[3]);  c.pc = t; return; }
L_00223400:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00223480; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x64000000u);
    set32(c.r[14], c.r[3].w[0] >> 1);
    set32(c.r[12], c.r[11].w[0] + 1u);
    set32(c.r[13], c.r[14].w[0] << 17);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[13].d[0] = c.r[13].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[13].d[0] = c.r[12].d[0] | c.r[13].d[0];  if (t) { goto L_00223438; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_00223438:
    c.r[2].d[0] = c.r[8].d[0] << 32;
    c.r[3].d[0] = c.r[14].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[12].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[13].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[12].d[0] | c.r[8].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] | 259ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[8]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 18;
L_00223480:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] + 15u);  goto L_002234FC; }
    set32(c.r[8], c.r[5].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    set32(c.r[12], c.r[11].w[0] + 2u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[8].d[0] = c.r[12].d[0] | c.r[8].d[0];  if (t) { goto L_002234B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002234B0:
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = c.r[8].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[8].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] | 259ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[7]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + 15u);
    c.budget -= 19;
L_002234FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x62000000u);
    set32(c.r[13], c.r[3].w[0] >> 4);
    set32(c.r[7], c.r[11].w[0] + 3u);
    set32(c.r[8], c.r[13].w[0] << 20);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[12].d[0] = c.r[7].d[0] | c.r[8].d[0];  if (t) { goto L_00223528; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_00223528:
    c.r[2].d[0] = c.r[9].d[0] << 32;
    c.r[3].d[0] = c.r[13].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[8].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[12].d[0] << 32;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[3], c.r[5].w[0] + 3u);
    c.r[2].d[0] = c.r[2].d[0] | 259ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u - 4u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    mmi::pcpyld(c.r[7], c.r[7], c.r[8]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[7]);
    set32(c.r[8], c.r[2].w[0] >> 2);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x78000000u);
    set32(c.r[7], c.r[11].w[0] + 3u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[9].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 32;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[6].d[0] << 32;  goto L_002235B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
L_002235B4:
    c.r[3].d[0] = c.r[8].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[8].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[9].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[5].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] | c.r[5].d[0];
    c.r[7].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[5].d[0] | 259ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    mmi::pcpyld(c.r[3], c.r[3], c.r[8]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[5].d[0] | 257ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C010000u);
    c.r[3].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    mmi::pcpyld(c.r[5], c.r[7], c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14000000u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[5]);
    c.r[2].d[0] = c.r[2].d[0] | 1182ull;
    c.r[5].d[0] = ld64((c.r[10].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[3], c.r[3], c.r[5]);
    set32(c.r[2], c.r[4].w[0] + 80u);
    c.budget -= 46;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 64u) & ~15u, c.r[3]);  c.pc = t; return; }
L_00223670:
    set32(c.r[12], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] + 3u);
    set32(c.r[2], 0u - 4u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[11].d[0] = c.r[3].d[0] & c.r[2].d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[12].w[0]);
    c.r[24].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x60000000u);
    set32(c.r[2], c.r[11].w[0] << 16);
    set32(c.r[14], c.r[11].w[0] >> 2);
    c.r[15].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], c.r[24].w[0] + 2u);
    c.r[12].d[0] = c.r[8].d[0] & c.r[13].d[0];
    set32(c.r[24], c.r[10].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = c.r[12].d[0] != c.r[13].d[0]; c.r[15].d[0] = c.r[24].d[0] | c.r[15].d[0];  if (t) { goto L_002236B4; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[12].d[0];
    c.budget -= 2;
L_002236B4:
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[12].d[0] = c.r[14].d[0] & 65535ull;
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    c.r[14].d[0] = c.r[12].d[0] << 32;
    c.r[13].d[0] = c.r[8].d[0] << 32;
    c.r[12].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[8].d[0] = c.r[15].d[0] << 32;
    c.r[13].d[0] = c.r[13].d[0] | c.r[12].d[0];
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    c.r[12].d[0] = c.r[8].d[0] << 32;
    c.r[13].d[0] = c.r[14].d[0] | c.r[13].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[8].d[0] = c.r[8].d[0] | 257ull;
    c.r[8].d[0] = c.r[12].d[0] | c.r[8].d[0];
    mmi::pcpyld(c.r[8], c.r[8], c.r[13]);
    st128((c.r[4].w[0]) & ~15u, c.r[8]);
    c.budget -= 19;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { goto L_00223770; } }
    set32(c.r[13], c.r[5].w[0] << 16);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[13].d[0] = c.r[13].d[0] | c.r[8].d[0];
    set32(c.r[14], c.r[10].w[0] + 2u);
    c.r[8].d[0] = c.r[7].d[0] & c.r[12].d[0];
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != c.r[12].d[0]; c.r[13].d[0] = c.r[14].d[0] | c.r[13].d[0];  if (t) { goto L_00223728; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.budget -= 2;
L_00223728:
    c.r[8].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = c.r[13].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    c.r[12].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = c.r[7].d[0] << 32;
    c.r[13].d[0] = c.r[5].d[0] & 65535ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[7].d[0] = c.r[12].d[0] | c.r[7].d[0];
    c.r[12].d[0] = c.r[13].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[12].d[0] = c.r[12].d[0] | c.r[7].d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[7].d[0] = c.r[7].d[0] | 258ull;
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    mmi::pcpyld(c.r[7], c.r[7], c.r[12]);
    st128((c.r[4].w[0]) & ~15u, c.r[7]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 18;
L_00223770:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[14], ld32((c.r[9].w[0] + 20u)));
    c.r[12].d[0] = c.r[7].d[0] | 256ull;
    set32(c.r[7], c.r[11].w[0] << 1);
    set32(c.r[8], c.r[7].w[0] + c.r[11].w[0]);
    c.r[13].d[0] = c.r[14].d[0] | c.r[12].d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x68000000u);
    set32(c.r[11], c.r[8].w[0] >> 2);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    set32(c.r[7], c.r[10].w[0] + c.r[14].w[0]);
    set32(c.r[8], c.r[7].w[0] + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[12].d[0] = c.r[8].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[7].d[0]) { c.r[2].d[0] = c.r[6].d[0] << 32;  goto L_002237BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
L_002237BC:
    c.r[7].d[0] = c.r[11].d[0] & 65535ull;
    c.r[6].d[0] = c.r[12].d[0] << 32;
    c.r[11].d[0] = c.r[7].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[7].d[0] = c.r[6].d[0] << 32;
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[13].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].d[0] = c.r[11].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 3ull;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    mmi::pcpyld(c.r[7], c.r[7], c.r[8]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C020000u);
    st128((c.r[4].w[0]) & ~15u, c.r[7]);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    c.r[2].d[0] = c.r[10].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[11].d[0] = ld32((c.r[9].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[12].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[8].d[0] = ld32((c.r[9].w[0] + 44u));
    set32(c.r[2], 0u + 16384u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[6].d[0] = c.r[11].d[0] << 32;
    c.r[2].d[0] = c.r[10].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    mmi::pcpyld(c.r[6], c.r[6], c.r[12]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14000000u);
    c.r[8].d[0] = ld64((c.r[9].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 1682ull;
    c.r[6].d[0] = ld32((c.r[9].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] << 47;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 60;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    set32(c.r[2], c.r[4].w[0] + 80u);
    mmi::pcpyld(c.r[5], c.r[6], c.r[5]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[5]);
    c.r[5].d[0] = ld64((c.r[9].w[0] + 8u));
    mmi::pcpyld(c.r[3], c.r[3], c.r[5]);
    c.budget -= 62;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 64u) & ~15u, c.r[3]);  c.pc = t; return; }
L_002238C0:
    set32(c.r[13], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[10], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[9], c.r[10].w[0] + 2u);  if (t) { goto L_00223974; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002238F4; }
    set32(c.r[2], c.r[5].w[0] + 3u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[2].w[0] >> 2);  if (t) { goto L_002238FC; } }
L_002238F4:
    set32(c.r[3], 0u + 4u);
    set32(c.r[14], c.r[2].w[0] >> 1);
    c.budget -= 2;
L_002238FC:
    c.r[3].d[0] = c.r[3].d[0] | 96ull;
    set32(c.r[8], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[11].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.r[2].d[0] = c.r[13].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[12].d[0] = c.r[8].d[0] | c.r[11].d[0];  if (t) { goto L_0022392C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[13].d[0] = c.r[13].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_0022392C:
    c.r[2].d[0] = c.r[13].d[0] << 32;
    c.r[3].d[0] = c.r[14].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[11].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[12].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[11].d[0] | c.r[8].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] | 259ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[8]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 18;
L_00223974:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], 0u + 1u);  goto L_00223A30; }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], c.r[5].w[0] + 1u);  goto L_002239A0; }
    set32(c.r[3], c.r[5].w[0] + 3u);
    set32(c.r[11], 0u + 14u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[3].w[0] >> 2);  if (t) { goto L_002239B0; } }
L_002239A0:
    set32(c.r[11], 0u + 8u);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[13], c.r[3].w[0] >> 2);
    c.budget -= 4;
L_002239B0:
    c.r[8].d[0] = c.r[11].d[0] | 96ull;
    set32(c.r[3], c.r[5].w[0] << 16);
    set32(c.r[8], c.r[8].w[0] << 24);
    set32(c.r[11], ld32((c.r[7].w[0] + 32u)));
    c.r[12].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[11], c.r[11].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; c.r[12].d[0] = c.r[11].d[0] | c.r[12].d[0];  if (t) { goto L_002239E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 2;
L_002239E0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[13].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[11].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[12].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] | c.r[8].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    set32(c.r[9], c.r[9].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[11]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 20;
L_00223A30:
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[9].w[0] - c.r[5].w[0]);  goto L_00223B70; }
    set32(c.r[11], ld32((c.r[7].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != c.r[2].d[0]; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_00223A64; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 60u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00223A64; } }
    c.r[12].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 1;
L_00223A64:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_00223A94; } }
    c.r[2].d[0] = c.r[11].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00223A88; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00223A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00223A94; } }
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00223A94:
    c.budget -= 2;
    if (c.r[13].d[0] == 0ull) { set32(c.r[2], 0u + 64u);  goto L_00223AA0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00223AA0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[11]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.r[12].d[0] = c.r[5].d[0] + 0ull;  goto L_00223AE0; }
    set32(c.r[2], c.r[5].w[0] + 3u);
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.r[2].w[0] >> 2);  if (t) { goto L_00223AE4; } }
L_00223AE0:
    set32(c.r[3], 0u + 12u);
    c.budget -= 1;
L_00223AE4:
    set32(c.r[11], ld32((c.r[7].w[0] + 32u)));
    c.r[2].d[0] = c.r[3].d[0] | 112ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[14], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] << 16);
    set32(c.r[11], c.r[11].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[11].d[0] = c.r[11].d[0] | 16384ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[13].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[14].d[0] & c.r[3].d[0];
    c.budget -= 13;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[14].d[0] << 32;  goto L_00223B24; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[14].d[0] = c.r[14].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[14].d[0] << 32;
    c.budget -= 3;
L_00223B24:
    c.r[3].d[0] = c.r[12].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[12].d[0] = c.r[3].d[0] << 32;
    c.r[11].d[0] = c.r[2].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[13].d[0] << 32;
    c.r[3].d[0] = c.r[11].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[11].d[0] = c.r[2].d[0] << 32;
    c.r[12].d[0] = c.r[12].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    set32(c.r[9], c.r[9].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[11].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[12]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 19;
L_00223B70:
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[12], ld32((c.r[6].w[0])));  goto L_00223C20; }
    c.r[11].d[0] = ld8((c.r[6].w[0] + 20u));
    c.r[11].d[0] = c.r[11].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[11].d[0] == 0ull) { c.r[14].d[0] = c.r[5].d[0] + 0ull;  goto L_00223B9C; }
    set32(c.r[11], c.r[5].w[0] + 3u);
    set32(c.r[12], 0u + 14u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[11].w[0] >> 2);  if (t) { goto L_00223BA0; } }
L_00223B9C:
    set32(c.r[12], 0u + 12u);
    c.budget -= 1;
L_00223BA0:
    c.r[11].d[0] = c.r[12].d[0] | 96ull;
    set32(c.r[13], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[12], c.r[11].w[0] << 24);
    set32(c.r[11], c.r[5].w[0] << 16);
    c.r[12].d[0] = c.r[12].d[0] | c.r[11].d[0];
    set32(c.r[13], c.r[13].w[0] + c.r[9].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[13].d[0] = c.r[13].d[0] | 16384ull;
    c.r[9].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.budget -= 11;
    { const bool t = c.r[9].d[0] != c.r[11].d[0]; c.r[13].d[0] = c.r[13].d[0] | c.r[12].d[0];  if (t) { goto L_00223BD4; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    c.budget -= 2;
L_00223BD4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[9].d[0] = c.r[14].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[12].d[0] = c.r[9].d[0] << 32;
    c.r[11].d[0] = c.r[2].d[0] << 32;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[13].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] | c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[9].d[0] = c.r[2].d[0] << 32;
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[2].d[0] = c.r[9].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[11]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[12], ld32((c.r[6].w[0])));
    c.budget -= 19;
L_00223C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    set32(c.r[11], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[6], c.r[5].w[0] << 16);
    c.r[9].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[12].d[0] & c.r[6].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[9].d[0] = c.r[11].d[0] | c.r[9].d[0];  if (t) { goto L_00223C4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[12].d[0] = c.r[12].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_00223C4C:
    c.r[6].d[0] = c.r[12].d[0] << 32;
    c.r[2].d[0] = c.r[9].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[9].d[0] = c.r[6].d[0] << 32;
    c.r[11].d[0] = c.r[5].d[0] & 65535ull;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[2].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.r[9].d[0] = c.r[11].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[9].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] | 259ull;
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[7].w[0] + 68u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { goto L_00223D1C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[9].d[0] = c.r[6].d[0] | 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65365ull;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[13].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[12].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[9], 0u + 255u);
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7C000000u);
    set32(c.r[14], c.r[2].w[0] + 3u);
    c.budget -= 15;
L_00223CD8:
    mmi::pminw(c.r[11], c.r[9], c.r[10]);
    set32(c.r[2], c.r[11].w[0] << 16);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[14].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[14], c.r[14].w[0] + c.r[11].w[0]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << (c.r[12].w[0] & 63u);
    c.r[13].d[0] = c.r[13].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00223CD8u | kUnwind; return; } goto L_00223CD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] | 768ull;
    mmi::pcpyld(c.r[2], c.r[13], c.r[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 5;
L_00223D1C:
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[10].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[10].d[0] = c.r[10].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[8].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x6C020000u);
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[12], ld32((c.r[7].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[11].d[0] = c.r[2].d[0] | 257ull;
    c.r[9].d[0] = ld32((c.r[7].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[3].d[0] = c.r[12].d[0] | c.r[3].d[0];
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14000000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] | 1682ull;
    c.r[12].d[0] = c.r[3].d[0] << 32;
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    mmi::pcpyld(c.r[9], c.r[9], c.r[11]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[4].w[0] + 64u);
    c.r[11].d[0] = ld8((c.r[7].w[0] + 74u));
    c.r[9].d[0] = ld64((c.r[7].w[0]));
    c.r[11].d[0] = c.r[11].d[0] << 46;
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] << 47;
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    mmi::pcpyld(c.r[6], c.r[8], c.r[6]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[6]);
    set32(c.r[6], ld32((c.r[7].w[0] + 32u)));
    c.r[8].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    mmi::pcpyld(c.r[3], c.r[3], c.r[8]);
    c.budget -= 49;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 48u) & ~15u, c.r[3]);  c.pc = t; return; }
L_00223DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00223E24; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223E08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00223E08u) [[unlikely]] return; }
L_00223E08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00223E28; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223E24u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00223E24u) [[unlikely]] return; }
L_00223E24:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00223E28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00223E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & 17ull;
    c.r[2].d[0] = c.r[5].d[0] & 34ull;
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 7u);
    c.r[2].d[0] = c.r[5].d[0] & 68ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[5].d[0] & 136ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223EA4u); set32(c.r[4], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x00223EA4u) [[unlikely]] return; }
L_00223EA4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00223EB0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x00223EB0u) [[unlikely]] return; }
L_00223EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00223EC0:
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_00223EE0:
    c.f[0] = ld32((c.r[4].w[0] + 1336u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[6], ld32((c.r[4].w[0] + 1340u)));
    fpu_div(c, 4u, c.f[1], c.f[0]);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] + 32u);
    ld128((c.r[4].w[0] + 1072u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 1216u) & ~15u, c.vu0.vf[8]);
    ld128((c.r[4].w[0] + 1024u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0] + 1040u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0] + 1056u) & ~15u, c.vu0.vf[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[0].w[3]);
    vu::maddabc(c.vu0, 15u, 1u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[8].w[1]);
    vu::maddbc(c.vu0, 15u, 8u, 3u, c.vu0.vf[8].w[2]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 28u));
    c.f[1] = ld32((c.r[4].w[0] + 1316u));
    c.f[0] = ld32((c.r[4].w[0] + 1312u));
    c.r[3].d[0] = c.r[3].d[0] & 6ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.f[3] = fp::mul(c.f[4], c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[1]));
    c.facc = fp::add(c.f[0], c.f[3]);
    c.budget -= 32;
    { const bool t = c.r[3].d[0] != 0ull; c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));  if (t) { goto L_00223FB4; } }
    ld128((c.r[4].w[0] + 1232u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[4].w[0] + 1088u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 1104u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 1120u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 5u, c.vu0.vf[9].w[0]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[9].w[1]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[9].w[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[3]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[6].w[0] + 40u), c.f[1]);
    st32((c.r[6].w[0] + 44u), c.f[0]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1340u)));
    set32(c.r[3], c.r[3].w[0] + 3u);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1340u), c.r[3].w[0]);  if (t) { goto L_00223FF0; } }
L_00223FB4:
    c.f[2] = fp::mul(c.f[3], c.f[3]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1340u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[4].w[0] + 1340u), c.r[3].w[0]);
    c.budget -= 15;
L_00223FF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);  c.pc = t; return; }
}

}
