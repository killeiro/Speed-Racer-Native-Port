#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0,
    0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128,
    0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0,
    241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    292, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 315,
    0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351,
    0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0,
    0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0,
};

void unit_000B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0012C000;
    case 2u: goto L_0012C030;
    case 3u: goto L_0012C03C;
    case 4u: goto L_0012C060;
    case 5u: goto L_0012C084;
    case 6u: goto L_0012C0A0;
    case 7u: goto L_0012C0B0;
    case 8u: goto L_0012C0E0;
    case 9u: goto L_0012C0EC;
    case 10u: goto L_0012C0F8;
    case 11u: goto L_0012C110;
    case 12u: goto L_0012C130;
    case 13u: goto L_0012C14C;
    case 14u: goto L_0012C190;
    case 15u: goto L_0012C1BC;
    case 16u: goto L_0012C1E4;
    case 17u: goto L_0012C240;
    case 18u: goto L_0012C250;
    case 19u: goto L_0012C280;
    case 20u: goto L_0012C298;
    case 21u: goto L_0012C2A0;
    case 22u: goto L_0012C2B4;
    case 23u: goto L_0012C380;
    case 24u: goto L_0012C390;
    case 25u: goto L_0012C3E0;
    case 26u: goto L_0012C3F8;
    case 27u: goto L_0012C410;
    case 28u: goto L_0012C434;
    case 29u: goto L_0012C440;
    case 30u: goto L_0012C478;
    case 31u: goto L_0012C490;
    case 32u: goto L_0012C4AC;
    case 33u: goto L_0012C4B4;
    case 34u: goto L_0012C4BC;
    case 35u: goto L_0012C4F4;
    case 36u: goto L_0012C508;
    case 37u: goto L_0012C520;
    case 38u: goto L_0012C53C;
    case 39u: goto L_0012C550;
    case 40u: goto L_0012C564;
    case 41u: goto L_0012C56C;
    case 42u: goto L_0012C580;
    case 43u: goto L_0012C5A8;
    case 44u: goto L_0012C5C0;
    case 45u: goto L_0012C5D0;
    case 46u: goto L_0012C5D8;
    case 47u: goto L_0012C60C;
    case 48u: goto L_0012C618;
    case 49u: goto L_0012C634;
    case 50u: goto L_0012C660;
    case 51u: goto L_0012C680;
    case 52u: goto L_0012C69C;
    case 53u: goto L_0012C6B0;
    case 54u: goto L_0012C6E4;
    case 55u: goto L_0012C700;
    case 56u: goto L_0012C74C;
    case 57u: goto L_0012C770;
    case 58u: goto L_0012C7A0;
    case 59u: goto L_0012C7C0;
    case 60u: goto L_0012C7F0;
    case 61u: goto L_0012C820;
    case 62u: goto L_0012C86C;
    case 63u: goto L_0012C880;
    case 64u: goto L_0012C8B0;
    case 65u: goto L_0012C8D0;
    case 66u: goto L_0012C8EC;
    case 67u: goto L_0012C910;
    case 68u: goto L_0012C920;
    case 69u: goto L_0012C930;
    case 70u: goto L_0012C940;
    case 71u: goto L_0012C96C;
    case 72u: goto L_0012C990;
    case 73u: goto L_0012C9E0;
    case 74u: goto L_0012CA0C;
    case 75u: goto L_0012CA38;
    case 76u: goto L_0012CA54;
    case 77u: goto L_0012CAA0;
    case 78u: goto L_0012CAC0;
    case 79u: goto L_0012CACC;
    case 80u: goto L_0012CADC;
    case 81u: goto L_0012CAF0;
    case 82u: goto L_0012CB10;
    case 83u: goto L_0012CB18;
    case 84u: goto L_0012CB24;
    case 85u: goto L_0012CB54;
    case 86u: goto L_0012CB60;
    case 87u: goto L_0012CB70;
    case 88u: goto L_0012CB90;
    case 89u: goto L_0012CBB0;
    case 90u: goto L_0012CBBC;
    case 91u: goto L_0012CBC8;
    case 92u: goto L_0012CBE0;
    case 93u: goto L_0012CC04;
    case 94u: goto L_0012CC20;
    case 95u: goto L_0012CC2C;
    case 96u: goto L_0012CC48;
    case 97u: goto L_0012CC78;
    case 98u: goto L_0012CC90;
    case 99u: goto L_0012CCB4;
    case 100u: goto L_0012CCDC;
    case 101u: goto L_0012CD00;
    case 102u: goto L_0012CD34;
    case 103u: goto L_0012CD48;
    case 104u: goto L_0012CD5C;
    case 105u: goto L_0012CD70;
    case 106u: goto L_0012CD84;
    case 107u: goto L_0012CD98;
    case 108u: goto L_0012CDAC;
    case 109u: goto L_0012CDC0;
    case 110u: goto L_0012CDE0;
    case 111u: goto L_0012CDE8;
    case 112u: goto L_0012CE04;
    case 113u: goto L_0012CE0C;
    case 114u: goto L_0012CE34;
    case 115u: goto L_0012CEB8;
    case 116u: goto L_0012CED4;
    case 117u: goto L_0012CEF0;
    case 118u: goto L_0012CF0C;
    case 119u: goto L_0012CF28;
    case 120u: goto L_0012CF44;
    case 121u: goto L_0012CF60;
    case 122u: goto L_0012CF7C;
    case 123u: goto L_0012CF98;
    case 124u: goto L_0012CFB4;
    case 125u: goto L_0012D04C;
    case 126u: goto L_0012D05C;
    case 127u: goto L_0012D06C;
    case 128u: goto L_0012D07C;
    case 129u: goto L_0012D08C;
    case 130u: goto L_0012D09C;
    case 131u: goto L_0012D0AC;
    case 132u: goto L_0012D0BC;
    case 133u: goto L_0012D0DC;
    case 134u: goto L_0012D10C;
    case 135u: goto L_0012D120;
    case 136u: goto L_0012D170;
    case 137u: goto L_0012D17C;
    case 138u: goto L_0012D1CC;
    case 139u: goto L_0012D1F8;
    case 140u: goto L_0012D20C;
    case 141u: goto L_0012D234;
    case 142u: goto L_0012D2AC;
    case 143u: goto L_0012D2D0;
    case 144u: goto L_0012D2DC;
    case 145u: goto L_0012D310;
    case 146u: goto L_0012D334;
    case 147u: goto L_0012D350;
    case 148u: goto L_0012D35C;
    case 149u: goto L_0012D384;
    case 150u: goto L_0012D390;
    case 151u: goto L_0012D39C;
    case 152u: goto L_0012D3D0;
    case 153u: goto L_0012D4A0;
    case 154u: goto L_0012D4B0;
    case 155u: goto L_0012D4C8;
    case 156u: goto L_0012D4E0;
    case 157u: goto L_0012D4F8;
    case 158u: goto L_0012D510;
    case 159u: goto L_0012D528;
    case 160u: goto L_0012D540;
    case 161u: goto L_0012D558;
    case 162u: goto L_0012D57C;
    case 163u: goto L_0012D5A0;
    case 164u: goto L_0012D674;
    case 165u: goto L_0012D684;
    case 166u: goto L_0012D69C;
    case 167u: goto L_0012D6B4;
    case 168u: goto L_0012D6CC;
    case 169u: goto L_0012D6E4;
    case 170u: goto L_0012D6FC;
    case 171u: goto L_0012D714;
    case 172u: goto L_0012D72C;
    case 173u: goto L_0012D750;
    case 174u: goto L_0012D770;
    case 175u: goto L_0012D780;
    case 176u: goto L_0012D790;
    case 177u: goto L_0012D7C0;
    case 178u: goto L_0012D7D0;
    case 179u: goto L_0012D7E0;
    case 180u: goto L_0012D7F0;
    case 181u: goto L_0012D800;
    case 182u: goto L_0012D840;
    case 183u: goto L_0012D880;
    case 184u: goto L_0012D94C;
    case 185u: goto L_0012D95C;
    case 186u: goto L_0012D974;
    case 187u: goto L_0012D98C;
    case 188u: goto L_0012D9A4;
    case 189u: goto L_0012D9BC;
    case 190u: goto L_0012D9D4;
    case 191u: goto L_0012D9EC;
    case 192u: goto L_0012DA04;
    case 193u: goto L_0012DA28;
    case 194u: goto L_0012DA50;
    case 195u: goto L_0012DB10;
    case 196u: goto L_0012DB20;
    case 197u: goto L_0012DB38;
    case 198u: goto L_0012DB50;
    case 199u: goto L_0012DB68;
    case 200u: goto L_0012DB80;
    case 201u: goto L_0012DB98;
    case 202u: goto L_0012DBB0;
    case 203u: goto L_0012DBC8;
    case 204u: goto L_0012DBEC;
    case 205u: goto L_0012DC10;
    case 206u: goto L_0012DCD0;
    case 207u: goto L_0012DCE0;
    case 208u: goto L_0012DCF8;
    case 209u: goto L_0012DD10;
    case 210u: goto L_0012DD28;
    case 211u: goto L_0012DD40;
    case 212u: goto L_0012DD58;
    case 213u: goto L_0012DD70;
    case 214u: goto L_0012DD88;
    case 215u: goto L_0012DDAC;
    case 216u: goto L_0012DDD0;
    case 217u: goto L_0012DE90;
    case 218u: goto L_0012DEA0;
    case 219u: goto L_0012DEB8;
    case 220u: goto L_0012DED0;
    case 221u: goto L_0012DEE8;
    case 222u: goto L_0012DF00;
    case 223u: goto L_0012DF18;
    case 224u: goto L_0012DF30;
    case 225u: goto L_0012DF48;
    case 226u: goto L_0012DF6C;
    case 227u: goto L_0012DF90;
    case 228u: goto L_0012E050;
    case 229u: goto L_0012E060;
    case 230u: goto L_0012E078;
    case 231u: goto L_0012E090;
    case 232u: goto L_0012E0A8;
    case 233u: goto L_0012E0C0;
    case 234u: goto L_0012E0D8;
    case 235u: goto L_0012E0F0;
    case 236u: goto L_0012E108;
    case 237u: goto L_0012E12C;
    case 238u: goto L_0012E150;
    case 239u: goto L_0012E160;
    case 240u: goto L_0012E170;
    case 241u: goto L_0012E180;
    case 242u: goto L_0012E190;
    case 243u: goto L_0012E1A0;
    case 244u: goto L_0012E1B0;
    case 245u: goto L_0012E1C0;
    case 246u: goto L_0012E1D0;
    case 247u: goto L_0012E1EC;
    case 248u: goto L_0012E2A0;
    case 249u: goto L_0012E2B0;
    case 250u: goto L_0012E2C8;
    case 251u: goto L_0012E2E0;
    case 252u: goto L_0012E2F8;
    case 253u: goto L_0012E310;
    case 254u: goto L_0012E328;
    case 255u: goto L_0012E340;
    case 256u: goto L_0012E358;
    case 257u: goto L_0012E37C;
    case 258u: goto L_0012E394;
    case 259u: goto L_0012E3B0;
    case 260u: goto L_0012E440;
    case 261u: goto L_0012E450;
    case 262u: goto L_0012E480;
    case 263u: goto L_0012E498;
    case 264u: goto L_0012E4B0;
    case 265u: goto L_0012E4C0;
    case 266u: goto L_0012E4E4;
    case 267u: goto L_0012E500;
    case 268u: goto L_0012E524;
    case 269u: goto L_0012E53C;
    case 270u: goto L_0012E560;
    case 271u: goto L_0012E570;
    case 272u: goto L_0012E594;
    case 273u: goto L_0012E5A0;
    case 274u: goto L_0012E5B0;
    case 275u: goto L_0012E5E8;
    case 276u: goto L_0012E600;
    case 277u: goto L_0012E64C;
    case 278u: goto L_0012E660;
    case 279u: goto L_0012E694;
    case 280u: goto L_0012E6A4;
    case 281u: goto L_0012E6F0;
    case 282u: goto L_0012E740;
    case 283u: goto L_0012E830;
    case 284u: goto L_0012E88C;
    case 285u: goto L_0012E8AC;
    case 286u: goto L_0012E8CC;
    case 287u: goto L_0012E8E0;
    case 288u: goto L_0012E8F0;
    case 289u: goto L_0012E914;
    case 290u: goto L_0012E950;
    case 291u: goto L_0012E974;
    case 292u: goto L_0012E980;
    case 293u: goto L_0012E990;
    case 294u: goto L_0012E998;
    case 295u: goto L_0012E9A4;
    case 296u: goto L_0012E9B0;
    case 297u: goto L_0012E9BC;
    case 298u: goto L_0012E9C8;
    case 299u: goto L_0012E9D4;
    case 300u: goto L_0012EA30;
    case 301u: goto L_0012EA40;
    case 302u: goto L_0012EA50;
    case 303u: goto L_0012EA60;
    case 304u: goto L_0012EAE0;
    case 305u: goto L_0012EB10;
    case 306u: goto L_0012EB30;
    case 307u: goto L_0012ECC0;
    case 308u: goto L_0012ECF0;
    case 309u: goto L_0012ED4C;
    case 310u: goto L_0012ED5C;
    case 311u: goto L_0012ED80;
    case 312u: goto L_0012EDBC;
    case 313u: goto L_0012EDE0;
    case 314u: goto L_0012EDEC;
    case 315u: goto L_0012EDFC;
    case 316u: goto L_0012EE04;
    case 317u: goto L_0012EE10;
    case 318u: goto L_0012EE1C;
    case 319u: goto L_0012EE28;
    case 320u: goto L_0012EE34;
    case 321u: goto L_0012EE40;
    case 322u: goto L_0012EEA0;
    case 323u: goto L_0012F0B0;
    case 324u: goto L_0012F0E8;
    case 325u: goto L_0012F100;
    case 326u: goto L_0012F138;
    case 327u: goto L_0012F150;
    case 328u: goto L_0012F188;
    case 329u: goto L_0012F1A0;
    case 330u: goto L_0012F1D8;
    case 331u: goto L_0012F1F0;
    case 332u: goto L_0012F228;
    case 333u: goto L_0012F240;
    case 334u: goto L_0012F278;
    case 335u: goto L_0012F290;
    case 336u: goto L_0012F2DC;
    case 337u: goto L_0012F2F0;
    case 338u: goto L_0012F33C;
    case 339u: goto L_0012F350;
    case 340u: goto L_0012F39C;
    case 341u: goto L_0012F3B0;
    case 342u: goto L_0012F3FC;
    case 343u: goto L_0012F410;
    case 344u: goto L_0012F45C;
    case 345u: goto L_0012F470;
    case 346u: goto L_0012F4BC;
    case 347u: goto L_0012F4D0;
    case 348u: goto L_0012F51C;
    case 349u: goto L_0012F530;
    case 350u: goto L_0012F56C;
    case 351u: goto L_0012F57C;
    case 352u: goto L_0012F598;
    case 353u: goto L_0012F5D0;
    case 354u: goto L_0012F60C;
    case 355u: goto L_0012F61C;
    case 356u: goto L_0012F638;
    case 357u: goto L_0012F670;
    case 358u: goto L_0012F6AC;
    case 359u: goto L_0012F6BC;
    case 360u: goto L_0012F6D8;
    case 361u: goto L_0012F710;
    case 362u: goto L_0012F74C;
    case 363u: goto L_0012F75C;
    case 364u: goto L_0012F778;
    case 365u: goto L_0012F7B0;
    case 366u: goto L_0012F7D4;
    case 367u: goto L_0012F7E4;
    case 368u: goto L_0012F7F4;
    case 369u: goto L_0012F840;
    case 370u: goto L_0012F874;
    case 371u: goto L_0012F884;
    case 372u: goto L_0012F8D0;
    case 373u: goto L_0012F904;
    case 374u: goto L_0012F914;
    case 375u: goto L_0012F960;
    case 376u: goto L_0012F9B0;
    case 377u: goto L_0012FA10;
    case 378u: goto L_0012FA60;
    case 379u: goto L_0012FAB0;
    case 380u: goto L_0012FB00;
    case 381u: goto L_0012FB50;
    case 382u: goto L_0012FB88;
    case 383u: goto L_0012FBA4;
    case 384u: goto L_0012FBC8;
    case 385u: goto L_0012FBD0;
    case 386u: goto L_0012FBF8;
    case 387u: goto L_0012FC24;
    case 388u: goto L_0012FC50;
    case 389u: goto L_0012FC7C;
    case 390u: goto L_0012FCA8;
    case 391u: goto L_0012FCD4;
    case 392u: goto L_0012FD08;
    case 393u: goto L_0012FD1C;
    case 394u: goto L_0012FD24;
    case 395u: goto L_0012FD40;
    case 396u: goto L_0012FD60;
    case 397u: goto L_0012FD6C;
    case 398u: goto L_0012FD78;
    case 399u: goto L_0012FD84;
    case 400u: goto L_0012FD90;
    case 401u: goto L_0012FD9C;
    case 402u: goto L_0012FDD0;
    case 403u: goto L_0012FDF4;
    case 404u: goto L_0012FE08;
    case 405u: goto L_0012FE10;
    case 406u: goto L_0012FE24;
    case 407u: goto L_0012FE48;
    case 408u: goto L_0012FE6C;
    case 409u: goto L_0012FE78;
    case 410u: goto L_0012FEA0;
    case 411u: goto L_0012FEC0;
    case 412u: goto L_0012FEF0;
    case 413u: goto L_0012FF20;
    case 414u: goto L_0012FFAC;
    case 415u: goto L_0012FFC8;
    case 416u: goto L_0012FFE0;
    default: bad_entry(c, 0x0012C000u); return;
    }
