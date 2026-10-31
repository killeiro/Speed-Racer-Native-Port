#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00FB[4096] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0,
    0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0,
    0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    55, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 74,
    0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 110,
    0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128,
    0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140,
    0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0,
    205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243, 244, 0,
    245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 279, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0,
    324, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0,
    0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0,
    346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0,
    0, 356, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0,
    0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0,
    372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0,
    377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404,
    0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0,
    0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0,
    0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0,
    0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0,
    426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0,
    0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0,
    0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0,
    450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0,
    0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0,
    456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0,
    0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471,
};

void unit_00FB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004EC000;
    case 2u: goto L_004EC004;
    case 3u: goto L_004EC018;
    case 4u: goto L_004EC054;
    case 5u: goto L_004EC060;
    case 6u: goto L_004EC06C;
    case 7u: goto L_004EC078;
    case 8u: goto L_004EC084;
    case 9u: goto L_004EC090;
    case 10u: goto L_004EC09C;
    case 11u: goto L_004EC110;
    case 12u: goto L_004EC11C;
    case 13u: goto L_004EC124;
    case 14u: goto L_004EC1B8;
    case 15u: goto L_004EC22C;
    case 16u: goto L_004EC230;
    case 17u: goto L_004EC250;
    case 18u: goto L_004EC2B0;
    case 19u: goto L_004EC2B8;
    case 20u: goto L_004EC2F4;
    case 21u: goto L_004EC310;
    case 22u: goto L_004EC31C;
    case 23u: goto L_004EC32C;
    case 24u: goto L_004EC338;
    case 25u: goto L_004EC398;
    case 26u: goto L_004EC3A8;
    case 27u: goto L_004EC3B0;
    case 28u: goto L_004EC3B8;
    case 29u: goto L_004EC3F4;
    case 30u: goto L_004EC53C;
    case 31u: goto L_004EC54C;
    case 32u: goto L_004EC55C;
    case 33u: goto L_004EC57C;
    case 34u: goto L_004EC588;
    case 35u: goto L_004EC59C;
    case 36u: goto L_004EC5C0;
    case 37u: goto L_004EC640;
    case 38u: goto L_004EC64C;
    case 39u: goto L_004EC65C;
    case 40u: goto L_004EC670;
    case 41u: goto L_004EC690;
    case 42u: goto L_004EC71C;
    case 43u: goto L_004EC730;
    case 44u: goto L_004EC760;
    case 45u: goto L_004EC790;
    case 46u: goto L_004EC7C0;
    case 47u: goto L_004EC828;
    case 48u: goto L_004EC830;
    case 49u: goto L_004EC840;
    case 50u: goto L_004EC868;
    case 51u: goto L_004EC874;
    case 52u: goto L_004EC884;
    case 53u: goto L_004EC890;
    case 54u: goto L_004EC8F0;
    case 55u: goto L_004EC900;
    case 56u: goto L_004EC908;
    case 57u: goto L_004EC910;
    case 58u: goto L_004EC920;
    case 59u: goto L_004ECB0C;
    case 60u: goto L_004ECB1C;
    case 61u: goto L_004ECB2C;
    case 62u: goto L_004ECB4C;
    case 63u: goto L_004ECB58;
    case 64u: goto L_004ECB7C;
    case 65u: goto L_004ECBA0;
    case 66u: goto L_004ECC34;
    case 67u: goto L_004ECC44;
    case 68u: goto L_004ECC54;
    case 69u: goto L_004ECE08;
    case 70u: goto L_004ECF74;
    case 71u: goto L_004ED05C;
    case 72u: goto L_004ED064;
    case 73u: goto L_004ED070;
    case 74u: goto L_004ED07C;
    case 75u: goto L_004ED084;
    case 76u: goto L_004ED090;
    case 77u: goto L_004ED0A4;
    case 78u: goto L_004ED0FC;
    case 79u: goto L_004ED104;
    case 80u: goto L_004ED11C;
    case 81u: goto L_004ED144;
    case 82u: goto L_004ED170;
    case 83u: goto L_004ED1A0;
    case 84u: goto L_004ED20C;
    case 85u: goto L_004ED23C;
    case 86u: goto L_004ED290;
    case 87u: goto L_004ED2C0;
    case 88u: goto L_004ED2E0;
    case 89u: goto L_004ED310;
    case 90u: goto L_004ED340;
    case 91u: goto L_004ED350;
    case 92u: goto L_004ED360;
    case 93u: goto L_004ED3F0;
    case 94u: goto L_004ED420;
    case 95u: goto L_004ED51C;
    case 96u: goto L_004ED540;
    case 97u: goto L_004ED57C;
    case 98u: goto L_004ED59C;
    case 99u: goto L_004ED5A4;
    case 100u: goto L_004ED5B0;
    case 101u: goto L_004ED5BC;
    case 102u: goto L_004ED5D8;
    case 103u: goto L_004ED670;
    case 104u: goto L_004ED6AC;
    case 105u: goto L_004ED6C0;
    case 106u: goto L_004ED6C8;
    case 107u: goto L_004ED6DC;
    case 108u: goto L_004ED6E4;
    case 109u: goto L_004ED6F0;
    case 110u: goto L_004ED6FC;
    case 111u: goto L_004ED70C;
    case 112u: goto L_004ED714;
    case 113u: goto L_004ED720;
    case 114u: goto L_004ED728;
    case 115u: goto L_004ED734;
    case 116u: goto L_004ED740;
    case 117u: goto L_004ED750;
    case 118u: goto L_004ED758;
    case 119u: goto L_004ED780;
    case 120u: goto L_004ED824;
    case 121u: goto L_004ED840;
    case 122u: goto L_004ED8B0;
    case 123u: goto L_004ED8B8;
    case 124u: goto L_004ED8C4;
    case 125u: goto L_004ED8D0;
    case 126u: goto L_004ED8E8;
    case 127u: goto L_004ED8F4;
    case 128u: goto L_004ED8FC;
    case 129u: goto L_004ED908;
    case 130u: goto L_004ED910;
    case 131u: goto L_004ED91C;
    case 132u: goto L_004ED928;
    case 133u: goto L_004ED940;
    case 134u: goto L_004ED94C;
    case 135u: goto L_004ED954;
    case 136u: goto L_004ED9B8;
    case 137u: goto L_004ED9C0;
    case 138u: goto L_004ED9D8;
    case 139u: goto L_004ED9E4;
    case 140u: goto L_004ED9FC;
    case 141u: goto L_004EDA08;
    case 142u: goto L_004EDA10;
    case 143u: goto L_004EDA1C;
    case 144u: goto L_004EDA24;
    case 145u: goto L_004EDA3C;
    case 146u: goto L_004EDA48;
    case 147u: goto L_004EDA60;
    case 148u: goto L_004EDA6C;
    case 149u: goto L_004EDA74;
    case 150u: goto L_004EDA90;
    case 151u: goto L_004EDADC;
    case 152u: goto L_004EDB58;
    case 153u: goto L_004EDBA8;
    case 154u: goto L_004EDBC4;
    case 155u: goto L_004EDC20;
    case 156u: goto L_004EDC60;
    case 157u: goto L_004EDCE0;
    case 158u: goto L_004EDD40;
    case 159u: goto L_004EDD74;
    case 160u: goto L_004EDD80;
    case 161u: goto L_004EDD90;
    case 162u: goto L_004EDDA0;
    case 163u: goto L_004EDE20;
    case 164u: goto L_004EDE30;
    case 165u: goto L_004EDE4C;
    case 166u: goto L_004EDE58;
    case 167u: goto L_004EDE64;
    case 168u: goto L_004EDE70;
    case 169u: goto L_004EDE7C;
    case 170u: goto L_004EDE88;
    case 171u: goto L_004EDEF8;
    case 172u: goto L_004EDF0C;
    case 173u: goto L_004EDF40;
    case 174u: goto L_004EDF50;
    case 175u: goto L_004EDFEC;
    case 176u: goto L_004EDFFC;
    case 177u: goto L_004EE08C;
    case 178u: goto L_004EE09C;
    case 179u: goto L_004EE0C4;
    case 180u: goto L_004EE0D0;
    case 181u: goto L_004EE0DC;
    case 182u: goto L_004EE0E8;
    case 183u: goto L_004EE0F4;
    case 184u: goto L_004EE100;
    case 185u: goto L_004EE12C;
    case 186u: goto L_004EE13C;
    case 187u: goto L_004EE148;
    case 188u: goto L_004EE168;
    case 189u: goto L_004EE178;
    case 190u: goto L_004EE204;
    case 191u: goto L_004EE214;
    case 192u: goto L_004EE230;
    case 193u: goto L_004EE244;
    case 194u: goto L_004EE254;
    case 195u: goto L_004EE260;
    case 196u: goto L_004EE274;
    case 197u: goto L_004EE2A0;
    case 198u: goto L_004EE2AC;
    case 199u: goto L_004EE2B8;
    case 200u: goto L_004EE2C4;
    case 201u: goto L_004EE2D0;
    case 202u: goto L_004EE2DC;
    case 203u: goto L_004EE2E8;
    case 204u: goto L_004EE2F4;
    case 205u: goto L_004EE300;
    case 206u: goto L_004EE30C;
    case 207u: goto L_004EE318;
    case 208u: goto L_004EE324;
    case 209u: goto L_004EE330;
    case 210u: goto L_004EE33C;
    case 211u: goto L_004EE348;
    case 212u: goto L_004EE350;
    case 213u: goto L_004EE360;
    case 214u: goto L_004EE370;
    case 215u: goto L_004EE378;
    case 216u: goto L_004EE3B0;
    case 217u: goto L_004EE3C8;
    case 218u: goto L_004EE3D4;
    case 219u: goto L_004EE3E4;
    case 220u: goto L_004EE3F8;
    case 221u: goto L_004EE454;
    case 222u: goto L_004EE468;
    case 223u: goto L_004EE48C;
    case 224u: goto L_004EE494;
    case 225u: goto L_004EE4B0;
    case 226u: goto L_004EE4DC;
    case 227u: goto L_004EE4E8;
    case 228u: goto L_004EE4F8;
    case 229u: goto L_004EE514;
    case 230u: goto L_004EE5A4;
    case 231u: goto L_004EE5C0;
    case 232u: goto L_004EE5F4;
    case 233u: goto L_004EE61C;
    case 234u: goto L_004EE634;
    case 235u: goto L_004EE678;
    case 236u: goto L_004EE69C;
    case 237u: goto L_004EE6D0;
    case 238u: goto L_004EE704;
    case 239u: goto L_004EE724;
    case 240u: goto L_004EE734;
    case 241u: goto L_004EE750;
    case 242u: goto L_004EE764;
    case 243u: goto L_004EE774;
    case 244u: goto L_004EE778;
    case 245u: goto L_004EE780;
    case 246u: goto L_004EE79C;
    case 247u: goto L_004EE7A8;
    case 248u: goto L_004EE7CC;
    case 249u: goto L_004EE7DC;
    case 250u: goto L_004EE7F8;
    case 251u: goto L_004EE80C;
    case 252u: goto L_004EE81C;
    case 253u: goto L_004EE850;
    case 254u: goto L_004EE86C;
    case 255u: goto L_004EE878;
    case 256u: goto L_004EE888;
    case 257u: goto L_004EE8A8;
    case 258u: goto L_004EE8B4;
    case 259u: goto L_004EE8C0;
    case 260u: goto L_004EE8D8;
    case 261u: goto L_004EE8E4;
    case 262u: goto L_004EE8F0;
    case 263u: goto L_004EE90C;
    case 264u: goto L_004EE918;
    case 265u: goto L_004EE924;
    case 266u: goto L_004EE954;
    case 267u: goto L_004EE960;
    case 268u: goto L_004EE96C;
    case 269u: goto L_004EE98C;
    case 270u: goto L_004EEAC0;
    case 271u: goto L_004EEAD0;
    case 272u: goto L_004EEAFC;
    case 273u: goto L_004EEB08;
    case 274u: goto L_004EEB24;
    case 275u: goto L_004EEB30;
    case 276u: goto L_004EEB38;
    case 277u: goto L_004EEB60;
    case 278u: goto L_004EEB88;
    case 279u: goto L_004EEB94;
    case 280u: goto L_004EEB9C;
    case 281u: goto L_004EEBA8;
    case 282u: goto L_004EEBC0;
    case 283u: goto L_004EEBE8;
    case 284u: goto L_004EEBF8;
    case 285u: goto L_004EEC14;
    case 286u: goto L_004EEC28;
    case 287u: goto L_004EEC38;
    case 288u: goto L_004EEC50;
    case 289u: goto L_004EEC5C;
    case 290u: goto L_004EECC0;
    case 291u: goto L_004EECE0;
    case 292u: goto L_004EECF0;
    case 293u: goto L_004EED0C;
    case 294u: goto L_004EED20;
    case 295u: goto L_004EED30;
    case 296u: goto L_004EED40;
    case 297u: goto L_004EED5C;
    case 298u: goto L_004EED90;
    case 299u: goto L_004EEDC0;
    case 300u: goto L_004EEDCC;
    case 301u: goto L_004EEDDC;
    case 302u: goto L_004EEE00;
    case 303u: goto L_004EEE20;
    case 304u: goto L_004EEE30;
    case 305u: goto L_004EEE4C;
    case 306u: goto L_004EEE60;
    case 307u: goto L_004EEE70;
    case 308u: goto L_004EEE88;
    case 309u: goto L_004EEE94;
    case 310u: goto L_004EEEA8;
    case 311u: goto L_004EEEC8;
    case 312u: goto L_004EEED8;
    case 313u: goto L_004EEEF4;
    case 314u: goto L_004EEF08;
    case 315u: goto L_004EEF18;
    case 316u: goto L_004EEF2C;
    case 317u: goto L_004EEF38;
    case 318u: goto L_004EEF48;
    case 319u: goto L_004EEFB8;
    case 320u: goto L_004EEFC8;
    case 321u: goto L_004EF048;
    case 322u: goto L_004EF058;
    case 323u: goto L_004EF074;
    case 324u: goto L_004EF080;
    case 325u: goto L_004EF08C;
    case 326u: goto L_004EF098;
    case 327u: goto L_004EF0A4;
    case 328u: goto L_004EF0B0;
    case 329u: goto L_004EF120;
    case 330u: goto L_004EF134;
    case 331u: goto L_004EF168;
    case 332u: goto L_004EF178;
    case 333u: goto L_004EF214;
    case 334u: goto L_004EF224;
    case 335u: goto L_004EF2C0;
    case 336u: goto L_004EF2D0;
    case 337u: goto L_004EF2D8;
    case 338u: goto L_004EF2F8;
    case 339u: goto L_004EF308;
    case 340u: goto L_004EF394;
    case 341u: goto L_004EF3A4;
    case 342u: goto L_004EF3C0;
    case 343u: goto L_004EF3D4;
    case 344u: goto L_004EF3E4;
    case 345u: goto L_004EF3F4;
    case 346u: goto L_004EF400;
    case 347u: goto L_004EF40C;
    case 348u: goto L_004EF41C;
    case 349u: goto L_004EF428;
    case 350u: goto L_004EF434;
    case 351u: goto L_004EF444;
    case 352u: goto L_004EF450;
    case 353u: goto L_004EF45C;
    case 354u: goto L_004EF46C;
    case 355u: goto L_004EF478;
    case 356u: goto L_004EF484;
    case 357u: goto L_004EF490;
    case 358u: goto L_004EF498;
    case 359u: goto L_004EF4A0;
    case 360u: goto L_004EF4D0;
    case 361u: goto L_004EF4E0;
    case 362u: goto L_004EF520;
    case 363u: goto L_004EF530;
    case 364u: goto L_004EF54C;
    case 365u: goto L_004EF55C;
    case 366u: goto L_004EF578;
    case 367u: goto L_004EF58C;
    case 368u: goto L_004EF59C;
    case 369u: goto L_004EF5C0;
    case 370u: goto L_004EF5D0;
    case 371u: goto L_004EF5EC;
    case 372u: goto L_004EF600;
    case 373u: goto L_004EF610;
    case 374u: goto L_004EF640;
    case 375u: goto L_004EF650;
    case 376u: goto L_004EF66C;
    case 377u: goto L_004EF680;
    case 378u: goto L_004EF690;
    case 379u: goto L_004EF69C;
    case 380u: goto L_004EF6B4;
    case 381u: goto L_004EF6D4;
    case 382u: goto L_004EF6E4;
    case 383u: goto L_004EF700;
    case 384u: goto L_004EF714;
    case 385u: goto L_004EF724;
    case 386u: goto L_004EF748;
    case 387u: goto L_004EF758;
    case 388u: goto L_004EF784;
    case 389u: goto L_004EF794;
    case 390u: goto L_004EF7B4;
    case 391u: goto L_004EF7D4;
    case 392u: goto L_004EF7EC;
    case 393u: goto L_004EF804;
    case 394u: goto L_004EF80C;
    case 395u: goto L_004EF814;
    case 396u: goto L_004EF81C;
    case 397u: goto L_004EF824;
    case 398u: goto L_004EF82C;
    case 399u: goto L_004EF850;
    case 400u: goto L_004EF8A0;
    case 401u: goto L_004EF8B4;
    case 402u: goto L_004EF8C4;
    case 403u: goto L_004EF8E0;
    case 404u: goto L_004EF8FC;
    case 405u: goto L_004EF90C;
    case 406u: goto L_004EF928;
    case 407u: goto L_004EF93C;
    case 408u: goto L_004EF94C;
    case 409u: goto L_004EF960;
    case 410u: goto L_004EF978;
    case 411u: goto L_004EF988;
    case 412u: goto L_004EF9A8;
    case 413u: goto L_004EF9B8;
    case 414u: goto L_004EF9D4;
    case 415u: goto L_004EF9F4;
    case 416u: goto L_004EFA04;
    case 417u: goto L_004EFA20;
    case 418u: goto L_004EFA40;
    case 419u: goto L_004EFA50;
    case 420u: goto L_004EFA6C;
    case 421u: goto L_004EFA8C;
    case 422u: goto L_004EFA9C;
    case 423u: goto L_004EFAB8;
    case 424u: goto L_004EFAD0;
    case 425u: goto L_004EFAE8;
    case 426u: goto L_004EFB00;
    case 427u: goto L_004EFB20;
    case 428u: goto L_004EFB30;
    case 429u: goto L_004EFB4C;
    case 430u: goto L_004EFB6C;
    case 431u: goto L_004EFB7C;
    case 432u: goto L_004EFB98;
    case 433u: goto L_004EFBC4;
    case 434u: goto L_004EFBE0;
    case 435u: goto L_004EFC38;
    case 436u: goto L_004EFC48;
    case 437u: goto L_004EFC5C;
    case 438u: goto L_004EFC6C;
    case 439u: goto L_004EFC8C;
    case 440u: goto L_004EFCAC;
    case 441u: goto L_004EFCD4;
    case 442u: goto L_004EFCE8;
    case 443u: goto L_004EFCF8;
    case 444u: goto L_004EFD10;
    case 445u: goto L_004EFD20;
    case 446u: goto L_004EFD34;
    case 447u: goto L_004EFD44;
    case 448u: goto L_004EFD58;
    case 449u: goto L_004EFD68;
    case 450u: goto L_004EFD80;
    case 451u: goto L_004EFDB0;
    case 452u: goto L_004EFDE8;
    case 453u: goto L_004EFDF8;
    case 454u: goto L_004EFE10;
    case 455u: goto L_004EFE68;
    case 456u: goto L_004EFE80;
    case 457u: goto L_004EFEA0;
    case 458u: goto L_004EFEE0;
    case 459u: goto L_004EFEF0;
    case 460u: goto L_004EFF28;
    case 461u: goto L_004EFF38;
    case 462u: goto L_004EFF50;
    case 463u: goto L_004EFF64;
    case 464u: goto L_004EFF78;
    case 465u: goto L_004EFF84;
    case 466u: goto L_004EFF94;
    case 467u: goto L_004EFFA0;
    case 468u: goto L_004EFFB0;
    case 469u: goto L_004EFFC8;
    case 470u: goto L_004EFFEC;
    case 471u: goto L_004EFFFC;
    default: bad_entry(c, 0x004EC000u); return;
    }
