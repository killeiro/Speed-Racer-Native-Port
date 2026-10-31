#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0002[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67,
    68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0,
    0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 337,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388,
    0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
    0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0,
    0, 0, 401, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 0, 411, 0,
    0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0,
    0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0,
    0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0,
};

void unit_0002(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00108000;
    case 2u: goto L_00108010;
    case 3u: goto L_0010801C;
    case 4u: goto L_0010802C;
    case 5u: goto L_0010803C;
    case 6u: goto L_00108040;
    case 7u: goto L_0010804C;
    case 8u: goto L_0010806C;
    case 9u: goto L_00108078;
    case 10u: goto L_00108080;
    case 11u: goto L_00108100;
    case 12u: goto L_00108124;
    case 13u: goto L_00108144;
    case 14u: goto L_00108158;
    case 15u: goto L_00108170;
    case 16u: goto L_00108198;
    case 17u: goto L_001081C4;
    case 18u: goto L_001081E8;
    case 19u: goto L_00108200;
    case 20u: goto L_00108220;
    case 21u: goto L_00108240;
    case 22u: goto L_0010826C;
    case 23u: goto L_00108294;
    case 24u: goto L_001082BC;
    case 25u: goto L_001082CC;
    case 26u: goto L_00108300;
    case 27u: goto L_00108360;
    case 28u: goto L_00108384;
    case 29u: goto L_00108390;
    case 30u: goto L_001083A0;
    case 31u: goto L_001083AC;
    case 32u: goto L_001083FC;
    case 33u: goto L_00108410;
    case 34u: goto L_00108428;
    case 35u: goto L_0010843C;
    case 36u: goto L_00108454;
    case 37u: goto L_0010847C;
    case 38u: goto L_001084A8;
    case 39u: goto L_001084CC;
    case 40u: goto L_001084EC;
    case 41u: goto L_001084FC;
    case 42u: goto L_0010850C;
    case 43u: goto L_0010852C;
    case 44u: goto L_0010853C;
    case 45u: goto L_0010854C;
    case 46u: goto L_00108590;
    case 47u: goto L_001085E0;
    case 48u: goto L_00108610;
    case 49u: goto L_00108620;
    case 50u: goto L_0010862C;
    case 51u: goto L_0010863C;
    case 52u: goto L_00108678;
    case 53u: goto L_0010868C;
    case 54u: goto L_001086A4;
    case 55u: goto L_001086B8;
    case 56u: goto L_001086D0;
    case 57u: goto L_001086F8;
    case 58u: goto L_00108724;
    case 59u: goto L_00108748;
    case 60u: goto L_00108754;
    case 61u: goto L_00108768;
    case 62u: goto L_00108788;
    case 63u: goto L_001087C0;
    case 64u: goto L_00108814;
    case 65u: goto L_0010883C;
    case 66u: goto L_0010886C;
    case 67u: goto L_0010887C;
    case 68u: goto L_00108880;
    case 69u: goto L_00108888;
    case 70u: goto L_00108900;
    case 71u: goto L_00108924;
    case 72u: goto L_00108940;
    case 73u: goto L_00108954;
    case 74u: goto L_0010896C;
    case 75u: goto L_00108994;
    case 76u: goto L_001089C0;
    case 77u: goto L_001089E4;
    case 78u: goto L_00108A14;
    case 79u: goto L_00108A34;
    case 80u: goto L_00108A64;
    case 81u: goto L_00108A8C;
    case 82u: goto L_00108AB4;
    case 83u: goto L_00108AF0;
    case 84u: goto L_00108B28;
    case 85u: goto L_00108B44;
    case 86u: goto L_00108B54;
    case 87u: goto L_00108B64;
    case 88u: goto L_00108BA8;
    case 89u: goto L_00108BC8;
    case 90u: goto L_00108BDC;
    case 91u: goto L_00108BF8;
    case 92u: goto L_00108C20;
    case 93u: goto L_00108C48;
    case 94u: goto L_00108C6C;
    case 95u: goto L_00108C90;
    case 96u: goto L_00108CA4;
    case 97u: goto L_00108CB4;
    case 98u: goto L_00108CD0;
    case 99u: goto L_00108CF8;
    case 100u: goto L_00108D2C;
    case 101u: goto L_00108D58;
    case 102u: goto L_00108D80;
    case 103u: goto L_00108DD0;
    case 104u: goto L_00108E04;
    case 105u: goto L_00108E2C;
    case 106u: goto L_00108E6C;
    case 107u: goto L_00108E90;
    case 108u: goto L_00108EFC;
    case 109u: goto L_00108F0C;
    case 110u: goto L_00108F3C;
    case 111u: goto L_00108F4C;
    case 112u: goto L_00108F58;
    case 113u: goto L_00108FA8;
    case 114u: goto L_00108FBC;
    case 115u: goto L_00108FD4;
    case 116u: goto L_00108FE8;
    case 117u: goto L_00109000;
    case 118u: goto L_00109028;
    case 119u: goto L_0010903C;
    case 120u: goto L_00109040;
    case 121u: goto L_00109054;
    case 122u: goto L_00109078;
    case 123u: goto L_00109080;
    case 124u: goto L_00109098;
    case 125u: goto L_001090B8;
    case 126u: goto L_001090F0;
    case 127u: goto L_00109138;
    case 128u: goto L_0010914C;
    case 129u: goto L_00109160;
    case 130u: goto L_00109174;
    case 131u: goto L_00109188;
    case 132u: goto L_001091A8;
    case 133u: goto L_001091BC;
    case 134u: goto L_001091C8;
    case 135u: goto L_001091F4;
    case 136u: goto L_00109204;
    case 137u: goto L_00109210;
    case 138u: goto L_00109234;
    case 139u: goto L_00109248;
    case 140u: goto L_00109260;
    case 141u: goto L_00109274;
    case 142u: goto L_0010928C;
    case 143u: goto L_001092B4;
    case 144u: goto L_001092E0;
    case 145u: goto L_00109300;
    case 146u: goto L_00109320;
    case 147u: goto L_00109360;
    case 148u: goto L_001093B8;
    case 149u: goto L_001093CC;
    case 150u: goto L_001093E4;
    case 151u: goto L_00109404;
    case 152u: goto L_00109418;
    case 153u: goto L_00109424;
    case 154u: goto L_00109450;
    case 155u: goto L_00109460;
    case 156u: goto L_0010946C;
    case 157u: goto L_00109490;
    case 158u: goto L_001094A4;
    case 159u: goto L_001094BC;
    case 160u: goto L_001094D0;
    case 161u: goto L_001094E8;
    case 162u: goto L_00109510;
    case 163u: goto L_0010953C;
    case 164u: goto L_0010955C;
    case 165u: goto L_0010957C;
    case 166u: goto L_001095B0;
    case 167u: goto L_00109608;
    case 168u: goto L_00109630;
    case 169u: goto L_0010964C;
    case 170u: goto L_00109684;
    case 171u: goto L_00109690;
    case 172u: goto L_001096B4;
    case 173u: goto L_001096C8;
    case 174u: goto L_001096E0;
    case 175u: goto L_001096F4;
    case 176u: goto L_0010970C;
    case 177u: goto L_00109734;
    case 178u: goto L_00109760;
    case 179u: goto L_00109780;
    case 180u: goto L_001097B0;
    case 181u: goto L_001097D4;
    case 182u: goto L_001097F0;
    case 183u: goto L_00109804;
    case 184u: goto L_0010983C;
    case 185u: goto L_00109840;
    case 186u: goto L_00109880;
    case 187u: goto L_001098C0;
    case 188u: goto L_001098E0;
    case 189u: goto L_001098FC;
    case 190u: goto L_00109900;
    case 191u: goto L_001099A0;
    case 192u: goto L_001099BC;
    case 193u: goto L_001099FC;
    case 194u: goto L_00109A04;
    case 195u: goto L_00109A10;
    case 196u: goto L_00109A1C;
    case 197u: goto L_00109A30;
    case 198u: goto L_00109A44;
    case 199u: goto L_00109A58;
    case 200u: goto L_00109A64;
    case 201u: goto L_00109AE0;
    case 202u: goto L_00109AF8;
    case 203u: goto L_00109B04;
    case 204u: goto L_00109C30;
    case 205u: goto L_00109C58;
    case 206u: goto L_00109C78;
    case 207u: goto L_00109C84;
    case 208u: goto L_00109CD0;
    case 209u: goto L_00109CE8;
    case 210u: goto L_00109CF4;
    case 211u: goto L_00109D14;
    case 212u: goto L_00109D20;
    case 213u: goto L_00109DA8;
    case 214u: goto L_00109DB8;
    case 215u: goto L_00109DD8;
    case 216u: goto L_00109DE4;
    case 217u: goto L_00109E38;
    case 218u: goto L_00109E40;
    case 219u: goto L_00109E4C;
    case 220u: goto L_00109EA8;
    case 221u: goto L_00109EE0;
    case 222u: goto L_00109EF8;
    case 223u: goto L_00109F50;
    case 224u: goto L_0010A014;
    case 225u: goto L_0010A03C;
    case 226u: goto L_0010A040;
    case 227u: goto L_0010A060;
    case 228u: goto L_0010A078;
    case 229u: goto L_0010A080;
    case 230u: goto L_0010A0B0;
    case 231u: goto L_0010A0C4;
    case 232u: goto L_0010A0D0;
    case 233u: goto L_0010A0E0;
    case 234u: goto L_0010A0F4;
    case 235u: goto L_0010A100;
    case 236u: goto L_0010A120;
    case 237u: goto L_0010A140;
    case 238u: goto L_0010A158;
    case 239u: goto L_0010A188;
    case 240u: goto L_0010A1F0;
    case 241u: goto L_0010A204;
    case 242u: goto L_0010A238;
    case 243u: goto L_0010A244;
    case 244u: goto L_0010A254;
    case 245u: goto L_0010A280;
    case 246u: goto L_0010A2A0;
    case 247u: goto L_0010A2B8;
    case 248u: goto L_0010A2E8;
    case 249u: goto L_0010A350;
    case 250u: goto L_0010A364;
    case 251u: goto L_0010A3DC;
    case 252u: goto L_0010A3E8;
    case 253u: goto L_0010A420;
    case 254u: goto L_0010A458;
    case 255u: goto L_0010A460;
    case 256u: goto L_0010A46C;
    case 257u: goto L_0010A4A4;
    case 258u: goto L_0010A4F0;
    case 259u: goto L_0010A508;
    case 260u: goto L_0010A518;
    case 261u: goto L_0010A548;
    case 262u: goto L_0010A558;
    case 263u: goto L_0010A564;
    case 264u: goto L_0010A5AC;
    case 265u: goto L_0010A608;
    case 266u: goto L_0010A610;
    case 267u: goto L_0010A630;
    case 268u: goto L_0010A648;
    case 269u: goto L_0010A680;
    case 270u: goto L_0010A69C;
    case 271u: goto L_0010A6B4;
    case 272u: goto L_0010A6D4;
    case 273u: goto L_0010A6E0;
    case 274u: goto L_0010A700;
    case 275u: goto L_0010A708;
    case 276u: goto L_0010A714;
    case 277u: goto L_0010A74C;
    case 278u: goto L_0010A7C0;
    case 279u: goto L_0010A7DC;
    case 280u: goto L_0010A7F4;
    case 281u: goto L_0010A820;
    case 282u: goto L_0010A828;
    case 283u: goto L_0010A834;
    case 284u: goto L_0010A83C;
    case 285u: goto L_0010A840;
    case 286u: goto L_0010A868;
    case 287u: goto L_0010A880;
    case 288u: goto L_0010A8A0;
    case 289u: goto L_0010A8A8;
    case 290u: goto L_0010A8B4;
    case 291u: goto L_0010A8E8;
    case 292u: goto L_0010A900;
    case 293u: goto L_0010A91C;
    case 294u: goto L_0010A950;
    case 295u: goto L_0010A990;
    case 296u: goto L_0010A998;
    case 297u: goto L_0010A9A4;
    case 298u: goto L_0010A9DC;
    case 299u: goto L_0010AA50;
    case 300u: goto L_0010AA6C;
    case 301u: goto L_0010AA84;
    case 302u: goto L_0010AAB0;
    case 303u: goto L_0010AAB8;
    case 304u: goto L_0010AAC4;
    case 305u: goto L_0010AAFC;
    case 306u: goto L_0010AB70;
    case 307u: goto L_0010AB8C;
    case 308u: goto L_0010ABA4;
    case 309u: goto L_0010ABD4;
    case 310u: goto L_0010ABDC;
    case 311u: goto L_0010ABE8;
    case 312u: goto L_0010AC20;
    case 313u: goto L_0010AC94;
    case 314u: goto L_0010ACB0;
    case 315u: goto L_0010ACC8;
    case 316u: goto L_0010ACF8;
    case 317u: goto L_0010AD00;
    case 318u: goto L_0010AD20;
    case 319u: goto L_0010AD50;
    case 320u: goto L_0010AD60;
    case 321u: goto L_0010AD6C;
    case 322u: goto L_0010ADA0;
    case 323u: goto L_0010ADF4;
    case 324u: goto L_0010ADFC;
    case 325u: goto L_0010AE1C;
    case 326u: goto L_0010AE34;
    case 327u: goto L_0010AE64;
    case 328u: goto L_0010AEBC;
    case 329u: goto L_0010AF1C;
    case 330u: goto L_0010AF28;
    case 331u: goto L_0010AF44;
    case 332u: goto L_0010AF4C;
    case 333u: goto L_0010AF58;
    case 334u: goto L_0010AFB0;
    case 335u: goto L_0010AFE8;
    case 336u: goto L_0010AFF0;
    case 337u: goto L_0010AFFC;
    case 338u: goto L_0010B010;
    case 339u: goto L_0010B024;
    case 340u: goto L_0010B03C;
    case 341u: goto L_0010B050;
    case 342u: goto L_0010B070;
    case 343u: goto L_0010B088;
    case 344u: goto L_0010B0B8;
    case 345u: goto L_0010B120;
    case 346u: goto L_0010B134;
    case 347u: goto L_0010B18C;
    case 348u: goto L_0010B1F0;
    case 349u: goto L_0010B208;
    case 350u: goto L_0010B214;
    case 351u: goto L_0010B224;
    case 352u: goto L_0010B244;
    case 353u: goto L_0010B250;
    case 354u: goto L_0010B294;
    case 355u: goto L_0010B2D8;
    case 356u: goto L_0010B2E0;
    case 357u: goto L_0010B320;
    case 358u: goto L_0010B338;
    case 359u: goto L_0010B370;
    case 360u: goto L_0010B38C;
    case 361u: goto L_0010B3B0;
    case 362u: goto L_0010B408;
    case 363u: goto L_0010B4A0;
    case 364u: goto L_0010B4C4;
    case 365u: goto L_0010B52C;
    case 366u: goto L_0010B54C;
    case 367u: goto L_0010B558;
    case 368u: goto L_0010B5A0;
    case 369u: goto L_0010B5E0;
    case 370u: goto L_0010B5FC;
    case 371u: goto L_0010B610;
    case 372u: goto L_0010B634;
    case 373u: goto L_0010B648;
    case 374u: goto L_0010B65C;
    case 375u: goto L_0010B690;
    case 376u: goto L_0010B6BC;
    case 377u: goto L_0010B6D0;
    case 378u: goto L_0010B700;
    case 379u: goto L_0010B734;
    case 380u: goto L_0010B744;
    case 381u: goto L_0010B758;
    case 382u: goto L_0010B78C;
    case 383u: goto L_0010B7AC;
    case 384u: goto L_0010B7B8;
    case 385u: goto L_0010B808;
    case 386u: goto L_0010B828;
    case 387u: goto L_0010B834;
    case 388u: goto L_0010B87C;
    case 389u: goto L_0010B88C;
    case 390u: goto L_0010B8A0;
    case 391u: goto L_0010B8B8;
    case 392u: goto L_0010B8DC;
    case 393u: goto L_0010B8F4;
    case 394u: goto L_0010B930;
    case 395u: goto L_0010B960;
    case 396u: goto L_0010B984;
    case 397u: goto L_0010B9B0;
    case 398u: goto L_0010B9C4;
    case 399u: goto L_0010B9D0;
    case 400u: goto L_0010B9EC;
    case 401u: goto L_0010BA08;
    case 402u: goto L_0010BA1C;
    case 403u: goto L_0010BA24;
    case 404u: goto L_0010BA40;
    case 405u: goto L_0010BA70;
    case 406u: goto L_0010BA88;
    case 407u: goto L_0010BAA0;
    case 408u: goto L_0010BADC;
    case 409u: goto L_0010BAE4;
    case 410u: goto L_0010BAEC;
    case 411u: goto L_0010BAF8;
    case 412u: goto L_0010BB08;
    case 413u: goto L_0010BB30;
    case 414u: goto L_0010BB4C;
    case 415u: goto L_0010BB6C;
    case 416u: goto L_0010BB84;
    case 417u: goto L_0010BB98;
    case 418u: goto L_0010BBB8;
    case 419u: goto L_0010BBC4;
    case 420u: goto L_0010BBD0;
    case 421u: goto L_0010BBD8;
    case 422u: goto L_0010BBE4;
    case 423u: goto L_0010BC00;
    case 424u: goto L_0010BC18;
    case 425u: goto L_0010BC40;
    case 426u: goto L_0010BC6C;
    case 427u: goto L_0010BC8C;
    case 428u: goto L_0010BCB4;
    case 429u: goto L_0010BCC8;
    case 430u: goto L_0010BCD4;
    case 431u: goto L_0010BCE0;
    case 432u: goto L_0010BD00;
    case 433u: goto L_0010BD24;
    case 434u: goto L_0010BD78;
    case 435u: goto L_0010BD8C;
    case 436u: goto L_0010BD98;
    case 437u: goto L_0010BDB0;
    case 438u: goto L_0010BDC4;
    case 439u: goto L_0010BDDC;
    case 440u: goto L_0010BDF0;
    case 441u: goto L_0010BE0C;
    case 442u: goto L_0010BE34;
    case 443u: goto L_0010BE70;
    case 444u: goto L_0010BEB0;
    case 445u: goto L_0010BEDC;
    case 446u: goto L_0010BEF4;
    case 447u: goto L_0010BF08;
    case 448u: goto L_0010BF1C;
    case 449u: goto L_0010BF30;
    case 450u: goto L_0010BF3C;
    case 451u: goto L_0010BF58;
    case 452u: goto L_0010BF68;
    case 453u: goto L_0010BF90;
    case 454u: goto L_0010BF98;
    case 455u: goto L_0010BFC0;
    case 456u: goto L_0010BFD0;
    case 457u: goto L_0010BFF8;
    default: bad_entry(c, 0x00108000u); return;
    }