L_0012C000:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_0012C034; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012C030; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012C030; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C030u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012C030u) [[unlikely]] return; }
L_0012C030:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0012C034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C03Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0012C03Cu) [[unlikely]] return; }
L_0012C03C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012C060:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C084u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0012C084u) [[unlikely]] return; }
L_0012C084:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 81u);  goto L_0012C098; }
    set32(c.r[16], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0012C098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0A0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x0012C0A0u) [[unlikely]] return; }
L_0012C0A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0B0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000A(c, 415u, depth + 1u); else { c.pc = 0x0012B500u; return; } if (c.pc != 0x0012C0B0u) [[unlikely]] return; }
L_0012C0B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_0012C0E4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012C0E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012C0E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0E0u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012C0E0u) [[unlikely]] return; }
L_0012C0E0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0012C0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0012C0ECu) [[unlikely]] return; }
L_0012C0EC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012C0F8u) [[unlikely]] return; }
L_0012C0F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012C110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012C168; } }
L_0012C130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[18], c.r[3].w[0] << 2);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C14Cu); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0012C14Cu) [[unlikely]] return; }
L_0012C14C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0012C168; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 2512u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0012C178; } }
L_0012C168:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C130u | kUnwind; return; } goto L_0012C130; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012C178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012C190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u - 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012C204; } }
L_0012C1BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012C1F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C1E4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0012C1E4u) [[unlikely]] return; }
L_0012C1E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0012C204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012C264; } }
L_0012C1F4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0012C200; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012C200:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0012C204:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C1BCu | kUnwind; return; } goto L_0012C1BC; }
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012C264; }
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[16], c.r[3].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C240u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0012C240u) [[unlikely]] return; }
L_0012C240:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C250u); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0012C250u) [[unlikely]] return; }
L_0012C250:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 2512u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.budget -= 5;
L_0012C264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012C280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 3036u)));  if (t) { goto L_0012C2C0; } }
L_0012C298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C2A0u);  if (depth < kMaxDepth) unit_0010(c, 113u, depth + 1u); else { c.pc = 0x00140D70u; return; } if (c.pc != 0x0012C2A0u) [[unlikely]] return; }
L_0012C2A0:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C2B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x0012C2B4u) [[unlikely]] return; }
L_0012C2B4:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.budget -= 3;
L_0012C2C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 3032u)));
    c.r[5].d[0] = c.r[16].d[0] << 32;
    set32(c.r[11], ld32((c.r[4].w[0] + 3036u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[11].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C298u | kUnwind; return; } goto L_0012C298; } }
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[4], c.r[4].w[0] + 3024u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; st32((c.r[29].w[0] + 44u), 0u);  if (t) { goto L_0012C364; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 3024u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[9], ld32((c.r[29].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[8], ld32((c.r[4].w[0] + 3028u)));
    st32((c.r[5].w[0] + 3024u), c.r[9].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[29].w[0] + 32u), c.r[10].w[0]);
    st32((c.r[6].w[0] + 3028u), c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[29].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[5].w[0] + 3036u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 3032u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 20;
L_0012C364:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0012C384; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012C380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C380u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0012C380u) [[unlikely]] return; }
L_0012C380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0012C384:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012C390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012C3F8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0012C3E4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0012C3E0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0012C3E0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012C3E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012C3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C3E0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0012C3E0u) [[unlikely]] return; }
L_0012C3E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0012C3E4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0012C3FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C3F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012C3F8u) [[unlikely]] return; }
L_0012C3F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012C3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012C410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 3032u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C434u); st32((c.r[29].w[0] + 60u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0010(c, 113u, depth + 1u); else { c.pc = 0x00140D70u; return; } if (c.pc != 0x0012C434u) [[unlikely]] return; }
L_0012C434:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C440u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 158u, depth + 1u); else { c.pc = 0x00141210u; return; } if (c.pc != 0x0012C440u) [[unlikely]] return; }
L_0012C440:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 3036u)));
    set32(c.r[4], c.r[4].w[0] + 3024u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C478u); set32(c.r[7], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0012C478u) [[unlikely]] return; }
L_0012C478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012C490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[28].w[0] - 29176u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C4ACu); st8((c.r[28].w[0] - 29172u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x0012C4ACu) [[unlikely]] return; }
L_0012C4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C4B4u); set32(c.r[4], c.r[28].w[0] - 29184u);  if (depth < kMaxDepth) unit_0012(c, 395u, depth + 1u); else { c.pc = 0x0014B1C0u; return; } if (c.pc != 0x0012C4B4u) [[unlikely]] return; }
L_0012C4B4:
    set32(c.r[16], 0u + 9u);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0012C4BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] - 1u);  goto L_0012C4F8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012C4F4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C4F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012C4F4u) [[unlikely]] return; }