L_004EC000:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_004EC004:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC018u); st32((c.r[18].w[0] + 28u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004EC018u) [[unlikely]] return; }
L_004EC018:
    set32(c.r[6], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[5], c.r[29].w[0] + 544u);
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    st32((c.r[29].w[0] + 544u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 548u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 552u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    st32((c.r[29].w[0] + 556u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 560u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC054u); st32((c.r[29].w[0] + 564u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EC054u) [[unlikely]] return; }
L_004EC054:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC060u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 112u, depth + 1u); else { c.pc = 0x0046D890u; return; } if (c.pc != 0x004EC060u) [[unlikely]] return; }
L_004EC060:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC06Cu); set32(c.r[4], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EC06Cu) [[unlikely]] return; }
L_004EC06C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC078u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EC078u) [[unlikely]] return; }
L_004EC078:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC084u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 112u, depth + 1u); else { c.pc = 0x0046D890u; return; } if (c.pc != 0x004EC084u) [[unlikely]] return; }
L_004EC084:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC090u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EC090u) [[unlikely]] return; }
L_004EC090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 432u)));  if (t) { goto L_004EC1A0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 564u)));
    c.budget -= 1;
L_004EC09C:
    set32(c.r[3], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004EC0B4; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004EC0B4:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 560u)));  goto L_004EC0F8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 544u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 548u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 544u)));  goto L_004EC0DC; }
    set32(c.r[3], ld32((c.r[29].w[0] + 556u)));
    st32((c.r[29].w[0] + 544u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 544u)));
    c.budget -= 3;
L_004EC0DC:
    set32(c.r[3], c.r[4].w[0] - 4u);
    st32((c.r[29].w[0] + 544u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[29].w[0] + 564u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 560u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 560u)));
    c.budget -= 7;
L_004EC0F8:
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 560u), c.r[3].w[0]);  if (t) { goto L_004EC128; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC110u); set32(c.r[5], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x004EC110u) [[unlikely]] return; }
L_004EC110:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC11Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 74u, depth + 1u); else { c.pc = 0x0046CEA0u; return; } if (c.pc != 0x004EC11Cu) [[unlikely]] return; }
L_004EC11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC124u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 98u, depth + 1u); else { c.pc = 0x00124D40u; return; } if (c.pc != 0x004EC124u) [[unlikely]] return; }
L_004EC124:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004EC128:
    set32(c.r[4], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004EC148; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004EC148:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 464u)));  goto L_004EC18C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 448u)));  goto L_004EC170; }
    set32(c.r[3], ld32((c.r[29].w[0] + 460u)));
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 448u)));
    c.budget -= 3;
L_004EC170:
    set32(c.r[3], c.r[4].w[0] - 4u);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[29].w[0] + 468u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 464u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 464u)));
    c.budget -= 7;
L_004EC18C:
    set32(c.r[3], c.r[4].w[0] - 4u);
    st32((c.r[29].w[0] + 464u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 5;
L_004EC1A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 464u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 564u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC09Cu | kUnwind; return; } goto L_004EC09C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 128u);  if (t) { goto L_004EC224; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 564u)));
    c.budget -= 1;
L_004EC1B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_004EC1D0; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004EC1D0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 560u)));  goto L_004EC210; }
    set32(c.r[4], ld32((c.r[29].w[0] + 544u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 548u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 544u)));  goto L_004EC1F4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 556u)));
    st32((c.r[29].w[0] + 544u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 544u)));
    c.budget -= 3;
L_004EC1F4:
    set32(c.r[3], c.r[4].w[0] - 4u);
    st32((c.r[29].w[0] + 544u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[29].w[0] + 564u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 560u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 560u)));
    c.budget -= 7;
L_004EC210:
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] - 4u);
    st32((c.r[29].w[0] + 560u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[4].w[0] - 4u), c.r[3].w[0]);
    c.budget -= 5;
L_004EC224:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 564u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC1B8u | kUnwind; return; } goto L_004EC1B8; }
L_004EC22C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004EC230:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_004EC250:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[3].d[0] = c.r[5].d[0] & 127ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[5].w[0] >> 7);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[18], c.r[16].w[0] + 4u);
    c.budget -= 16;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_004EC298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004EC29C; } }
L_004EC298:
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_004EC29C:
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 264u);  goto L_004EC308; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EC2F8; } }
L_004EC2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC2B8u); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004EC2B8u) [[unlikely]] return; }
L_004EC2B8:
    set32(c.r[8], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 284u);
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC2F4u); st32((c.r[29].w[0] + 284u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x004EC2F4u) [[unlikely]] return; }
L_004EC2F4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_004EC2F8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC2B0u | kUnwind; return; } goto L_004EC2B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004EC5A0; } }
L_004EC308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC310u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 277u, depth + 1u); else { c.pc = 0x004EB0B0u; return; } if (c.pc != 0x004EC310u) [[unlikely]] return; }
L_004EC310:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC31Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0008(c, 487u, depth + 1u); else { c.pc = 0x00123C10u; return; } if (c.pc != 0x004EC31Cu) [[unlikely]] return; }
L_004EC31C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC32Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0008(c, 470u, depth + 1u); else { c.pc = 0x001239E0u; return; } if (c.pc != 0x004EC32Cu) [[unlikely]] return; }
L_004EC32C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC338u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 467u, depth + 1u); else { c.pc = 0x00123960u; return; } if (c.pc != 0x004EC338u) [[unlikely]] return; }
L_004EC338:
    st32((c.r[29].w[0] + 248u), 0u);
    st32((c.r[29].w[0] + 252u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[29].w[0] + 228u);  if (t) { goto L_004EC364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004EC368; } }