L_00108000:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108010u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x00108010u) [[unlikely]] return; }
L_00108010:
    set32(c.r[4], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010801Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x0010801Cu) [[unlikely]] return; }
L_0010801C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010802Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 191u, depth + 1u); else { c.pc = 0x001099A0u; return; } if (c.pc != 0x0010802Cu) [[unlikely]] return; }
L_0010802C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 17u));  goto L_00108054; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108040u); set32(c.r[4], c.r[4].w[0] - 16735u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x00108040u) [[unlikely]] return; }
    goto L_00108040;
L_0010803C:
    set32(c.r[4], c.r[4].w[0] - 16735u);
    c.budget -= 1;
L_00108040:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010804Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010804Cu) [[unlikely]] return; }
L_0010804C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001082CC; } }
L_00108054:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00108078; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010806Cu); set32(c.r[4], c.r[4].w[0] - 16697u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010806Cu) [[unlikely]] return; }
L_0010806C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108078u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x00108078u) [[unlikely]] return; }
L_00108078:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], 0u + 6u);  goto L_001080BC; }
L_00108080:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    mmi::multu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[3], c.r[3], c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 8u), c.r[2].d[0]);  if (t) { goto L_001080C4; } }
L_001080BC:
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_001080C4:
    set32(c.r[2], 0u + 22u);
    c.r[22].d[0] = c.r[17].d[0] & 255ull;
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st64((c.r[16].w[0] + 32u), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 48u));
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));  goto L_001082CC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[22].d[0] = 0ull + 0ull;  goto L_001080F8; }
L_001080F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108100u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00108100u) [[unlikely]] return; }
L_00108100:
    set32(c.r[3], c.r[2].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 154u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 154u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[22].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108124u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108124u) [[unlikely]] return; }
L_00108124:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(c.r[22].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108144u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108144u) [[unlikely]] return; }
L_00108144:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108158u); st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00108158u) [[unlikely]] return; }
L_00108158:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 157u);
    st8((c.r[29].w[0] + 157u), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108170u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108170u) [[unlikely]] return; }
L_00108170:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[22].d[0] = c.r[22].d[0] << 32;
    c.r[22].d[0] = c.r[22].d[0] >> 32;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108198u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108198u) [[unlikely]] return; }