L_0012C4F4:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_0012C4F8:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C4BCu | kUnwind; return; } goto L_0012C4BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C508u); set32(c.r[4], ld32((c.r[28].w[0] - 29196u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x0012C508u) [[unlikely]] return; }
L_0012C508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012C520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 3040u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C53Cu); set32(c.r[6], 0u + 2560u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0012C53Cu) [[unlikely]] return; }
L_0012C53C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C550u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0012C550u) [[unlikely]] return; }
L_0012C550:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C564u); set32(c.r[6], 0u + 200u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0012C564u) [[unlikely]] return; }
L_0012C564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C56Cu); set32(c.r[4], 0u + 560u);  if (depth < kMaxDepth) unit_0000(c, 26u, depth + 1u); else { c.pc = 0x001002E0u; return; } if (c.pc != 0x0012C56Cu) [[unlikely]] return; }
L_0012C56C:
    st32((c.r[28].w[0] - 29196u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C580u); set32(c.r[6], 0u + 560u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0012C580u) [[unlikely]] return; }
L_0012C580:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    st8((c.r[28].w[0] - 29172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[28].w[0] - 29184u);
    set32(c.r[5], c.r[5].w[0] - 14912u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    st32((c.r[28].w[0] - 29192u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C5A8u); st32((c.r[28].w[0] - 29188u), 0u);  if (depth < kMaxDepth) unit_0012(c, 398u, depth + 1u); else { c.pc = 0x0014B200u; return; } if (c.pc != 0x0012C5A8u) [[unlikely]] return; }
L_0012C5A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012C5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0012C63C; } }
L_0012C5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C5D8u); set32(c.r[4], c.r[28].w[0] - 29176u);  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x0012C5D8u) [[unlikely]] return; }
L_0012C5D8:
    set32(c.r[16], ld32((c.r[28].w[0] - 29192u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[28].w[0] - 29172u));  goto L_0012C640; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C60Cu); set32(c.r[8], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012C60Cu) [[unlikely]] return; }
L_0012C60C:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C618u); set32(c.r[4], c.r[28].w[0] - 29180u);  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x0012C618u) [[unlikely]] return; }
L_0012C618:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 29192u), c.r[2].w[0]);  if (t) { goto L_0012C628; } }
    st32((c.r[28].w[0] - 29188u), 0u);
    c.budget -= 1;
L_0012C628:
    set32(c.r[4], c.r[28].w[0] - 29180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C634u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x0012C634u) [[unlikely]] return; }
L_0012C634:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0012C63C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29172u));
    c.budget -= 1;
L_0012C640:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C5D0u | kUnwind; return; } goto L_0012C5D0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012C660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C680u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0012C680u) [[unlikely]] return; }
L_0012C680:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0012C6A0; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C69Cu); c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_000A(c, 41u, depth + 1u); else { c.pc = 0x00128650u; return; } if (c.pc != 0x0012C69Cu) [[unlikely]] return; }
L_0012C69C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0012C6A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012C6B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C6E4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0012C6E4u) [[unlikely]] return; }
L_0012C6E4:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_0012C700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C700u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0012C700u) [[unlikely]] return; }
L_0012C700:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[5].w[0]);  if (t) { goto L_0012C74C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0012C750; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C74Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0012C74Cu) [[unlikely]] return; }
L_0012C74C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0012C750:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012C770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_0012C7A4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0012C7A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C7A0u);  if (depth < kMaxDepth) unit_000B(c, 70u, depth + 1u); else { c.pc = 0x0012C940u; return; } if (c.pc != 0x0012C7A0u) [[unlikely]] return; }
L_0012C7A0:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_0012C7A4:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012C7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0012C804; } }
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_0012C7F8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C7F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 73u, depth + 1u); else { c.pc = 0x0012C9E0u; return; } if (c.pc != 0x0012C7F0u) [[unlikely]] return; }
L_0012C7F0:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_0012C7F8:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0012C808; } }
L_0012C804:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0012C808:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012C820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012C870; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26032u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0012C854; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0012C854:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012C86C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C86Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012C86Cu) [[unlikely]] return; }
L_0012C86C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012C870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012C880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26032u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0012C8B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31256u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0012C8BC; }
L_0012C8BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0012C8D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8ECu); set32(c.r[4], c.r[4].w[0] - 7752u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0012C8ECu) [[unlikely]] return; }
L_0012C8EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0012C8F4; }
L_0012C8F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012C910:
    set32(c.r[2], ld32((c.r[28].w[0] - 31172u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0012C920:
    set32(c.r[2], ld32((c.r[28].w[0] - 31256u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0012C930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31256u)));  c.pc = t; return; }
L_0012C940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] << 2);  if (t) { goto L_0012C994; } }
L_0012C96C:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C990u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012C990u) [[unlikely]] return; }
L_0012C990:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0012C994:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C96Cu | kUnwind; return; } goto L_0012C96C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012C9E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0012CA70; } }
L_0012CA0C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0012CA70; }
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0012CA58; } }
L_0012CA38:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA54u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012CA54u) [[unlikely]] return; }
L_0012CA54:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0012CA58:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CA38u | kUnwind; return; } goto L_0012CA38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012CA80; } }
L_0012CA70:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CA0Cu | kUnwind; return; } goto L_0012CA0C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0012CA80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012CAA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 5616u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CAC0u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0013(c, 42u, depth + 1u); else { c.pc = 0x0014C530u; return; } if (c.pc != 0x0012CAC0u) [[unlikely]] return; }
L_0012CAC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 29164u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CACCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0013AA50u; return; } if (c.pc != 0x0012CACCu) [[unlikely]] return; }
L_0012CACC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CADCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x0012CADCu) [[unlikely]] return; }
L_0012CADC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012CAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 5616u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB10u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0013(c, 42u, depth + 1u); else { c.pc = 0x0014C530u; return; } if (c.pc != 0x0012CB10u) [[unlikely]] return; }
L_0012CB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x0012CB18u) [[unlikely]] return; }
L_0012CB18:
    set32(c.r[4], ld32((c.r[28].w[0] - 29164u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB24u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 231u, depth + 1u); else { c.pc = 0x0013A620u; return; } if (c.pc != 0x0012CB24u) [[unlikely]] return; }
L_0012CB24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 44u);  goto L_0012CB68; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 44u);  goto L_0012CB58; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012CB54; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012CB54u) [[unlikely]] return; }
L_0012CB54:
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 1;
L_0012CB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x0012CB60u) [[unlikely]] return; }
L_0012CB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012CB74; } }
L_0012CB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x0012CB70u) [[unlikely]] return; }
L_0012CB70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012CB74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012CB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 5616u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBB0u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0013(c, 42u, depth + 1u); else { c.pc = 0x0014C530u; return; } if (c.pc != 0x0012CBB0u) [[unlikely]] return; }
L_0012CBB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 29164u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013AB70u; return; } if (c.pc != 0x0012CBBCu) [[unlikely]] return; }
L_0012CBBC:
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x0012CBC8u) [[unlikely]] return; }
L_0012CBC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012CBE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29164u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0012CC80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012CC4C; } }
L_0012CC04:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0012CC4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x0012CC20u) [[unlikely]] return; }
L_0012CC20:
    set32(c.r[4], ld32((c.r[28].w[0] - 29164u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC2Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 231u, depth + 1u); else { c.pc = 0x0013A620u; return; } if (c.pc != 0x0012CC2Cu) [[unlikely]] return; }
L_0012CC2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0012CC48; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012CC48u) [[unlikely]] return; }
L_0012CC48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0012CC4C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29164u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CC04u | kUnwind; return; } goto L_0012CC04; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 29164u), 0u);  goto L_0012CC7C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC78u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012CC78u) [[unlikely]] return; }
L_0012CC78:
    st32((c.r[28].w[0] - 29164u), 0u);
    c.budget -= 1;
L_0012CC7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0012CC80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012CC90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 88u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CCB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0012CCB4u) [[unlikely]] return; }
L_0012CCB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 29164u), c.r[2].w[0]);  goto L_0012CCE0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 7650u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CCDCu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 319u, depth + 1u); else { c.pc = 0x0013AFC0u; return; } if (c.pc != 0x0012CCDCu) [[unlikely]] return; }
L_0012CCDC:
    st32((c.r[28].w[0] - 29164u), c.r[2].w[0]);
    c.budget -= 1;
L_0012CCE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012CD00:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD34u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0012CD34u) [[unlikely]] return; }
L_0012CD34:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 256u);  if (t) { goto L_0012CD70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD48u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0012CD48u) [[unlikely]] return; }
L_0012CD48:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0012CD60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD5Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0012CD5Cu) [[unlikely]] return; }
L_0012CD5C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0012CD60:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  goto L_0012CD74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD70u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0012CD70u) [[unlikely]] return; }
L_0012CD70:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 1;
L_0012CD74:
    st32((c.r[29].w[0] + 260u), 0u);
    st32((c.r[29].w[0] + 264u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD84u); st32((c.r[29].w[0] + 268u), 0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0012CD84u) [[unlikely]] return; }
L_0012CD84:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_0012CDC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD98u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0012CD98u) [[unlikely]] return; }
L_0012CD98:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0012CDB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDACu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0012CDACu) [[unlikely]] return; }
L_0012CDAC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0012CDB0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  goto L_0012CDC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDC0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0012CDC0u) [[unlikely]] return; }
L_0012CDC0:
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 1;
L_0012CDC4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 244u), 0u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 248u), 0u);
    set32(c.r[6], 0u + 124u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDE0u); st32((c.r[29].w[0] + 252u), 0u);  if (depth < kMaxDepth) unit_000F(c, 408u, depth + 1u); else { c.pc = 0x0013FEF0u; return; } if (c.pc != 0x0012CDE0u) [[unlikely]] return; }
L_0012CDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CDE8u); set32(c.r[16], ld32((c.r[29].w[0] + 264u)));  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0012CDE8u) [[unlikely]] return; }
L_0012CDE8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE04u); set32(c.r[6], c.r[6].w[0] - 7504u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x0012CE04u) [[unlikely]] return; }
L_0012CE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0012D1D4; } }
L_0012CE0C:
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0012CE28; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0012CE28:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE34u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_000F(c, 408u, depth + 1u); else { c.pc = 0x0013FEF0u; return; } if (c.pc != 0x0012CE34u) [[unlikely]] return; }
L_0012CE34:
    set32(c.r[17], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[17].w[0] + 16u);  if (t) { goto L_0012CE64; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0012CE68; } }