L_004EC364:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_004EC368:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 280u), c.r[3].w[0]);  if (t) { goto L_004EC388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 276u);  if (t) { goto L_004EC38C; } }
L_004EC388:
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.budget -= 1;
L_004EC38C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC398u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 141u, depth + 1u); else { c.pc = 0x00125760u; return; } if (c.pc != 0x004EC398u) [[unlikely]] return; }
L_004EC398:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC3A8u); st32((c.r[29].w[0] + 272u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x004EC3A8u) [[unlikely]] return; }
L_004EC3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EC3F8; } }
L_004EC3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC3B8u); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004EC3B8u) [[unlikely]] return; }
L_004EC3B8:
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 268u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC3F4u); st32((c.r[29].w[0] + 268u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x004EC3F4u) [[unlikely]] return; }
L_004EC3F4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_004EC3F8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 224u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC3B0u | kUnwind; return; } goto L_004EC3B0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004EC580; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 23;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_004EC480; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_004EC488; } }
L_004EC480:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 2;
L_004EC488:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    st32((c.r[29].w[0] + 164u), c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004EC4CC; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004EC4CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004EC4E4; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004EC4E4:
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_004EC4F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_004EC504; } }
L_004EC4F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 164u)));  goto L_004EC508; }
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_004EC504:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 1;
L_004EC508:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[29].w[0] + 180u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC53Cu); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00FB(c, 45u, depth + 1u); else { c.pc = 0x004EC790u; return; } if (c.pc != 0x004EC53Cu) [[unlikely]] return; }
L_004EC53C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC54Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00FB(c, 45u, depth + 1u); else { c.pc = 0x004EC790u; return; } if (c.pc != 0x004EC54Cu) [[unlikely]] return; }
L_004EC54C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC55Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00FB(c, 45u, depth + 1u); else { c.pc = 0x004EC790u; return; } if (c.pc != 0x004EC55Cu) [[unlikely]] return; }
L_004EC55C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC57Cu); c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);  if (depth < kMaxDepth) unit_00FB(c, 36u, depth + 1u); else { c.pc = 0x004EC5C0u; return; } if (c.pc != 0x004EC57Cu) [[unlikely]] return; }
L_004EC57C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004EC580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC588u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 35u, depth + 1u); else { c.pc = 0x003C4760u; return; } if (c.pc != 0x004EC588u) [[unlikely]] return; }
L_004EC588:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC59Cu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x004EC59Cu) [[unlikely]] return; }
L_004EC59C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004EC5A0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_004EC5C0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[29].w[0] + 144u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[6].w[0]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC640u); st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00FB(c, 44u, depth + 1u); else { c.pc = 0x004EC760u; return; } if (c.pc != 0x004EC640u) [[unlikely]] return; }
L_004EC640:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC64Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00FB(c, 43u, depth + 1u); else { c.pc = 0x004EC730u; return; } if (c.pc != 0x004EC64Cu) [[unlikely]] return; }
L_004EC64C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC65Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00FB(c, 43u, depth + 1u); else { c.pc = 0x004EC730u; return; } if (c.pc != 0x004EC65Cu) [[unlikely]] return; }
L_004EC65C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC670u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 41u, depth + 1u); else { c.pc = 0x004EC690u; return; } if (c.pc != 0x004EC670u) [[unlikely]] return; }
L_004EC670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004EC690:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[8], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[29].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 16u));
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[29].w[0] + 28u), c.r[8].w[0]);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[29].w[0] + 52u), c.r[8].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 16u));
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC71Cu); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00FB(c, 65u, depth + 1u); else { c.pc = 0x004ECBA0u; return; } if (c.pc != 0x004EC71Cu) [[unlikely]] return; }
L_004EC71C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004EC730:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_004EC760:
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_004EC790:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_004EC7C0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[3].d[0] = c.r[5].d[0] & 127ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[5].w[0] >> 7);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[19].w[0] + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_004EC810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004EC814; } }
L_004EC810:
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_004EC814:
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 312u);  goto L_004EC860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EC850; } }
L_004EC828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC830u); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004EC830u) [[unlikely]] return; }
L_004EC830:
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC840u); set32(c.r[5], c.r[29].w[0] + 332u);  if (depth < kMaxDepth) unit_00B1(c, 36u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x004EC840u) [[unlikely]] return; }
L_004EC840:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 128u);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
L_004EC850:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC828u | kUnwind; return; } goto L_004EC828; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_004ECB80; } }
L_004EC860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC868u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 277u, depth + 1u); else { c.pc = 0x004EB0B0u; return; } if (c.pc != 0x004EC868u) [[unlikely]] return; }
L_004EC868:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC874u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0008(c, 487u, depth + 1u); else { c.pc = 0x00123C10u; return; } if (c.pc != 0x004EC874u) [[unlikely]] return; }
L_004EC874:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC884u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0008(c, 470u, depth + 1u); else { c.pc = 0x001239E0u; return; } if (c.pc != 0x004EC884u) [[unlikely]] return; }
L_004EC884:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC890u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 467u, depth + 1u); else { c.pc = 0x00123960u; return; } if (c.pc != 0x004EC890u) [[unlikely]] return; }
L_004EC890:
    st32((c.r[29].w[0] + 296u), 0u);
    st32((c.r[29].w[0] + 300u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[29].w[0] + 276u);  if (t) { goto L_004EC8BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004EC8C0; } }
L_004EC8BC:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_004EC8C0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 328u), c.r[3].w[0]);  if (t) { goto L_004EC8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 324u);  if (t) { goto L_004EC8E4; } }
L_004EC8E0:
    set32(c.r[2], c.r[29].w[0] + 328u);
    c.budget -= 1;
L_004EC8E4:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC8F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 141u, depth + 1u); else { c.pc = 0x00125760u; return; } if (c.pc != 0x004EC8F0u) [[unlikely]] return; }
L_004EC8F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC900u); st32((c.r[29].w[0] + 320u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x004EC900u) [[unlikely]] return; }
L_004EC900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EC924; } }
L_004EC908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC910u); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004EC910u) [[unlikely]] return; }
L_004EC910:
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EC920u); set32(c.r[5], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_00B1(c, 36u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x004EC920u) [[unlikely]] return; }
L_004EC920:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_004EC924:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 272u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004EC908u | kUnwind; return; } goto L_004EC908; }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] - 1u);  if (t) { goto L_004ECB4C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004EC95C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
L_004EC95C:
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    st32((c.r[29].w[0] + 212u), c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004EC9A4; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004EC9A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004EC9BC; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004EC9BC:
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_004EC9D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_004EC9DC; } }
L_004EC9D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 212u)));  goto L_004EC9E0; }
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_004EC9DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 1;
L_004EC9E0:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[29].w[0] + 260u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_004ECA50; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_004ECA58; } }
L_004ECA50:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 2;
L_004ECA58:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    st32((c.r[29].w[0] + 196u), c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004ECA9C; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004ECA9C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004ECAB4; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004ECAB4:
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_004ECAC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_004ECAD4; } }
L_004ECAC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 196u)));  goto L_004ECAD8; }
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_004ECAD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 1;
L_004ECAD8:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[29].w[0] + 228u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECB0Cu); st32((c.r[29].w[0] + 236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00FB(c, 45u, depth + 1u); else { c.pc = 0x004EC790u; return; } if (c.pc != 0x004ECB0Cu) [[unlikely]] return; }
L_004ECB0C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECB1Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00FB(c, 45u, depth + 1u); else { c.pc = 0x004EC790u; return; } if (c.pc != 0x004ECB1Cu) [[unlikely]] return; }
L_004ECB1C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECB2Cu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_00FB(c, 45u, depth + 1u); else { c.pc = 0x004EC790u; return; } if (c.pc != 0x004ECB2Cu) [[unlikely]] return; }
L_004ECB2C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECB4Cu); c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);  if (depth < kMaxDepth) unit_00FB(c, 36u, depth + 1u); else { c.pc = 0x004EC5C0u; return; } if (c.pc != 0x004ECB4Cu) [[unlikely]] return; }
L_004ECB4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECB58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 35u, depth + 1u); else { c.pc = 0x003C4760u; return; } if (c.pc != 0x004ECB58u) [[unlikely]] return; }
L_004ECB58:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[3], c.r[16].w[0] << 7);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECB7Cu); st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x004ECB7Cu) [[unlikely]] return; }
L_004ECB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_004ECB80:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_004ECBA0:
    set32(c.r[29], c.r[29].w[0] - 432u);
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[29].w[0] + 352u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 356u), c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 16u));
    st32((c.r[29].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[29].w[0] + 364u), c.r[8].w[0]);
    st8((c.r[29].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 16u));
    st32((c.r[29].w[0] + 388u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 392u), c.r[3].w[0]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECC34u); st8((c.r[29].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00FB(c, 93u, depth + 1u); else { c.pc = 0x004ED3F0u; return; } if (c.pc != 0x004ECC34u) [[unlikely]] return; }
L_004ECC34:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECC44u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_00FB(c, 93u, depth + 1u); else { c.pc = 0x004ED3F0u; return; } if (c.pc != 0x004ECC44u) [[unlikely]] return; }
L_004ECC44:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 416u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ECC54u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 92u, depth + 1u); else { c.pc = 0x004ED360u; return; } if (c.pc != 0x004ECC54u) [[unlikely]] return; }
L_004ECC54:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_004ED25C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] - 1u);  goto L_004ECC70; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004ECC70:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[23], c.r[2].w[0] + c.r[20].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29208u)));  goto L_004ED0AC; }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[9], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 13;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));  if (t) { goto L_004ECCC0; } }
    set32(c.r[7], c.r[8].w[0] + 3u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));
    c.budget -= 2;
L_004ECCC0:
    c.r[8].d[0] = c.r[9].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { c.r[8].d[0] = c.r[3].d[0] < c.r[10].d[0] ? 1ull : 0ull;  goto L_004ECCFC; }
    c.r[1].d[0] = c.r[3].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);  goto L_004ECD28; }
    set32(c.r[9], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[9], c.r[9].w[0] - c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));  if (t) { goto L_004ECCF4; } }
    set32(c.r[8], c.r[9].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 2;
L_004ECCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);  if (t) { goto L_004ECD24; } }
L_004ECCFC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_004ECD24; } }
    set32(c.r[9], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[9], c.r[9].w[0] - c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));  if (t) { goto L_004ECD20; } }
    set32(c.r[8], c.r[9].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 2;
L_004ECD20:
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_004ECD24:
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    c.budget -= 1;
L_004ECD28:
    c.r[1].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_004ECE38; }
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[10], 0u - c.r[20].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004ECD4C; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004ECD4C:
    set32(c.r[8], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));  if (t) { goto L_004ECD60; } }
    set32(c.r[2], c.r[8].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004ECD60:
    set32(c.r[8], c.r[10].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[8].sd[0] >= 0) { c.r[2].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;  goto L_004ECD74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);  if (t) { goto L_004ECD80; } }
L_004ECD74:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[8].w[0] << 2);  goto L_004ECD84; }
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    c.budget -= 1;
L_004ECD80:
    set32(c.r[2], c.r[8].w[0] << 2);
    c.budget -= 1;
L_004ECD84:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));  if (t) { goto L_004ECD9C; } }
    set32(c.r[8], c.r[9].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 2;
L_004ECD9C:
    st32((c.r[19].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[8], c.r[8].w[0] + c.r[20].w[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[19].w[0] + 8u), c.r[8].w[0]);  if (t) { goto L_004ECFF8; } }
    set32(c.r[8], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));  if (t) { goto L_004ECDC8; } }
    set32(c.r[8], c.r[8].w[0] + 3u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 2;
L_004ECDC8:
    set32(c.r[9], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));  if (t) { goto L_004ECDDC; } }
    set32(c.r[8], c.r[9].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 2;
L_004ECDDC:
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 3;
    if (c.r[8].sd[0] >= 0) { c.r[7].d[0] = c.r[8].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;  goto L_004ECDF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);  if (t) { goto L_004ECDFC; } }
L_004ECDF0:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], c.r[8].w[0] << 2);  goto L_004ECE00; }
    set32(c.r[8], c.r[8].w[0] - c.r[10].w[0]);
    c.budget -= 1;