L_00108198:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[3].d[0] = c.r[22].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 150u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    st16((c.r[29].w[0] + 150u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001081C4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001081C4u) [[unlikely]] return; }
L_001081C4:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], 0u + 22u);
    set32(c.r[5], c.r[29].w[0] + 148u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 148u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001081E8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001081E8u) [[unlikely]] return; }
L_001081E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00108204; } }
    c.r[17].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[17].w[0]);  if (t) { goto L_0010820C; } }
    goto L_00108204;
L_00108200:
    set32(c.r[2], 0u - c.r[17].w[0]);
    c.budget -= 1;
L_00108204:
    c.r[17].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0010820C:
    st8((c.r[29].w[0] + 159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 159u);
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108220u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108220u) [[unlikely]] return; }
L_00108220:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 146u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 146u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108240u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108240u) [[unlikely]] return; }
L_00108240:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001082C8; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 1u);  goto L_0010827C; }
    st16((c.r[29].w[0] + 144u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010826Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010826Cu) [[unlikely]] return; }
L_0010826C:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001082C8; } }
L_0010827C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 4u);  goto L_001082A4; }
    st8((c.r[29].w[0] + 158u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108294u); set32(c.r[5], c.r[29].w[0] + 158u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108294u) [[unlikely]] return; }
L_00108294:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001082C8; } }
L_001082A4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[6].d[0];  if (t) { goto L_001082C8; } }
    st32((c.r[29].w[0] + 140u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001082BCu); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001082BCu) [[unlikely]] return; }
L_001082BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_001082C8:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    c.budget -= 1;
L_001082CC:
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
L_00108300:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00108350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010855C; } }
L_00108350:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108360u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x00108360u) [[unlikely]] return; }
L_00108360:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_00108374; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001083AC; } }
L_00108374:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 4;
L_00108384:
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108390u); st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0002(c, 371u, depth + 1u); else { c.pc = 0x0010B610u; return; } if (c.pc != 0x00108390u) [[unlikely]] return; }
L_00108390:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x001083A0u) [[unlikely]] return; }
L_001083A0:
    set32(c.r[4], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x001083ACu) [[unlikely]] return; }
L_001083AC:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[22].w[0]));
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 48u));
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));  goto L_0010855C; }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083FCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001083FCu) [[unlikely]] return; }
L_001083FC:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108410u); st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00108410u) [[unlikely]] return; }
L_00108410:
    set32(c.r[2], c.r[2].w[0] + 9u);
    set32(c.r[5], c.r[29].w[0] + 150u);
    st16((c.r[29].w[0] + 150u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108428u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108428u) [[unlikely]] return; }
L_00108428:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010843Cu); st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010843Cu) [[unlikely]] return; }
L_0010843C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 155u);
    st8((c.r[29].w[0] + 155u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108454u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108454u) [[unlikely]] return; }
L_00108454:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[21].d[0] = c.r[21].d[0] << 32;
    c.r[21].d[0] = c.r[21].d[0] >> 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010847Cu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010847Cu) [[unlikely]] return; }
L_0010847C:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 148u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    st16((c.r[29].w[0] + 148u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084A8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001084A8u) [[unlikely]] return; }
L_001084A8:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 20u);
    set32(c.r[5], c.r[29].w[0] + 146u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 146u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084CCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001084CCu) [[unlikely]] return; }
L_001084CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 159u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 159u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001084ECu) [[unlikely]] return; }
L_001084EC:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 158u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_001084FC:
    st8((c.r[29].w[0] + 158u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010850Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010850Cu) [[unlikely]] return; }
L_0010850C:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 157u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 157u), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010852Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010852Cu) [[unlikely]] return; }
L_0010852C:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_0010853C:
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[23].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010854Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010854Cu) [[unlikely]] return; }
L_0010854C:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    c.budget -= 4;
L_0010855C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00108590:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001085D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00108798; } }
L_001085D0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001085E0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x001085E0u) [[unlikely]] return; }
L_001085E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_001085F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0010862C; } }
L_001085F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108610u); st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0002(c, 371u, depth + 1u); else { c.pc = 0x0010B610u; return; } if (c.pc != 0x00108610u) [[unlikely]] return; }
L_00108610:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108620u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x00108620u) [[unlikely]] return; }
L_00108620:
    set32(c.r[4], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010862Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x0010862Cu) [[unlikely]] return; }
L_0010862C:
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    st64((c.r[16].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[3], 0u + 19u);
    c.budget -= 4;
L_0010863C:
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 48u));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));  goto L_00108798; }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[29].w[0] + 122u);
    st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108678u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108678u) [[unlikely]] return; }
L_00108678:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010868Cu); st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010868Cu) [[unlikely]] return; }
L_0010868C:
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[5], c.r[29].w[0] + 120u);
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001086A4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001086A4u) [[unlikely]] return; }
L_001086A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001086B8u); st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001086B8u) [[unlikely]] return; }
L_001086B8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 125u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001086D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001086D0u) [[unlikely]] return; }
L_001086D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[21].d[0] = c.r[21].d[0] << 32;
    c.r[21].d[0] = c.r[21].d[0] >> 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001086F8u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001086F8u) [[unlikely]] return; }
L_001086F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 118u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    st16((c.r[29].w[0] + 118u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108724u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108724u) [[unlikely]] return; }
L_00108724:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 19u);
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 116u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108748u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108748u) [[unlikely]] return; }
L_00108748:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 127u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 3;
L_00108754:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108768u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108768u) [[unlikely]] return; }
L_00108768:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 126u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108788u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108788u) [[unlikely]] return; }
L_00108788:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    c.budget -= 4;
L_00108798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001087C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u + 240u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[3].d[0] = c.r[22].d[0] & 65535ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0010881C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108814u); set32(c.r[4], c.r[4].w[0] - 16630u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x00108814u) [[unlikely]] return; }
L_00108814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00108AC4; } }
L_0010881C:
    set32(c.r[2], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00108830; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00108AC4; } }
L_00108830:
    set32(c.r[5], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010883Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010883Cu) [[unlikely]] return; }
L_0010883C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_00108850; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00108888; } }
L_00108850:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[21].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010886Cu); st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0002(c, 371u, depth + 1u); else { c.pc = 0x0010B610u; return; } if (c.pc != 0x0010886Cu) [[unlikely]] return; }
L_0010886C:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010887Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x0010887Cu) [[unlikely]] return; }
L_0010887C:
    set32(c.r[4], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 1;
L_00108880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108888u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x00108888u) [[unlikely]] return; }
L_00108888:
    c.r[16].d[0] = c.r[18].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
    if (c.r[16].sd[0] <= 0) { st64((c.r[17].w[0] + 8u), 0ull);  goto L_001088AC; }
    st64((c.r[17].w[0] + 8u), c.r[16].d[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001088B8; } }
L_001088AC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001088B8:
    set32(c.r[2], 0u + 18u);
    c.r[3].d[0] = c.r[18].d[0] << 56;
    st16((c.r[17].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[19].d[0] << 32;
    st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[22].w[0]));
    st64((c.r[17].w[0] + 32u), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 48u));
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));  goto L_00108AC4; }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[29].w[0] + 170u);
    st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108900u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108900u) [[unlikely]] return; }
L_00108900:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00108918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 2u);  if (t) { goto L_0010891C; } }
L_00108918:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010891C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108924u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00108924u) [[unlikely]] return; }
L_00108924:
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108940u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108940u) [[unlikely]] return; }
L_00108940:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108954u); st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00108954u) [[unlikely]] return; }
L_00108954:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 173u);
    st8((c.r[29].w[0] + 173u), static_cast<std::uint8_t>(c.r[23].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010896Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010896Cu) [[unlikely]] return; }
L_0010896C:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[23].d[0] = c.r[23].d[0] << 32;
    c.r[23].d[0] = c.r[23].d[0] >> 32;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108994u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108994u) [[unlikely]] return; }
L_00108994:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[3].d[0] = c.r[23].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 166u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    st16((c.r[29].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001089C0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001089C0u) [[unlikely]] return; }
L_001089C0:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], 0u + 18u);
    set32(c.r[5], c.r[29].w[0] + 164u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001089E4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001089E4u) [[unlikely]] return; }
L_001089E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001089FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_00108A04; } }
L_001089FC:
    set32(c.r[16], 0u - c.r[16].w[0]);
    st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 2;
L_00108A04:
    set32(c.r[5], c.r[29].w[0] + 175u);
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108A14u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108A14u) [[unlikely]] return; }
L_00108A14:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 162u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 162u), static_cast<std::uint16_t>(c.r[22].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108A34u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108A34u) [[unlikely]] return; }
L_00108A34:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00108AC0; } }
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 1u);  goto L_00108A74; }
    st16((c.r[29].w[0] + 160u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108A64u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108A64u) [[unlikely]] return; }
L_00108A64:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00108AC0; } }
L_00108A74:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 4u);  goto L_00108A9C; }
    st8((c.r[29].w[0] + 174u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108A8Cu); set32(c.r[5], c.r[29].w[0] + 174u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108A8Cu) [[unlikely]] return; }
L_00108A8C:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00108AC0; } }
L_00108A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00108AC0; } }
    st32((c.r[29].w[0] + 156u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108AB4u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108AB4u) [[unlikely]] return; }
L_00108AB4:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_00108AC0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    c.budget -= 1;
L_00108AC4:
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
L_00108AF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 48u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00108DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B28u);  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x00108B28u) [[unlikely]] return; }
L_00108B28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_00108B3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00108DA4; } }
L_00108B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B44u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00108B44u) [[unlikely]] return; }
L_00108B44:
    set32(c.r[2], c.r[2].w[0] + 9u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00108B80; } }
L_00108B54:
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B64u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00108B64u) [[unlikely]] return; }
L_00108B64:
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
L_00108B80:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 26u));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00108B54u | kUnwind; return; } goto L_00108B54; }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[29].w[0] + 138u);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108BA8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108BA8u) [[unlikely]] return; }
L_00108BA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 136u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108BC8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108BC8u) [[unlikely]] return; }
L_00108BC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108BDCu); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00108BDCu) [[unlikely]] return; }
L_00108BDC:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 142u);
    st8((c.r[29].w[0] + 142u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108BF8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108BF8u) [[unlikely]] return; }
L_00108BF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[17].d[0] = c.r[17].d[0] << 32;
    c.r[17].d[0] = c.r[17].d[0] >> 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C20u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108C20u) [[unlikely]] return; }
L_00108C20:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 134u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 134u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C48u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108C48u) [[unlikely]] return; }
L_00108C48:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 17u);
    set32(c.r[5], c.r[29].w[0] + 132u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 132u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C6Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108C6Cu) [[unlikely]] return; }