L_0012CE64:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0012CE68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_0012CE78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_0012CE7C; } }
L_0012CE78:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0012CE7C:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 42ull;
    c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0012CEBC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_0012CEA8; }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0012CEA8:
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CEB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 198u, depth + 1u); else { c.pc = 0x00121790u; return; } if (c.pc != 0x0012CEB8u) [[unlikely]] return; }
L_0012CEB8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0012CEBC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 1u);  goto L_0012CECC; }
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0012CECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CED4u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0012CED4u) [[unlikely]] return; }
L_0012CED4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0012D180; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CEF0u); set32(c.r[5], c.r[5].w[0] - 7520u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0012CEF0u) [[unlikely]] return; }
L_0012CEF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0012CF00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 512u);  if (t) { goto L_0012CFC0; } }
L_0012CF00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF0Cu); set32(c.r[5], c.r[5].w[0] - 7528u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0012CF0Cu) [[unlikely]] return; }
L_0012CF0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0012CF1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_0012CFC0; } }
L_0012CF1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF28u); set32(c.r[5], c.r[5].w[0] - 7536u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0012CF28u) [[unlikely]] return; }
L_0012CF28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0012CF38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012CFC0; } }
L_0012CF38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF44u); set32(c.r[5], c.r[5].w[0] - 7544u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0012CF44u) [[unlikely]] return; }
L_0012CF44:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0012CF54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0012CFC0; } }
L_0012CF54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF60u); set32(c.r[5], c.r[5].w[0] - 7552u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0012CF60u) [[unlikely]] return; }
L_0012CF60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0012CF70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0012CFC0; } }
L_0012CF70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF7Cu); set32(c.r[5], c.r[5].w[0] - 7560u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0012CF7Cu) [[unlikely]] return; }
L_0012CF7C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0012CF8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0012CFC0; } }
L_0012CF8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF98u); set32(c.r[5], c.r[5].w[0] - 7576u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0012CF98u) [[unlikely]] return; }
L_0012CF98:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0012CFA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_0012CFC0; } }
L_0012CFA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFB4u); set32(c.r[5], c.r[5].w[0] - 7584u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0012CFB4u) [[unlikely]] return; }
L_0012CFB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0012CFC0; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_0012CFC0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u - 1025u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], 0u + 64u);
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0012D0B4; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0012D0A4; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0012D094; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0012D084; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0012D074; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0012D064; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0012D054; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0012D044; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012D0C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D0C0; } }
L_0012D044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D04Cu);  if (depth < kMaxDepth) unit_000B(c, 246u, depth + 1u); else { c.pc = 0x0012E1D0u; return; } if (c.pc != 0x0012D04Cu) [[unlikely]] return; }
L_0012D04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012D0C0; } }
L_0012D054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D05Cu);  if (depth < kMaxDepth) unit_000B(c, 227u, depth + 1u); else { c.pc = 0x0012DF90u; return; } if (c.pc != 0x0012D05Cu) [[unlikely]] return; }
L_0012D05C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012D0C0; } }
L_0012D064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D06Cu);  if (depth < kMaxDepth) unit_000B(c, 216u, depth + 1u); else { c.pc = 0x0012DDD0u; return; } if (c.pc != 0x0012D06Cu) [[unlikely]] return; }
L_0012D06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012D0C0; } }
L_0012D074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D07Cu);  if (depth < kMaxDepth) unit_000B(c, 205u, depth + 1u); else { c.pc = 0x0012DC10u; return; } if (c.pc != 0x0012D07Cu) [[unlikely]] return; }
L_0012D07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012D0C0; } }
L_0012D084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D08Cu);  if (depth < kMaxDepth) unit_000B(c, 194u, depth + 1u); else { c.pc = 0x0012DA50u; return; } if (c.pc != 0x0012D08Cu) [[unlikely]] return; }
L_0012D08C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012D0C0; } }
L_0012D094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D09Cu);  if (depth < kMaxDepth) unit_000B(c, 183u, depth + 1u); else { c.pc = 0x0012D880u; return; } if (c.pc != 0x0012D09Cu) [[unlikely]] return; }
L_0012D09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012D0C0; } }
L_0012D0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D0ACu);  if (depth < kMaxDepth) unit_000B(c, 163u, depth + 1u); else { c.pc = 0x0012D5A0u; return; } if (c.pc != 0x0012D0ACu) [[unlikely]] return; }
L_0012D0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012D0C0; } }
L_0012D0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D0BCu);  if (depth < kMaxDepth) unit_000B(c, 152u, depth + 1u); else { c.pc = 0x0012D3D0u; return; } if (c.pc != 0x0012D0BCu) [[unlikely]] return; }
L_0012D0BC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0012D0C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D180; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_0012D118; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D0DCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0012D0DCu) [[unlikely]] return; }
L_0012D0DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 160u));  goto L_0012D0F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 164u)));  if (t) { goto L_0012D0FC; } }
L_0012D0F4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0012D0FC:
    c.r[22].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D10Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012D10Cu) [[unlikely]] return; }
L_0012D10C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0012D180; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0012D118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D120u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0012D120u) [[unlikely]] return; }
L_0012D120:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[9], c.r[18].w[0] + 1u);  goto L_0012D134; }
    set32(c.r[9], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_0012D134:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[29].w[0] + 145u);  goto L_0012D148; }
    set32(c.r[8], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0012D148:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[17].w[0] + 1u);  goto L_0012D15C; }
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0012D15C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D170u); set32(c.r[6], c.r[6].w[0] - 7502u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0012D170u) [[unlikely]] return; }
L_0012D170:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D17Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012D17Cu) [[unlikely]] return; }
L_0012D17C:
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0012D180:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0012D1D4; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012D1D0; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[18].w[0] + 1u);  goto L_0012D1A4; }
    set32(c.r[8], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_0012D1A4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[17].w[0] + 1u);  goto L_0012D1B8; }
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0012D1B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1CCu); set32(c.r[6], c.r[6].w[0] - 7458u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0012D1CCu) [[unlikely]] return; }
L_0012D1CC:
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0012D1D0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0012D1D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 268u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CE0Cu | kUnwind; return; } goto L_0012CE0C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_0012D360; } }
L_0012D1F8:
    set32(c.r[3], c.r[19].w[0] << 5);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0012D2EC; } }
L_0012D20C:
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0012D228; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0012D228:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D234u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_000F(c, 408u, depth + 1u); else { c.pc = 0x0013FEF0u; return; } if (c.pc != 0x0012D234u) [[unlikely]] return; }
L_0012D234:
    set32(c.r[20], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_0012D260; }
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0012D260:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_0012D270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[20].w[0] + 1u);  if (t) { goto L_0012D274; } }
L_0012D270:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0012D274:
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u + 42u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_0012D2B0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_0012D29C; }
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0012D29C:
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D2ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 198u, depth + 1u); else { c.pc = 0x00121790u; return; } if (c.pc != 0x0012D2ACu) [[unlikely]] return; }
L_0012D2AC:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_0012D2B0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0012D2C0; }
    set32(c.r[20], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0012D2C0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D2D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012D2D0u) [[unlikely]] return; }
L_0012D2D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D2DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 141u, depth + 1u); else { c.pc = 0x003B9868u; return; } if (c.pc != 0x0012D2DCu) [[unlikely]] return; }
L_0012D2DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0012D2EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012D2FC; } }
L_0012D2EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 268u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D20Cu | kUnwind; return; } goto L_0012D20C; }
L_0012D2FC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0012D360; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D310u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0012D310u) [[unlikely]] return; }
L_0012D310:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 129u);  goto L_0012D324; }
    set32(c.r[17], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0012D324:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D334u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012D334u) [[unlikely]] return; }
L_0012D334:
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 7399u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D350u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0012D350u) [[unlikely]] return; }
L_0012D350:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D35Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012D35Cu) [[unlikely]] return; }
L_0012D35C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0012D360:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D1F8u | kUnwind; return; } goto L_0012D1F8; }
    c.r[2].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D384u); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0012D384u) [[unlikely]] return; }
L_0012D384:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x0012D390u) [[unlikely]] return; }
L_0012D390:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D39Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x0012D39Cu) [[unlikely]] return; }
L_0012D39C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0012D3D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012D410; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 20u);  if (t) { goto L_0012D410; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_0012D410:
    set32(c.r[3], 0u - 1025u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_0012D568; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D550; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D538; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D520; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D508; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D4F0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D4D8; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[6].d[0] + 0ull;  goto L_0012D4C0; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D498; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012D58C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D588; } }
L_0012D498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4A0u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x0012D4A0u) [[unlikely]] return; }
L_0012D4A0:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4B0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 228u, depth + 1u); else { c.pc = 0x00129D00u; return; } if (c.pc != 0x0012D4B0u) [[unlikely]] return; }
L_0012D4B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D588; } }
L_0012D4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4C8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 228u, depth + 1u); else { c.pc = 0x00129D00u; return; } if (c.pc != 0x0012D4C8u) [[unlikely]] return; }
L_0012D4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D588; } }
L_0012D4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4E0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 227u, depth + 1u); else { c.pc = 0x00129CF0u; return; } if (c.pc != 0x0012D4E0u) [[unlikely]] return; }
L_0012D4E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D588; } }
L_0012D4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4F8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 226u, depth + 1u); else { c.pc = 0x00129CE0u; return; } if (c.pc != 0x0012D4F8u) [[unlikely]] return; }
L_0012D4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D588; } }
L_0012D508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D510u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 225u, depth + 1u); else { c.pc = 0x00129CD0u; return; } if (c.pc != 0x0012D510u) [[unlikely]] return; }
L_0012D510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D588; } }
L_0012D520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D528u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 224u, depth + 1u); else { c.pc = 0x00129CC0u; return; } if (c.pc != 0x0012D528u) [[unlikely]] return; }
L_0012D528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D588; } }
L_0012D538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D540u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 223u, depth + 1u); else { c.pc = 0x00129CB0u; return; } if (c.pc != 0x0012D540u) [[unlikely]] return; }
L_0012D540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D588; } }
L_0012D550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D558u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 222u, depth + 1u); else { c.pc = 0x00129C80u; return; } if (c.pc != 0x0012D558u) [[unlikely]] return; }
L_0012D558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D588; } }
L_0012D568:
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D57Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 221u, depth + 1u); else { c.pc = 0x00129C70u; return; } if (c.pc != 0x0012D57Cu) [[unlikely]] return; }
L_0012D57C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D588; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012D588:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012D58C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012D5A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012D5E4; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 20u);  if (t) { goto L_0012D5E4; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_0012D5E4:
    set32(c.r[3], 0u - 1025u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_0012D73C; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D724; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D70C; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D6F4; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D6DC; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D6C4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D6AC; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[6].d[0] + 0ull;  goto L_0012D694; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D66C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012D760; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D75C; } }
L_0012D66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D674u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x0012D674u) [[unlikely]] return; }
L_0012D674:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D684u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000B(c, 181u, depth + 1u); else { c.pc = 0x0012D800u; return; } if (c.pc != 0x0012D684u) [[unlikely]] return; }
L_0012D684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D75C; } }
L_0012D694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D69Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000B(c, 181u, depth + 1u); else { c.pc = 0x0012D800u; return; } if (c.pc != 0x0012D69Cu) [[unlikely]] return; }
L_0012D69C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D75C; } }
L_0012D6AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D6B4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000B(c, 180u, depth + 1u); else { c.pc = 0x0012D7F0u; return; } if (c.pc != 0x0012D6B4u) [[unlikely]] return; }
L_0012D6B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D75C; } }
L_0012D6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D6CCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000B(c, 179u, depth + 1u); else { c.pc = 0x0012D7E0u; return; } if (c.pc != 0x0012D6CCu) [[unlikely]] return; }
L_0012D6CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D75C; } }
L_0012D6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D6E4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000B(c, 178u, depth + 1u); else { c.pc = 0x0012D7D0u; return; } if (c.pc != 0x0012D6E4u) [[unlikely]] return; }
L_0012D6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D75C; } }
L_0012D6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D6FCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000B(c, 177u, depth + 1u); else { c.pc = 0x0012D7C0u; return; } if (c.pc != 0x0012D6FCu) [[unlikely]] return; }
L_0012D6FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D75C; } }
L_0012D70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D714u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000B(c, 176u, depth + 1u); else { c.pc = 0x0012D790u; return; } if (c.pc != 0x0012D714u) [[unlikely]] return; }
L_0012D714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D75C; } }
L_0012D724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D72Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000B(c, 175u, depth + 1u); else { c.pc = 0x0012D780u; return; } if (c.pc != 0x0012D72Cu) [[unlikely]] return; }
L_0012D72C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D75C; } }
L_0012D73C:
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D750u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 174u, depth + 1u); else { c.pc = 0x0012D770u; return; } if (c.pc != 0x0012D750u) [[unlikely]] return; }
L_0012D750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D75C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012D75C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012D760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012D770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012D780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012D790:
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[3]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 12u), c.f[1]);  c.pc = t; return; }
L_0012D7C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012D7D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012D7E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012D7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012D800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 40u);
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[5], c.r[5].w[0] - 12208u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[8], c.r[29].w[0] + 36u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D840u); set32(c.r[9], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x0012D840u) [[unlikely]] return; }
L_0012D840:
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012D880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012D8BC; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 20u);  if (t) { goto L_0012D8BC; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_0012D8BC:
    set32(c.r[3], 0u - 1025u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_0012DA14; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D9FC; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D9E4; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D9CC; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D9B4; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D99C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D984; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[6].d[0] + 0ull;  goto L_0012D96C; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012D944; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012DA38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DA34; } }