L_004ECDFC:
    set32(c.r[7], c.r[8].w[0] << 2);
    c.budget -= 1;
L_004ECE00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);  if (t) { goto L_004ECE28; } }
L_004ECE08:
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; st32((c.r[2].w[0]), c.r[7].w[0]);  if (t) { goto L_004ECE18; } }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_004ECE18:
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_004ECE28; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_004ECE28:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[8].d[0]) { set32(c.r[7], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECE08u | kUnwind; return; } goto L_004ECE08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_004ECFFC; } }
L_004ECE38:
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_004ECE60; }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
L_004ECE60:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[7], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_004ECFA4; } }
    set32(c.r[7], c.r[6].w[0] - c.r[4].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[10], 0u - c.r[20].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 248u), c.r[5].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] >= 0; st32((c.r[29].w[0] + 252u), c.r[6].w[0]);  if (t) { goto L_004ECEAC; } }
    set32(c.r[7], c.r[7].w[0] + 3u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));
    c.budget -= 2;
L_004ECEAC:
    set32(c.r[7], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[8], c.r[7].w[0] - c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));  if (t) { goto L_004ECEC4; } }
    set32(c.r[7], c.r[8].w[0] + 3u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));
    c.budget -= 2;
L_004ECEC4:
    set32(c.r[8], c.r[10].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    if (c.r[8].sd[0] >= 0) { c.r[7].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;  goto L_004ECED8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);  if (t) { goto L_004ECEE4; } }
L_004ECED8:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 244u)));  goto L_004ECEE8; }
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    c.budget -= 1;
L_004ECEE4:
    set32(c.r[7], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 1;
L_004ECEE8:
    set32(c.r[10], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[9], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    set32(c.r[12], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[12].w[0]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[10], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 252u)));
    st32((c.r[29].w[0] + 232u), c.r[5].w[0]);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[29].w[0] + 236u), c.r[6].w[0]);  if (t) { goto L_004ECF28; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004ECF28:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[7], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));  if (t) { goto L_004ECF40; } }
    set32(c.r[2], c.r[7].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004ECF40:
    set32(c.r[7], c.r[9].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[7].sd[0] >= 0) { c.r[2].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;  goto L_004ECF54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_004ECF60; } }
L_004ECF54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 228u)));  goto L_004ECF64; }
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.budget -= 1;
L_004ECF60:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 1;
L_004ECF64:
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.r[7].w[0]);  if (t) { goto L_004ECF9C; } }
L_004ECF74:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[3], c.r[3].w[0] - 4u);  goto L_004ECF84; }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 2;
L_004ECF84:
    c.budget -= 2;
    if (c.r[12].d[0] != c.r[10].d[0]) { set32(c.r[12], c.r[12].w[0] - 4u);  goto L_004ECF94; }
    c.r[12].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[12], c.r[12].w[0] - 4u);
    c.budget -= 2;
L_004ECF94:
    set32(c.r[2], ld32((c.r[12].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_004ECF9C:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ECF74u | kUnwind; return; } goto L_004ECF74; } }
L_004ECFA4:
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[8], 0u - c.r[20].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004ECFBC; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004ECFBC:
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004ECFD0; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004ECFD0:
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { c.r[2].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;  goto L_004ECFE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);  if (t) { goto L_004ECFF0; } }
L_004ECFE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  goto L_004ECFF4; }
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    c.budget -= 1;
L_004ECFF0:
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 1;
L_004ECFF4:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_004ECFF8:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 1;
L_004ECFFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 260u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[29].w[0] + 272u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 276u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[29].w[0] + 284u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 288u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 16u));
    st32((c.r[29].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 268u), c.r[6].w[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 320u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004ED084; } }
L_004ED05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED064u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00FB(c, 90u, depth + 1u); else { c.pc = 0x004ED340u; return; } if (c.pc != 0x004ED064u) [[unlikely]] return; }
L_004ED064:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED070u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_00FB(c, 91u, depth + 1u); else { c.pc = 0x004ED350u; return; } if (c.pc != 0x004ED070u) [[unlikely]] return; }
L_004ED070:
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED07Cu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00FB(c, 89u, depth + 1u); else { c.pc = 0x004ED310u; return; } if (c.pc != 0x004ED07Cu) [[unlikely]] return; }
L_004ED07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED084u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_00FB(c, 88u, depth + 1u); else { c.pc = 0x004ED2E0u; return; } if (c.pc != 0x004ED084u) [[unlikely]] return; }
L_004ED084:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED090u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00FB(c, 87u, depth + 1u); else { c.pc = 0x004ED2C0u; return; } if (c.pc != 0x004ED090u) [[unlikely]] return; }
L_004ED090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED05Cu | kUnwind; return; } goto L_004ED05C; } }
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED0A4u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_00FB(c, 86u, depth + 1u); else { c.pc = 0x004ED290u; return; } if (c.pc != 0x004ED0A4u) [[unlikely]] return; }
L_004ED0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004ED258; } }
L_004ED0AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ED0D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 29208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] - 1u);
    st32((c.r[2].w[0] - 9408u), c.r[3].w[0]);
    c.budget -= 7;
L_004ED0D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[22], ld32((c.r[2].w[0] - 9408u)));
    c.r[1].d[0] = c.r[22].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_004ED108; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED0FCu); set32(c.r[5], c.r[5].w[0] + 10933u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004ED0FCu) [[unlikely]] return; }
L_004ED0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED104u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004ED104u) [[unlikely]] return; }
L_004ED104:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004ED108:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], 0u + 1u);  goto L_004ED114; }
    set32(c.r[21], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_004ED114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[22].w[0] >> 1);  if (t) { goto L_004ED128; } }
L_004ED11C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[21].d[0] = c.r[22].d[0] + 0ull;  goto L_004ED128; }
    set32(c.r[21], c.r[21].w[0] << 1);
    c.budget -= 1;
L_004ED128:
    c.r[1].d[0] = c.r[21].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED11Cu | kUnwind; return; } goto L_004ED11C; }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED144u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004ED144u) [[unlikely]] return; }
L_004ED144:
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[7].w[0] + c.r[4].w[0]);  if (t) { goto L_004ED184; } }
L_004ED170:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[6].d[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_004ED180; } }
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_004ED180:
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_004ED184:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED170u | kUnwind; return; } goto L_004ED170; }
    set32(c.r[8], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_004ED1B4; } }
L_004ED1A0:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[6].d[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_004ED1B0; } }
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_004ED1B0:
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_004ED1B4:
    c.r[4].d[0] = c.r[8].d[0] ^ c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED1A0u | kUnwind; return; } goto L_004ED1A0; }
    set32(c.r[7], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { st32((c.r[19].w[0] + 16u), c.r[22].w[0]);  goto L_004ED240; }
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_004ED1F4; }
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 5;
L_004ED1F4:
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[18].w[0])));  if (t) { goto L_004ED220; } }
L_004ED20C:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[5].d[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_004ED21C; } }
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_004ED21C:
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_004ED220:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[6].d[0]) { set32(c.r[4], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED20Cu | kUnwind; return; } goto L_004ED20C; }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ED23C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED23Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004ED23Cu) [[unlikely]] return; }
L_004ED23C:
    st32((c.r[19].w[0] + 16u), c.r[22].w[0]);
    c.budget -= 1;
L_004ED240:
    set32(c.r[3], c.r[21].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
L_004ED258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004ED25C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_004ED290:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_004ED2C0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_004ED2E0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_004ED304; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_004ED304:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004ED310:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_004ED334; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_004ED334:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004ED340:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_004ED350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_004ED360:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004ED380; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004ED380:
    c.r[3].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;  goto L_004ED3BC; }
    c.r[1].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004ED3E4; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_004ED3B4; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004ED3B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_004ED3E4; } }
L_004ED3BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004ED3E4; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_004ED3E0; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004ED3E0:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_004ED3E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004ED3F0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004ED420:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 144u));
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1052u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 144u));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.f[23] = c.f[12];  if (t) { goto L_004ED4F0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 140u)));  goto L_004ED4C4; }
    st32((c.r[20].w[0] + 148u), c.f[23]);
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004ED4F0; } }
L_004ED4C4:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65503ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
L_004ED4F0:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 144u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_004EDC24; }
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 360u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED51Cu); st32((c.r[29].w[0] + 364u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 142u, depth + 1u); else { c.pc = 0x00401F00u; return; } if (c.pc != 0x004ED51Cu) [[unlikely]] return; }
L_004ED51C:
    set32(c.r[3], ld32((c.r[20].w[0] + 136u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 412u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 108u)));
    c.f[12] = ld32((c.r[2].w[0] + 116u));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED540u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x004ED540u) [[unlikely]] return; }
L_004ED540:
    set32(c.r[3], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 352u);  goto L_004EDC18; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[21] = fp::mul(c.f[0], c.f[23]);  if (t) { goto L_004EDBE0; } }
L_004ED57C:
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED59Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x004ED59Cu) [[unlikely]] return; }
L_004ED59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED5A4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x004ED5A4u) [[unlikely]] return; }
L_004ED5A4:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED5B0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00FB(c, 156u, depth + 1u); else { c.pc = 0x004EDC60u; return; } if (c.pc != 0x004ED5B0u) [[unlikely]] return; }
L_004ED5B0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED5BCu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x004ED5BCu) [[unlikely]] return; }
L_004ED5BC:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED5D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 111u, depth + 1u); else { c.pc = 0x004650F0u; return; } if (c.pc != 0x004ED5D8u) [[unlikely]] return; }
L_004ED5D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 78u));
    c.f[1] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[20] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_004ED5F8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004ED614; } }
L_004ED5F8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_004ED614:
    c.f[1] = ld32((c.r[28].w[0] - 29056u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004ED644; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_004ED65C; } }
L_004ED644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
L_004ED65C:
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);  goto L_004ED690; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED670u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x004ED670u) [[unlikely]] return; }
L_004ED670:
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004ED68C; } }
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004ED68C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.budget -= 1;
L_004ED690:
    c.r[18].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::mul(c.f[0], c.f[20]);
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[22], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 7;
L_004ED6AC:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] & 1ull;  goto L_004ED848; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED6C0u); set32(c.r[4], ld32((c.r[20].w[0] + 136u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004ED6C0u) [[unlikely]] return; }
L_004ED6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED6C8u);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x004ED6C8u) [[unlikely]] return; }
L_004ED6C8:
    c.f[24] = c.f[0];
    c.f[0] = ld32((c.r[28].w[0] - 31660u));
    c.f[20] = fp::mul(c.f[0], c.f[24]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED6DCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED6DCu) [[unlikely]] return; }