L_00108C6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 130u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 26u));
    st16((c.r[29].w[0] + 130u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C90u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108C90u) [[unlikely]] return; }
L_00108C90:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00108D90; } }
L_00108CA4:
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108CB4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00108CB4u) [[unlikely]] return; }
L_00108CB4:
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 141u);
    st8((c.r[29].w[0] + 141u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108CD0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108CD0u) [[unlikely]] return; }
L_00108CD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[21].d[0] = c.r[21].d[0] << 32;
    c.r[21].d[0] = c.r[21].d[0] >> 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108CF8u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108CF8u) [[unlikely]] return; }
L_00108CF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 24u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_00108D3C; } }
    st16((c.r[29].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108D2Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108D2Cu) [[unlikely]] return; }
L_00108D2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00108D8C; } }
L_00108D3C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 4u);  goto L_00108D68; }
    st8((c.r[29].w[0] + 143u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108D58u); set32(c.r[5], c.r[29].w[0] + 143u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108D58u) [[unlikely]] return; }
L_00108D58:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00108D8C; } }
L_00108D68:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_00108D90; }
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108D80u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108D80u) [[unlikely]] return; }
L_00108D80:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_00108D8C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00108D90:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 26u));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00108CA4u | kUnwind; return; } goto L_00108CA4; }
L_00108DA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00108DA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00108DD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00108DFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00108E74; } }
L_00108DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E04u);  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x00108E04u) [[unlikely]] return; }
L_00108E04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 26u));  goto L_00108E18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00108E74; } }
L_00108E18:
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E2Cu); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x00108E2Cu) [[unlikely]] return; }
L_00108E2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = ld16((c.r[16].w[0] + 26u));  goto L_00108E3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00108E74; } }
L_00108E3C:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E6Cu); st64((c.r[16].w[0] + 8u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_0002(c, 371u, depth + 1u); else { c.pc = 0x0010B610u; return; } if (c.pc != 0x00108E6Cu) [[unlikely]] return; }
L_00108E6C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00108E74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00108E90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00108ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001090C8; } }
L_00108ED0:
    c.r[16].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 115u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00108F00; }
    set32(c.r[2], 0u + 117u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00108EFC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108EFCu); set32(c.r[4], c.r[4].w[0] - 16560u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x00108EFCu) [[unlikely]] return; }
L_00108EFC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00108F00:
    set32(c.r[5], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108F0Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x00108F0Cu) [[unlikely]] return; }
L_00108F0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_00108F20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00108F58; } }
L_00108F20:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[21].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108F3Cu); st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0002(c, 371u, depth + 1u); else { c.pc = 0x0010B610u; return; } if (c.pc != 0x00108F3Cu) [[unlikely]] return; }
L_00108F3C:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108F4Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x00108F4Cu) [[unlikely]] return; }
L_00108F4C:
    set32(c.r[4], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108F58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x00108F58u) [[unlikely]] return; }
L_00108F58:
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] ^ 115ull;
    st64((c.r[17].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 16u);
    st16((c.r[17].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 48u));
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));  goto L_001090C8; }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[29].w[0] + 122u);
    st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108FA8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108FA8u) [[unlikely]] return; }
L_00108FA8:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108FBCu); st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00108FBCu) [[unlikely]] return; }
L_00108FBC:
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[5], c.r[29].w[0] + 120u);
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108FD4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00108FD4u) [[unlikely]] return; }
L_00108FD4:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108FE8u); st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00108FE8u) [[unlikely]] return; }
L_00108FE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 125u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109000u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109000u) [[unlikely]] return; }
L_00109000:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109028u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109028u) [[unlikely]] return; }
L_00109028:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 118u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0010903C:
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00109040:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    st16((c.r[29].w[0] + 118u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109054u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109054u) [[unlikely]] return; }
L_00109054:
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 116u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109078u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109078u) [[unlikely]] return; }
L_00109078:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 127u);
    c.budget -= 2;
L_00109080:
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109098u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109098u) [[unlikely]] return; }
L_00109098:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 126u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001090B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001090B8u) [[unlikely]] return; }
L_001090B8:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    c.budget -= 4;
L_001090C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001090F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00109130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109330; } }
L_00109130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109138u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 201u, depth + 1u); else { c.pc = 0x00109AE0u; return; } if (c.pc != 0x00109138u) [[unlikely]] return; }
L_00109138:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00109154; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010914Cu); set32(c.r[4], c.r[4].w[0] - 16521u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010914Cu) [[unlikely]] return; }
L_0010914C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109330; } }
L_00109154:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109160u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0002(c, 188u, depth + 1u); else { c.pc = 0x001098E0u; return; } if (c.pc != 0x00109160u) [[unlikely]] return; }
L_00109160:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0010917C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109174u); set32(c.r[4], c.r[4].w[0] - 16476u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x00109174u) [[unlikely]] return; }
L_00109174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109330; } }
L_0010917C:
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109188u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x00109188u) [[unlikely]] return; }
L_00109188:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0010919C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109330; } }
L_0010919C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001091A8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 191u, depth + 1u); else { c.pc = 0x001099A0u; return; } if (c.pc != 0x001091A8u) [[unlikely]] return; }
L_001091A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 6u);  goto L_001091D0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001091BCu); set32(c.r[4], c.r[4].w[0] - 16434u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x001091BCu) [[unlikely]] return; }
L_001091BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001091C8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x001091C8u) [[unlikely]] return; }
L_001091C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109330; } }
L_001091D0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001091F4u); st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0002(c, 371u, depth + 1u); else { c.pc = 0x0010B610u; return; } if (c.pc != 0x001091F4u) [[unlikely]] return; }
L_001091F4:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109204u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x00109204u) [[unlikely]] return; }
L_00109204:
    set32(c.r[4], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109210u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x00109210u) [[unlikely]] return; }
L_00109210:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 48u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));  goto L_00109330; }
    set32(c.r[2], 0u + 6u);
    set32(c.r[5], c.r[29].w[0] + 124u);
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109234u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109234u) [[unlikely]] return; }
L_00109234:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109248u); st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00109248u) [[unlikely]] return; }
L_00109248:
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[5], c.r[29].w[0] + 122u);
    st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109260u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109260u) [[unlikely]] return; }
L_00109260:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109274u); st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00109274u) [[unlikely]] return; }
L_00109274:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 127u);
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010928Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010928Cu) [[unlikely]] return; }
L_0010928C:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[21].d[0] = c.r[21].d[0] << 32;
    c.r[21].d[0] = c.r[21].d[0] >> 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001092B4u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001092B4u) [[unlikely]] return; }
L_001092B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001092E0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001092E0u) [[unlikely]] return; }
L_001092E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 118u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 118u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109300u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109300u) [[unlikely]] return; }
L_00109300:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 116u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109320u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109320u) [[unlikely]] return; }
L_00109320:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    c.budget -= 4;
L_00109330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00109360:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001093A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010958C; } }
L_001093A0:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001093D8; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001093B8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0002(c, 188u, depth + 1u); else { c.pc = 0x001098E0u; return; } if (c.pc != 0x001093B8u) [[unlikely]] return; }
L_001093B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001093D4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001093CCu); set32(c.r[4], c.r[4].w[0] - 16392u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x001093CCu) [[unlikely]] return; }
L_001093CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010958C; } }
L_001093D4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001093D8:
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001093E4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x001093E4u) [[unlikely]] return; }
L_001093E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001093F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010958C; } }
L_001093F8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109404u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 191u, depth + 1u); else { c.pc = 0x001099A0u; return; } if (c.pc != 0x00109404u) [[unlikely]] return; }
L_00109404:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 5u);  goto L_0010942C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109418u); set32(c.r[4], c.r[4].w[0] - 16352u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x00109418u) [[unlikely]] return; }
L_00109418:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109424u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x00109424u) [[unlikely]] return; }
L_00109424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010958C; } }
L_0010942C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109450u); st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0002(c, 371u, depth + 1u); else { c.pc = 0x0010B610u; return; } if (c.pc != 0x00109450u) [[unlikely]] return; }
L_00109450:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109460u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x00109460u) [[unlikely]] return; }
L_00109460:
    set32(c.r[4], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010946Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x0010946Cu) [[unlikely]] return; }
L_0010946C:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 48u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));  goto L_0010958C; }
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], c.r[29].w[0] + 124u);
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109490u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109490u) [[unlikely]] return; }
L_00109490:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094A4u); st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001094A4u) [[unlikely]] return; }
L_001094A4:
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[5], c.r[29].w[0] + 122u);
    st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094BCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001094BCu) [[unlikely]] return; }
L_001094BC:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094D0u); st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001094D0u) [[unlikely]] return; }
L_001094D0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 127u);
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094E8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001094E8u) [[unlikely]] return; }
L_001094E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[21].d[0] = c.r[21].d[0] << 32;
    c.r[21].d[0] = c.r[21].d[0] >> 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109510u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109510u) [[unlikely]] return; }
L_00109510:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010953Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010953Cu) [[unlikely]] return; }
L_0010953C:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 118u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 118u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010955Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010955Cu) [[unlikely]] return; }
L_0010955C:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 116u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010957Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010957Cu) [[unlikely]] return; }
L_0010957C:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    c.budget -= 4;
L_0010958C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001095B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00109610; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 72u)));  goto L_00109614; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109610; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109608u); set32(c.r[4], c.r[4].w[0] - 16312u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x00109608u) [[unlikely]] return; }
L_00109608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109790; } }
L_00109610:
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 1;
L_00109614:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00109624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109790; } }
L_00109624:
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109630u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x00109630u) [[unlikely]] return; }
L_00109630:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00109644; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109790; } }
L_00109644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010964Cu);  if (depth < kMaxDepth) unit_0002(c, 371u, depth + 1u); else { c.pc = 0x0010B610u; return; } if (c.pc != 0x0010964Cu) [[unlikely]] return; }
L_0010964C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[6].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st64((c.r[16].w[0] + 8u), 0ull);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109684u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x00109684u) [[unlikely]] return; }
L_00109684:
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109690u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x00109690u) [[unlikely]] return; }
L_00109690:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 48u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));  goto L_00109790; }
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    st16((c.r[29].w[0] + 108u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001096B4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001096B4u) [[unlikely]] return; }
L_001096B4:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001096C8u); st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001096C8u) [[unlikely]] return; }
L_001096C8:
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 106u);
    st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001096E0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x001096E0u) [[unlikely]] return; }
L_001096E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001096F4u); st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001096F4u) [[unlikely]] return; }
L_001096F4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 110u);
    st8((c.r[29].w[0] + 110u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010970Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010970Cu) [[unlikely]] return; }