L_0012D944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D94Cu);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x0012D94Cu) [[unlikely]] return; }
L_0012D94C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D95Cu); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000A(c, 219u, depth + 1u); else { c.pc = 0x00129C00u; return; } if (c.pc != 0x0012D95Cu) [[unlikely]] return; }
L_0012D95C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DA34; } }
L_0012D96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D974u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000A(c, 219u, depth + 1u); else { c.pc = 0x00129C00u; return; } if (c.pc != 0x0012D974u) [[unlikely]] return; }
L_0012D974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DA34; } }
L_0012D984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D98Cu); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000A(c, 218u, depth + 1u); else { c.pc = 0x00129BF0u; return; } if (c.pc != 0x0012D98Cu) [[unlikely]] return; }
L_0012D98C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DA34; } }
L_0012D99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D9A4u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000A(c, 217u, depth + 1u); else { c.pc = 0x00129BE0u; return; } if (c.pc != 0x0012D9A4u) [[unlikely]] return; }
L_0012D9A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DA34; } }
L_0012D9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D9BCu); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000A(c, 216u, depth + 1u); else { c.pc = 0x00129BD0u; return; } if (c.pc != 0x0012D9BCu) [[unlikely]] return; }
L_0012D9BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DA34; } }
L_0012D9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D9D4u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000A(c, 215u, depth + 1u); else { c.pc = 0x00129BB0u; return; } if (c.pc != 0x0012D9D4u) [[unlikely]] return; }
L_0012D9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DA34; } }
L_0012D9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D9ECu); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000A(c, 214u, depth + 1u); else { c.pc = 0x00129BA0u; return; } if (c.pc != 0x0012D9ECu) [[unlikely]] return; }
L_0012D9EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DA34; } }
L_0012D9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DA04u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000A(c, 213u, depth + 1u); else { c.pc = 0x00129B90u; return; } if (c.pc != 0x0012DA04u) [[unlikely]] return; }
L_0012DA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DA34; } }
L_0012DA14:
    set32(c.r[5], c.r[29].w[0] + 40u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DA28u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 212u, depth + 1u); else { c.pc = 0x00129B80u; return; } if (c.pc != 0x0012DA28u) [[unlikely]] return; }
L_0012DA28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DA34; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012DA34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012DA38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012DA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012DA80; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 20u);  if (t) { goto L_0012DA80; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_0012DA80:
    set32(c.r[3], 0u - 1025u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_0012DBD8; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DBC0; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DBA8; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DB90; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DB78; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DB60; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DB48; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[6].d[0] + 0ull;  goto L_0012DB30; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DB08; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012DBFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DBF8; } }
L_0012DB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB10u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x0012DB10u) [[unlikely]] return; }
L_0012DB10:
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB20u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 293u, depth + 1u); else { c.pc = 0x0012A6B0u; return; } if (c.pc != 0x0012DB20u) [[unlikely]] return; }
L_0012DB20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DBF8; } }
L_0012DB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB38u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 293u, depth + 1u); else { c.pc = 0x0012A6B0u; return; } if (c.pc != 0x0012DB38u) [[unlikely]] return; }
L_0012DB38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DBF8; } }
L_0012DB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB50u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 292u, depth + 1u); else { c.pc = 0x0012A680u; return; } if (c.pc != 0x0012DB50u) [[unlikely]] return; }
L_0012DB50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DBF8; } }
L_0012DB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB68u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 291u, depth + 1u); else { c.pc = 0x0012A660u; return; } if (c.pc != 0x0012DB68u) [[unlikely]] return; }
L_0012DB68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DBF8; } }
L_0012DB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB80u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 290u, depth + 1u); else { c.pc = 0x0012A650u; return; } if (c.pc != 0x0012DB80u) [[unlikely]] return; }
L_0012DB80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DBF8; } }
L_0012DB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB98u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 289u, depth + 1u); else { c.pc = 0x0012A640u; return; } if (c.pc != 0x0012DB98u) [[unlikely]] return; }
L_0012DB98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DBF8; } }
L_0012DBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DBB0u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 288u, depth + 1u); else { c.pc = 0x0012A630u; return; } if (c.pc != 0x0012DBB0u) [[unlikely]] return; }
L_0012DBB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DBF8; } }
L_0012DBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DBC8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 287u, depth + 1u); else { c.pc = 0x0012A620u; return; } if (c.pc != 0x0012DBC8u) [[unlikely]] return; }
L_0012DBC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DBF8; } }
L_0012DBD8:
    set32(c.r[5], c.r[29].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DBECu); st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 286u, depth + 1u); else { c.pc = 0x0012A610u; return; } if (c.pc != 0x0012DBECu) [[unlikely]] return; }
L_0012DBEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DBF8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012DBF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012DBFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012DC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012DC40; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 20u);  if (t) { goto L_0012DC40; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_0012DC40:
    set32(c.r[3], 0u - 1025u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_0012DD98; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DD80; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DD68; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DD50; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DD38; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DD20; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DD08; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[6].d[0] + 0ull;  goto L_0012DCF0; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DCC8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012DDBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DDB8; } }
L_0012DCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCD0u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x0012DCD0u) [[unlikely]] return; }
L_0012DCD0:
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCE0u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 272u, depth + 1u); else { c.pc = 0x0012A3C0u; return; } if (c.pc != 0x0012DCE0u) [[unlikely]] return; }
L_0012DCE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DDB8; } }
L_0012DCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCF8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 272u, depth + 1u); else { c.pc = 0x0012A3C0u; return; } if (c.pc != 0x0012DCF8u) [[unlikely]] return; }
L_0012DCF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DDB8; } }
L_0012DD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD10u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 271u, depth + 1u); else { c.pc = 0x0012A3B0u; return; } if (c.pc != 0x0012DD10u) [[unlikely]] return; }
L_0012DD10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DDB8; } }
L_0012DD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD28u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 270u, depth + 1u); else { c.pc = 0x0012A3A0u; return; } if (c.pc != 0x0012DD28u) [[unlikely]] return; }
L_0012DD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DDB8; } }
L_0012DD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD40u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 269u, depth + 1u); else { c.pc = 0x0012A380u; return; } if (c.pc != 0x0012DD40u) [[unlikely]] return; }
L_0012DD40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DDB8; } }
L_0012DD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD58u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 268u, depth + 1u); else { c.pc = 0x0012A370u; return; } if (c.pc != 0x0012DD58u) [[unlikely]] return; }
L_0012DD58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DDB8; } }
L_0012DD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD70u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 267u, depth + 1u); else { c.pc = 0x0012A360u; return; } if (c.pc != 0x0012DD70u) [[unlikely]] return; }
L_0012DD70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DDB8; } }
L_0012DD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD88u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 266u, depth + 1u); else { c.pc = 0x0012A350u; return; } if (c.pc != 0x0012DD88u) [[unlikely]] return; }
L_0012DD88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DDB8; } }
L_0012DD98:
    set32(c.r[5], c.r[29].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDACu); st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 265u, depth + 1u); else { c.pc = 0x0012A340u; return; } if (c.pc != 0x0012DDACu) [[unlikely]] return; }
L_0012DDAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DDB8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012DDB8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012DDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012DDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012DE00; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 20u);  if (t) { goto L_0012DE00; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_0012DE00:
    set32(c.r[3], 0u - 1025u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_0012DF58; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DF40; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DF28; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DF10; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DEF8; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DEE0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DEC8; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[6].d[0] + 0ull;  goto L_0012DEB0; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012DE88; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012DF7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DF78; } }
L_0012DE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DE90u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x0012DE90u) [[unlikely]] return; }
L_0012DE90:
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEA0u); set32(c.r[5], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_000A(c, 251u, depth + 1u); else { c.pc = 0x0012A0F0u; return; } if (c.pc != 0x0012DEA0u) [[unlikely]] return; }
L_0012DEA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DF78; } }
L_0012DEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEB8u); set32(c.r[5], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_000A(c, 251u, depth + 1u); else { c.pc = 0x0012A0F0u; return; } if (c.pc != 0x0012DEB8u) [[unlikely]] return; }
L_0012DEB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DF78; } }
L_0012DEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DED0u); set32(c.r[5], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_000A(c, 250u, depth + 1u); else { c.pc = 0x0012A0E0u; return; } if (c.pc != 0x0012DED0u) [[unlikely]] return; }
L_0012DED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DF78; } }
L_0012DEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEE8u); set32(c.r[5], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_000A(c, 249u, depth + 1u); else { c.pc = 0x0012A0C0u; return; } if (c.pc != 0x0012DEE8u) [[unlikely]] return; }
L_0012DEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DF78; } }
L_0012DEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF00u); set32(c.r[5], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_000A(c, 248u, depth + 1u); else { c.pc = 0x0012A090u; return; } if (c.pc != 0x0012DF00u) [[unlikely]] return; }
L_0012DF00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DF78; } }
L_0012DF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF18u); set32(c.r[5], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_000A(c, 247u, depth + 1u); else { c.pc = 0x0012A080u; return; } if (c.pc != 0x0012DF18u) [[unlikely]] return; }
L_0012DF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DF78; } }
L_0012DF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF30u); set32(c.r[5], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_000A(c, 246u, depth + 1u); else { c.pc = 0x0012A070u; return; } if (c.pc != 0x0012DF30u) [[unlikely]] return; }
L_0012DF30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DF78; } }
L_0012DF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF48u); set32(c.r[5], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012A060u; return; } if (c.pc != 0x0012DF48u) [[unlikely]] return; }
L_0012DF48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012DF78; } }
L_0012DF58:
    set32(c.r[5], c.r[29].w[0] + 47u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF6Cu); st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 244u, depth + 1u); else { c.pc = 0x0012A050u; return; } if (c.pc != 0x0012DF6Cu) [[unlikely]] return; }
L_0012DF6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012DF78; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012DF78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012DF7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012DF90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012DFC0; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 20u);  if (t) { goto L_0012DFC0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_0012DFC0:
    set32(c.r[3], 0u - 1025u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_0012E118; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012E100; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012E0E8; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012E0D0; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012E0B8; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012E0A0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012E088; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[6].d[0] + 0ull;  goto L_0012E070; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_0012E048; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012E13C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E138; } }