L_004ED6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED6E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 355u, depth + 1u); else { c.pc = 0x003AECA0u; return; } if (c.pc != 0x004ED6E4u) [[unlikely]] return; }
L_004ED6E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED6F0u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED6F0u) [[unlikely]] return; }
L_004ED6F0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED6FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004ED6FCu) [[unlikely]] return; }
L_004ED6FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF80000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED70Cu); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004ED70Cu) [[unlikely]] return; }
L_004ED70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED714u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x004ED714u) [[unlikely]] return; }
L_004ED714:
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED720u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED720u) [[unlikely]] return; }
L_004ED720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED728u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 310u, depth + 1u); else { c.pc = 0x003AE640u; return; } if (c.pc != 0x004ED728u) [[unlikely]] return; }
L_004ED728:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED734u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED734u) [[unlikely]] return; }
L_004ED734:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED740u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004ED740u) [[unlikely]] return; }
L_004ED740:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF80000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED750u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004ED750u) [[unlikely]] return; }
L_004ED750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED758u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x004ED758u) [[unlikely]] return; }
L_004ED758:
    st32((c.r[29].w[0] + 420u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 416u);
    c.f[20] = ld32((c.r[29].w[0] + 284u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED780u); st32((c.r[29].w[0] + 424u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004ED780u) [[unlikely]] return; }
L_004ED780:
    c.f[1] = ld32((c.r[29].w[0] + 408u));
    set32(c.r[2], c.r[18].w[0] << 2);
    c.f[5] = ld32((c.r[29].w[0] + 404u));
    set32(c.r[6], c.r[20].w[0] + c.r[2].w[0]);
    c.f[0] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[6] = fp::mul(c.f[20], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[17], c.r[6].w[0] + 12u);
    set32(c.r[5], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 280u));
    c.f[4] = ld32((c.r[29].w[0] + 400u));
    c.f[3] = ld32((c.r[29].w[0] + 272u));
    c.f[1] = fp::add(c.f[6], c.f[1]);
    st32((c.r[29].w[0] + 424u), c.f[1]);
    c.f[1] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::add(c.f[1], c.f[3]);
    c.f[5] = fp::mul(c.f[20], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[29].w[0] + 416u), c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = fp::add(c.f[5], c.f[2]);
    st32((c.r[29].w[0] + 420u), c.f[1]);
    set32(c.r[2], ld32((c.r[6].w[0] + 88u)));
    st32((c.r[2].w[0] + 108u), c.f[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 44u)));
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    st32((c.r[2].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 420u));
    st32((c.r[2].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[2].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 44u)));
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED824u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004ED824u) [[unlikely]] return; }
L_004ED824:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[22].d[0] & 65535ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED840u); c.f[12] = c.f[23];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ED840u) [[unlikely]] return; }
L_004ED840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_004EDBC8; } }
L_004ED848:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004ED95C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10992u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = ld32((c.r[3].w[0]));  if (t) { goto L_004ED87C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004ED898; } }
L_004ED87C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_004ED898:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED8B0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED8B0u) [[unlikely]] return; }
L_004ED8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED8B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 355u, depth + 1u); else { c.pc = 0x003AECA0u; return; } if (c.pc != 0x004ED8B8u) [[unlikely]] return; }
L_004ED8B8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED8C4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED8C4u) [[unlikely]] return; }
L_004ED8C4:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED8D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004ED8D0u) [[unlikely]] return; }
L_004ED8D0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 11024u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED8E8u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED8E8u) [[unlikely]] return; }
L_004ED8E8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED8F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004ED8F4u) [[unlikely]] return; }
L_004ED8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED8FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x004ED8FCu) [[unlikely]] return; }
L_004ED8FC:
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED908u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED908u) [[unlikely]] return; }
L_004ED908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED910u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 310u, depth + 1u); else { c.pc = 0x003AE640u; return; } if (c.pc != 0x004ED910u) [[unlikely]] return; }
L_004ED910:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED91Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED91Cu) [[unlikely]] return; }
L_004ED91C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED928u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004ED928u) [[unlikely]] return; }
L_004ED928:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 11056u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED940u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED940u) [[unlikely]] return; }
L_004ED940:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED94Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004ED94Cu) [[unlikely]] return; }
L_004ED94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED954u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x004ED954u) [[unlikely]] return; }
L_004ED954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 420u), c.f[0]);  if (t) { goto L_004EDA78; } }
L_004ED95C:
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10992u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.f[2] = ld32((c.r[3].w[0]));  if (t) { goto L_004ED984; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004ED9A0; } }
L_004ED984:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_004ED9A0:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED9B8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED9B8u) [[unlikely]] return; }
L_004ED9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED9C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 310u, depth + 1u); else { c.pc = 0x003AE640u; return; } if (c.pc != 0x004ED9C0u) [[unlikely]] return; }
L_004ED9C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.f[12] = c.f[22];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED9D8u); c.r[21].d[0] = c.r[2].d[0] ^ c.r[3].d[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED9D8u) [[unlikely]] return; }
L_004ED9D8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED9E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004ED9E4u) [[unlikely]] return; }
L_004ED9E4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 11024u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ED9FCu); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004ED9FCu) [[unlikely]] return; }
L_004ED9FC:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDA08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004EDA08u) [[unlikely]] return; }
L_004EDA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDA10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x004EDA10u) [[unlikely]] return; }
L_004EDA10:
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDA1Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004EDA1Cu) [[unlikely]] return; }
L_004EDA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDA24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 355u, depth + 1u); else { c.pc = 0x003AECA0u; return; } if (c.pc != 0x004EDA24u) [[unlikely]] return; }
L_004EDA24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.f[12] = c.f[22];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDA3Cu); c.r[21].d[0] = c.r[2].d[0] ^ c.r[3].d[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004EDA3Cu) [[unlikely]] return; }
L_004EDA3C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDA48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004EDA48u) [[unlikely]] return; }
L_004EDA48:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 11056u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDA60u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004EDA60u) [[unlikely]] return; }
L_004EDA60:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDA6Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x004EDA6Cu) [[unlikely]] return; }
L_004EDA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDA74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x004EDA74u) [[unlikely]] return; }
L_004EDA74:
    st32((c.r[29].w[0] + 420u), c.f[0]);
    c.budget -= 1;
L_004EDA78:
    c.f[20] = ld32((c.r[29].w[0] + 284u));
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 416u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDA90u); st32((c.r[29].w[0] + 424u), 0u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004EDA90u) [[unlikely]] return; }
L_004EDA90:
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    set32(c.r[17], c.r[20].w[0] + c.r[17].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 384u));
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.f[4] = ld32((c.r[29].w[0] + 388u));
    set32(c.r[21], c.r[17].w[0] + 88u);
    c.f[5] = fp::mul(c.f[20], c.f[0]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    st32((c.r[2].w[0] + 96u), c.f[0]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    st32((c.r[2].w[0] + 100u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDADCu); st32((c.r[2].w[0] + 104u), c.f[2]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x004EDADCu) [[unlikely]] return; }
L_004EDADC:
    c.f[0] = c.r[2].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.f[3] = c.r[7].w[0];
    fpu_div(c, 4u, c.f[4], c.f[3]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    c.f[2] = ld32((c.r[29].w[0] + 416u));
    c.f[1] = ld32((c.r[29].w[0] + 420u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[29].w[0] + 424u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 416u), c.f[2]);
    st32((c.r[29].w[0] + 420u), c.f[1]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[2].w[0] + 108u), c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 284u));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDB58u); set32(c.r[6], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004EDB58u) [[unlikely]] return; }
L_004EDB58:
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[3] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[5], 0u + 1u);
    c.f[4] = ld32((c.r[29].w[0] + 372u));
    c.f[5] = fp::mul(c.f[20], c.f[0]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    st32((c.r[2].w[0] + 96u), c.f[0]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    st32((c.r[2].w[0] + 100u), c.f[1]);
    st32((c.r[2].w[0] + 104u), c.f[2]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDBA8u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004EDBA8u) [[unlikely]] return; }
L_004EDBA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.f[12] = c.f[23];
    set32(c.r[6], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDBC4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EDBC4u) [[unlikely]] return; }
L_004EDBC4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004EDBC8:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED6ACu | kUnwind; return; } goto L_004ED6AC; }
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 12u);
    c.budget -= 3;
L_004EDBE0:
    set32(c.r[5], ld32((c.r[29].w[0] + 360u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004ED57Cu | kUnwind; return; } goto L_004ED57C; }
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 1;
L_004EDC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDC20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 150u, depth + 1u); else { c.pc = 0x004020D0u; return; } if (c.pc != 0x004EDC20u) [[unlikely]] return; }
L_004EDC20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_004EDC24:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_004EDC60:
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
L_004EDCE0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 140u)));  if (t) { goto L_004EDCF8; } }
    c.r[3].d[0] = ld16((c.r[6].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EDD04; } }
L_004EDCF8:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65503ull;
    st16((c.r[6].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004EDD04:
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 140u)));  if (t) { goto L_004EDD24; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EDD30; } }
L_004EDD24:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004EDD30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004EDD40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDD74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004EDD74u) [[unlikely]] return; }
L_004EDD74:
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDD80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EDD80u) [[unlikely]] return; }
L_004EDD80:
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDD90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EDD90u) [[unlikely]] return; }
L_004EDD90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EDDE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDDA0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004EDDA0u) [[unlikely]] return; }
L_004EDDA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004EDDE8:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDE20u); st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EDE20u) [[unlikely]] return; }
L_004EDE20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EDE90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDE30u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004EDE30u) [[unlikely]] return; }
L_004EDE30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDE4Cu); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004EDE4Cu) [[unlikely]] return; }
L_004EDE4C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDE58u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004EDE58u) [[unlikely]] return; }
L_004EDE58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDE64u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004EDE64u) [[unlikely]] return; }
L_004EDE64:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDE70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x004EDE70u) [[unlikely]] return; }
L_004EDE70:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDE7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x004EDE7Cu) [[unlikely]] return; }
L_004EDE7C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDE88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x004EDE88u) [[unlikely]] return; }
L_004EDE88:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004EDE90:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 56u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDEF8u); st8((c.r[19].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EDEF8u) [[unlikely]] return; }
L_004EDEF8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));  goto L_004EDF14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDF0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004EDF0Cu) [[unlikely]] return; }
L_004EDF0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.budget -= 2;
L_004EDF14:
    set32(c.r[2], 0u - 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_004EDFC4; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDF40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EDF40u) [[unlikely]] return; }
L_004EDF40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_004EDF54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDF50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004EDF50u) [[unlikely]] return; }
L_004EDF50:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_004EDF54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EDF78; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EDFB8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EDFB8; } }
L_004EDF78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EDFA0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EDFBC; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EDFB8; } }
L_004EDFA0:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EDFB8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004EDFB8:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_004EDFBC:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_004EDFC4:
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[2].w[0]));  goto L_004EE070; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDFECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EDFECu) [[unlikely]] return; }
L_004EDFEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_004EE000; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EDFFCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004EDFFCu) [[unlikely]] return; }
L_004EDFFC:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_004EE000:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EE024; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EE064; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EE064; } }
L_004EE024:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EE04C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EE068; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EE064; } }
L_004EE04C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EE064; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004EE064:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_004EE068:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_004EE070:
    set32(c.r[3], 0u - 3841u);
    set32(c.r[4], 0u + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 1280ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE08Cu); st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EE08Cu) [[unlikely]] return; }
L_004EE08C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EE100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE09Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004EE09Cu) [[unlikely]] return; }
L_004EE09C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 16528u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 32u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE0C4u); st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 546u, depth + 1u); else { c.pc = 0x00307310u; return; } if (c.pc != 0x004EE0C4u) [[unlikely]] return; }
L_004EE0C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE0D0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0081(c, 545u, depth + 1u); else { c.pc = 0x003072E0u; return; } if (c.pc != 0x004EE0D0u) [[unlikely]] return; }
L_004EE0D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE0DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 544u, depth + 1u); else { c.pc = 0x003072C0u; return; } if (c.pc != 0x004EE0DCu) [[unlikely]] return; }
L_004EE0DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE0E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 543u, depth + 1u); else { c.pc = 0x003072A0u; return; } if (c.pc != 0x004EE0E8u) [[unlikely]] return; }
L_004EE0E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE0F4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0081(c, 542u, depth + 1u); else { c.pc = 0x00307280u; return; } if (c.pc != 0x004EE0F4u) [[unlikely]] return; }
L_004EE0F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE100u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 541u, depth + 1u); else { c.pc = 0x00307260u; return; } if (c.pc != 0x004EE100u) [[unlikely]] return; }
L_004EE100:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[2], 0u - 3073u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 3072ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_004EE140; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE12Cu); set32(c.r[4], c.r[4].w[0] + 11088u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004EE12Cu) [[unlikely]] return; }
L_004EE12C:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE13Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004EE13Cu) [[unlikely]] return; }
L_004EE13C:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_004EE140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE148u);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004EE148u) [[unlikely]] return; }
L_004EE148:
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[23].d[0] != 0ull) { set32(c.r[16], ld32((c.r[23].w[0] + 8u)));  goto L_004EE1EC; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EE168u) [[unlikely]] return; }
L_004EE168:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_004EE17C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE178u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004EE178u) [[unlikely]] return; }
L_004EE178:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_004EE17C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EE1A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EE1E0; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EE1E0; } }
L_004EE1A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EE1C8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EE1E4; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EE1E0; } }
L_004EE1C8:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EE1E0; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004EE1E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_004EE1E4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 2;
L_004EE1EC:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[22].d[0]) { set32(c.r[4], 0u + 92u);  goto L_004EE258; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[23].w[0] + 8u), c.r[22].w[0]);  goto L_004EE234; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE204u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EE204u) [[unlikely]] return; }
L_004EE204:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE214u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EE214u) [[unlikely]] return; }
L_004EE214:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EE230; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE230u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EE230u) [[unlikely]] return; }
L_004EE230:
    st32((c.r[23].w[0] + 8u), c.r[22].w[0]);
    c.budget -= 1;
L_004EE234:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_004EE254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE244u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EE244u) [[unlikely]] return; }
L_004EE244:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE254u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EE254u) [[unlikely]] return; }
L_004EE254:
    set32(c.r[4], 0u + 92u);
    c.budget -= 1;