L_0010970C:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[20].d[0] = c.r[20].d[0] << 32;
    c.r[20].d[0] = c.r[20].d[0] >> 32;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109734u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109734u) [[unlikely]] return; }
L_00109734:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109760u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109760u) [[unlikely]] return; }
L_00109760:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 111u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109780u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00109780u) [[unlikely]] return; }
L_00109780:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    c.budget -= 4;
L_00109790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001097B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], 0u + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001097CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001097E4; } }
L_001097CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001097D4u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 191u, depth + 1u); else { c.pc = 0x001099A0u; return; } if (c.pc != 0x001097D4u) [[unlikely]] return; }
L_001097D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001097E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[29].w[0] + 24u));  if (t) { goto L_001097E4; } }
L_001097E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001097F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109804u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x00109804u) [[unlikely]] return; }
L_00109804:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] & 65535ull;  goto L_00109814; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_001098D0; } }
L_00109814:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001098D0; }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001098CC; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001098CC; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 1;
L_0010983C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001098CC; } }
    goto L_00109844;
L_00109840:
    c.budget -= 1;
L_00109844:
    set32(c.r[2], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001098CC; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001098CC; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001098CC; } }
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001098CC; } }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001098CC; } }
L_00109880:
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001098CC; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001098CC; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_001098D0; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001098D0; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001098C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 65535ull;  if (t) { goto L_001098D0; } }
L_001098C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001098D0; } }
L_001098CC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001098D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001098E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001098FCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x001098FCu) [[unlikely]] return; }
L_001098FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  goto L_00109980; }
    goto L_00109904;
L_00109900:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 1;
L_00109904:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010992C; }
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0010998C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010998C; } }
L_0010992C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00109950; }
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00109974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010998C; } }
L_00109950:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00109974; } }
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] - 240u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00109974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010998C; } }
L_00109974:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010998C; } }
L_00109980:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0010998C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001099A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001099BCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x001099BCu) [[unlikely]] return; }
L_001099BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_00109A80; }
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 32u);
    set32(c.r[4], 0u + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00109A70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 17088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00108000u < 16384u) { entry = entries_0002[(t - 0x00108000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001099FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 8u), c.r[4].d[0]);  if (t) { goto L_00109A78; } }
L_00109A04:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 8u), c.r[2].d[0]);  if (t) { goto L_00109A78; } }
L_00109A10:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 8u), c.r[2].d[0]);  if (t) { goto L_00109A78; } }
L_00109A1C:
    st64((c.r[16].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00109A78; } }
L_00109A30:
    st64((c.r[16].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00109A78; } }
L_00109A44:
    st64((c.r[16].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00109A78; } }
L_00109A58:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 8u), c.r[2].d[0]);  if (t) { goto L_00109A78; } }
L_00109A64:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 8u), c.r[2].d[0]);  if (t) { goto L_00109A78; } }
L_00109A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109AC8; } }
L_00109A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00109AC8; } }
L_00109A80:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld64((c.r[2].w[0] + 8u));  goto L_00109AB0; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00109AAC; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00109AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109AC8; } }
L_00109AAC:
    c.r[3].d[0] = ld64((c.r[2].w[0] + 8u));
    c.budget -= 1;
L_00109AB0:
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 17u));
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_00109AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00109AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
L_00109AF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B04u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x00109B04u) [[unlikely]] return; }
L_00109B04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  goto L_00109BF0; }
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00109C1C; }
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109BE4; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00109C1C; }
L_00109BE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00109C1C; } }
L_00109BF0:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[16].d[0] = ld16((c.r[2].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00109AF8u | kUnwind; return; } goto L_00109AF8; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00109C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109C1C; } }
L_00109C10:
    c.r[16].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109AF8u | kUnwind; return; } goto L_00109AF8; } }
L_00109C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00109C30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109C58u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x00109C58u) [[unlikely]] return; }
L_00109C58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_00109CB4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_00109C98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109C78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x00109C78u) [[unlikely]] return; }
L_00109C78:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x00109C84u) [[unlikely]] return; }
L_00109C84:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00109CAC; } }
L_00109C98:
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
L_00109CAC:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 2;
L_00109CB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x21530000u);
    c.r[2].d[0] = c.r[2].d[0] | 17496ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_00109CD8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109CD0u); set32(c.r[4], c.r[4].w[0] - 16264u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x00109CD0u) [[unlikely]] return; }
L_00109CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109EC4; } }
L_00109CD8:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[5].w[0] - 16233u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109CE8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00109CE8u) [[unlikely]] return; }
L_00109CE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109CF4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x00109CF4u) [[unlikely]] return; }
L_00109CF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u - 1u);  goto L_00109D50; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_00109D34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x00109D14u) [[unlikely]] return; }
L_00109D14:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x00109D20u) [[unlikely]] return; }
L_00109D20:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00109D48; } }
L_00109D34:
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
L_00109D48:
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.budget -= 2;
L_00109D50:
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[6].d[0] = ld8((c.r[29].w[0] + 76u));
    c.r[3].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[2].d[0] = ld8((c.r[29].w[0] + 77u));
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 78u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 79u));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[5], c.r[2].w[0] << 8);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 19;
    if (c.r[7].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00109DB0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109DA8u); set32(c.r[4], c.r[4].w[0] - 16228u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x00109DA8u) [[unlikely]] return; }
L_00109DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109EC4; } }
L_00109DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109DB8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x00109DB8u) [[unlikely]] return; }
L_00109DB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_00109E14; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_00109DF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109DD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x00109DD8u) [[unlikely]] return; }
L_00109DD8:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109DE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x00109DE4u) [[unlikely]] return; }
L_00109DE4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00109E0C; } }
L_00109DF8:
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
L_00109E0C:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 2;
L_00109E14:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] | 1132ull;
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00109E44; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109E38u); set32(c.r[4], c.r[4].w[0] - 16191u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x00109E38u) [[unlikely]] return; }
L_00109E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109EC4; } }
L_00109E40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00109E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109E4Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x00109E4Cu) [[unlikely]] return; }
L_00109E4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_00109E94; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_00109E78; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_00109E78:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_00109E94:
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109EA8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 223u, depth + 1u); else { c.pc = 0x00109F50u; return; } if (c.pc != 0x00109EA8u) [[unlikely]] return; }
L_00109EA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] & 65535ull;  goto L_00109EB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109EC4; } }
L_00109EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109E40u | kUnwind; return; } goto L_00109E40; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00109EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00109EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109EF8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x00109EF8u) [[unlikely]] return; }
L_00109EF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_00109F40; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_00109F24; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_00109F24:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 7;
L_00109F40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00109F50:
    set32(c.r[29], c.r[29].w[0] - 432u);
    set32(c.r[2], 0u + 241u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] & 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0010B2C0; } }
    set32(c.r[2], 0u + 240u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[7], ld32((c.r[17].w[0])));  goto L_0010B2C4; }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0010B2C0; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0010B2C0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010B21C; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010B01C; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0010B018; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010A24C; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010A0EC; }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010A00C; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0010B2EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B2C0; } }
L_0010A00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A014u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A014u) [[unlikely]] return; }
L_0010A014:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010A038; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_0010A038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A040u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 363u, depth + 1u); else { c.pc = 0x0010B4A0u; return; } if (c.pc != 0x0010A040u) [[unlikely]] return; }
    goto L_0010A040;
L_0010A03C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0010A040:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] >= 0) { c.r[5].d[0] = c.r[18].d[0] << 32;  goto L_0010A054; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0010A09C; } }
L_0010A054:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A060u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A060u) [[unlikely]] return; }
L_0010A060:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0010A09C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A078u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010A078u) [[unlikely]] return; }
L_0010A078:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 2;
L_0010A080:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[18].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A09C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[19].w[0]);  goto L_0010B2E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A0B0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0010A0B0u) [[unlikely]] return; }
L_0010A0B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0010A0D8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A0C4u); set32(c.r[4], c.r[4].w[0] - 16152u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010A0C4u) [[unlikely]] return; }
L_0010A0C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A0D0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010A0D0u) [[unlikely]] return; }
L_0010A0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010B2EC; } }
L_0010A0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A0E0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010A0E0u) [[unlikely]] return; }
L_0010A0E0:
    st32((c.r[17].w[0]), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B2E8; } }
L_0010A0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A0F4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A0F4u) [[unlikely]] return; }
L_0010A0F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010A118; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0010A100:
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
L_0010A118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A120u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 363u, depth + 1u); else { c.pc = 0x0010B4A0u; return; } if (c.pc != 0x0010A120u) [[unlikely]] return; }
L_0010A120:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] >= 0) { c.r[5].d[0] = c.r[18].d[0] << 32;  goto L_0010A134; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0010A17C; } }
L_0010A134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A140u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A140u) [[unlikely]] return; }
L_0010A140:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0010A17C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A158u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010A158u) [[unlikely]] return; }
L_0010A158:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[18].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 9;
L_0010A17C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A188u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A188u) [[unlikely]] return; }
L_0010A188:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A1D0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010A1B4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010A1B4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A1D0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  goto L_0010A1F8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A1F0u); set32(c.r[4], c.r[4].w[0] - 16125u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010A1F0u) [[unlikely]] return; }
L_0010A1F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010B2EC; } }
L_0010A1F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A204u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A204u) [[unlikely]] return; }
L_0010A204:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A228; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A228:
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A238u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x001095B0u; return; } if (c.pc != 0x0010A238u) [[unlikely]] return; }
L_0010A238:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A244u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010A244u) [[unlikely]] return; }
L_0010A244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B2E8; } }
L_0010A24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A254u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A254u) [[unlikely]] return; }
L_0010A254:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010A278; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_0010A278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A280u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 363u, depth + 1u); else { c.pc = 0x0010B4A0u; return; } if (c.pc != 0x0010A280u) [[unlikely]] return; }
L_0010A280:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] >= 0) { c.r[5].d[0] = c.r[18].d[0] << 32;  goto L_0010A294; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0010A2DC; } }
L_0010A294:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A2A0u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A2A0u) [[unlikely]] return; }
L_0010A2A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0010A2DC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A2B8u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010A2B8u) [[unlikely]] return; }
L_0010A2B8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[18].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 9;
L_0010A2DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A2E8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A2E8u) [[unlikely]] return; }
L_0010A2E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A330; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010A314; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010A314:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A330:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  goto L_0010A358; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A350u); set32(c.r[4], c.r[4].w[0] - 16125u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010A350u) [[unlikely]] return; }
L_0010A350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010B2EC; } }
L_0010A358:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A364u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A364u) [[unlikely]] return; }
L_0010A364:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A3AC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010A390; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010A390:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A3AC:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0010AFF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 17040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00108000u < 16384u) { entry = entries_0002[(t - 0x00108000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0010A3DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A3E8u) [[unlikely]] return; }
L_0010A3E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A40C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A40C:
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A420u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A420u) [[unlikely]] return; }
L_0010A420:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A444; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A444:
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A458u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 107u, depth + 1u); else { c.pc = 0x00108E90u; return; } if (c.pc != 0x0010A458u) [[unlikely]] return; }
L_0010A458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0010B008; } }
L_0010A460:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A46Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A46Cu) [[unlikely]] return; }
L_0010A46C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A490; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A490:
    c.r[19].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A4A4u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A4A4u) [[unlikely]] return; }