L_0012E048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E050u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x0012E050u) [[unlikely]] return; }
L_0012E050:
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E060u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000B(c, 245u, depth + 1u); else { c.pc = 0x0012E1C0u; return; } if (c.pc != 0x0012E060u) [[unlikely]] return; }
L_0012E060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E138; } }
L_0012E070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E078u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000B(c, 245u, depth + 1u); else { c.pc = 0x0012E1C0u; return; } if (c.pc != 0x0012E078u) [[unlikely]] return; }
L_0012E078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E138; } }
L_0012E088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E090u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000B(c, 244u, depth + 1u); else { c.pc = 0x0012E1B0u; return; } if (c.pc != 0x0012E090u) [[unlikely]] return; }
L_0012E090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E138; } }
L_0012E0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0A8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000B(c, 243u, depth + 1u); else { c.pc = 0x0012E1A0u; return; } if (c.pc != 0x0012E0A8u) [[unlikely]] return; }
L_0012E0A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E138; } }
L_0012E0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0C0u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000B(c, 242u, depth + 1u); else { c.pc = 0x0012E190u; return; } if (c.pc != 0x0012E0C0u) [[unlikely]] return; }
L_0012E0C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E138; } }
L_0012E0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0D8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000B(c, 241u, depth + 1u); else { c.pc = 0x0012E180u; return; } if (c.pc != 0x0012E0D8u) [[unlikely]] return; }
L_0012E0D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E138; } }
L_0012E0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0F0u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000B(c, 240u, depth + 1u); else { c.pc = 0x0012E170u; return; } if (c.pc != 0x0012E0F0u) [[unlikely]] return; }
L_0012E0F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E138; } }
L_0012E100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E108u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000B(c, 239u, depth + 1u); else { c.pc = 0x0012E160u; return; } if (c.pc != 0x0012E108u) [[unlikely]] return; }
L_0012E108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E138; } }
L_0012E118:
    set32(c.r[5], c.r[29].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E12Cu); st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 238u, depth + 1u); else { c.pc = 0x0012E150u; return; } if (c.pc != 0x0012E12Cu) [[unlikely]] return; }
L_0012E12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E138; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E138:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012E13C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012E150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012E160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012E170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012E180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012E190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012E1A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012E1B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012E1C0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0012E1D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1ECu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0012E1ECu) [[unlikely]] return; }
L_0012E1EC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012E210; } }
    c.r[2].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 20u);  if (t) { goto L_0012E210; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0012E210:
    set32(c.r[3], 0u - 1025u);
    set32(c.r[2], 0u + 128u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_0012E368; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012E350; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012E338; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012E320; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012E308; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012E2F0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012E2D8; }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], c.r[29].w[0] + 48u);  goto L_0012E2C0; }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0012E298; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_0012E38C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E388; } }
L_0012E298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2A0u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x0012E2A0u) [[unlikely]] return; }
L_0012E2A0:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2B0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0004(c, 300u, depth + 1u); else { c.pc = 0x00113610u; return; } if (c.pc != 0x0012E2B0u) [[unlikely]] return; }
L_0012E2B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E388; } }
L_0012E2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2C8u);  if (depth < kMaxDepth) unit_0004(c, 300u, depth + 1u); else { c.pc = 0x00113610u; return; } if (c.pc != 0x0012E2C8u) [[unlikely]] return; }
L_0012E2C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E388; } }
L_0012E2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2E0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0004(c, 297u, depth + 1u); else { c.pc = 0x001135A0u; return; } if (c.pc != 0x0012E2E0u) [[unlikely]] return; }
L_0012E2E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E388; } }
L_0012E2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2F8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0004(c, 293u, depth + 1u); else { c.pc = 0x00113530u; return; } if (c.pc != 0x0012E2F8u) [[unlikely]] return; }
L_0012E2F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E388; } }
L_0012E308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E310u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0004(c, 288u, depth + 1u); else { c.pc = 0x001134B0u; return; } if (c.pc != 0x0012E310u) [[unlikely]] return; }
L_0012E310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E388; } }
L_0012E320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E328u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0004(c, 281u, depth + 1u); else { c.pc = 0x00113400u; return; } if (c.pc != 0x0012E328u) [[unlikely]] return; }
L_0012E328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E388; } }
L_0012E338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E340u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0004(c, 273u, depth + 1u); else { c.pc = 0x00113340u; return; } if (c.pc != 0x0012E340u) [[unlikely]] return; }
L_0012E340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E388; } }
L_0012E350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E358u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0004(c, 269u, depth + 1u); else { c.pc = 0x001132A0u; return; } if (c.pc != 0x0012E358u) [[unlikely]] return; }
L_0012E358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E388; } }
L_0012E368:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E37Cu); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 268u, depth + 1u); else { c.pc = 0x00113290u; return; } if (c.pc != 0x0012E37Cu) [[unlikely]] return; }
L_0012E37C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012E388; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E388:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0012E38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E394u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0012E394u) [[unlikely]] return; }
L_0012E394:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012E3B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 9;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_0012E3E0; }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_0012E3E0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] - 1u);  if (t) { goto L_0012E3F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_0012E3F4; } }
L_0012E3F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_0012E3F4:
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 42ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0012E444; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_0012E42C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0012E434; } }
L_0012E42C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0012E434:
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E440u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 198u, depth + 1u); else { c.pc = 0x00121790u; return; } if (c.pc != 0x0012E440u) [[unlikely]] return; }
L_0012E440:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0012E444:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012E498; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E480u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x0012E480u) [[unlikely]] return; }
L_0012E480:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0012E49C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E498u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012E498u) [[unlikely]] return; }
L_0012E498:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012E49C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012E4B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 7232u);  c.pc = t; return; }
L_0012E4C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31252u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0012E4DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0012E4EC; } }
L_0012E4DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E4E4u);  if (depth < kMaxDepth) unit_000D(c, 144u, depth + 1u); else { c.pc = 0x001355D0u; return; } if (c.pc != 0x0012E4E4u) [[unlikely]] return; }
L_0012E4E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0012E4EC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E524u); set32(c.r[4], c.r[4].w[0] - 7264u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0012E524u) [[unlikely]] return; }
L_0012E524:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0012E534; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012E544; } }
L_0012E534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E53Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 145u, depth + 1u); else { c.pc = 0x001355F0u; return; } if (c.pc != 0x0012E53Cu) [[unlikely]] return; }
L_0012E53C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0012E544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012E560:
    set32(c.r[2], ld32((c.r[28].w[0] - 31220u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0012E570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31252u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0012E58C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E594; } }
L_0012E58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E594u);  if (depth < kMaxDepth) unit_000D(c, 148u, depth + 1u); else { c.pc = 0x00135640u; return; } if (c.pc != 0x0012E594u) [[unlikely]] return; }
L_0012E594:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E5A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31252u)));  c.pc = t; return; }
L_0012E5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012E5EC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25904u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0012E5E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5E8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012E5E8u) [[unlikely]] return; }
L_0012E5E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012E5EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012E600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012E650; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25920u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0012E634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25904u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0012E634:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012E64C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E64Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012E64Cu) [[unlikely]] return; }
L_0012E64C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012E650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012E660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0012E6C8; } }
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E694u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 281u, depth + 1u); else { c.pc = 0x0012E6F0u; return; } if (c.pc != 0x0012E694u) [[unlikely]] return; }
L_0012E694:
    set32(c.r[5], c.r[16].w[0] - 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E6A4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 281u, depth + 1u); else { c.pc = 0x0012E6F0u; return; } if (c.pc != 0x0012E6A4u) [[unlikely]] return; }
L_0012E6A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012E6CC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0012E6C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012E6CC; } }
L_0012E6C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E6CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012E6F0:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] << 3);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0012E720; } }
    set32(c.r[7], c.r[7].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0012E720:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0012E740:
    c.f[4] = fp::sub(c.f[13], c.f[12]);
    c.f[0] = 0u;
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    c.f[3] = fp::sub(c.f[14], c.f[13]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E76C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E76C:
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E790; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E790:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012E7A0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[5].w[0]));  goto L_0012E7F4; }
L_0012E7A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E7D0; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0012E7D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E828; } }
L_0012E7D0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012E828; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E7E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E828; } }
L_0012E7E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E828; } }
L_0012E7F4:
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 31240u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E828; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E830:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 160u), 0u);
    c.f[23] = c.f[12];
    st32((c.r[29].w[0] + 164u), 0u);
    c.f[22] = c.f[13];
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E88Cu); c.f[21] = c.f[14];  if (depth < kMaxDepth) unit_000D(c, 486u, depth + 1u); else { c.pc = 0x00137FE0u; return; } if (c.pc != 0x0012E88Cu) [[unlikely]] return; }
L_0012E88C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E8ACu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000D(c, 486u, depth + 1u); else { c.pc = 0x00137FE0u; return; } if (c.pc != 0x0012E8ACu) [[unlikely]] return; }
L_0012E8AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E8CCu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000D(c, 486u, depth + 1u); else { c.pc = 0x00137FE0u; return; } if (c.pc != 0x0012E8CCu) [[unlikely]] return; }
L_0012E8CC:
    c.f[20] = fp::sub(c.f[22], c.f[23]);
    c.f[24] = ld32((c.r[28].w[0] - 31244u));
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E8E0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x0012E8E0u) [[unlikely]] return; }
L_0012E8E0:
    c.f[12] = fp::sub(c.f[21], c.f[22]);
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E8F0u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x0012E8F0u) [[unlikely]] return; }
L_0012E8F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012E900; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0012E948; }
L_0012E900:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012E924; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E914u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000B(c, 306u, depth + 1u); else { c.pc = 0x0012EB30u; return; } if (c.pc != 0x0012E914u) [[unlikely]] return; }
L_0012E914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E924; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012EA00; } }
L_0012E924:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012EA00; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012E93C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012EA00; } }
L_0012E93C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012EA00; } }
L_0012E948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E950u);  if (depth < kMaxDepth) unit_000B(c, 305u, depth + 1u); else { c.pc = 0x0012EB10u; return; } if (c.pc != 0x0012E950u) [[unlikely]] return; }
L_0012E950:
    c.f[0] = fp::sub(c.f[21], c.f[23]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E974u);  if (depth < kMaxDepth) unit_000E(c, 19u, depth + 1u); else { c.pc = 0x00138380u; return; } if (c.pc != 0x0012E974u) [[unlikely]] return; }