L_004EE258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE260u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EE260u) [[unlikely]] return; }
L_004EE260:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004EE27C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE274u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 173u, depth + 1u); else { c.pc = 0x002B5490u; return; } if (c.pc != 0x004EE274u) [[unlikely]] return; }
L_004EE274:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_004EE27C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 172u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE2A0u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EE2A0u) [[unlikely]] return; }
L_004EE2A0:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE2ACu); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EE2ACu) [[unlikely]] return; }
L_004EE2AC:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE2B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EE2B8u) [[unlikely]] return; }
L_004EE2B8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE2C4u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EE2C4u) [[unlikely]] return; }
L_004EE2C4:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE2D0u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EE2D0u) [[unlikely]] return; }
L_004EE2D0:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE2DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EE2DCu) [[unlikely]] return; }
L_004EE2DC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE2E8u); set32(c.r[4], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EE2E8u) [[unlikely]] return; }
L_004EE2E8:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE2F4u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EE2F4u) [[unlikely]] return; }
L_004EE2F4:
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE300u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EE300u) [[unlikely]] return; }
L_004EE300:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE30Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EE30Cu) [[unlikely]] return; }
L_004EE30C:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE318u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EE318u) [[unlikely]] return; }
L_004EE318:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE324u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EE324u) [[unlikely]] return; }
L_004EE324:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE330u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EE330u) [[unlikely]] return; }
L_004EE330:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE33Cu); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EE33Cu) [[unlikely]] return; }
L_004EE33C:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE348u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EE348u) [[unlikely]] return; }
L_004EE348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE350u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004EE350u) [[unlikely]] return; }
L_004EE350:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE360u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004EE360u) [[unlikely]] return; }
L_004EE360:
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE370u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EE370u) [[unlikely]] return; }
L_004EE370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE378u); set32(c.r[4], ld32((c.r[29].w[0] + 144u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EE378u) [[unlikely]] return; }
L_004EE378:
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
L_004EE3B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE3C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004EE3C8u) [[unlikely]] return; }
L_004EE3C8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE3D4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EE3D4u) [[unlikely]] return; }
L_004EE3D4:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], 0u + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE3E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EE3E4u) [[unlikely]] return; }
L_004EE3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EE42C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE3F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004EE3F8u) [[unlikely]] return; }
L_004EE3F8:
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
L_004EE42C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 256u));
    set32(c.r[2], 0u - 8u);
    set32(c.r[4], 0u + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE454u); st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EE454u) [[unlikely]] return; }
L_004EE454:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[2].w[0] + 196u));  goto L_004EE46C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE468u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 22u, depth + 1u); else { c.pc = 0x00320240u; return; } if (c.pc != 0x004EE468u) [[unlikely]] return; }
L_004EE468:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 196u));
    c.budget -= 1;
L_004EE46C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[2].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE48Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EE48Cu) [[unlikely]] return; }
L_004EE48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE494u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EE494u) [[unlikely]] return; }
L_004EE494:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004EE4B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE4DCu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004EE4DCu) [[unlikely]] return; }
L_004EE4DC:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE4E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EE4E8u) [[unlikely]] return; }
L_004EE4E8:
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE4F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004EE4F8u) [[unlikely]] return; }
L_004EE4F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE514u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004EE514u) [[unlikely]] return; }
L_004EE514:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], 0u + 48u);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.f[1]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    st32((c.r[2].w[0] + 28u), c.f[1]);
    st32((c.r[2].w[0] + 32u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE5A4u); st32((c.r[2].w[0] + 44u), c.f[2]);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004EE5A4u) [[unlikely]] return; }
L_004EE5A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE5C0u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004EE5C0u) [[unlikely]] return; }
L_004EE5C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 8u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE5F4u); st32((c.r[2].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x004EE5F4u) [[unlikely]] return; }
L_004EE5F4:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 3u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE61Cu); st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x004EE61Cu) [[unlikely]] return; }
L_004EE61C:
    set32(c.r[3], 0u + 4u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE634u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EE634u) [[unlikely]] return; }
L_004EE634:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 52u));  goto L_004EE680; }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE678u); st64((c.r[29].w[0] + 24u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0088(c, 90u, depth + 1u); else { c.pc = 0x00320B00u; return; } if (c.pc != 0x004EE678u) [[unlikely]] return; }
L_004EE678:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[18].w[0] + 52u));
    c.budget -= 2;
L_004EE680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE69Cu); st16((c.r[18].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EE69Cu) [[unlikely]] return; }
L_004EE69C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004EE6D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[5], c.r[5].w[0] + 31024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE704u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00FB(c, 225u, depth + 1u); else { c.pc = 0x004EE4B0u; return; } if (c.pc != 0x004EE704u) [[unlikely]] return; }
L_004EE704:
    set32(c.r[17], ld32((c.r[20].w[0] + 120u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_004EE778; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 120u), c.r[16].w[0]);  goto L_004EE754; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE724u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EE724u) [[unlikely]] return; }
L_004EE724:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE734u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EE734u) [[unlikely]] return; }
L_004EE734:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EE750; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE750u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EE750u) [[unlikely]] return; }
L_004EE750:
    st32((c.r[20].w[0] + 120u), c.r[16].w[0]);
    c.budget -= 1;
L_004EE754:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EE774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE764u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EE764u) [[unlikely]] return; }
L_004EE764:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE774u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EE774u) [[unlikely]] return; }
L_004EE774:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004EE778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE780u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 216u, depth + 1u); else { c.pc = 0x004EE3B0u; return; } if (c.pc != 0x004EE780u) [[unlikely]] return; }
L_004EE780:
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE79Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EE79Cu) [[unlikely]] return; }
L_004EE79C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE7A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 158u, depth + 1u); else { c.pc = 0x004EDD40u; return; } if (c.pc != 0x004EE7A8u) [[unlikely]] return; }
L_004EE7A8:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[18].d[0]; set32(c.r[16], c.r[3].w[0] + 88u);  if (t) { goto L_004EE81C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[18].w[0]);  goto L_004EE7FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE7CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EE7CCu) [[unlikely]] return; }
L_004EE7CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE7DCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EE7DCu) [[unlikely]] return; }
L_004EE7DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EE7F8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE7F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EE7F8u) [[unlikely]] return; }
L_004EE7F8:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004EE7FC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_004EE820; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE80Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EE80Cu) [[unlikely]] return; }
L_004EE80C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE81Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EE81Cu) [[unlikely]] return; }
L_004EE81C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004EE820:
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EE778u | kUnwind; return; } goto L_004EE778; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004EE850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE86Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004EE86Cu) [[unlikely]] return; }
L_004EE86C:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE878u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EE878u) [[unlikely]] return; }
L_004EE878:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EE888u) [[unlikely]] return; }
L_004EE888:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004EE8AC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11101u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE8A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 152u, depth + 1u); else { c.pc = 0x001F94E0u; return; } if (c.pc != 0x004EE8A8u) [[unlikely]] return; }
L_004EE8A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004EE8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE8B4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004EE8B4u) [[unlikely]] return; }
L_004EE8B4:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE8C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EE8C0u) [[unlikely]] return; }
L_004EE8C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004EE8DC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE8D8u); set32(c.r[5], c.r[5].w[0] + 11111u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214210u; return; } if (c.pc != 0x004EE8D8u) [[unlikely]] return; }
L_004EE8D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004EE8DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE8E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004EE8E4u) [[unlikely]] return; }
L_004EE8E4:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE8F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EE8F0u) [[unlikely]] return; }
L_004EE8F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004EE910; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE90Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_003F(c, 82u, depth + 1u); else { c.pc = 0x001FD180u; return; } if (c.pc != 0x004EE90Cu) [[unlikely]] return; }
L_004EE90C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004EE910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE918u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004EE918u) [[unlikely]] return; }
L_004EE918:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE924u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EE924u) [[unlikely]] return; }
L_004EE924:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004EE958; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[4].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11133u);
    c.f[13] = c.r[3].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE954u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 177u, depth + 1u); else { c.pc = 0x00209CD0u; return; } if (c.pc != 0x004EE954u) [[unlikely]] return; }
L_004EE954:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004EE958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE960u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004EE960u) [[unlikely]] return; }
L_004EE960:
    set32(c.r[4], 0u + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE96Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004EE96Cu) [[unlikely]] return; }
L_004EE96C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13328u);
    set32(c.r[6], c.r[6].w[0] + 13248u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EE98Cu); set32(c.r[8], 0u + 10u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004EE98Cu) [[unlikely]] return; }
L_004EE98C:
    c.f[6] = ld32((c.r[28].w[0] - 32564u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[28].w[0] - 32020u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[28].w[0] - 32076u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0]), c.f[6]);
    set32(c.r[4], 0u + 24u);
    st32((c.r[2].w[0] + 32u), c.f[1]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.f[2] = ld32((c.r[28].w[0] - 32344u));
    c.f[1] = ld32((c.r[28].w[0] - 32620u));
    c.f[0] = ld32((c.r[28].w[0] - 32304u));
    st32((c.r[2].w[0] + 96u), c.f[2]);
    st32((c.r[2].w[0] + 128u), c.r[6].w[0]);
    c.f[5] = ld32((c.r[28].w[0] - 32272u));
    st32((c.r[2].w[0] + 160u), c.f[1]);
    st32((c.r[2].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31936u));
    st32((c.r[2].w[0] + 224u), c.f[5]);
    c.f[4] = ld32((c.r[28].w[0] - 31652u));
    st32((c.r[2].w[0] + 256u), c.f[0]);
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[28].w[0] - 31648u));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[28].w[0] - 31644u));
    st32((c.r[2].w[0] + 20u), c.f[4]);
    st32((c.r[2].w[0] + 24u), c.f[3]);
    st32((c.r[2].w[0] + 28u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 31640u));
    st32((c.r[2].w[0] + 48u), c.f[6]);
    st32((c.r[2].w[0] + 52u), c.f[6]);
    st32((c.r[2].w[0] + 56u), c.f[6]);
    st32((c.r[2].w[0] + 60u), c.f[6]);
    st32((c.r[2].w[0] + 80u), c.f[2]);
    st32((c.r[2].w[0] + 84u), c.f[2]);
    st32((c.r[2].w[0] + 88u), c.f[0]);
    st32((c.r[2].w[0] + 92u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 31636u));
    st32((c.r[2].w[0] + 112u), c.f[6]);
    st32((c.r[2].w[0] + 116u), c.f[6]);
    st32((c.r[2].w[0] + 120u), c.f[6]);
    st32((c.r[2].w[0] + 124u), c.f[6]);
    st32((c.r[2].w[0] + 144u), c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 31632u));
    c.f[2] = ld32((c.r[28].w[0] - 31628u));
    c.f[1] = ld32((c.r[28].w[0] - 31668u));
    st32((c.r[2].w[0] + 148u), c.f[0]);
    st32((c.r[2].w[0] + 152u), c.f[2]);
    st32((c.r[2].w[0] + 156u), c.f[1]);
    st32((c.r[2].w[0] + 176u), c.f[6]);
    st32((c.r[2].w[0] + 180u), c.f[6]);
    st32((c.r[2].w[0] + 184u), c.f[6]);
    c.f[0] = ld32((c.r[28].w[0] - 31624u));
    st32((c.r[2].w[0] + 188u), c.f[6]);
    c.f[2] = ld32((c.r[28].w[0] - 31620u));
    st32((c.r[2].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31616u));
    st32((c.r[2].w[0] + 212u), c.f[2]);
    c.f[1] = ld32((c.r[28].w[0] - 31612u));
    st32((c.r[2].w[0] + 216u), c.f[0]);
    st32((c.r[2].w[0] + 220u), c.f[5]);
    st32((c.r[2].w[0] + 240u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 31608u));
    st32((c.r[2].w[0] + 244u), 0u);
    st32((c.r[2].w[0] + 248u), c.f[1]);
    st32((c.r[2].w[0] + 252u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 272u), 0u);
    st32((c.r[2].w[0] + 276u), c.f[0]);
    st32((c.r[2].w[0] + 280u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 284u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 308u), c.f[4]);
    st32((c.r[2].w[0] + 312u), c.f[3]);
    c.budget -= 77;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEAC0u); st32((c.r[2].w[0] + 316u), 0u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EEAC0u) [[unlikely]] return; }