L_0010A4A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A4C8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A4C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0010A4DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0010A59C; } }
L_0010A4DC:
    c.r[19].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 115u);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[19].d[0] == c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0010A50C; }
L_0010A4F0:
    set32(c.r[2], 0u + 117u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0010A508; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A508u); set32(c.r[4], c.r[4].w[0] - 16602u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010A508u) [[unlikely]] return; }
L_0010A508:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010A50C:
    set32(c.r[5], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A518u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010A518u) [[unlikely]] return; }
L_0010A518:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_0010A52C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0010A564; } }
L_0010A52C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A548u); st16((c.r[21].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0002(c, 371u, depth + 1u); else { c.pc = 0x0010B610u; return; } if (c.pc != 0x0010A548u) [[unlikely]] return; }
L_0010A548:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A558u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x0010A558u) [[unlikely]] return; }
L_0010A558:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A564u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x0010A564u) [[unlikely]] return; }
L_0010A564:
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[19].d[0] ^ 115ull;
    st64((c.r[21].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[21].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[21].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 17u);
    st16((c.r[21].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[21].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st8((c.r[21].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[21].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[21].w[0] + 32u), 0u);
    c.r[22].d[0] = ld16((c.r[21].w[0] + 2u));
    c.budget -= 14;
L_0010A59C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A5ACu); c.r[30].d[0] = c.r[22].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A5ACu) [[unlikely]] return; }
L_0010A5AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A5F4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010A5D8; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010A5D8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A5F4:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[23].d[0] = c.r[18].d[0] & 255ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0010A6E4; } }
L_0010A608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A610u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 363u, depth + 1u); else { c.pc = 0x0010B4A0u; return; } if (c.pc != 0x0010A610u) [[unlikely]] return; }
L_0010A610:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] >= 0) { c.r[5].d[0] = c.r[18].d[0] << 32;  goto L_0010A624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0010A66C; } }
L_0010A624:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A630u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A630u) [[unlikely]] return; }
L_0010A630:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0010A66C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A648u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010A648u) [[unlikely]] return; }
L_0010A648:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[18].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 9;
L_0010A66C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[23].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010A68C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010A680u) [[unlikely]] return; }
L_0010A680:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010A6BC; } }
L_0010A68C:
    c.budget -= 2;
    if (c.r[23].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010A6A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A69Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 359u, depth + 1u); else { c.pc = 0x0010B370u; return; } if (c.pc != 0x0010A69Cu) [[unlikely]] return; }
L_0010A69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0010A6C0; } }
L_0010A6A4:
    c.budget -= 2;
    if (c.r[23].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0010A6BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A6B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 357u, depth + 1u); else { c.pc = 0x0010B320u; return; } if (c.pc != 0x0010A6B4u) [[unlikely]] return; }
L_0010A6B4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0010A6BC:
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0010A6C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A6D4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 103u, depth + 1u); else { c.pc = 0x00108DD0u; return; } if (c.pc != 0x0010A6D4u) [[unlikely]] return; }
L_0010A6D4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A6E0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010A6E0u) [[unlikely]] return; }
L_0010A6E0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0010A6E4:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A608u | kUnwind; return; } goto L_0010A608; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A700u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 83u, depth + 1u); else { c.pc = 0x00108AF0u; return; } if (c.pc != 0x0010A700u) [[unlikely]] return; }
L_0010A700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B004; } }
L_0010A708:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A714u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A714u) [[unlikely]] return; }
L_0010A714:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A738; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A738:
    c.r[19].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A74Cu); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A74Cu) [[unlikely]] return; }
L_0010A74C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A794; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010A778; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010A778:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A794:
    c.r[2].d[0] = c.r[19].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[18].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0010A808; } }
    set32(c.r[3], 0u - c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010A7CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A7C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010A7C0u) [[unlikely]] return; }
L_0010A7C0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010A7FC; } }
L_0010A7CC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010A7E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A7DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 359u, depth + 1u); else { c.pc = 0x0010B370u; return; } if (c.pc != 0x0010A7DCu) [[unlikely]] return; }
L_0010A7DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0010A800; } }
L_0010A7E4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0010A7FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A7F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 357u, depth + 1u); else { c.pc = 0x0010B320u; return; } if (c.pc != 0x0010A7F4u) [[unlikely]] return; }
L_0010A7F4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0010A7FC:
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0010A800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (t) { goto L_0010A80C; } }
L_0010A808:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010A80C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A820u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 63u, depth + 1u); else { c.pc = 0x001087C0u; return; } if (c.pc != 0x0010A820u) [[unlikely]] return; }
L_0010A820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B004; } }
L_0010A828:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A834u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A834u) [[unlikely]] return; }
L_0010A834:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A858; }
L_0010A83C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0010A840:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 6;
L_0010A858:
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A868u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A868u) [[unlikely]] return; }
L_0010A868:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A88C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.budget -= 4;
L_0010A880:
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 3;
L_0010A88C:
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A8A0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 46u, depth + 1u); else { c.pc = 0x00108590u; return; } if (c.pc != 0x0010A8A0u) [[unlikely]] return; }
L_0010A8A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B004; } }
L_0010A8A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A8B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A8B4u) [[unlikely]] return; }
L_0010A8B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A8D8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A8D8:
    c.r[21].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A8E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A8E8u) [[unlikely]] return; }
L_0010A8E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A90C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.budget -= 4;
L_0010A900:
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 3;
L_0010A90C:
    c.r[19].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A91Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A91Cu) [[unlikely]] return; }
L_0010A91C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A940; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A940:
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A950u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A950u) [[unlikely]] return; }
L_0010A950:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A974; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A974:
    c.r[9].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A990u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 26u, depth + 1u); else { c.pc = 0x00108300u; return; } if (c.pc != 0x0010A990u) [[unlikely]] return; }
L_0010A990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B004; } }
L_0010A998:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A9A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A9A4u) [[unlikely]] return; }
L_0010A9A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010A9C8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010A9C8:
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A9DCu); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010A9DCu) [[unlikely]] return; }
L_0010A9DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010AA24; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010AA08; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010AA08:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010AA24:
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[19].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0010AA98; } }
    set32(c.r[3], 0u - c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010AA5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010AA50u) [[unlikely]] return; }
L_0010AA50:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010AA8C; } }
L_0010AA5C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010AA74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 359u, depth + 1u); else { c.pc = 0x0010B370u; return; } if (c.pc != 0x0010AA6Cu) [[unlikely]] return; }
L_0010AA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0010AA90; } }
L_0010AA74:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0010AA8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 357u, depth + 1u); else { c.pc = 0x0010B320u; return; } if (c.pc != 0x0010AA84u) [[unlikely]] return; }
L_0010AA84:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0010AA8C:
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0010AA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (t) { goto L_0010AA9C; } }
L_0010AA98:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010AA9C:
    c.r[8].d[0] = c.r[18].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AAB0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 365u, depth + 1u); else { c.pc = 0x00107F60u; return; } if (c.pc != 0x0010AAB0u) [[unlikely]] return; }
L_0010AAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B004; } }
L_0010AAB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AAC4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010AAC4u) [[unlikely]] return; }
L_0010AAC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010AAE8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010AAE8:
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AAFCu); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010AAFCu) [[unlikely]] return; }
L_0010AAFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010AB44; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010AB28; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010AB28:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010AB44:
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[19].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0010ABB8; } }
    set32(c.r[3], 0u - c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010AB7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AB70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010AB70u) [[unlikely]] return; }
L_0010AB70:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010ABAC; } }
L_0010AB7C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010AB94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AB8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 359u, depth + 1u); else { c.pc = 0x0010B370u; return; } if (c.pc != 0x0010AB8Cu) [[unlikely]] return; }
L_0010AB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0010ABB0; } }
L_0010AB94:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0010ABAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ABA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 357u, depth + 1u); else { c.pc = 0x0010B320u; return; } if (c.pc != 0x0010ABA4u) [[unlikely]] return; }
L_0010ABA4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0010ABAC:
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0010ABB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_0010ABBC; } }
L_0010ABB8:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010ABBC:
    c.r[9].d[0] = c.r[18].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ABD4u); set32(c.r[6], 0u + 26u);  if (depth < kMaxDepth) unit_0001(c, 343u, depth + 1u); else { c.pc = 0x00107BE0u; return; } if (c.pc != 0x0010ABD4u) [[unlikely]] return; }
L_0010ABD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B004; } }
L_0010ABDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ABE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010ABE8u) [[unlikely]] return; }
L_0010ABE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010AC0C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010AC0C:
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AC20u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010AC20u) [[unlikely]] return; }
L_0010AC20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010AC68; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010AC4C; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010AC4C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010AC68:
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[19].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0010ACDC; } }
    set32(c.r[3], 0u - c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010ACA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AC94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010AC94u) [[unlikely]] return; }
L_0010AC94:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010ACD0; } }
L_0010ACA0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010ACB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ACB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 359u, depth + 1u); else { c.pc = 0x0010B370u; return; } if (c.pc != 0x0010ACB0u) [[unlikely]] return; }
L_0010ACB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0010ACD4; } }
L_0010ACB8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0010ACD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ACC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 357u, depth + 1u); else { c.pc = 0x0010B320u; return; } if (c.pc != 0x0010ACC8u) [[unlikely]] return; }
L_0010ACC8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0010ACD0:
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0010ACD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_0010ACE0; } }
L_0010ACDC:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010ACE0:
    c.r[9].d[0] = c.r[18].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ACF8u); set32(c.r[6], 0u + 27u);  if (depth < kMaxDepth) unit_0001(c, 343u, depth + 1u); else { c.pc = 0x00107BE0u; return; } if (c.pc != 0x0010ACF8u) [[unlikely]] return; }