L_0012E974:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E980u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012EAE0u; return; } if (c.pc != 0x0012E980u) [[unlikely]] return; }
L_0012E980:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E990u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000B(c, 303u, depth + 1u); else { c.pc = 0x0012EA60u; return; } if (c.pc != 0x0012E990u) [[unlikely]] return; }
L_0012E990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E998u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000B(c, 302u, depth + 1u); else { c.pc = 0x0012EA50u; return; } if (c.pc != 0x0012E998u) [[unlikely]] return; }
L_0012E998:
    c.f[23] = ld32((c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9A4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000B(c, 302u, depth + 1u); else { c.pc = 0x0012EA50u; return; } if (c.pc != 0x0012E9A4u) [[unlikely]] return; }
L_0012E9A4:
    c.f[22] = ld32((c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9B0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000B(c, 301u, depth + 1u); else { c.pc = 0x0012EA40u; return; } if (c.pc != 0x0012E9B0u) [[unlikely]] return; }
L_0012E9B0:
    c.f[21] = ld32((c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9BCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000B(c, 301u, depth + 1u); else { c.pc = 0x0012EA40u; return; } if (c.pc != 0x0012E9BCu) [[unlikely]] return; }
L_0012E9BC:
    c.f[20] = ld32((c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9C8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012EA30u; return; } if (c.pc != 0x0012E9C8u) [[unlikely]] return; }
L_0012E9C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9D4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012EA30u; return; } if (c.pc != 0x0012E9D4u) [[unlikely]] return; }
L_0012E9D4:
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[24], c.f[24]);
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[20]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[23], c.f[22]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0012E9FC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E9FC:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0012EA00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0012EA30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 4u);  c.pc = t; return; }
L_0012EA40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0012EA50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_0012EA60:
    c.f[8] = ld32((c.r[5].w[0]));
    c.f[7] = ld32((c.r[6].w[0] + 12u));
    c.f[9] = ld32((c.r[6].w[0]));
    c.f[6] = ld32((c.r[5].w[0] + 12u));
    c.facc = fp::mul(c.f[8], c.f[7]);
    c.f[3] = ld32((c.r[6].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[9]));
    c.f[5] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[5]));
    c.facc = fp::mul(c.f[4], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    st32((c.r[4].w[0]), c.f[0]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[2], c.f[9]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[8], c.f[3]));
    c.facc = fp::mul(c.f[2], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[8], c.f[5]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[9]));
    c.facc = fp::mul(c.f[6], c.f[7]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[8], c.f[9]));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_0012EAE0:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[2]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[3]);  c.pc = t; return; }
L_0012EB10:
    st32((c.r[4].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_0012EB30:
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[3], c.f[4]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EB54; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EB54:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_0012EB8C; }
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EB84; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EB84:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_0012EB8C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[2].d[0] & 255ull;  goto L_0012EBC0; }
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EBB8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EBB8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_0012EBC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_0012EBF4; }
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EBEC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EBEC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_0012EBF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012ECB8; } }
    c.f[0] = fp::add(c.f[3], c.f[4]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EC18; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EC18:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[2].d[0] & 255ull;  goto L_0012EC50; }
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EC48; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EC48:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_0012EC50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_0012EC84; }
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EC7C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EC7C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_0012EC84:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_0012ECB8; }
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012ECB0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012ECB0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_0012ECB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012ECC0:
    c.f[0] = fp::sub(c.f[12], c.f[13]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012ECDC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012ECDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012ECF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[22] = c.f[13];
    st32((c.r[29].w[0]), c.f[20]);
    c.f[23] = c.f[12];
    c.f[20] = fp::sub(c.f[22], c.f[23]);
    c.f[24] = ld32((c.r[28].w[0] - 31248u));
    c.f[21] = c.f[14];
    c.f[13] = 0u;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ED4Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x0012ED4Cu) [[unlikely]] return; }
L_0012ED4C:
    c.f[12] = fp::sub(c.f[21], c.f[22]);
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ED5Cu); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x0012ED5Cu) [[unlikely]] return; }
L_0012ED5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012ED6C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0012EDB4; }
L_0012ED6C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012ED90; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ED80u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 306u, depth + 1u); else { c.pc = 0x0012EB30u; return; } if (c.pc != 0x0012ED80u) [[unlikely]] return; }
L_0012ED80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012ED90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012EE6C; } }
L_0012ED90:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012EE6C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012EDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0012EE6C; } }
L_0012EDA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012EE6C; } }
L_0012EDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EDBCu);  if (depth < kMaxDepth) unit_000B(c, 305u, depth + 1u); else { c.pc = 0x0012EB10u; return; } if (c.pc != 0x0012EDBCu) [[unlikely]] return; }
L_0012EDBC:
    c.f[0] = fp::sub(c.f[21], c.f[23]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 160u);
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EDE0u);  if (depth < kMaxDepth) unit_000E(c, 19u, depth + 1u); else { c.pc = 0x00138380u; return; } if (c.pc != 0x0012EDE0u) [[unlikely]] return; }
L_0012EDE0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EDECu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012EAE0u; return; } if (c.pc != 0x0012EDECu) [[unlikely]] return; }
L_0012EDEC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EDFCu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000B(c, 303u, depth + 1u); else { c.pc = 0x0012EA60u; return; } if (c.pc != 0x0012EDFCu) [[unlikely]] return; }
L_0012EDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE04u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000B(c, 302u, depth + 1u); else { c.pc = 0x0012EA50u; return; } if (c.pc != 0x0012EE04u) [[unlikely]] return; }
L_0012EE04:
    c.f[23] = ld32((c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE10u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000B(c, 302u, depth + 1u); else { c.pc = 0x0012EA50u; return; } if (c.pc != 0x0012EE10u) [[unlikely]] return; }
L_0012EE10:
    c.f[22] = ld32((c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE1Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000B(c, 301u, depth + 1u); else { c.pc = 0x0012EA40u; return; } if (c.pc != 0x0012EE1Cu) [[unlikely]] return; }
L_0012EE1C:
    c.f[21] = ld32((c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE28u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000B(c, 301u, depth + 1u); else { c.pc = 0x0012EA40u; return; } if (c.pc != 0x0012EE28u) [[unlikely]] return; }
L_0012EE28:
    c.f[20] = ld32((c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE34u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012EA30u; return; } if (c.pc != 0x0012EE34u) [[unlikely]] return; }
L_0012EE34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE40u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012EA30u; return; } if (c.pc != 0x0012EE40u) [[unlikely]] return; }
L_0012EE40:
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[24], c.f[24]);
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[20]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[23], c.f[22]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0012EE68; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EE68:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0012EE6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0012EEA0:
    c.f[3] = fp::sub(c.f[13], c.f[12]);
    c.f[0] = 0u;
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.f[2] = fp::sub(c.f[14], c.f[13]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EECC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EECC:
    c.f[0] = 0u;
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EEF0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EEF0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012EF00; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0012EFC8; }
L_0012EF00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012EFA4; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EF2C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EF2C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] & 255ull;  goto L_0012EF64; }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EF5C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EF5C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 2;
L_0012EF64:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012EF94; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EF90; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EF90:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0012EF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012EFA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012F09C; } }
L_0012EFA4:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012F09C; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012EFBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012F09C; } }
L_0012EFBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F09C; } }
L_0012EFC8:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 4u, c.f[0], c.f[3]);
    fpu_div(c, 3u, c.f[0], c.f[2]);
    c.f[7] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::sub(c.f[7], c.f[1]);
    c.f[2] = fp::sub(c.f[6], c.f[2]);
    c.f[8] = fp::mul(c.f[2], c.f[4]);
    c.f[9] = fp::mul(c.f[1], c.f[4]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[2] = fp::sub(c.f[2], c.f[6]);
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[7]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[3] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 30;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012F044; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012F044:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_0012F074; }
    c.f[0] = fp::sub(c.f[8], c.f[2]);
    c.f[2] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012F06C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012F06C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_0012F074:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012F09C; } }
    c.f[0] = fp::sub(c.f[9], c.f[1]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012F098; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012F098:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0012F09C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F0EC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25856u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0012F0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F0E8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F0E8u) [[unlikely]] return; }
L_0012F0E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F0EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F13C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25824u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0012F138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F138u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F138u) [[unlikely]] return; }
L_0012F138:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F13C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F18C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25792u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0012F188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F188u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F188u) [[unlikely]] return; }
L_0012F188:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F18C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F1DC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25760u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0012F1D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F1D8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F1D8u) [[unlikely]] return; }
L_0012F1D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F1DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F22C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25728u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0012F228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F228u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F228u) [[unlikely]] return; }
L_0012F228:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F22C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F27C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25696u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0012F278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F278u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F278u) [[unlikely]] return; }
L_0012F278:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F27C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F2E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25888u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0012F2C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25856u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0012F2C4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012F2DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F2DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F2DCu) [[unlikely]] return; }
L_0012F2DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F340; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25872u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0012F324; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25856u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0012F324:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012F33C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F33Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F33Cu) [[unlikely]] return; }
L_0012F33C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F3A0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25840u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0012F384; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25824u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0012F384:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012F39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F39Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F39Cu) [[unlikely]] return; }
L_0012F39C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F3A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F400; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25808u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0012F3E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25792u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0012F3E4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012F3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F3FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F3FCu) [[unlikely]] return; }
L_0012F3FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F460; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25776u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0012F444; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25760u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0012F444:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012F45C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F45Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F45Cu) [[unlikely]] return; }
L_0012F45C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F4C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25744u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0012F4A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25728u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0012F4A4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012F4BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F4BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F4BCu) [[unlikely]] return; }
L_0012F4BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F4C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0012F520; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25712u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0012F504; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25696u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0012F504:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012F51C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F51Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0012F51Cu) [[unlikely]] return; }
L_0012F51C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012F520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F530:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_0012F5A8; } }
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F56Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 379u, depth + 1u); else { c.pc = 0x0012FAB0u; return; } if (c.pc != 0x0012F56Cu) [[unlikely]] return; }
L_0012F56C:
    set32(c.r[5], c.r[16].w[0] - 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F57Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 379u, depth + 1u); else { c.pc = 0x0012FAB0u; return; } if (c.pc != 0x0012F57Cu) [[unlikely]] return; }
L_0012F57C:
    c.f[13] = ld32((c.r[16].w[0]));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.f[14] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F598u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000B(c, 282u, depth + 1u); else { c.pc = 0x0012E740u; return; } if (c.pc != 0x0012F598u) [[unlikely]] return; }
L_0012F598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012F5AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012F5AC; } }
L_0012F5A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012F5AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F5D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_0012F648; } }
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F60Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 377u, depth + 1u); else { c.pc = 0x0012FA10u; return; } if (c.pc != 0x0012F60Cu) [[unlikely]] return; }
L_0012F60C:
    set32(c.r[5], c.r[16].w[0] - 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F61Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 377u, depth + 1u); else { c.pc = 0x0012FA10u; return; } if (c.pc != 0x0012F61Cu) [[unlikely]] return; }
L_0012F61C:
    c.f[13] = ld32((c.r[16].w[0]));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.f[14] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F638u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000B(c, 283u, depth + 1u); else { c.pc = 0x0012E830u; return; } if (c.pc != 0x0012F638u) [[unlikely]] return; }
L_0012F638:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012F64C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012F64C; } }
L_0012F648:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012F64C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_0012F6E8; } }
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F6ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 376u, depth + 1u); else { c.pc = 0x0012F9B0u; return; } if (c.pc != 0x0012F6ACu) [[unlikely]] return; }
L_0012F6AC:
    set32(c.r[5], c.r[16].w[0] - 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F6BCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 376u, depth + 1u); else { c.pc = 0x0012F9B0u; return; } if (c.pc != 0x0012F6BCu) [[unlikely]] return; }
L_0012F6BC:
    c.f[13] = ld32((c.r[16].w[0]));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.f[14] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F6D8u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000B(c, 308u, depth + 1u); else { c.pc = 0x0012ECF0u; return; } if (c.pc != 0x0012F6D8u) [[unlikely]] return; }