L_004EEAC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EEAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEAD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x004EEAD0u) [[unlikely]] return; }
L_004EEAD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 432u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 6;
L_004EEAE8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEAFCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 233u, depth + 1u); else { c.pc = 0x0024E040u; return; } if (c.pc != 0x004EEAFCu) [[unlikely]] return; }
L_004EEAFC:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEB08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EEB08u) [[unlikely]] return; }
L_004EEB08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004EEB28; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEB24u); set32(c.r[5], c.r[5].w[0] + 11143u);  if (depth < kMaxDepth) unit_003F(c, 336u, depth + 1u); else { c.pc = 0x001FF0E0u; return; } if (c.pc != 0x004EEB24u) [[unlikely]] return; }
L_004EEB24:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004EEB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEB30u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004EEB30u) [[unlikely]] return; }
L_004EEB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEB38u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EEB38u) [[unlikely]] return; }
L_004EEB38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004EEB60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEB88u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004EEB88u) [[unlikely]] return; }
L_004EEB88:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEB94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EEB94u) [[unlikely]] return; }
L_004EEB94:
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004EEB9C:
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEBA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EEBA8u) [[unlikely]] return; }
L_004EEBA8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  goto L_004EEBC8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEBC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004EEBC0u) [[unlikely]] return; }
L_004EEBC0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 2;
L_004EEBC8:
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[18].d[0]; set32(c.r[21], c.r[16].w[0] + 44u);  if (t) { goto L_004EEC38; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 44u), c.r[18].w[0]);  goto L_004EEC18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEBE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EEBE8u) [[unlikely]] return; }
L_004EEBE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEBF8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EEBF8u) [[unlikely]] return; }
L_004EEBF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EEC14; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEC14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EEC14u) [[unlikely]] return; }
L_004EEC14:
    st32((c.r[16].w[0] + 44u), c.r[18].w[0]);
    c.budget -= 1;
L_004EEC18:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 140u)));  goto L_004EEC3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEC28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EEC28u) [[unlikely]] return; }
L_004EEC28:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEC38u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EEC38u) [[unlikely]] return; }
L_004EEC38:
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 1;
L_004EEC3C:
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEC50u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EEC50u) [[unlikely]] return; }
L_004EEC50:
    set32(c.r[4], 0u + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEC5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EEC5Cu) [[unlikely]] return; }
L_004EEC5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 12u)));  goto L_004EECC8; }
    c.f[0] = ld32((c.r[28].w[0] - 31656u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[13] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40600000u);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.f[12] = c.r[6].w[0];
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.f[19] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] + 11149u);
    set32(c.r[7], c.r[7].w[0] + 18144u);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[16] = c.f[13];
    c.f[17] = c.f[13];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EECC0u); c.f[18] = c.f[13];  if (depth < kMaxDepth) unit_0045(c, 300u, depth + 1u); else { c.pc = 0x00216FE0u; return; } if (c.pc != 0x004EECC0u) [[unlikely]] return; }
L_004EECC0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 2;
L_004EECC8:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  goto L_004EED34; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  goto L_004EED10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EECE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EECE0u) [[unlikely]] return; }
L_004EECE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EECF0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EECF0u) [[unlikely]] return; }
L_004EECF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EED0C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EED0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EED0Cu) [[unlikely]] return; }
L_004EED0C:
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_004EED10:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004EED30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EED20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EED20u) [[unlikely]] return; }
L_004EED20:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EED30u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EED30u) [[unlikely]] return; }
L_004EED30:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_004EED34:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EED40u); set32(c.r[17], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004EED40u) [[unlikely]] return; }
L_004EED40:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004EEB9Cu | kUnwind; return; } goto L_004EEB9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EED5Cu); set32(c.r[4], ld32((c.r[29].w[0] + 152u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EED5Cu) [[unlikely]] return; }
L_004EED5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004EED90:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEDC0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004EEDC0u) [[unlikely]] return; }
L_004EEDC0:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEDCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EEDCCu) [[unlikely]] return; }
L_004EEDCC:
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], 0u + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEDDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EEDDCu) [[unlikely]] return; }
L_004EEDDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[21].w[0] + 4u)));  goto L_004EEE08; }
    c.r[5].d[0] = ld16((c.r[21].w[0] + 76u));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE00u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 103u, depth + 1u); else { c.pc = 0x001F8DE0u; return; } if (c.pc != 0x004EEE00u) [[unlikely]] return; }
L_004EEE00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_004EEE08:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 140u)));  goto L_004EEE74; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[21].w[0] + 4u), c.r[16].w[0]);  goto L_004EEE50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EEE20u) [[unlikely]] return; }
L_004EEE20:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE30u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EEE30u) [[unlikely]] return; }
L_004EEE30:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EEE4C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EEE4Cu) [[unlikely]] return; }
L_004EEE4C:
    st32((c.r[21].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_004EEE50:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EEE70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE60u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EEE60u) [[unlikely]] return; }
L_004EEE60:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE70u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EEE70u) [[unlikely]] return; }
L_004EEE70:
    set32(c.r[4], ld32((c.r[21].w[0] + 140u)));
    c.budget -= 1;
L_004EEE74:
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE88u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EEE88u) [[unlikely]] return; }
L_004EEE88:
    set32(c.r[4], 0u + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEE94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EEE94u) [[unlikely]] return; }
L_004EEE94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[21].w[0] + 8u)));  goto L_004EEEB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEEA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 72u, depth + 1u); else { c.pc = 0x00218DC0u; return; } if (c.pc != 0x004EEEA8u) [[unlikely]] return; }
L_004EEEA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_004EEEB0:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  goto L_004EEF1C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[21].w[0] + 8u), c.r[16].w[0]);  goto L_004EEEF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEEC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EEEC8u) [[unlikely]] return; }
L_004EEEC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEED8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EEED8u) [[unlikely]] return; }
L_004EEED8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EEEF4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEEF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EEEF4u) [[unlikely]] return; }
L_004EEEF4:
    st32((c.r[21].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_004EEEF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004EEF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEF08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EEF08u) [[unlikely]] return; }
L_004EEF08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEF18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EEF18u) [[unlikely]] return; }
L_004EEF18:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_004EEF1C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEF2Cu); set32(c.r[5], ld32((c.r[21].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EEF2Cu) [[unlikely]] return; }
L_004EEF2C:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEF38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EEF38u) [[unlikely]] return; }
L_004EEF38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EEF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEF48u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004EEF48u) [[unlikely]] return; }
L_004EEF48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_004EEF88:
    c.r[6].d[0] = ld16((c.r[20].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEFB8u); st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EEFB8u) [[unlikely]] return; }
L_004EEFB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EF010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EEFC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004EEFC8u) [[unlikely]] return; }
L_004EEFC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004EF010:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF048u); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EF048u) [[unlikely]] return; }
L_004EF048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EF0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF058u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004EF058u) [[unlikely]] return; }
L_004EF058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF074u); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004EF074u) [[unlikely]] return; }
L_004EF074:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF080u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004EF080u) [[unlikely]] return; }
L_004EF080:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF08Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004EF08Cu) [[unlikely]] return; }
L_004EF08C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF098u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x004EF098u) [[unlikely]] return; }
L_004EF098:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF0A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x004EF0A4u) [[unlikely]] return; }
L_004EF0A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF0B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x004EF0B0u) [[unlikely]] return; }
L_004EF0B0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004EF0B8:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 56u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF120u); st8((c.r[18].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EF120u) [[unlikely]] return; }
L_004EF120:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));  goto L_004EF13C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF134u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004EF134u) [[unlikely]] return; }
L_004EF134:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.budget -= 2;
L_004EF13C:
    set32(c.r[2], 0u - 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_004EF1EC; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EF168u) [[unlikely]] return; }
L_004EF168:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_004EF17C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF178u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004EF178u) [[unlikely]] return; }
L_004EF178:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_004EF17C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EF1A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EF1E0; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EF1E0; } }
L_004EF1A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EF1C8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EF1E4; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EF1E0; } }
L_004EF1C8:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EF1E0; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004EF1E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_004EF1E4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_004EF1EC:
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_004EF298; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF214u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EF214u) [[unlikely]] return; }
L_004EF214:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_004EF228; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF224u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004EF224u) [[unlikely]] return; }
L_004EF224:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_004EF228:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004EF24C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EF28C; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EF28C; } }
L_004EF24C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EF274; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EF290; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EF28C; } }
L_004EF274:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EF28C; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004EF28C:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_004EF290:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_004EF298:
    set32(c.r[3], 0u - 3841u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 1280ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  goto L_004EF3E8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF2C0u); set32(c.r[4], c.r[4].w[0] + 11088u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004EF2C0u) [[unlikely]] return; }
L_004EF2C0:
    st32((c.r[21].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF2D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004EF2D0u) [[unlikely]] return; }
L_004EF2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF2D8u); set32(c.r[4], ld32((c.r[21].w[0] + 84u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004EF2D8u) [[unlikely]] return; }
L_004EF2D8:
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[23].d[0] != 0ull) { set32(c.r[16], ld32((c.r[23].w[0] + 8u)));  goto L_004EF37C; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF2F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EF2F8u) [[unlikely]] return; }
L_004EF2F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_004EF30C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF308u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004EF308u) [[unlikely]] return; }
L_004EF308:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_004EF30C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004EF330; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EF370; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EF370; } }
L_004EF330:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EF358; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004EF374; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004EF370; } }
L_004EF358:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004EF370; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004EF370:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_004EF374:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 2;
L_004EF37C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[22].d[0];  if (t) { goto L_004EF3E4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[23].w[0] + 8u), c.r[22].w[0]);  goto L_004EF3C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF394u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF394u) [[unlikely]] return; }
L_004EF394:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF3A4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF3A4u) [[unlikely]] return; }
L_004EF3A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EF3C0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF3C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EF3C0u) [[unlikely]] return; }
L_004EF3C0:
    st32((c.r[23].w[0] + 8u), c.r[22].w[0]);
    c.budget -= 1;
L_004EF3C4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_004EF3E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF3D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF3D4u) [[unlikely]] return; }
L_004EF3D4:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF3E4u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF3E4u) [[unlikely]] return; }
L_004EF3E4:
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_004EF3E8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF3F4u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EF3F4u) [[unlikely]] return; }
L_004EF3F4:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF400u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EF400u) [[unlikely]] return; }
L_004EF400:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF40Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EF40Cu) [[unlikely]] return; }
L_004EF40C:
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF41Cu); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EF41Cu) [[unlikely]] return; }
L_004EF41C:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF428u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EF428u) [[unlikely]] return; }
L_004EF428:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF434u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EF434u) [[unlikely]] return; }
L_004EF434:
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF444u); set32(c.r[4], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EF444u) [[unlikely]] return; }
L_004EF444:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF450u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EF450u) [[unlikely]] return; }
L_004EF450:
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF45Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EF45Cu) [[unlikely]] return; }
L_004EF45C:
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF46Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004EF46Cu) [[unlikely]] return; }
L_004EF46C:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF478u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004EF478u) [[unlikely]] return; }
L_004EF478:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF484u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004EF484u) [[unlikely]] return; }
L_004EF484:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF490u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 340u, depth + 1u); else { c.pc = 0x0041F220u; return; } if (c.pc != 0x004EF490u) [[unlikely]] return; }
L_004EF490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF498u); set32(c.r[4], ld32((c.r[21].w[0] + 140u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004EF498u) [[unlikely]] return; }
L_004EF498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF4A0u); set32(c.r[4], ld32((c.r[29].w[0] + 152u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EF4A0u) [[unlikely]] return; }
L_004EF4A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[2], 0u + 1u);
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
L_004EF4D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004EF4E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull; st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004EF518; } }
    st32((c.r[17].w[0] + 136u), c.r[6].w[0]);
    c.budget -= 1;
L_004EF518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF520u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004EF520u) [[unlikely]] return; }
L_004EF520:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF530u); st32((c.r[29].w[0] + 100u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EF530u) [[unlikely]] return; }
L_004EF530:
    set32(c.r[18], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[20].d[0]; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_004EF59C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 132u), c.r[20].w[0]);  goto L_004EF57C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF54Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF54Cu) [[unlikely]] return; }
L_004EF54C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF55Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF55Cu) [[unlikely]] return; }
L_004EF55C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EF578; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF578u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EF578u) [[unlikely]] return; }
L_004EF578:
    st32((c.r[17].w[0] + 132u), c.r[20].w[0]);
    c.budget -= 1;
L_004EF57C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004EF59C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF58Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF58Cu) [[unlikely]] return; }
L_004EF58C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF59Cu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF59Cu) [[unlikely]] return; }
L_004EF59C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_004EF618; }
    set32(c.r[18], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[19].d[0]) { set32(c.r[4], 0u + 256u);  goto L_004EF694; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 128u), c.r[19].w[0]);  goto L_004EF5F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF5C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF5C0u) [[unlikely]] return; }
L_004EF5C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF5D0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF5D0u) [[unlikely]] return; }
L_004EF5D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EF5EC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF5ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EF5ECu) [[unlikely]] return; }
L_004EF5EC:
    st32((c.r[17].w[0] + 128u), c.r[19].w[0]);
    c.budget -= 1;
L_004EF5F0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004EF690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF600u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF600u) [[unlikely]] return; }
L_004EF600:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF610u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF610u) [[unlikely]] return; }
L_004EF610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EF690; } }
L_004EF618:
    set32(c.r[19], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == c.r[18].d[0];  if (t) { goto L_004EF690; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 128u), c.r[18].w[0]);  goto L_004EF670; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF640u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF640u) [[unlikely]] return; }