L_0010ACF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B004; } }
L_0010AD00:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0010AD14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0010AD90; } }
L_0010AD14:
    set32(c.r[5], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD20u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010AD20u) [[unlikely]] return; }
L_0010AD20:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_0010AD34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0010AD6C; } }
L_0010AD34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD50u); st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0002(c, 371u, depth + 1u); else { c.pc = 0x0010B610u; return; } if (c.pc != 0x0010AD50u) [[unlikely]] return; }
L_0010AD50:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD60u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x0010AD60u) [[unlikely]] return; }
L_0010AD60:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD6Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x001058D0u; return; } if (c.pc != 0x0010AD6Cu) [[unlikely]] return; }
L_0010AD6C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 23u);
    st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st64((c.r[18].w[0] + 8u), 0ull);
    st16((c.r[18].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 28u), 0u);
    c.r[22].d[0] = ld16((c.r[18].w[0] + 2u));
    c.budget -= 9;
L_0010AD90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ADA0u); c.r[23].d[0] = c.r[22].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010ADA0u) [[unlikely]] return; }
L_0010ADA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010ADE8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010ADCC; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010ADCC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010ADE8:
    c.r[30].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0010AF2C; } }
L_0010ADF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ADFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 363u, depth + 1u); else { c.pc = 0x0010B4A0u; return; } if (c.pc != 0x0010ADFCu) [[unlikely]] return; }
L_0010ADFC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] >= 0) { c.r[5].d[0] = c.r[18].d[0] << 32;  goto L_0010AE10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0010AE58; } }
L_0010AE10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AE1Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010AE1Cu) [[unlikely]] return; }
L_0010AE1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0010AE58; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AE34u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010AE34u) [[unlikely]] return; }
L_0010AE34:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[18].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 9;
L_0010AE58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AE64u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010AE64u) [[unlikely]] return; }
L_0010AE64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010AEAC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010AE90; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010AE90:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010AEAC:
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AEBCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010AEBCu) [[unlikely]] return; }
L_0010AEBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010AF04; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010AEE8; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010AEE8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010AF04:
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF1Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 327u, depth + 1u); else { c.pc = 0x00107860u; return; } if (c.pc != 0x0010AF1Cu) [[unlikely]] return; }
L_0010AF1C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF28u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010AF28u) [[unlikely]] return; }
L_0010AF28:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0010AF2C:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010ADF4u | kUnwind; return; } goto L_0010ADF4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF44u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 296u, depth + 1u); else { c.pc = 0x00107400u; return; } if (c.pc != 0x0010AF44u) [[unlikely]] return; }
L_0010AF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B004; } }
L_0010AF4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF58u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010AF58u) [[unlikely]] return; }
L_0010AF58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010AFA0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010AF84; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010AF84:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010AFA0:
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AFB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010AFB0u) [[unlikely]] return; }
L_0010AFB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010AFD4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010AFD4:
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AFE8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 281u, depth + 1u); else { c.pc = 0x001071D0u; return; } if (c.pc != 0x0010AFE8u) [[unlikely]] return; }
L_0010AFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B004; } }
L_0010AFF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AFFCu); set32(c.r[4], c.r[4].w[0] - 16083u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010AFFCu) [[unlikely]] return; }
L_0010AFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010B2EC; } }
L_0010B004:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0010B008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B010u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010B010u) [[unlikely]] return; }
L_0010B010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B2E8; } }
L_0010B018:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010B01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B024u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B024u) [[unlikely]] return; }
L_0010B024:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010B048; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.budget -= 4;
L_0010B03C:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0010B048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B050u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 363u, depth + 1u); else { c.pc = 0x0010B4A0u; return; } if (c.pc != 0x0010B050u) [[unlikely]] return; }
L_0010B050:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] >= 0) { c.r[5].d[0] = c.r[18].d[0] << 32;  goto L_0010B064; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0010B0AC; } }
L_0010B064:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B070u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B070u) [[unlikely]] return; }
L_0010B070:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0010B0AC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B088u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010B088u) [[unlikely]] return; }
L_0010B088:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[18].d[0];
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 9;
L_0010B0AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B0B8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B0B8u) [[unlikely]] return; }
L_0010B0B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010B100; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010B0E4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010B0E4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010B100:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  goto L_0010B128; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B120u); set32(c.r[4], c.r[4].w[0] - 16125u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010B120u) [[unlikely]] return; }
L_0010B120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010B2EC; } }
L_0010B128:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B134u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B134u) [[unlikely]] return; }
L_0010B134:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010B17C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010B160; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010B160:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010B17C:
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B18Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B18Cu) [[unlikely]] return; }
L_0010B18C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010B1D4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010B1B8; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010B1B8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010B1D4:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[7].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0010B1F8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B1F0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 147u, depth + 1u); else { c.pc = 0x00109360u; return; } if (c.pc != 0x0010B1F0u) [[unlikely]] return; }
L_0010B1F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0010B20C; } }
L_0010B1F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B208u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 126u, depth + 1u); else { c.pc = 0x001090F0u; return; } if (c.pc != 0x0010B208u) [[unlikely]] return; }
L_0010B208:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0010B20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B214u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010B214u) [[unlikely]] return; }
L_0010B214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B2E8; } }
L_0010B21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B224u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B224u) [[unlikely]] return; }
L_0010B224:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0010B280; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_0010B264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B244u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010B244u) [[unlikely]] return; }
L_0010B244:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B250u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010B250u) [[unlikely]] return; }
L_0010B250:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0010B278; } }
L_0010B264:
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
L_0010B278:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 2;
L_0010B280:
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B294u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B294u) [[unlikely]] return; }
L_0010B294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010B2E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 8u), c.r[2].d[0]);  if (t) { goto L_0010B2E8; } }
L_0010B2C0:
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0010B2C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B2D8u); set32(c.r[5], c.r[5].w[0] - 16040u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0010B2D8u) [[unlikely]] return; }
L_0010B2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B2E0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010B2E0u) [[unlikely]] return; }
L_0010B2E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010B2EC; } }
L_0010B2E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010B2EC:
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
L_0010B320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B338u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B338u) [[unlikely]] return; }
L_0010B338:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0010B35C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 7;
L_0010B35C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010B370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B38Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B38Cu) [[unlikely]] return; }
L_0010B38C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0010B480; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_0010B464; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B3B0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B3B0u) [[unlikely]] return; }
L_0010B3B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010B3F8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010B3DC; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010B3DC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[17].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010B3F8:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B408u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B408u) [[unlikely]] return; }
L_0010B408:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010B450; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010B434; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010B434:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[17].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010B450:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0010B478; } }
L_0010B464:
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[17].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
L_0010B478:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 2;
L_0010B480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010B4A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010B518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B4C4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B4C4u) [[unlikely]] return; }
L_0010B4C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010B50C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010B4F0; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010B4F0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010B50C:
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010B5CC; } }
L_0010B518:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 1u);  goto L_0010B590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B52Cu);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B52Cu) [[unlikely]] return; }
L_0010B52C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0010B588; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_0010B56C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B54Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010B54Cu) [[unlikely]] return; }
L_0010B54C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B558u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010B558u) [[unlikely]] return; }
L_0010B558:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0010B580; } }
L_0010B56C:
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
L_0010B580:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 2;
L_0010B588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010B5D0; } }
L_0010B590:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0010B5CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B5A0u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B5A0u) [[unlikely]] return; }
L_0010B5A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010B5C4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010B5C4:
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0010B5CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0010B5D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010B5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st16((c.r[29].w[0] + 30u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B5FCu); set32(c.r[5], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00105BE0u; return; } if (c.pc != 0x0010B5FCu) [[unlikely]] return; }
L_0010B5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010B610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0010B66C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B634u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010B634u) [[unlikely]] return; }
L_0010B634:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B648u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010B648u) [[unlikely]] return; }
L_0010B648:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B65Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0010B65Cu) [[unlikely]] return; }
L_0010B65C:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0010B670; } }
L_0010B66C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010B670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010B690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B6BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010B6BCu) [[unlikely]] return; }
L_0010B6BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B6D0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0010B6D0u) [[unlikely]] return; }
L_0010B6D0:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010B700:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 48u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010B8C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[5].w[0] - 15968u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B734u); set32(c.r[6], c.r[6].w[0] - 15961u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0010B734u) [[unlikely]] return; }
L_0010B734:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B744u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00106A90u; return; } if (c.pc != 0x0010B744u) [[unlikely]] return; }
L_0010B744:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 16u);  goto L_0010B884; }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B758u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B758u) [[unlikely]] return; }
L_0010B758:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0010B77C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-8ll);
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
L_0010B77C:
    set32(c.r[4], c.r[16].w[0] + 16u);
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B78Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B78Cu) [[unlikely]] return; }
L_0010B78C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010B7E8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_0010B7CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B7ACu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010B7ACu) [[unlikely]] return; }
L_0010B7AC:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B7B8u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010B7B8u) [[unlikely]] return; }
L_0010B7B8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0010B7E0; } }
L_0010B7CC:
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 5;
L_0010B7E0:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 2;
L_0010B7E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 1132ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 16u);  goto L_0010B800; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010B994; } }
L_0010B800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B808u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010B808u) [[unlikely]] return; }
L_0010B808:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010B864; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_0010B848; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B828u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010B828u) [[unlikely]] return; }
L_0010B828:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B834u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010B834u) [[unlikely]] return; }
L_0010B834:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0010B85C; } }
L_0010B848:
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 5;
L_0010B85C:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 2;
L_0010B864:
    c.r[2].d[0] = ld32((c.r[16].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010B994; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B87Cu); set32(c.r[4], c.r[4].w[0] - 15956u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010B87Cu) [[unlikely]] return; }
L_0010B87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010B994; } }
L_0010B884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B88Cu);  if (depth < kMaxDepth) unit_0001(c, 257u, depth + 1u); else { c.pc = 0x00106E20u; return; } if (c.pc != 0x0010B88Cu) [[unlikely]] return; }
L_0010B88C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 15935u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B8A0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00106A90u; return; } if (c.pc != 0x0010B8A0u) [[unlikely]] return; }
L_0010B8A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010B8B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010B994; } }
L_0010B8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B8B8u); st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0003(c, 170u, depth + 1u); else { c.pc = 0x0010DD10u; return; } if (c.pc != 0x0010B8B8u) [[unlikely]] return; }
L_0010B8B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010B990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010B994; } }
L_0010B8C8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 80u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010B8E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B8DCu);  if (depth < kMaxDepth) unit_0000(c, 381u, depth + 1u); else { c.pc = 0x00103FF0u; return; } if (c.pc != 0x0010B8DCu) [[unlikely]] return; }
L_0010B8DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B990; } }
L_0010B8E4:
    set32(c.r[4], c.r[29].w[0] + 92u);
    set32(c.r[5], c.r[5].w[0] - 15961u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B8F4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0010B8F4u) [[unlikely]] return; }