L_0012F6D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012F6EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012F6EC; } }
L_0012F6E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012F6EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F710:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_0012F788; } }
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F74Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 375u, depth + 1u); else { c.pc = 0x0012F960u; return; } if (c.pc != 0x0012F74Cu) [[unlikely]] return; }
L_0012F74C:
    set32(c.r[5], c.r[16].w[0] - 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F75Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 375u, depth + 1u); else { c.pc = 0x0012F960u; return; } if (c.pc != 0x0012F75Cu) [[unlikely]] return; }
L_0012F75C:
    c.f[13] = ld32((c.r[16].w[0]));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.f[14] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F778u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000B(c, 322u, depth + 1u); else { c.pc = 0x0012EEA0u; return; } if (c.pc != 0x0012F778u) [[unlikely]] return; }
L_0012F778:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012F78C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012F78C; } }
L_0012F788:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012F78C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F7B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0012F818; } }
    goto L_0012F7D8;
L_0012F7D4:
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_0012F7D8:
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F7E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 380u, depth + 1u); else { c.pc = 0x0012FB00u; return; } if (c.pc != 0x0012F7E4u) [[unlikely]] return; }
L_0012F7E4:
    set32(c.r[5], c.r[16].w[0] - 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F7F4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 380u, depth + 1u); else { c.pc = 0x0012FB00u; return; } if (c.pc != 0x0012F7F4u) [[unlikely]] return; }
L_0012F7F4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012F81C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0012F818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012F81C; } }
L_0012F818:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012F81C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012F840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0012F8B0; } }
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F874u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 379u, depth + 1u); else { c.pc = 0x0012FAB0u; return; } if (c.pc != 0x0012F874u) [[unlikely]] return; }
L_0012F874:
    set32(c.r[5], c.r[16].w[0] - 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F884u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 379u, depth + 1u); else { c.pc = 0x0012FAB0u; return; } if (c.pc != 0x0012F884u) [[unlikely]] return; }
L_0012F884:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012F8B4; }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0012F8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012F8B4; } }
L_0012F8B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012F8B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012F8D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0012F938; } }
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F904u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 378u, depth + 1u); else { c.pc = 0x0012FA60u; return; } if (c.pc != 0x0012F904u) [[unlikely]] return; }
L_0012F904:
    set32(c.r[5], c.r[16].w[0] - 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F914u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 378u, depth + 1u); else { c.pc = 0x0012FA60u; return; } if (c.pc != 0x0012F914u) [[unlikely]] return; }
L_0012F914:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012F93C; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0012F938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012F93C; } }
L_0012F938:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012F93C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012F960:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] << 1);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0012F990; } }
    set32(c.r[7], c.r[7].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0012F990:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0012F9B0:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] << 1);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0012F9E0; } }
    set32(c.r[7], c.r[7].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0012F9E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0012FA10:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] << 3);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0012FA40; } }
    set32(c.r[7], c.r[7].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0012FA40:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0012FA60:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] << 3);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0012FA90; } }
    set32(c.r[7], c.r[7].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0012FA90:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0012FAB0:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] << 3);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0012FAE0; } }
    set32(c.r[7], c.r[7].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0012FAE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0012FB00:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] << 3);
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_0012FB30; } }
    set32(c.r[7], c.r[7].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0012FB30:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0012FB50:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29100u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0012FBAC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB88u); set32(c.r[4], c.r[4].w[0] + 5776u);  if (depth < kMaxDepth) unit_000A(c, 208u, depth + 1u); else { c.pc = 0x00129AB0u; return; } if (c.pc != 0x0012FB88u) [[unlikely]] return; }
L_0012FB88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 5776u);
    set32(c.r[5], c.r[5].w[0] - 26016u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBA4u); set32(c.r[6], c.r[6].w[0] + 5760u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x0012FBA4u) [[unlikely]] return; }
L_0012FBA4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0012FBAC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29104u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_0012FD14; }
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29096u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012FBD4; } }
L_0012FBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBD0u); set32(c.r[4], c.r[28].w[0] - 29096u);  if (depth < kMaxDepth) unit_00A9(c, 297u, depth + 1u); else { c.pc = 0x003A6B48u; return; } if (c.pc != 0x0012FBD0u) [[unlikely]] return; }
L_0012FBD0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0012FBD4:
    c.r[1].d[0] = c.r[16].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[28].w[0] - 29096u);  goto L_0012FBF0; }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29096u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FBC8u | kUnwind; return; } goto L_0012FBC8; } }
    set32(c.r[4], c.r[28].w[0] - 29096u);
    c.budget -= 1;
L_0012FBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBF8u);  if (depth < kMaxDepth) unit_00A6(c, 79u, depth + 1u); else { c.pc = 0x00398998u; return; } if (c.pc != 0x0012FBF8u) [[unlikely]] return; }
L_0012FBF8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29089u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 5776u);
    c.r[3].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC24u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00129930u; return; } if (c.pc != 0x0012FC24u) [[unlikely]] return; }
L_0012FC24:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29090u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 5776u);
    c.r[3].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC50u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000A(c, 197u, depth + 1u); else { c.pc = 0x00129920u; return; } if (c.pc != 0x0012FC50u) [[unlikely]] return; }
L_0012FC50:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29091u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 5776u);
    c.r[3].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC7Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000A(c, 196u, depth + 1u); else { c.pc = 0x00129910u; return; } if (c.pc != 0x0012FC7Cu) [[unlikely]] return; }
L_0012FC7C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29093u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 5776u);
    c.r[3].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCA8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000A(c, 195u, depth + 1u); else { c.pc = 0x00129900u; return; } if (c.pc != 0x0012FCA8u) [[unlikely]] return; }
L_0012FCA8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29094u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 5776u);
    c.r[3].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCD4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000A(c, 194u, depth + 1u); else { c.pc = 0x001298F0u; return; } if (c.pc != 0x0012FCD4u) [[unlikely]] return; }
L_0012FCD4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29095u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 5776u);
    c.r[3].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD08u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000A(c, 193u, depth + 1u); else { c.pc = 0x001298E0u; return; } if (c.pc != 0x0012FD08u) [[unlikely]] return; }
L_0012FD08:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
L_0012FD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD1Cu);  if (depth < kMaxDepth) unit_000A(c, 208u, depth + 1u); else { c.pc = 0x00129AB0u; return; } if (c.pc != 0x0012FD1Cu) [[unlikely]] return; }
L_0012FD1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD24u);  if (depth < kMaxDepth) unit_0010(c, 302u, depth + 1u); else { c.pc = 0x00142680u; return; } if (c.pc != 0x0012FD24u) [[unlikely]] return; }
L_0012FD24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[4].w[0] + 5776u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD40u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 199u, depth + 1u); else { c.pc = 0x00129940u; return; } if (c.pc != 0x0012FD40u) [[unlikely]] return; }
L_0012FD40:
    set32(c.r[3], ld32((c.r[28].w[0] - 31236u)));
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD60u); st32((c.r[28].w[0] - 31236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 192u, depth + 1u); else { c.pc = 0x001298D0u; return; } if (c.pc != 0x0012FD60u) [[unlikely]] return; }
L_0012FD60:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD6Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 191u, depth + 1u); else { c.pc = 0x001298C0u; return; } if (c.pc != 0x0012FD6Cu) [[unlikely]] return; }
L_0012FD6C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD78u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 190u, depth + 1u); else { c.pc = 0x001298B0u; return; } if (c.pc != 0x0012FD78u) [[unlikely]] return; }
L_0012FD78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD84u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 189u, depth + 1u); else { c.pc = 0x001298A0u; return; } if (c.pc != 0x0012FD84u) [[unlikely]] return; }
L_0012FD84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD90u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 188u, depth + 1u); else { c.pc = 0x00129890u; return; } if (c.pc != 0x0012FD90u) [[unlikely]] return; }
L_0012FD90:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD9Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 187u, depth + 1u); else { c.pc = 0x00129880u; return; } if (c.pc != 0x0012FD9Cu) [[unlikely]] return; }
L_0012FD9C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 31236u)));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[11].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] - 7200u);
    set32(c.r[2], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FDD0u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0012FDD0u) [[unlikely]] return; }
L_0012FDD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29120u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29120u)));  goto L_0012FE28; }
    set32(c.r[16], ld32((c.r[28].w[0] - 29112u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012FE24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FDF4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012FDF4u) [[unlikely]] return; }
L_0012FDF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE08u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 485u, depth + 1u); else { c.pc = 0x0012BE70u; return; } if (c.pc != 0x0012FE08u) [[unlikely]] return; }
L_0012FE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE10u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0012FE10u) [[unlikely]] return; }
L_0012FE10:
    set32(c.r[7], ld32((c.r[28].w[0] - 29112u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE24u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 485u, depth + 1u); else { c.pc = 0x0012BE70u; return; } if (c.pc != 0x0012FE24u) [[unlikely]] return; }
L_0012FE24:
    set32(c.r[2], ld32((c.r[28].w[0] - 29120u)));
    c.budget -= 1;
L_0012FE28:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29120u)));  goto L_0012FE4C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[4].w[0] - 7162u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE48u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x0012FE48u) [[unlikely]] return; }
L_0012FE48:
    set32(c.r[2], ld32((c.r[28].w[0] - 29120u)));
    c.budget -= 1;
L_0012FE4C:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_0012FE70; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012FE6C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE6Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FE6Cu) [[unlikely]] return; }
L_0012FE6C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_0012FE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 206u, depth + 1u); else { c.pc = 0x00129A60u; return; } if (c.pc != 0x0012FE78u) [[unlikely]] return; }
L_0012FE78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0012FEA0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 29124u), 0u);  goto L_0012FEB0; }
    set32(c.r[3], 0u - 1u);
    st32((c.r[28].w[0] - 29124u), c.r[3].w[0]);
    c.budget -= 2;
L_0012FEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FEC0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 29124u)));  goto L_0012FED8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 29124u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29124u), c.r[3].w[0]);  if (t) { goto L_0012FEE4; } }
L_0012FED8:
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[28].w[0] - 29124u), c.r[3].w[0]);
    c.budget -= 3;
L_0012FEE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FEF0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 29116u)));  goto L_0012FF08; }
    set32(c.r[3], ld32((c.r[28].w[0] - 29116u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29116u), c.r[3].w[0]);  if (t) { goto L_0012FF14; } }
L_0012FF08:
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[28].w[0] - 29116u), c.r[3].w[0]);
    c.budget -= 3;
L_0012FF14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FF20:
    set32(c.r[29], c.r[29].w[0] - 2144u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 2088u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 2096u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 2104u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 2112u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 2120u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 2128u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 2136u), c.r[11].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29124u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 13;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0012FFCC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 29116u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0012FF70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012FFC8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0012FF70:
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_0012FF88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0012FF90; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_0012FF88:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_0012FF90:
    c.r[6].d[0] = c.r[4].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 2144u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FFACu); set32(c.r[5], 0u + 2047u);  if (depth < kMaxDepth) unit_00AF(c, 197u, depth + 1u); else { c.pc = 0x003BDA08u; return; } if (c.pc != 0x0012FFACu) [[unlikely]] return; }
L_0012FFAC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 7156u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FFC8u); st8((c.r[29].w[0] + 2063u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0012FFC8u) [[unlikely]] return; }
L_0012FFC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0012FFCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2144u);  c.pc = t; return; }
L_0012FFE0:
    set32(c.r[29], c.r[29].w[0] - 2192u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 2152u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 2160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 2168u), c.r[9].d[0]);
    c.budget -= 8;
    [[clang::musttail]] return unit_000C(c, 1u, depth);
}

}