L_004EF640:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF650u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF650u) [[unlikely]] return; }
L_004EF650:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EF66C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF66Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EF66Cu) [[unlikely]] return; }
L_004EF66C:
    st32((c.r[17].w[0] + 128u), c.r[18].w[0]);
    c.budget -= 1;
L_004EF670:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004EF690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF680u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF680u) [[unlikely]] return; }
L_004EF680:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF690u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF690u) [[unlikely]] return; }
L_004EF690:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_004EF694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF69Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004EF69Cu) [[unlikely]] return; }
L_004EF69C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 140u)));  goto L_004EF6BC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF6B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004EF6B4u) [[unlikely]] return; }
L_004EF6B4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 2;
L_004EF6BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_004EF724; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 140u), c.r[19].w[0]);  goto L_004EF704; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF6D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF6D4u) [[unlikely]] return; }
L_004EF6D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF6E4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF6E4u) [[unlikely]] return; }
L_004EF6E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EF700; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF700u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EF700u) [[unlikely]] return; }
L_004EF700:
    st32((c.r[17].w[0] + 140u), c.r[19].w[0]);
    c.budget -= 1;
L_004EF704:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004EF724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF714u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF714u) [[unlikely]] return; }
L_004EF714:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF724u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF724u) [[unlikely]] return; }
L_004EF724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 11162u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004EF740; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004EF748; } }
L_004EF740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF748u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004EF748u) [[unlikely]] return; }
L_004EF748:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF758u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x004EF758u) [[unlikely]] return; }
L_004EF758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1000u);  goto L_004EF7B8; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF784u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF784u) [[unlikely]] return; }
L_004EF784:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF794u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF794u) [[unlikely]] return; }
L_004EF794:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004EF7B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF7B4u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004EF7B4u) [[unlikely]] return; }
L_004EF7B4:
    set32(c.r[2], 0u + 1000u);
    c.budget -= 1;
L_004EF7B8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[17].w[0] + 76u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 120u);
    st16((c.r[17].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 78u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF7D4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004EF7D4u) [[unlikely]] return; }
L_004EF7D4:
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 78u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF7ECu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x004EF7ECu) [[unlikely]] return; }
L_004EF7EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF804u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EF804u) [[unlikely]] return; }
L_004EF804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF80Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 298u, depth + 1u); else { c.pc = 0x004EED90u; return; } if (c.pc != 0x004EF80Cu) [[unlikely]] return; }
L_004EF80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF814u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 277u, depth + 1u); else { c.pc = 0x004EEB60u; return; } if (c.pc != 0x004EF814u) [[unlikely]] return; }
L_004EF814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF81Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 253u, depth + 1u); else { c.pc = 0x004EE850u; return; } if (c.pc != 0x004EF81Cu) [[unlikely]] return; }
L_004EF81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF824u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 237u, depth + 1u); else { c.pc = 0x004EE6D0u; return; } if (c.pc != 0x004EF824u) [[unlikely]] return; }
L_004EF824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF82Cu); set32(c.r[4], ld32((c.r[29].w[0] + 96u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004EF82Cu) [[unlikely]] return; }
L_004EF82C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004EF850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004EFBC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23632u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st8((c.r[17].w[0] + 152u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 7;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_004EF950; }
    set32(c.r[5], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF8A0u); set32(c.r[4], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EF8A0u) [[unlikely]] return; }
L_004EF8A0:
    set32(c.r[18], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 140u)));  goto L_004EF8E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF8B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF8B4u) [[unlikely]] return; }
L_004EF8B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF8C4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF8C4u) [[unlikely]] return; }
L_004EF8C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EF8E0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF8E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EF8E0u) [[unlikely]] return; }
L_004EF8E0:
    set32(c.r[18], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 1;
L_004EF8E4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004EF94C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_004EF92C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF8FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF8FCu) [[unlikely]] return; }
L_004EF8FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF90Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF90Cu) [[unlikely]] return; }
L_004EF90C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EF928; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF928u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EF928u) [[unlikely]] return; }
L_004EF928:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004EF92C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 140u), 0u);  if (t) { goto L_004EF94C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF93Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF93Cu) [[unlikely]] return; }
L_004EF93C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF94Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF94Cu) [[unlikely]] return; }
L_004EF94C:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_004EF950:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 124u)));  goto L_004EF968; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF960u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004EF960u) [[unlikely]] return; }
L_004EF960:
    st32((c.r[17].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 2;
L_004EF968:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  goto L_004EF980; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF978u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004EF978u) [[unlikely]] return; }
L_004EF978:
    st32((c.r[17].w[0] + 124u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 2;
L_004EF980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF988u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004EF988u) [[unlikely]] return; }
L_004EF988:
    set32(c.r[2], c.r[17].w[0] + 140u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_004EF9D4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 132u);  goto L_004EF9D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF9A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF9A8u) [[unlikely]] return; }
L_004EF9A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF9B8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EF9B8u) [[unlikely]] return; }
L_004EF9B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EF9D4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF9D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EF9D4u) [[unlikely]] return; }
L_004EF9D4:
    set32(c.r[2], c.r[17].w[0] + 132u);
    c.budget -= 1;
L_004EF9D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 128u);  goto L_004EFA24; }
    set32(c.r[18], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004EFA20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EF9F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EF9F4u) [[unlikely]] return; }
L_004EF9F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFA04u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFA04u) [[unlikely]] return; }
L_004EFA04:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EFA20; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFA20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EFA20u) [[unlikely]] return; }
L_004EFA20:
    set32(c.r[2], c.r[17].w[0] + 128u);
    c.budget -= 1;
L_004EFA24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 120u);  goto L_004EFA70; }
    set32(c.r[18], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004EFA6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFA40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EFA40u) [[unlikely]] return; }
L_004EFA40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFA50u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFA50u) [[unlikely]] return; }
L_004EFA50:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EFA6C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFA6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EFA6Cu) [[unlikely]] return; }
L_004EFA6C:
    set32(c.r[2], c.r[17].w[0] + 120u);
    c.budget -= 1;
L_004EFA70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004EFAB8; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004EFAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFA8Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EFA8Cu) [[unlikely]] return; }
L_004EFA8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFA9Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFA9Cu) [[unlikely]] return; }
L_004EFA9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EFAB8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFAB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EFAB8u) [[unlikely]] return; }
L_004EFAB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[4], c.r[17].w[0] + 88u);
    set32(c.r[5], c.r[5].w[0] + 9200u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFAD0u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004EFAD0u) [[unlikely]] return; }
L_004EFAD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], c.r[17].w[0] + 44u);
    set32(c.r[5], c.r[5].w[0] + 23504u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFAE8u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004EFAE8u) [[unlikely]] return; }
L_004EFAE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[4], c.r[17].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] - 4320u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFB00u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004EFB00u) [[unlikely]] return; }
L_004EFB00:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_004EFB50; }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004EFB4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFB20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EFB20u) [[unlikely]] return; }
L_004EFB20:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFB30u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFB30u) [[unlikely]] return; }
L_004EFB30:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EFB4C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFB4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EFB4Cu) [[unlikely]] return; }
L_004EFB4C:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_004EFB50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004EFB98; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004EFB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFB6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EFB6Cu) [[unlikely]] return; }
L_004EFB6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFB7Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFB7Cu) [[unlikely]] return; }
L_004EFB7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004EFB98; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFB98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004EFB98u) [[unlikely]] return; }
L_004EFB98:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004EFBB0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_004EFBB0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004EFBC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFBC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004EFBC4u) [[unlikely]] return; }
L_004EFBC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004EFBC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004EFBE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23632u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_004EFC48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFC38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EFC38u) [[unlikely]] return; }
L_004EFC38:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFC48u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFC48u) [[unlikely]] return; }
L_004EFC48:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[19].w[0] + 8u), 0u);  if (t) { goto L_004EFC6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFC5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EFC5Cu) [[unlikely]] return; }
L_004EFC5C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFC6Cu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFC6Cu) [[unlikely]] return; }
L_004EFC6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[4], c.r[19].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] - 592u);
    set32(c.r[6], c.r[6].w[0] - 4320u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFC8Cu); set32(c.r[8], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004EFC8Cu) [[unlikely]] return; }
L_004EFC8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], c.r[19].w[0] + 44u);
    set32(c.r[5], c.r[5].w[0] - 20448u);
    set32(c.r[6], c.r[6].w[0] + 23504u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFCACu); set32(c.r[8], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004EFCACu) [[unlikely]] return; }
L_004EFCAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    st32((c.r[19].w[0] + 80u), 0u);
    set32(c.r[4], c.r[19].w[0] + 88u);
    set32(c.r[5], c.r[5].w[0] + 13984u);
    set32(c.r[6], c.r[6].w[0] + 9200u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 8u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFCD4u); st32((c.r[19].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004EFCD4u) [[unlikely]] return; }
L_004EFCD4:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[19].w[0] + 120u), 0u);  if (t) { goto L_004EFCF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFCE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EFCE8u) [[unlikely]] return; }
L_004EFCE8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFCF8u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFCF8u) [[unlikely]] return; }
L_004EFCF8:
    st32((c.r[19].w[0] + 124u), 0u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[19].w[0] + 128u), 0u);  if (t) { goto L_004EFD20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFD10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EFD10u) [[unlikely]] return; }
L_004EFD10:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFD20u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFD20u) [[unlikely]] return; }
L_004EFD20:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[19].w[0] + 132u), 0u);  if (t) { goto L_004EFD44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFD34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EFD34u) [[unlikely]] return; }
L_004EFD34:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFD44u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFD44u) [[unlikely]] return; }
L_004EFD44:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[19].w[0] + 140u), 0u);  if (t) { goto L_004EFD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFD58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EFD58u) [[unlikely]] return; }
L_004EFD58:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFD68u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFD68u) [[unlikely]] return; }
L_004EFD68:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFD80u); st8((c.r[19].w[0] + 152u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00FB(c, 361u, depth + 1u); else { c.pc = 0x004EF4E0u; return; } if (c.pc != 0x004EFD80u) [[unlikely]] return; }
L_004EFD80:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004EFDB0:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_004EFDC0; }
L_004EFDC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_004EFDF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFDE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004EFDE8u) [[unlikely]] return; }
L_004EFDE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFDF8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004EFDF8u) [[unlikely]] return; }
L_004EFDF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004EFE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004EFE80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23600u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004EFE68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004EFE68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004EFE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFE68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004EFE68u) [[unlikely]] return; }
L_004EFE68:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004EFE84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFE80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004EFE80u) [[unlikely]] return; }
L_004EFE80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004EFE84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004EFEA0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004EFEC8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004EFEC0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004EFEC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004EFECC; } }
L_004EFEC8:
    set32(c.r[2], c.r[2].w[0] + 11184u);
    c.budget -= 1;
L_004EFECC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004EFEE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11360u);  c.pc = t; return; }
L_004EFEF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] + 11408u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 10u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFF28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x004EFF28u) [[unlikely]] return; }
L_004EFF28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFF38u); set32(c.r[5], c.r[5].w[0] + 11410u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004EFF38u) [[unlikely]] return; }
L_004EFF38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_004EFF5C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFF50u); set32(c.r[5], c.r[5].w[0] + 11415u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004EFF50u) [[unlikely]] return; }
L_004EFF50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004EFF6C; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_004EFF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFF64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004EFF64u) [[unlikely]] return; }
L_004EFF64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00FC(c, 9u, depth); } }
L_004EFF6C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFF78u); set32(c.r[5], c.r[5].w[0] + 11410u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004EFF78u) [[unlikely]] return; }
L_004EFF78:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFF84u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004EFF84u) [[unlikely]] return; }
L_004EFF84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFF94u); set32(c.r[5], c.r[5].w[0] + 11415u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004EFF94u) [[unlikely]] return; }
L_004EFF94:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFFA0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004EFFA0u) [[unlikely]] return; }
L_004EFFA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFFB0u); set32(c.r[5], c.r[5].w[0] + 11420u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004EFFB0u) [[unlikely]] return; }
L_004EFFB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004EFFF0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFFC8u); set32(c.r[5], c.r[29].w[0] + 175u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004EFFC8u) [[unlikely]] return; }
L_004EFFC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld8((c.r[29].w[0] + 175u));  goto L_004EFFF0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004EFFEC; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 175u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFFECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004EFFECu) [[unlikely]] return; }
L_004EFFEC:
    c.r[16].d[0] = ld8((c.r[29].w[0] + 175u));
    c.budget -= 1;
L_004EFFF0:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004EFFFCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004EFFFCu) [[unlikely]] return; }
L_004EFFFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00FC(c, 5u, depth); } }
    [[clang::musttail]] return unit_00FC(c, 2u, depth);
}

}