L_0010B8F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x21530000u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 92u));
    c.r[3].d[0] = c.r[2].d[0] | 17496ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 93u));
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 94u));
    set32(c.r[4], c.r[2].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B930u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 165u, depth + 1u); else { c.pc = 0x0010DCA0u; return; } if (c.pc != 0x0010B930u) [[unlikely]] return; }
L_0010B930:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_0010B948; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 1132ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_0010B950; } }
L_0010B948:
    c.r[2].d[0] = c.r[2].d[0] | 1122ull;
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0010B950:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B960u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010B960u) [[unlikely]] return; }
L_0010B960:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B984u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010B984u) [[unlikely]] return; }
L_0010B984:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0010B990:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010B994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010B9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B9C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 425u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0010B9C4u) [[unlikely]] return; }
L_0010B9C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B9D0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010B9D0u) [[unlikely]] return; }
L_0010B9D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_0010B9F0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B9ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010B9ECu) [[unlikely]] return; }
L_0010B9EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_0010B9F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010BA08; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BA08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010BA08u) [[unlikely]] return; }
L_0010BA08:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0010BA28; }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BA1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0001(c, 272u, depth + 1u); else { c.pc = 0x00107050u; return; } if (c.pc != 0x0010BA1Cu) [[unlikely]] return; }
L_0010BA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BA24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0010BA24u) [[unlikely]] return; }
L_0010BA24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0010BA28:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010BA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0010BA88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 27840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BA70u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 177u, depth + 1u); else { c.pc = 0x00105D10u; return; } if (c.pc != 0x0010BA70u) [[unlikely]] return; }
L_0010BA70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0010BA8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BA88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0010BA88u) [[unlikely]] return; }
L_0010BA88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0010BA8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010BAA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0010BC18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BADCu); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 188u, depth + 1u); else { c.pc = 0x00105ED0u; return; } if (c.pc != 0x0010BADCu) [[unlikely]] return; }
L_0010BADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 88u);  if (t) { goto L_0010BBDC; } }
L_0010BAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BAECu); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0001(c, 183u, depth + 1u); else { c.pc = 0x00105DF0u; return; } if (c.pc != 0x0010BAECu) [[unlikely]] return; }
L_0010BAEC:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BAF8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010BAF8u) [[unlikely]] return; }
L_0010BAF8:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB08u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 151u, depth + 1u); else { c.pc = 0x001056D0u; return; } if (c.pc != 0x0010BB08u) [[unlikely]] return; }
L_0010BB08:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0010BBBC; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 18u));
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 17u);  goto L_0010BB74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0010BB50; } }
L_0010BB30:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB4Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010BB4Cu) [[unlikely]] return; }
L_0010BB4C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0010BB50:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 24u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BB30u | kUnwind; return; } goto L_0010BB30; }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB6Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010BB6Cu) [[unlikely]] return; }
L_0010BB6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010BBB8; } }
L_0010BB74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010BBB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0010BB9C; } }
L_0010BB84:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB98u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010BB98u) [[unlikely]] return; }
L_0010BB98:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0010BB9C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 26u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BB84u | kUnwind; return; } goto L_0010BB84; }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BBB8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010BBB8u) [[unlikely]] return; }
L_0010BBB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0010BBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BBC4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010BBC4u) [[unlikely]] return; }
L_0010BBC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BBD0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010BBD0u) [[unlikely]] return; }
L_0010BBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BBD8u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0001(c, 184u, depth + 1u); else { c.pc = 0x00105E10u; return; } if (c.pc != 0x0010BBD8u) [[unlikely]] return; }
L_0010BBD8:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 1;
L_0010BBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BBE4u);  if (depth < kMaxDepth) unit_0001(c, 182u, depth + 1u); else { c.pc = 0x00105DE0u; return; } if (c.pc != 0x0010BBE4u) [[unlikely]] return; }
L_0010BBE4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BAE4u | kUnwind; return; } goto L_0010BAE4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BC00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 177u, depth + 1u); else { c.pc = 0x00105D10u; return; } if (c.pc != 0x0010BC00u) [[unlikely]] return; }
L_0010BC00:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0010BC1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BC18u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0010BC18u) [[unlikely]] return; }
L_0010BC18:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0010BC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010BC40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010BCEC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0010BCF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BC6Cu);  if (depth < kMaxDepth) unit_0003(c, 111u, depth + 1u); else { c.pc = 0x0010D260u; return; } if (c.pc != 0x0010BC6Cu) [[unlikely]] return; }
L_0010BC6C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 80u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_0010BC9C; }
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 62u);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BC8Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010BC8Cu) [[unlikely]] return; }
L_0010BC8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010BCD4; } }
L_0010BC9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 16u);  goto L_0010BCD8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BCB4u); set32(c.r[5], c.r[5].w[0] - 15929u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0010BCB4u) [[unlikely]] return; }
L_0010BCB4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BCC8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 118u, depth + 1u); else { c.pc = 0x00105010u; return; } if (c.pc != 0x0010BCC8u) [[unlikely]] return; }
L_0010BCC8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BCD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0010BCD4u) [[unlikely]] return; }
L_0010BCD4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_0010BCD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BCE0u);  if (depth < kMaxDepth) unit_0001(c, 271u, depth + 1u); else { c.pc = 0x00107040u; return; } if (c.pc != 0x0010BCE0u) [[unlikely]] return; }
L_0010BCE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010BCF0; } }
L_0010BCEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010BCF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010BD00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BD24u); st32((c.r[4].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0002(c, 378u, depth + 1u); else { c.pc = 0x0010B700u; return; } if (c.pc != 0x0010BD24u) [[unlikely]] return; }
L_0010BD24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 48u));  goto L_0010BD34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010BE4C; } }
L_0010BD34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0010BE4C; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010BE48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010BE48; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 80u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], 0u + 2u);  goto L_0010BDA0; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010BE48; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BD78u); set32(c.r[5], c.r[5].w[0] - 15929u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0010BD78u) [[unlikely]] return; }
L_0010BD78:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BD8Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 123u, depth + 1u); else { c.pc = 0x00105110u; return; } if (c.pc != 0x0010BD8Cu) [[unlikely]] return; }
L_0010BD8C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BD98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0010BD98u) [[unlikely]] return; }
L_0010BD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010BE48; } }
L_0010BDA0:
    st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BDB0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010BDB0u) [[unlikely]] return; }
L_0010BDB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BDC4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010BDC4u) [[unlikely]] return; }
L_0010BDC4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[29].w[0] + 90u);
    st16((c.r[29].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BDDCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010BDDCu) [[unlikely]] return; }
L_0010BDDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BDF0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010BDF0u) [[unlikely]] return; }
L_0010BDF0:
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 95u);
    st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BE0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010BE0Cu) [[unlikely]] return; }
L_0010BE0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[17].d[0] = c.r[17].d[0] << 32;
    c.r[17].d[0] = c.r[17].d[0] >> 32;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BE34u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010BE34u) [[unlikely]] return; }
L_0010BE34:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
L_0010BE48:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010BE4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010BE70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 124u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0010BEB0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BEB0u); set32(c.r[4], c.r[4].w[0] - 15928u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010BEB0u) [[unlikely]] return; }
L_0010BEB0:
    c.r[16].d[0] = c.r[16].d[0] << 56;
    set32(c.r[2], 0u + 114u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 119u);  goto L_0010BEE0; }
    set32(c.r[2], 0u + 119u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0010BEDC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BEDCu); set32(c.r[4], c.r[4].w[0] - 15900u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010BEDCu) [[unlikely]] return; }
L_0010BEDC:
    set32(c.r[2], 0u + 119u);
    c.budget -= 1;
L_0010BEE0:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 29248u)));  goto L_0010BF14; }
    set32(c.r[5], ld32((c.r[28].w[0] - 29248u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BEF4u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0010BEF4u) [[unlikely]] return; }
L_0010BEF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010BF30; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BF08u); set32(c.r[5], 0u + 512u);  if (depth < kMaxDepth) unit_0001(c, 276u, depth + 1u); else { c.pc = 0x001070C0u; return; } if (c.pc != 0x0010BF08u) [[unlikely]] return; }
L_0010BF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0010BF34; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29248u)));
    c.budget -= 1;
L_0010BF14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BF1Cu); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0010BF1Cu) [[unlikely]] return; }
L_0010BF1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010BF30; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BF30u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0001(c, 276u, depth + 1u); else { c.pc = 0x001070C0u; return; } if (c.pc != 0x0010BF30u) [[unlikely]] return; }
L_0010BF30:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0010BF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BF3Cu);  if (depth < kMaxDepth) unit_0002(c, 371u, depth + 1u); else { c.pc = 0x0010B610u; return; } if (c.pc != 0x0010BF3Cu) [[unlikely]] return; }
L_0010BF3C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 256u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 29248u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BF58u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0010BF58u) [[unlikely]] return; }
L_0010BF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010BF74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BF68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 180u, depth + 1u); else { c.pc = 0x00105D80u; return; } if (c.pc != 0x0010BF68u) [[unlikely]] return; }
L_0010BF68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0010BF74:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[17].w[0] + 8u), c.r[19].w[0]);  if (t) { goto L_0010BFA4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0003(c, 12u, depth); }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BF90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0001(c, 272u, depth + 1u); else { c.pc = 0x00107050u; return; } if (c.pc != 0x0010BF90u) [[unlikely]] return; }
L_0010BF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BF98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0010BF98u) [[unlikely]] return; }
L_0010BF98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0003(c, 12u, depth); } }
L_0010BFA4:
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 72u), 0u);
    st8((c.r[17].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 29248u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BFC0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0010BFC0u) [[unlikely]] return; }
L_0010BFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010BFDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BFD0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 180u, depth + 1u); else { c.pc = 0x00105D80u; return; } if (c.pc != 0x0010BFD0u) [[unlikely]] return; }
L_0010BFD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27840u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0010BFDC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 84u), c.r[19].w[0]);  if (t) { [[clang::musttail]] return unit_0003(c, 11u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BFF8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 278u, depth + 1u); else { c.pc = 0x00107120u; return; } if (c.pc != 0x0010BFF8u) [[unlikely]] return; }
L_0010BFF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C004u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0002(c, 204u, depth + 1u); else { c.pc = 0x00109C30u; return; } if (c.pc != 0x0010C004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0003(c, 2u, depth);
}

}
