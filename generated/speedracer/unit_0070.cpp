#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0070[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24,
    0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0,
    242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 331, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412,
    0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0,
    0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0,
    0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0,
    441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445,
    0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0,
    450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0,
    0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0,
    0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0070(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C0000;
    case 2u: goto L_002C0018;
    case 3u: goto L_002C0028;
    case 4u: goto L_002C0050;
    case 5u: goto L_002C0064;
    case 6u: goto L_002C00A4;
    case 7u: goto L_002C00C0;
    case 8u: goto L_002C00E0;
    case 9u: goto L_002C0124;
    case 10u: goto L_002C0140;
    case 11u: goto L_002C0160;
    case 12u: goto L_002C01B4;
    case 13u: goto L_002C01D0;
    case 14u: goto L_002C01F0;
    case 15u: goto L_002C0234;
    case 16u: goto L_002C0250;
    case 17u: goto L_002C0270;
    case 18u: goto L_002C0294;
    case 19u: goto L_002C02A0;
    case 20u: goto L_002C02B4;
    case 21u: goto L_002C02C4;
    case 22u: goto L_002C02D8;
    case 23u: goto L_002C02E8;
    case 24u: goto L_002C02FC;
    case 25u: goto L_002C030C;
    case 26u: goto L_002C0320;
    case 27u: goto L_002C0330;
    case 28u: goto L_002C0344;
    case 29u: goto L_002C034C;
    case 30u: goto L_002C0368;
    case 31u: goto L_002C0374;
    case 32u: goto L_002C0388;
    case 33u: goto L_002C03C0;
    case 34u: goto L_002C03DC;
    case 35u: goto L_002C0408;
    case 36u: goto L_002C04F0;
    case 37u: goto L_002C05AC;
    case 38u: goto L_002C0668;
    case 39u: goto L_002C06C0;
    case 40u: goto L_002C06E0;
    case 41u: goto L_002C06EC;
    case 42u: goto L_002C06F4;
    case 43u: goto L_002C0710;
    case 44u: goto L_002C0744;
    case 45u: goto L_002C0758;
    case 46u: goto L_002C076C;
    case 47u: goto L_002C07A0;
    case 48u: goto L_002C07B4;
    case 49u: goto L_002C07C8;
    case 50u: goto L_002C07F8;
    case 51u: goto L_002C0800;
    case 52u: goto L_002C080C;
    case 53u: goto L_002C0828;
    case 54u: goto L_002C0860;
    case 55u: goto L_002C0880;
    case 56u: goto L_002C0894;
    case 57u: goto L_002C08B0;
    case 58u: goto L_002C08E0;
    case 59u: goto L_002C090C;
    case 60u: goto L_002C0914;
    case 61u: goto L_002C091C;
    case 62u: goto L_002C0924;
    case 63u: goto L_002C0940;
    case 64u: goto L_002C0964;
    case 65u: goto L_002C0974;
    case 66u: goto L_002C0990;
    case 67u: goto L_002C09A4;
    case 68u: goto L_002C09B4;
    case 69u: goto L_002C09F0;
    case 70u: goto L_002C0A10;
    case 71u: goto L_002C0A1C;
    case 72u: goto L_002C0A38;
    case 73u: goto L_002C0A54;
    case 74u: goto L_002C0A60;
    case 75u: goto L_002C0A7C;
    case 76u: goto L_002C0AA4;
    case 77u: goto L_002C0AC4;
    case 78u: goto L_002C0AE0;
    case 79u: goto L_002C0AEC;
    case 80u: goto L_002C0B00;
    case 81u: goto L_002C0B28;
    case 82u: goto L_002C0B48;
    case 83u: goto L_002C0B64;
    case 84u: goto L_002C0B70;
    case 85u: goto L_002C0B84;
    case 86u: goto L_002C0BAC;
    case 87u: goto L_002C0BD0;
    case 88u: goto L_002C0BEC;
    case 89u: goto L_002C0BFC;
    case 90u: goto L_002C0C1C;
    case 91u: goto L_002C0C2C;
    case 92u: goto L_002C0C60;
    case 93u: goto L_002C0C8C;
    case 94u: goto L_002C0C9C;
    case 95u: goto L_002C0CBC;
    case 96u: goto L_002C0CCC;
    case 97u: goto L_002C0CEC;
    case 98u: goto L_002C0CF8;
    case 99u: goto L_002C0D10;
    case 100u: goto L_002C0D30;
    case 101u: goto L_002C0D40;
    case 102u: goto L_002C0D5C;
    case 103u: goto L_002C0D70;
    case 104u: goto L_002C0D80;
    case 105u: goto L_002C0DA0;
    case 106u: goto L_002C0DE4;
    case 107u: goto L_002C0DFC;
    case 108u: goto L_002C0E14;
    case 109u: goto L_002C0E34;
    case 110u: goto L_002C0E44;
    case 111u: goto L_002C0E60;
    case 112u: goto L_002C0E6C;
    case 113u: goto L_002C0E88;
    case 114u: goto L_002C0EB0;
    case 115u: goto L_002C0EC4;
    case 116u: goto L_002C0ED0;
    case 117u: goto L_002C0EE4;
    case 118u: goto L_002C0F00;
    case 119u: goto L_002C0F10;
    case 120u: goto L_002C0F20;
    case 121u: goto L_002C0F30;
    case 122u: goto L_002C0F40;
    case 123u: goto L_002C0F50;
    case 124u: goto L_002C0F68;
    case 125u: goto L_002C0F78;
    case 126u: goto L_002C0FA0;
    case 127u: goto L_002C0FD0;
    case 128u: goto L_002C0FEC;
    case 129u: goto L_002C1010;
    case 130u: goto L_002C1038;
    case 131u: goto L_002C1048;
    case 132u: goto L_002C1064;
    case 133u: goto L_002C1080;
    case 134u: goto L_002C10C0;
    case 135u: goto L_002C10DC;
    case 136u: goto L_002C1100;
    case 137u: goto L_002C111C;
    case 138u: goto L_002C1128;
    case 139u: goto L_002C113C;
    case 140u: goto L_002C114C;
    case 141u: goto L_002C1160;
    case 142u: goto L_002C1170;
    case 143u: goto L_002C1184;
    case 144u: goto L_002C11A0;
    case 145u: goto L_002C11C4;
    case 146u: goto L_002C1210;
    case 147u: goto L_002C1278;
    case 148u: goto L_002C136C;
    case 149u: goto L_002C1420;
    case 150u: goto L_002C1450;
    case 151u: goto L_002C1464;
    case 152u: goto L_002C1478;
    case 153u: goto L_002C1480;
    case 154u: goto L_002C14A8;
    case 155u: goto L_002C14DC;
    case 156u: goto L_002C14F0;
    case 157u: goto L_002C14FC;
    case 158u: goto L_002C1524;
    case 159u: goto L_002C1538;
    case 160u: goto L_002C1544;
    case 161u: goto L_002C1564;
    case 162u: goto L_002C1580;
    case 163u: goto L_002C158C;
    case 164u: goto L_002C15E0;
    case 165u: goto L_002C15F0;
    case 166u: goto L_002C1600;
    case 167u: goto L_002C1634;
    case 168u: goto L_002C1640;
    case 169u: goto L_002C165C;
    case 170u: goto L_002C168C;
    case 171u: goto L_002C16E8;
    case 172u: goto L_002C16F4;
    case 173u: goto L_002C1730;
    case 174u: goto L_002C1774;
    case 175u: goto L_002C1780;
    case 176u: goto L_002C178C;
    case 177u: goto L_002C17B4;
    case 178u: goto L_002C17D4;
    case 179u: goto L_002C17F0;
    case 180u: goto L_002C1804;
    case 181u: goto L_002C1810;
    case 182u: goto L_002C1830;
    case 183u: goto L_002C184C;
    case 184u: goto L_002C1860;
    case 185u: goto L_002C186C;
    case 186u: goto L_002C1890;
    case 187u: goto L_002C18AC;
    case 188u: goto L_002C18C0;
    case 189u: goto L_002C18CC;
    case 190u: goto L_002C18E0;
    case 191u: goto L_002C18F8;
    case 192u: goto L_002C1908;
    case 193u: goto L_002C1920;
    case 194u: goto L_002C1944;
    case 195u: goto L_002C1960;
    case 196u: goto L_002C1A40;
    case 197u: goto L_002C1A70;
    case 198u: goto L_002C1A80;
    case 199u: goto L_002C1AB8;
    case 200u: goto L_002C1AE4;
    case 201u: goto L_002C1B04;
    case 202u: goto L_002C1B18;
    case 203u: goto L_002C1B74;
    case 204u: goto L_002C1B80;
    case 205u: goto L_002C1BB4;
    case 206u: goto L_002C1C20;
    case 207u: goto L_002C1C30;
    case 208u: goto L_002C1C40;
    case 209u: goto L_002C1C50;
    case 210u: goto L_002C1C6C;
    case 211u: goto L_002C1C7C;
    case 212u: goto L_002C1CCC;
    case 213u: goto L_002C1D00;
    case 214u: goto L_002C1D44;
    case 215u: goto L_002C1D60;
    case 216u: goto L_002C1D80;
    case 217u: goto L_002C1DB4;
    case 218u: goto L_002C1DD0;
    case 219u: goto L_002C1DF0;
    case 220u: goto L_002C1E14;
    case 221u: goto L_002C1E20;
    case 222u: goto L_002C1E30;
    case 223u: goto L_002C1E68;
    case 224u: goto L_002C1E74;
    case 225u: goto L_002C1E80;
    case 226u: goto L_002C1E9C;
    case 227u: goto L_002C1EB8;
    case 228u: goto L_002C1EE0;
    case 229u: goto L_002C1F34;
    case 230u: goto L_002C1F5C;
    case 231u: goto L_002C1F84;
    case 232u: goto L_002C1FAC;
    case 233u: goto L_002C1FD4;
    case 234u: goto L_002C1FFC;
    case 235u: goto L_002C2024;
    case 236u: goto L_002C2038;
    case 237u: goto L_002C2044;
    case 238u: goto L_002C2050;
    case 239u: goto L_002C205C;
    case 240u: goto L_002C2068;
    case 241u: goto L_002C2074;
    case 242u: goto L_002C2080;
    case 243u: goto L_002C208C;
    case 244u: goto L_002C2098;
    case 245u: goto L_002C20B4;
    case 246u: goto L_002C20F0;
    case 247u: goto L_002C2110;
    case 248u: goto L_002C2128;
    case 249u: goto L_002C213C;
    case 250u: goto L_002C2150;
    case 251u: goto L_002C2180;
    case 252u: goto L_002C21B0;
    case 253u: goto L_002C21C8;
    case 254u: goto L_002C21D8;
    case 255u: goto L_002C21E0;
    case 256u: goto L_002C21F0;
    case 257u: goto L_002C220C;
    case 258u: goto L_002C2240;
    case 259u: goto L_002C2250;
    case 260u: goto L_002C22A4;
    case 261u: goto L_002C22B0;
    case 262u: goto L_002C22E4;
    case 263u: goto L_002C2330;
    case 264u: goto L_002C2360;
    case 265u: goto L_002C239C;
    case 266u: goto L_002C23BC;
    case 267u: goto L_002C23E0;
    case 268u: goto L_002C2430;
    case 269u: goto L_002C2490;
    case 270u: goto L_002C24A8;
    case 271u: goto L_002C24C0;
    case 272u: goto L_002C24D0;
    case 273u: goto L_002C2540;
    case 274u: goto L_002C254C;
    case 275u: goto L_002C2580;
    case 276u: goto L_002C25D8;
    case 277u: goto L_002C2630;
    case 278u: goto L_002C2664;
    case 279u: goto L_002C2670;
    case 280u: goto L_002C268C;
    case 281u: goto L_002C26C0;
    case 282u: goto L_002C2700;
    case 283u: goto L_002C2718;
    case 284u: goto L_002C2730;
    case 285u: goto L_002C274C;
    case 286u: goto L_002C2770;
    case 287u: goto L_002C27A0;
    case 288u: goto L_002C27B0;
    case 289u: goto L_002C27C0;
    case 290u: goto L_002C27D0;
    case 291u: goto L_002C27E0;
    case 292u: goto L_002C27F0;
    case 293u: goto L_002C2800;
    case 294u: goto L_002C283C;
    case 295u: goto L_002C2860;
    case 296u: goto L_002C288C;
    case 297u: goto L_002C28B0;
    case 298u: goto L_002C28C0;
    case 299u: goto L_002C28D4;
    case 300u: goto L_002C28E0;
    case 301u: goto L_002C28F4;
    case 302u: goto L_002C2910;
    case 303u: goto L_002C292C;
    case 304u: goto L_002C2974;
    case 305u: goto L_002C2990;
    case 306u: goto L_002C29AC;
    case 307u: goto L_002C29C0;
    case 308u: goto L_002C29CC;
    case 309u: goto L_002C29E0;
    case 310u: goto L_002C2A00;
    case 311u: goto L_002C2A10;
    case 312u: goto L_002C2A20;
    case 313u: goto L_002C2A40;
    case 314u: goto L_002C2A4C;
    case 315u: goto L_002C2A64;
    case 316u: goto L_002C2A8C;
    case 317u: goto L_002C2AA4;
    case 318u: goto L_002C2AC0;
    case 319u: goto L_002C2AD8;
    case 320u: goto L_002C2AF4;
    case 321u: goto L_002C2B10;
    case 322u: goto L_002C2B28;
    case 323u: goto L_002C2B38;
    case 324u: goto L_002C2B68;
    case 325u: goto L_002C2BA4;
    case 326u: goto L_002C2BC0;
    case 327u: goto L_002C2C0C;
    case 328u: goto L_002C2C44;
    case 329u: goto L_002C2C5C;
    case 330u: goto L_002C2C74;
    case 331u: goto L_002C2C78;
    case 332u: goto L_002C2CA4;
    case 333u: goto L_002C2CC0;
    case 334u: goto L_002C2D00;
    case 335u: goto L_002C2D1C;
    case 336u: goto L_002C2D28;
    case 337u: goto L_002C2D84;
    case 338u: goto L_002C2D90;
    case 339u: goto L_002C2DAC;
    case 340u: goto L_002C2DD0;
    case 341u: goto L_002C2DFC;
    case 342u: goto L_002C2E28;
    case 343u: goto L_002C2E44;
    case 344u: goto L_002C2E5C;
    case 345u: goto L_002C2E7C;
    case 346u: goto L_002C2E88;
    case 347u: goto L_002C2EC4;
    case 348u: goto L_002C2EF0;
    case 349u: goto L_002C2F14;
    case 350u: goto L_002C2F38;
    case 351u: goto L_002C2F54;
    case 352u: goto L_002C2F80;
    case 353u: goto L_002C2F8C;
    case 354u: goto L_002C2FC8;
    case 355u: goto L_002C2FF0;
    case 356u: goto L_002C3010;
    case 357u: goto L_002C3048;
    case 358u: goto L_002C3064;
    case 359u: goto L_002C308C;
    case 360u: goto L_002C30AC;
    case 361u: goto L_002C30B8;
    case 362u: goto L_002C30F4;
    case 363u: goto L_002C3110;
    case 364u: goto L_002C3120;
    case 365u: goto L_002C3134;
    case 366u: goto L_002C3140;
    case 367u: goto L_002C3154;
    case 368u: goto L_002C3170;
    case 369u: goto L_002C3180;
    case 370u: goto L_002C3190;
    case 371u: goto L_002C31A0;
    case 372u: goto L_002C31B0;
    case 373u: goto L_002C31C0;
    case 374u: goto L_002C31D8;
    case 375u: goto L_002C31E8;
    case 376u: goto L_002C3210;
    case 377u: goto L_002C3220;
    case 378u: goto L_002C3248;
    case 379u: goto L_002C3258;
    case 380u: goto L_002C3274;
    case 381u: goto L_002C3290;
    case 382u: goto L_002C32B0;
    case 383u: goto L_002C3310;
    case 384u: goto L_002C3330;
    case 385u: goto L_002C3340;
    case 386u: goto L_002C3380;
    case 387u: goto L_002C3390;
    case 388u: goto L_002C33AC;
    case 389u: goto L_002C33C0;
    case 390u: goto L_002C33D0;
    case 391u: goto L_002C33DC;
    case 392u: goto L_002C33F8;
    case 393u: goto L_002C3420;
    case 394u: goto L_002C3430;
    case 395u: goto L_002C344C;
    case 396u: goto L_002C3460;
    case 397u: goto L_002C3470;
    case 398u: goto L_002C3494;
    case 399u: goto L_002C34A4;
    case 400u: goto L_002C34C0;
    case 401u: goto L_002C34D4;
    case 402u: goto L_002C34E4;
    case 403u: goto L_002C3500;
    case 404u: goto L_002C351C;
    case 405u: goto L_002C3530;
    case 406u: goto L_002C3550;
    case 407u: goto L_002C3564;
    case 408u: goto L_002C3590;
    case 409u: goto L_002C35A4;
    case 410u: goto L_002C35D0;
    case 411u: goto L_002C35E0;
    case 412u: goto L_002C35FC;
    case 413u: goto L_002C3608;
    case 414u: goto L_002C361C;
    case 415u: goto L_002C362C;
    case 416u: goto L_002C3640;
    case 417u: goto L_002C3650;
    case 418u: goto L_002C3664;
    case 419u: goto L_002C3674;
    case 420u: goto L_002C3688;
    case 421u: goto L_002C3698;
    case 422u: goto L_002C36AC;
    case 423u: goto L_002C36BC;
    case 424u: goto L_002C36D0;
    case 425u: goto L_002C36F0;
    case 426u: goto L_002C370C;
    case 427u: goto L_002C3764;
    case 428u: goto L_002C37F0;
    case 429u: goto L_002C3880;
    case 430u: goto L_002C3938;
    case 431u: goto L_002C3988;
    case 432u: goto L_002C3A30;
    case 433u: goto L_002C3A50;
    case 434u: goto L_002C3A68;
    case 435u: goto L_002C3A84;
    case 436u: goto L_002C3A90;
    case 437u: goto L_002C3AA8;
    case 438u: goto L_002C3AC4;
    case 439u: goto L_002C3ADC;
    case 440u: goto L_002C3AF0;
    case 441u: goto L_002C3B00;
    case 442u: goto L_002C3B2C;
    case 443u: goto L_002C3B40;
    case 444u: goto L_002C3B50;
    case 445u: goto L_002C3B7C;
    case 446u: goto L_002C3B90;
    case 447u: goto L_002C3BA8;
    case 448u: goto L_002C3BE0;
    case 449u: goto L_002C3BF0;
    case 450u: goto L_002C3C00;
    case 451u: goto L_002C3C20;
    case 452u: goto L_002C3C30;
    case 453u: goto L_002C3C40;
    case 454u: goto L_002C3C5C;
    case 455u: goto L_002C3C6C;
    case 456u: goto L_002C3CA4;
    case 457u: goto L_002C3CB0;
    case 458u: goto L_002C3CC0;
    case 459u: goto L_002C3CE0;
    case 460u: goto L_002C3CF0;
    case 461u: goto L_002C3D28;
    case 462u: goto L_002C3D48;
    case 463u: goto L_002C3D64;
    case 464u: goto L_002C3D70;
    case 465u: goto L_002C3D84;
    case 466u: goto L_002C3DD4;
    case 467u: goto L_002C3DF4;
    case 468u: goto L_002C3E10;
    case 469u: goto L_002C3E1C;
    case 470u: goto L_002C3E4C;
    case 471u: goto L_002C3E80;
    case 472u: goto L_002C3E90;
    case 473u: goto L_002C3EAC;
    case 474u: goto L_002C3EB8;
    case 475u: goto L_002C3ECC;
    case 476u: goto L_002C3EF4;
    case 477u: goto L_002C3F1C;
    case 478u: goto L_002C3F38;
    case 479u: goto L_002C3F44;
    case 480u: goto L_002C3F60;
    case 481u: goto L_002C3FA0;
    case 482u: goto L_002C3FB8;
    case 483u: goto L_002C3FC8;
    default: bad_entry(c, 0x002C0000u); return;
    }
L_002C0000:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[18].w[0] + 296u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0018u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0018u) [[unlikely]] return; }
L_002C0018:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0028u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0028u) [[unlikely]] return; }
L_002C0028:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C0050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_002C0064:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C00C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12448u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002C00A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[2], c.r[2].w[0] + 12432u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 16304u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C00A4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C00A4u) [[unlikely]] return; }
L_002C00A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C00C4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C00C0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C00C0u) [[unlikely]] return; }
L_002C00C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C00C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C00E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C0140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[2], c.r[2].w[0] + 12432u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 16304u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0124u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C0124u) [[unlikely]] return; }
L_002C0124:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C0144; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0140u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C0140u) [[unlikely]] return; }
L_002C0140:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C0144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C0160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C01D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12416u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002C01B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[2], c.r[2].w[0] + 12400u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 7728u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C01B4u) [[unlikely]] return; }
L_002C01B4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C01D4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C01D0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C01D0u) [[unlikely]] return; }
L_002C01D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C01D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C01F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C0250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[2], c.r[2].w[0] + 12400u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 7728u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0234u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C0234u) [[unlikely]] return; }
L_002C0234:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C0254; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0250u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C0250u) [[unlikely]] return; }
L_002C0250:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C0254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C0270:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0294u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x002C0294u) [[unlikely]] return; }
L_002C0294:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02A0u); set32(c.r[4], ld32((c.r[2].w[0] + 23992u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002C02A0u) [[unlikely]] return; }
L_002C02A0:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02B4u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C02B4u) [[unlikely]] return; }
L_002C02B4:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02C4u); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002C02C4u) [[unlikely]] return; }
L_002C02C4:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02D8u); set32(c.r[6], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C02D8u) [[unlikely]] return; }
L_002C02D8:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02E8u); set32(c.r[4], c.r[4].w[0] + 24029u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002C02E8u) [[unlikely]] return; }
L_002C02E8:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C02FCu); set32(c.r[6], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C02FCu) [[unlikely]] return; }
L_002C02FC:
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C030Cu); set32(c.r[4], c.r[4].w[0] + 24040u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002C030Cu) [[unlikely]] return; }
L_002C030C:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0320u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C0320u) [[unlikely]] return; }
L_002C0320:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0330u); set32(c.r[4], c.r[4].w[0] + 24052u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002C0330u) [[unlikely]] return; }
L_002C0330:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0344u); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C0344u) [[unlikely]] return; }
L_002C0344:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 2;
L_002C034C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0368u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0368u) [[unlikely]] return; }
L_002C0368:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0374u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002C0374u) [[unlikely]] return; }
L_002C0374:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0388u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C0388u) [[unlikely]] return; }
L_002C0388:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C034Cu | kUnwind; return; } goto L_002C034C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C03C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C03DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x002C03DCu) [[unlikely]] return; }
L_002C03DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  goto L_002C03EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C06A8; } }
L_002C03EC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_002C0400; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C06A8; } }
L_002C0400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002C0494; } }
L_002C0408:
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C043C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C043C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C045C; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C045C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C045C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_002C0480; }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C047C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C047C:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_002C0480:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[8].w[0] + 1u);  goto L_002C0490; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C06A8; } }
L_002C0490:
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002C0494:
    c.r[3].d[0] = c.r[8].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[7].d[0] = c.r[8].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0408u | kUnwind; return; } goto L_002C0408; }
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002C04BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C06A8; }
L_002C04BC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002C04DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C04DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C06A8; } }
L_002C04DC:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[8], ld32((c.r[17].w[0] + 24u)));  goto L_002C0564; }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002C0550; } }
L_002C04F0:
    c.r[3].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[7], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C0518; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0518:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_002C053C; }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C0538; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0538:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_002C053C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[9].w[0] + 1u);  goto L_002C054C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C06A8; } }
L_002C054C:
    c.r[9].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002C0550:
    c.r[3].d[0] = c.r[9].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C04F0u | kUnwind; return; } goto L_002C04F0; }
    set32(c.r[8], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_002C0564:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002C0578; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C06A8; }
L_002C0578:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002C0598; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C0598; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C06A8; } }
L_002C0598:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_002C0694; }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002C064C; } }
L_002C05AC:
    c.r[3].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[7], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C05D4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C05D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C05F4; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C05F4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C05F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C0614; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C0614; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0614:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_002C0638; }
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C0634; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C0634:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_002C0638:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[9].w[0] + 1u);  goto L_002C0648; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C06A8; } }
L_002C0648:
    c.r[9].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002C064C:
    c.r[3].d[0] = c.r[9].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C05ACu | kUnwind; return; } goto L_002C05AC; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C0694; } }
L_002C0668:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 8;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002C0690; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C06A8; } }
L_002C0690:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002C0694:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0668u | kUnwind; return; } goto L_002C0668; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C06A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C06C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x002C06E0u) [[unlikely]] return; }
L_002C06E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C06ECu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002C06ECu) [[unlikely]] return; }
L_002C06EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C0718; } }
L_002C06F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0710u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x002C0710u) [[unlikely]] return; }
L_002C0710:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002C0718:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C06F4u | kUnwind; return; } goto L_002C06F4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 79u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0744u); st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002C0744u) [[unlikely]] return; }
L_002C0744:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_002C078C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C0774; } }
L_002C0758:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C076Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0072(c, 27u, depth + 1u); else { c.pc = 0x002C8380u; return; } if (c.pc != 0x002C076Cu) [[unlikely]] return; }
L_002C076C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002C0774:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0758u | kUnwind; return; } goto L_002C0758; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_002C078C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 78u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C07A0u); st8((c.r[29].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002C07A0u) [[unlikely]] return; }
L_002C07A0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 78u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 12u);  goto L_002C07E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C07D0; } }
L_002C07B4:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C07C8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0062(c, 160u, depth + 1u); else { c.pc = 0x002895A0u; return; } if (c.pc != 0x002C07C8u) [[unlikely]] return; }
L_002C07C8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002C07D0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C07B4u | kUnwind; return; } goto L_002C07B4; }
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_002C07E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C07F8u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002C07F8u) [[unlikely]] return; }
L_002C07F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002C0848; }
    goto L_002C0804;
L_002C0800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C0804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C0830; } }
L_002C080C:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0828u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0828u) [[unlikely]] return; }
L_002C0828:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002C0830:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C080Cu | kUnwind; return; } goto L_002C080C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C0848:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C0860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0880u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BB2E0u; return; } if (c.pc != 0x002C0880u) [[unlikely]] return; }
L_002C0880:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002C0890; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C08C4; } }
L_002C0890:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_002C0894:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C08B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C08B0u) [[unlikely]] return; }
L_002C08B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0894u | kUnwind; return; } goto L_002C0894; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C08C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C08E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C090Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 427u, depth + 1u); else { c.pc = 0x002BB310u; return; } if (c.pc != 0x002C090Cu) [[unlikely]] return; }
L_002C090C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0914u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 104u, depth + 1u); else { c.pc = 0x0030CAE0u; return; } if (c.pc != 0x002C0914u) [[unlikely]] return; }
L_002C0914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C09B4; } }
L_002C091C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0924u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002C0924u) [[unlikely]] return; }
L_002C0924:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0] + 8u)));  if (t) { goto L_002C09B4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0940u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0940u) [[unlikely]] return; }
L_002C0940:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[18].d[0]; set32(c.r[16], c.r[3].w[0] + 8u);  if (t) { goto L_002C09B4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[18].w[0]);  goto L_002C0994; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0964u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C0964u) [[unlikely]] return; }
L_002C0964:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0974u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C0974u) [[unlikely]] return; }
L_002C0974:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C0990; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0990u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0990u) [[unlikely]] return; }
L_002C0990:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C0994:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[3].d[0] = c.r[19].d[0] + 0ull;  goto L_002C09B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C09A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C09A4u) [[unlikely]] return; }
L_002C09A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C09B4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C09B4u) [[unlikely]] return; }
L_002C09B4:
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002C09B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C091Cu | kUnwind; return; } goto L_002C091C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C09F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A10u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002C0A10u) [[unlikely]] return; }
L_002C0A10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A1Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002C0A1Cu) [[unlikely]] return; }
L_002C0A1C:
    c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A38u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C0A38u) [[unlikely]] return; }
L_002C0A38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A54u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C0A54u) [[unlikely]] return; }
L_002C0A54:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C0A84; } }
L_002C0A60:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0A7Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x002C0A7Cu) [[unlikely]] return; }
L_002C0A7C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002C0A84:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0A60u | kUnwind; return; } goto L_002C0A60; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0AA4u); set32(c.r[5], c.r[29].w[0] + 79u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002C0AA4u) [[unlikely]] return; }
L_002C0AA4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C0B20; }
    c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0AC4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C0AC4u) [[unlikely]] return; }
L_002C0AC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0AE0u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C0AE0u) [[unlikely]] return; }
L_002C0AE0:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C0B08; } }
L_002C0AEC:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B00u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0072(c, 30u, depth + 1u); else { c.pc = 0x002C83D0u; return; } if (c.pc != 0x002C0B00u) [[unlikely]] return; }
L_002C0B00:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002C0B08:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0AECu | kUnwind; return; } goto L_002C0AEC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C0B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B28u); set32(c.r[5], c.r[29].w[0] + 78u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002C0B28u) [[unlikely]] return; }
L_002C0B28:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 78u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C0BA4; }
    c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B48u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C0B48u) [[unlikely]] return; }
L_002C0B48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B64u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C0B64u) [[unlikely]] return; }
L_002C0B64:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C0B8C; } }
L_002C0B70:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0B84u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0062(c, 165u, depth + 1u); else { c.pc = 0x00289600u; return; } if (c.pc != 0x002C0B84u) [[unlikely]] return; }
L_002C0B84:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002C0B8C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C0B70u | kUnwind; return; } goto L_002C0B70; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C0BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BACu);  if (depth < kMaxDepth) unit_0083(c, 105u, depth + 1u); else { c.pc = 0x0030CB00u; return; } if (c.pc != 0x002C0BACu) [[unlikely]] return; }
L_002C0BAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C0BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C0BECu) [[unlikely]] return; }
L_002C0BEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C0C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0BFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002C0BFCu) [[unlikely]] return; }
L_002C0BFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12464u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_002C0C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C0C1Cu) [[unlikely]] return; }
L_002C0C1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C2Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C0C2Cu) [[unlikely]] return; }
L_002C0C2C:
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 4;
L_002C0C3C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C0C60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 28u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C0C8Cu) [[unlikely]] return; }
L_002C0C8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C0CDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0C9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002C0C9Cu) [[unlikely]] return; }
L_002C0C9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12464u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_002C0CCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C0CBCu) [[unlikely]] return; }
L_002C0CBC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CCCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C0CCCu) [[unlikely]] return; }
L_002C0CCC:
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 4;
L_002C0CDC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 446u, depth + 1u); else { c.pc = 0x002BB4A0u; return; } if (c.pc != 0x002C0CECu) [[unlikely]] return; }
L_002C0CEC:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0CF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C0CF8u) [[unlikely]] return; }
L_002C0CF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 8u)));  goto L_002C0D18; }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 171u, depth + 1u); else { c.pc = 0x002C91A0u; return; } if (c.pc != 0x002C0D10u) [[unlikely]] return; }
L_002C0D10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_002C0D18:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C0D84; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[16].w[0]);  goto L_002C0D60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C0D30u) [[unlikely]] return; }
L_002C0D30:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D40u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C0D40u) [[unlikely]] return; }
L_002C0D40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0D5C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0D5Cu) [[unlikely]] return; }
L_002C0D5C:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_002C0D60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C0D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C0D70u) [[unlikely]] return; }
L_002C0D70:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0D80u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C0D80u) [[unlikely]] return; }
L_002C0D80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C0D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C0DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C0E88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 12464u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DE4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C0DE4u) [[unlikely]] return; }
L_002C0DE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0DFCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C0DFCu) [[unlikely]] return; }
L_002C0DFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E14u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C0E14u) [[unlikely]] return; }
L_002C0E14:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C0E64; }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002C0E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C0E34u) [[unlikely]] return; }
L_002C0E34:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E44u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C0E44u) [[unlikely]] return; }
L_002C0E44:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C0E60; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C0E60u) [[unlikely]] return; }
L_002C0E60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C0E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002C0E6Cu) [[unlikely]] return; }
L_002C0E6C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C0E8C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0E88u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C0E88u) [[unlikely]] return; }
L_002C0E88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C0E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C0EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0EC4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 319u, depth + 1u); else { c.pc = 0x0031EF20u; return; } if (c.pc != 0x002C0EC4u) [[unlikely]] return; }
L_002C0EC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0ED0u); set32(c.r[4], ld32((c.r[2].w[0] + 23984u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002C0ED0u) [[unlikely]] return; }
L_002C0ED0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0EE4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C0EE4u) [[unlikely]] return; }
L_002C0EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C0F00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 323u, depth); }
L_002C0F10:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 324u, depth); }
L_002C0F20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 325u, depth); }
L_002C0F30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 326u, depth); }
L_002C0F40:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0087(c, 327u, depth); }
L_002C0F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 256u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C0F68u) [[unlikely]] return; }
L_002C0F68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C0F84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0F78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 340u, depth + 1u); else { c.pc = 0x0031F170u; return; } if (c.pc != 0x002C0F78u) [[unlikely]] return; }
L_002C0F78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C0F84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C0FA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C0FEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0FD0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031EB50u; return; } if (c.pc != 0x002C0FD0u) [[unlikely]] return; }
L_002C0FD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C0FF0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0FECu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C0FECu) [[unlikely]] return; }
L_002C0FEC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C0FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C1010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1038u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C1038u) [[unlikely]] return; }
L_002C1038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C1054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1048u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 340u, depth + 1u); else { c.pc = 0x0031F170u; return; } if (c.pc != 0x002C1048u) [[unlikely]] return; }
L_002C1048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C1054:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1064u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 331u, depth + 1u); else { c.pc = 0x0031F010u; return; } if (c.pc != 0x002C1064u) [[unlikely]] return; }
L_002C1064:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C1080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C10DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002C10C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C10C0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031EB50u; return; } if (c.pc != 0x002C10C0u) [[unlikely]] return; }
L_002C10C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C10E0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C10DCu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C10DCu) [[unlikely]] return; }
L_002C10DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C10E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C1100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C111Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 290u, depth + 1u); else { c.pc = 0x002A6280u; return; } if (c.pc != 0x002C111Cu) [[unlikely]] return; }
L_002C111C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1128u); set32(c.r[4], ld32((c.r[2].w[0] + 23976u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002C1128u) [[unlikely]] return; }
L_002C1128:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C113Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C113Cu) [[unlikely]] return; }
L_002C113C:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C114Cu); set32(c.r[4], c.r[4].w[0] + 24062u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x002C114Cu) [[unlikely]] return; }
L_002C114C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1160u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C1160u) [[unlikely]] return; }
L_002C1160:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 148u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1170u); set32(c.r[4], c.r[4].w[0] + 24079u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x002C1170u) [[unlikely]] return; }
L_002C1170:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1184u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C1184u) [[unlikely]] return; }
L_002C1184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C11A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C11C4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 357u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x002C11C4u) [[unlikely]] return; }
L_002C11C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 128u));  goto L_002C11D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1400; } }
L_002C11D4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 128u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[11].d[0] = ld16((c.r[16].w[0] + 148u));  goto L_002C11E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1400; } }
L_002C11E8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 148u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 146u));
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != c.r[2].d[0]; c.r[4].d[0] = ld16((c.r[16].w[0] + 146u));  if (t) { goto L_002C1200; } }
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[14].d[0] = 0ull + 0ull;  goto L_002C1208; }
L_002C1200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1400; } }
L_002C1208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C13F0; } }
L_002C1210:
    set32(c.r[5], c.r[14].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[12], ld32((c.r[3].w[0])));  if (t) { goto L_002C13DC; } }
    c.budget -= 2;
    if (c.r[12].d[0] != 0ull) { c.r[10].d[0] = ld16((c.r[5].w[0] + 4u));  goto L_002C123C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1400; } }
L_002C123C:
    c.r[3].d[0] = ld16((c.r[12].w[0] + 4u));
    c.r[4].d[0] = ld16((c.r[12].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != c.r[3].d[0]; c.r[9].d[0] = ld16((c.r[5].w[0] + 6u));  if (t) { goto L_002C1254; } }
    c.budget -= 2;
    if (c.r[9].d[0] == c.r[4].d[0]) { set32(c.r[8], ld32((c.r[5].w[0] + 8u)));  goto L_002C125C; }
L_002C1254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1400; } }
L_002C125C:
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[7], ld32((c.r[12].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[12].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[12].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_002C13C8; } }
L_002C1278:
    set32(c.r[15], c.r[7].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[8].w[0] + c.r[12].w[0]);
    c.f[1] = ld32((c.r[12].w[0]));
    c.f[0] = ld32((c.r[15].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002C12AC; } }
    c.f[1] = ld32((c.r[12].w[0] + 4u));
    c.f[0] = ld32((c.r[15].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[12].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;  goto L_002C12B0; }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C12AC:
    c.r[12].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C12B0:
    c.r[12].d[0] = c.r[12].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[12].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C1400; }
    set32(c.r[12], c.r[13].w[0] << 4);
    c.r[24].d[0] = 0ull + 0ull;
    set32(c.r[15], c.r[5].w[0] + c.r[12].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[6].w[0] + c.r[12].w[0]);
    c.f[1] = ld32((c.r[12].w[0]));
    c.f[0] = ld32((c.r[15].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002C12FC; } }
    c.f[1] = ld32((c.r[12].w[0] + 4u));
    c.f[0] = ld32((c.r[15].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C12FC; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C12FC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002C131C; } }
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    c.f[0] = ld32((c.r[15].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C131C; } }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C131C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[12].d[0] = 0ull < c.r[24].d[0] ? 1ull : 0ull;  goto L_002C1340; }
    c.f[1] = ld32((c.r[12].w[0] + 12u));
    c.f[0] = ld32((c.r[15].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C133C; } }
    c.r[24].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C133C:
    c.r[12].d[0] = 0ull < c.r[24].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C1340:
    c.r[12].d[0] = c.r[12].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[12].d[0] == 0ull) { mmi::mult(c, 0, c.r[13].w[0], c.r[9].w[0]); c.r[15].d[0] = c.lo.d[0];  goto L_002C1358; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C1400; } }
L_002C1358:
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[15], c.r[15].w[0] << 3);
    set32(c.r[18], c.r[3].w[0] + c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[25], c.r[4].w[0] + c.r[15].w[0]);  if (t) { goto L_002C13B8; } }
L_002C136C:
    set32(c.r[24], c.r[18].w[0] + c.r[15].w[0]);
    set32(c.r[15], c.r[25].w[0] + c.r[15].w[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = ld32((c.r[24].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002C13A0; } }
    c.f[1] = ld32((c.r[15].w[0] + 4u));
    c.f[0] = ld32((c.r[24].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[15].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  goto L_002C13A4; }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C13A0:
    c.r[15].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C13A4:
    c.r[15].d[0] = c.r[15].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { set32(c.r[12], c.r[12].w[0] + 1u);  goto L_002C13B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1400; } }
L_002C13B8:
    c.r[15].d[0] = c.r[12].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[15], c.r[12].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C136Cu | kUnwind; return; } goto L_002C136C; }
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 1;
L_002C13C8:
    c.r[12].d[0] = c.r[13].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[12].d[0] != 0ull) { set32(c.r[12], c.r[13].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1278u | kUnwind; return; } goto L_002C1278; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] + 1u);  if (t) { goto L_002C13F0; } }
L_002C13DC:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_002C13EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C1400; } }
L_002C13EC:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 1;
L_002C13F0:
    c.r[3].d[0] = c.r[14].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1210u | kUnwind; return; } goto L_002C1210; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C1400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C1420:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1450u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 360u, depth + 1u); else { c.pc = 0x0031F420u; return; } if (c.pc != 0x002C1450u) [[unlikely]] return; }
L_002C1450:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 128u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 143u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1464u); st8((c.r[29].w[0] + 143u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002C1464u) [[unlikely]] return; }
L_002C1464:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 146u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1478u); st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002C1478u) [[unlikely]] return; }
L_002C1478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C15A0; } }
L_002C1480:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[21].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C1498; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 4u));
    c.budget -= 1;
L_002C1498:
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14A8u); set32(c.r[5], c.r[29].w[0] + 138u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002C14A8u) [[unlikely]] return; }
L_002C14A8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 138u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002C15A0; }
    set32(c.r[20], ld32((c.r[21].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 142u);
    set32(c.r[22], ld32((c.r[21].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 6u));
    c.r[2].d[0] = 0ull < c.r[20].d[0] ? 1ull : 0ull;
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14DCu); st8((c.r[29].w[0] + 142u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002C14DCu) [[unlikely]] return; }
L_002C14DC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 142u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  goto L_002C1514; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002C1500; } }
L_002C14F0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C14FCu); set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 27u, depth + 1u); else { c.pc = 0x002C8380u; return; } if (c.pc != 0x002C14FCu) [[unlikely]] return; }
L_002C14FC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002C1500:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 138u));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C14F0u | kUnwind; return; } goto L_002C14F0; }
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C1514:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[29].w[0] + 141u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1524u); set32(c.r[5], c.r[29].w[0] + 141u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002C1524u) [[unlikely]] return; }
L_002C1524:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 141u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C155C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002C1548; } }
L_002C1538:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1544u); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 160u, depth + 1u); else { c.pc = 0x002895A0u; return; } if (c.pc != 0x002C1544u) [[unlikely]] return; }
L_002C1544:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002C1548:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 138u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1538u | kUnwind; return; } goto L_002C1538; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C155C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1564u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002C1564u) [[unlikely]] return; }
L_002C1564:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C159C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 138u));
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]); c.r[19].d[0] = c.lo.d[0];  if (t) { goto L_002C1590; } }
L_002C1580:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C158Cu); set32(c.r[4], c.r[22].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 27u, depth + 1u); else { c.pc = 0x002C8380u; return; } if (c.pc != 0x002C158Cu) [[unlikely]] return; }
L_002C158C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002C1590:
    c.r[3].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1580u | kUnwind; return; } goto L_002C1580; }
L_002C159C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C15A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 140u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1480u | kUnwind; return; } goto L_002C1480; }
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
L_002C15E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6B70u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 347u, depth); }
L_002C15F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6BE0u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 350u, depth); }
L_002C1600:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1634u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 371u, depth + 1u); else { c.pc = 0x0031F540u; return; } if (c.pc != 0x002C1634u) [[unlikely]] return; }
L_002C1634:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1640u); set32(c.r[5], c.r[29].w[0] + 159u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002C1640u) [[unlikely]] return; }
L_002C1640:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 159u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[20].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C165Cu); st32((c.r[29].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002C165Cu) [[unlikely]] return; }
L_002C165C:
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_002C1A10; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 144u));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002C19FC; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 146u));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 140u)));  goto L_002C16D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002C16BC; } }
L_002C168C:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002C16B8; }
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 148u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 148u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_002C16B8:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002C16BC:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 146u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 140u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C168Cu | kUnwind; return; } goto L_002C168C; }
    st16((c.r[20].w[0] + 146u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 2;
L_002C16D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[20].w[0] + 144u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002C1764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C16E8u); c.r[4].d[0] = ld16((c.r[20].w[0] + 144u));  if (depth < kMaxDepth) unit_0070(c, 208u, depth + 1u); else { c.pc = 0x002C1C40u; return; } if (c.pc != 0x002C16E8u) [[unlikely]] return; }
L_002C16E8:
    st32((c.r[20].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002C1714; } }
L_002C16F4:
    set32(c.r[3], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_002C1714:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 146u));
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C16F4u | kUnwind; return; } goto L_002C16F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[20].w[0] + 144u));  if (t) { goto L_002C174C; } }
L_002C1730:
    set32(c.r[3], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 144u));
    c.budget -= 7;
L_002C174C:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1730u | kUnwind; return; } goto L_002C1730; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C176C; } }
L_002C1764:
    st32((c.r[20].w[0] + 140u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002C176C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1774u);  if (depth < kMaxDepth) unit_0070(c, 207u, depth + 1u); else { c.pc = 0x002C1C30u; return; } if (c.pc != 0x002C1774u) [[unlikely]] return; }
L_002C1774:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C19FC; } }
L_002C1780:
    set32(c.r[5], c.r[29].w[0] + 154u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C178Cu); st16((c.r[29].w[0] + 154u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002C178Cu) [[unlikely]] return; }
L_002C178C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 154u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002C19FC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 158u);
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(0u));
    c.r[21].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C17B4u); c.r[23].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002C17B4u) [[unlikely]] return; }
L_002C17B4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 158u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002C1808; }
    c.r[16].d[0] = ld16((c.r[29].w[0] + 154u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C17D4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C17D4u) [[unlikely]] return; }
L_002C17D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C17F0u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C17F0u) [[unlikely]] return; }
L_002C17F0:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 154u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1804u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 293u, depth + 1u); else { c.pc = 0x002C2800u; return; } if (c.pc != 0x002C1804u) [[unlikely]] return; }
L_002C1804:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002C1808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1810u); set32(c.r[5], c.r[29].w[0] + 157u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002C1810u) [[unlikely]] return; }
L_002C1810:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 157u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002C1864; }
    c.r[16].d[0] = ld16((c.r[29].w[0] + 154u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1830u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C1830u) [[unlikely]] return; }
L_002C1830:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C184Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C184Cu) [[unlikely]] return; }
L_002C184C:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 154u));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1860u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 292u, depth + 1u); else { c.pc = 0x002C27F0u; return; } if (c.pc != 0x002C1860u) [[unlikely]] return; }
L_002C1860:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002C1864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C186Cu); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002C186Cu) [[unlikely]] return; }
L_002C186C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 152u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 27640u)));  goto L_002C18C4; }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 154u));
    c.r[5].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1890u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C1890u) [[unlikely]] return; }
L_002C1890:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C18ACu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C18ACu) [[unlikely]] return; }
L_002C18AC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C18C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 293u, depth + 1u); else { c.pc = 0x002C2800u; return; } if (c.pc != 0x002C18C0u) [[unlikely]] return; }
L_002C18C0:
    set32(c.r[17], ld32((c.r[28].w[0] - 27640u)));
    c.budget -= 1;
L_002C18C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C18CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 206u, depth + 1u); else { c.pc = 0x002C1C20u; return; } if (c.pc != 0x002C18CCu) [[unlikely]] return; }
L_002C18CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C18F0; }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C18E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 198u, depth + 1u); else { c.pc = 0x002C1A80u; return; } if (c.pc != 0x002C18E0u) [[unlikely]] return; }
L_002C18E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_002C18F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C18F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0070(c, 197u, depth + 1u); else { c.pc = 0x002C1A70u; return; } if (c.pc != 0x002C18F8u) [[unlikely]] return; }
L_002C18F8:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1908u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0070(c, 196u, depth + 1u); else { c.pc = 0x002C1A40u; return; } if (c.pc != 0x002C1908u) [[unlikely]] return; }
L_002C1908:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1920u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C1920u) [[unlikely]] return; }
L_002C1920:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 154u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1944u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C1944u) [[unlikely]] return; }
L_002C1944:
    st32((c.r[16].w[0] + 12u), c.r[22].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1960u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C1960u) [[unlikely]] return; }
L_002C1960:
    st32((c.r[16].w[0] + 16u), c.r[23].w[0]);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 152u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 146u));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C1998; } }
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st16((c.r[20].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C19E8; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 148u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 148u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C19E8; } }
L_002C1998:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 140u)));  goto L_002C19C8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 140u)));  goto L_002C19EC; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 148u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 148u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002C19E8; } }
L_002C19C8:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C19E8; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 148u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[20].w[0] + 148u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002C19E8:
    set32(c.r[3], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 1;
L_002C19EC:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_002C19FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1780u | kUnwind; return; } goto L_002C1780; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_002C1A10:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002C1A40:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_002C1A70:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002C1A80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 12u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1AB8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C1AB8u) [[unlikely]] return; }
L_002C1AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C1B10; } }
    st32((c.r[18].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 8u), 0u);  if (t) { goto L_002C1B0C; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1AE4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C1AE4u) [[unlikely]] return; }
L_002C1AE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10096u);
    set32(c.r[6], c.r[6].w[0] + 9920u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1B04u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C1B04u) [[unlikely]] return; }
L_002C1B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_002C1B10; } }
L_002C1B0C:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_002C1B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002C1BDC; } }
L_002C1B18:
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] << 2);  goto L_002C1B2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_002C1B3C; } }
L_002C1B2C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[22], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002C1B3C:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  goto L_002C1BC0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002C1B58; }
    set32(c.r[16], c.r[4].w[0] << 1);
    c.budget -= 1;
L_002C1B58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_002C1BBC; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002C1BA8; }
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1B74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C1B74u) [[unlikely]] return; }
L_002C1B74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C1B98; } }
L_002C1B80:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_002C1B98:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1B80u | kUnwind; return; } goto L_002C1B80; }
L_002C1BA8:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1BB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002C1BB4u) [[unlikely]] return; }
L_002C1BB4:
    st32((c.r[21].w[0]), c.r[17].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_002C1BBC:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_002C1BC0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[22].w[0]);
    c.budget -= 7;
L_002C1BDC:
    c.r[3].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C1B18u | kUnwind; return; } goto L_002C1B18; }
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 12u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002C1C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_002C1C30:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CFD0u | kUnwind; return; } [[clang::musttail]] return unit_0047(c, 96u, depth); }
L_002C1C40:
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D100u | kUnwind; return; } [[clang::musttail]] return unit_0047(c, 104u, depth); }
L_002C1C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 160u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C6Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C1C6Cu) [[unlikely]] return; }
L_002C1C6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C1CE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1C7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 425u, depth + 1u); else { c.pc = 0x0031FB80u; return; } if (c.pc != 0x002C1C7Cu) [[unlikely]] return; }
L_002C1C7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[3], c.r[3].w[0] + 12384u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 129u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 144u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 150u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 146u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 148u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 144u));
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[17], c.r[16].w[0] + 136u);  if (t) { goto L_002C1CD4; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1CCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C1CCCu) [[unlikely]] return; }
L_002C1CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002C1CD8; } }
L_002C1CD4:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_002C1CD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12368u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C1CE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C1D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C1D60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12368u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002C1D44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002C1D44u) [[unlikely]] return; }
L_002C1D44:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C1D64; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1D60u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C1D60u) [[unlikely]] return; }
L_002C1D60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C1D64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C1D80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C1DD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002C1DB4u) [[unlikely]] return; }
L_002C1DB4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C1DD4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1DD0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C1DD0u) [[unlikely]] return; }
L_002C1DD0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C1DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C1DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27640u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002C1E24; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0070(c, 222u, depth + 1u); else { c.pc = 0x002C1E30u; return; } if (c.pc != 0x002C1E14u) [[unlikely]] return; }
L_002C1E14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E20u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C1E20u) [[unlikely]] return; }
L_002C1E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C1E24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C1E30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C1EB8; } }
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C1E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E68u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0070(c, 246u, depth + 1u); else { c.pc = 0x002C20F0u; return; } if (c.pc != 0x002C1E68u) [[unlikely]] return; }
L_002C1E68:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E74u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0070(c, 228u, depth + 1u); else { c.pc = 0x002C1EE0u; return; } if (c.pc != 0x002C1E74u) [[unlikely]] return; }
L_002C1E74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E80u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C1E80u) [[unlikely]] return; }
L_002C1E80:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_002C1EA0; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002C1E9C; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1E9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002C1E9Cu) [[unlikely]] return; }
L_002C1E9C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_002C1EA0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002C1EBC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1EB8u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C1EB8u) [[unlikely]] return; }
L_002C1EB8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002C1EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C1EE0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C20B4; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 9920u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F34u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C1F34u) [[unlikely]] return; }
L_002C1F34:
    set32(c.r[20], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = c.r[30].d[0] << 48;  goto L_002C209C; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 9920u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F5Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C1F5Cu) [[unlikely]] return; }
L_002C1F5C:
    set32(c.r[19], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002C2090; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 9920u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1F84u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C1F84u) [[unlikely]] return; }
L_002C1F84:
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002C2084; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 9920u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1FACu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C1FACu) [[unlikely]] return; }
L_002C1FAC:
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002C2078; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 9920u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1FD4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C1FD4u) [[unlikely]] return; }
L_002C1FD4:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C206C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 9920u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C1FFCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C1FFCu) [[unlikely]] return; }
L_002C1FFC:
    set32(c.r[22], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[22].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002C2060; }
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 9920u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2024u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C2024u) [[unlikely]] return; }
L_002C2024:
    set32(c.r[23], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[23].d[0] == 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_002C2054; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2038u); set32(c.r[4], ld32((c.r[23].w[0])));  if (depth < kMaxDepth) unit_0070(c, 246u, depth + 1u); else { c.pc = 0x002C20F0u; return; } if (c.pc != 0x002C2038u) [[unlikely]] return; }
L_002C2038:
    set32(c.r[4], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2044u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0070(c, 228u, depth + 1u); else { c.pc = 0x002C1EE0u; return; } if (c.pc != 0x002C2044u) [[unlikely]] return; }
L_002C2044:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2050u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C2050u) [[unlikely]] return; }
L_002C2050:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_002C2054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C205Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C205Cu) [[unlikely]] return; }
L_002C205C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002C2060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2068u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C2068u) [[unlikely]] return; }
L_002C2068:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C206C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2074u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C2074u) [[unlikely]] return; }
L_002C2074:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002C2078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2080u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C2080u) [[unlikely]] return; }
L_002C2080:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002C2084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C208Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C208Cu) [[unlikely]] return; }
L_002C208C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002C2090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2098u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C2098u) [[unlikely]] return; }
L_002C2098:
    c.r[2].d[0] = c.r[30].d[0] << 48;
    c.budget -= 1;
L_002C209C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_002C20B8; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C20B4u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C20B4u) [[unlikely]] return; }
L_002C20B4:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002C20B8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002C20F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 9920u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_002C2110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 24u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2128u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C2128u) [[unlikely]] return; }
L_002C2128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C213C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C213Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0070(c, 250u, depth + 1u); else { c.pc = 0x002C2150u; return; } if (c.pc != 0x002C213Cu) [[unlikely]] return; }
L_002C213C:
    st32((c.r[28].w[0] - 27640u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2150:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C2188; } }
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2180u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C2180u) [[unlikely]] return; }
L_002C2180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002C218C; } }
L_002C2188:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002C218C:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[4], 0u + 12u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[19], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C21B0u) [[unlikely]] return; }
L_002C21B0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002C21F4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21C8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 264u, depth + 1u); else { c.pc = 0x002C2360u; return; } if (c.pc != 0x002C21C8u) [[unlikely]] return; }
L_002C21C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C21F4; } }
L_002C21D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 263u, depth + 1u); else { c.pc = 0x002C2330u; return; } if (c.pc != 0x002C21E0u) [[unlikely]] return; }
L_002C21E0:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C21F0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0070(c, 259u, depth + 1u); else { c.pc = 0x002C2250u; return; } if (c.pc != 0x002C21F0u) [[unlikely]] return; }
L_002C21F0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002C21F4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C21D8u | kUnwind; return; } goto L_002C21D8; }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C220Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 258u, depth + 1u); else { c.pc = 0x002C2240u; return; } if (c.pc != 0x002C220Cu) [[unlikely]] return; }
L_002C220C:
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C2240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_002C2250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C22EC; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002C2288; }
    set32(c.r[16], c.r[5].w[0] << 1);
    c.budget -= 1;
L_002C2288:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_002C22F0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002C22D8; }
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C22A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C22A4u) [[unlikely]] return; }
L_002C22A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C22C8; } }
L_002C22B0:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_002C22C8:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C22B0u | kUnwind; return; } goto L_002C22B0; }
L_002C22D8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C22E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002C22E4u) [[unlikely]] return; }
L_002C22E4:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_002C22EC:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_002C22F0:
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C2330:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 2);  goto L_002C2348; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C2358; } }
L_002C2348:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002C2358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C2360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_002C23C4; } }
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C239Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C239Cu) [[unlikely]] return; }
L_002C239C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10096u);
    set32(c.r[6], c.r[6].w[0] + 9920u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C23BCu); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C23BCu) [[unlikely]] return; }
L_002C23BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002C23C8; } }
L_002C23C4:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002C23C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C23E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C268C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 146u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002C25B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[20].w[0] + 146u));  if (t) { goto L_002C25AC; } }
L_002C2430:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 146u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], ld32((c.r[3].w[0])));  if (t) { goto L_002C2454; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 146u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002C2468; } }
L_002C2454:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 140u)));  goto L_002C246C; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 148u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 148u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002C2468:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 1;
L_002C246C:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_002C25A4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2490u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C2490u) [[unlikely]] return; }
L_002C2490:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C24A8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C24A8u) [[unlikely]] return; }
L_002C24A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C24C0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C24C0u) [[unlikely]] return; }
L_002C24C0:
    set32(c.r[17], ld32((c.r[28].w[0] - 27640u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C24EC; } }
L_002C24D0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002C24EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002C2500; } }
L_002C24EC:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C24D0u | kUnwind; return; } goto L_002C24D0; }
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_002C2500:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002C25A8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_002C258C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002C2524; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002C2524:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002C2588; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_002C2574; }
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2540u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C2540u) [[unlikely]] return; }
L_002C2540:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C2564; } }
L_002C254C:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_002C2564:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C254Cu | kUnwind; return; } goto L_002C254C; }
L_002C2574:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2580u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002C2580u) [[unlikely]] return; }
L_002C2580:
    st32((c.r[17].w[0]), c.r[21].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_002C2588:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_002C258C:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 6;
L_002C25A4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002C25A8:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 146u));
    c.budget -= 1;
L_002C25AC:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 140u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C2430u | kUnwind; return; } goto L_002C2430; }
L_002C25B8:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 144u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[20].w[0] + 136u);  goto L_002C2634; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 146u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 140u)));  goto L_002C2624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C2608; } }
L_002C25D8:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_002C2604; }
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 148u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 148u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 5;
L_002C2604:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002C2608:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 146u));
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 140u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C25D8u | kUnwind; return; } goto L_002C25D8; }
    st16((c.r[20].w[0] + 146u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 2;
L_002C2624:
    st16((c.r[20].w[0] + 144u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2630u); st32((c.r[20].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_0070(c, 207u, depth + 1u); else { c.pc = 0x002C1C30u; return; } if (c.pc != 0x002C2630u) [[unlikely]] return; }
L_002C2630:
    set32(c.r[3], c.r[20].w[0] + 136u);
    c.budget -= 1;
L_002C2634:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002C2668; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12368u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[20].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_002C2664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12384u);
    st32((c.r[20].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2664u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002C2664u) [[unlikely]] return; }
L_002C2664:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002C2668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2670u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 417u, depth + 1u); else { c.pc = 0x0031FAB0u; return; } if (c.pc != 0x002C2670u) [[unlikely]] return; }
L_002C2670:
    c.r[2].d[0] = c.r[22].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_002C2690; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C268Cu); set32(c.r[5], 0u + 160u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C268Cu) [[unlikely]] return; }
L_002C268C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002C2690:
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
L_002C26C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C274C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 12832u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2700u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C2700u) [[unlikely]] return; }
L_002C2700:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2718u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C2718u) [[unlikely]] return; }
L_002C2718:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2730u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C2730u) [[unlikely]] return; }
L_002C2730:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C2750; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C274Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C274Cu) [[unlikely]] return; }
L_002C274C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C2750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12832u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_002C27A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 23992u);  c.pc = t; return; }
L_002C27B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 23984u);  c.pc = t; return; }
L_002C27C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 23976u);  c.pc = t; return; }
L_002C27D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C27E0:
    st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 82u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002C27F0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_002C2860; }
L_002C2800:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_002C2810; }
L_002C2810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C283Cu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C283Cu) [[unlikely]] return; }
L_002C283C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C288Cu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C288Cu) [[unlikely]] return; }
L_002C288C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C28B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 24168u);  c.pc = t; return; }
L_002C28C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C28D4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x002C28D4u) [[unlikely]] return; }
L_002C28D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C28E0u); set32(c.r[4], ld32((c.r[2].w[0] + 24168u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002C28E0u) [[unlikely]] return; }
L_002C28E0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C28F4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C28F4u) [[unlikely]] return; }
L_002C28F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C292Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x002C292Cu) [[unlikely]] return; }
L_002C292C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));  goto L_002C293C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C297C; } }
L_002C293C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_002C2950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C297C; } }
L_002C2950:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_002C2964; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C297C; } }
L_002C2964:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2974u); c.r[6].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x002C2974u) [[unlikely]] return; }
L_002C2974:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_002C297C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C29ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x002C29ACu) [[unlikely]] return; }
L_002C29AC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C29C0u); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002C29C0u) [[unlikely]] return; }
L_002C29C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C29CCu); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002C29CCu) [[unlikely]] return; }
L_002C29CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C29E0u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_006A(c, 361u, depth + 1u); else { c.pc = 0x002AAF00u; return; } if (c.pc != 0x002C29E0u) [[unlikely]] return; }
L_002C29E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2A00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB2E0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_002C2A10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB310u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_002C2A20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A40u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002C2A40u) [[unlikely]] return; }
L_002C2A40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A4Cu); set32(c.r[5], c.r[29].w[0] + 79u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002C2A4Cu) [[unlikely]] return; }
L_002C2A4C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A64u); st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002C2A64u) [[unlikely]] return; }
L_002C2A64:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_002C2AC8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2A8Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C2A8Cu) [[unlikely]] return; }
L_002C2A8C:
    set32(c.r[18], ld32((c.r[29].w[0] + 72u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2AA4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C2AA4u) [[unlikely]] return; }
L_002C2AA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16368u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2AC0u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C2AC0u) [[unlikely]] return; }
L_002C2AC0:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 2;
L_002C2AC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2AD8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_006A(c, 362u, depth + 1u); else { c.pc = 0x002AAF10u; return; } if (c.pc != 0x002C2AD8u) [[unlikely]] return; }
L_002C2AD8:
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002C2AF8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2AF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C2AF4u) [[unlikely]] return; }
L_002C2AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C2AF8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C2B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 36u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C2B28u) [[unlikely]] return; }
L_002C2B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C2BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002C2B38u) [[unlikely]] return; }
L_002C2B38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 12848u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 15648u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2B68u); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002C2B68u) [[unlikely]] return; }
L_002C2B68:
    set32(c.r[2], ld32((c.r[28].w[0] - 27636u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));  goto L_002C2B7C; }
    st32((c.r[28].w[0] - 27636u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));
    c.budget -= 2;
L_002C2B7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_002C2B90; }
    st32((c.r[2].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_002C2B90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 27632u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 15648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2BA4u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002C2BA4u) [[unlikely]] return; }
L_002C2BA4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C2BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    if (c.r[17].d[0] != c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_002C2BEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C2CA8; } }
L_002C2BEC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));  goto L_002C2C14; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_002C2C10; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C2C0Cu) [[unlikely]] return; }
L_002C2C0C:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_002C2C10:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_002C2C14:
    set32(c.r[7], 0u + 1u);
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_002C2C80; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C44u); set32(c.r[6], c.r[6].w[0] - 12752u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C2C44u) [[unlikely]] return; }
L_002C2C44:
    set32(c.r[18], ld32((c.r[16].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C5Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C2C5Cu) [[unlikely]] return; }
L_002C2C5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16368u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2C78u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C2C78u) [[unlikely]] return; }
    goto L_002C2C78;
L_002C2C74:
    set32(c.r[7], 0u + 4u);
    c.budget -= 1;
L_002C2C78:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 2;
L_002C2C80:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C2CA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2CA4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002C2CA4u) [[unlikely]] return; }
L_002C2CA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C2CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C2DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 12848u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D00u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C2D00u) [[unlikely]] return; }
L_002C2D00:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2D1C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D1Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C2D1Cu) [[unlikely]] return; }
L_002C2D1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D28u); set32(c.r[4], c.r[4].w[0] + 15648u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002C2D28u) [[unlikely]] return; }
L_002C2D28:
    set32(c.r[2], ld32((c.r[28].w[0] - 27636u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));  goto L_002C2D40; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[28].w[0] - 27636u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));
    c.budget -= 3;
L_002C2D40:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_002C2D54; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[28].w[0] - 27632u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
L_002C2D54:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 32u)));  goto L_002C2D68; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
L_002C2D68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C2D78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_002C2D78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D84u); set32(c.r[4], c.r[4].w[0] + 15648u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002C2D84u) [[unlikely]] return; }
L_002C2D84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2D90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002C2D90u) [[unlikely]] return; }
L_002C2D90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C2DB0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2DACu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C2DACu) [[unlikely]] return; }
L_002C2DAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C2DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C2DD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2DFCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002C2DFCu) [[unlikely]] return; }
L_002C2DFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 12848u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E28u); st32((c.r[19].w[0] + 12u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C2E28u) [[unlikely]] return; }
L_002C2E28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16368u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E44u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C2E44u) [[unlikely]] return; }
L_002C2E44:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E5Cu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002C2E5Cu) [[unlikely]] return; }
L_002C2E5C:
    st32((c.r[19].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2E7C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E7Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C2E7Cu) [[unlikely]] return; }
L_002C2E7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2E88u); set32(c.r[4], c.r[4].w[0] + 15648u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002C2E88u) [[unlikely]] return; }
L_002C2E88:
    set32(c.r[2], ld32((c.r[28].w[0] - 27636u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));  goto L_002C2E9C; }
    st32((c.r[28].w[0] - 27636u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));
    c.budget -= 2;
L_002C2E9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 28u), 0u);  goto L_002C2EB0; }
    st32((c.r[2].w[0] + 32u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_002C2EB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 27632u), c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + 15648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2EC4u); st32((c.r[19].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002C2EC4u) [[unlikely]] return; }
L_002C2EC4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C2EF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002C2F14u) [[unlikely]] return; }
L_002C2F14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12848u);
    set32(c.r[4], c.r[2].w[0] + 16u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F38u); st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C2F38u) [[unlikely]] return; }
L_002C2F38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16368u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F54u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C2F54u) [[unlikely]] return; }
L_002C2F54:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C2F80; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C2F80u) [[unlikely]] return; }
L_002C2F80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2F8Cu); set32(c.r[4], c.r[4].w[0] + 15648u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002C2F8Cu) [[unlikely]] return; }
L_002C2F8C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27636u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));  goto L_002C2FA0; }
    st32((c.r[28].w[0] - 27636u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));
    c.budget -= 2;
L_002C2FA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_002C2FB4; }
    st32((c.r[2].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_002C2FB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 27632u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 15648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C2FC8u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002C2FC8u) [[unlikely]] return; }
L_002C2FC8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C2FF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3010u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002C3010u) [[unlikely]] return; }
L_002C3010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 12848u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3048u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C3048u) [[unlikely]] return; }
L_002C3048:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16368u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3064u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C3064u) [[unlikely]] return; }
L_002C3064:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_002C308C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C308Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002C308Cu) [[unlikely]] return; }
L_002C308C:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C30AC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C30ACu) [[unlikely]] return; }
L_002C30AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30B8u); set32(c.r[4], c.r[4].w[0] + 15648u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002C30B8u) [[unlikely]] return; }
L_002C30B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27636u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));  goto L_002C30CC; }
    st32((c.r[28].w[0] - 27636u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));
    c.budget -= 2;
L_002C30CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), 0u);  goto L_002C30E0; }
    st32((c.r[2].w[0] + 32u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27632u)));
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_002C30E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 27632u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 15648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C30F4u); st32((c.r[17].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002C30F4u) [[unlikely]] return; }
L_002C30F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C3110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 24280u);  c.pc = t; return; }
L_002C3120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3134u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 434u, depth + 1u); else { c.pc = 0x002A3E80u; return; } if (c.pc != 0x002C3134u) [[unlikely]] return; }
L_002C3134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3140u); set32(c.r[4], ld32((c.r[2].w[0] + 24280u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002C3140u) [[unlikely]] return; }
L_002C3140:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3154u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C3154u) [[unlikely]] return; }
L_002C3154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C3170:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3ED0u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 438u, depth); }
L_002C3180:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3F90u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 442u, depth); }
L_002C3190:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4080u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 8u, depth); }
L_002C31A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4150u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 14u, depth); }
L_002C31B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4290u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 28u, depth); }
L_002C31C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 256u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C31D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C31D8u) [[unlikely]] return; }
L_002C31D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C31F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C31E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 260u, depth + 1u); else { c.pc = 0x002A5F50u; return; } if (c.pc != 0x002C31E8u) [[unlikely]] return; }
L_002C31E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12928u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C31F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C3210:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4860u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 76u, depth); }
L_002C3220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3248u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C3248u) [[unlikely]] return; }
L_002C3248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C3264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3258u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 260u, depth + 1u); else { c.pc = 0x002A5F50u; return; } if (c.pc != 0x002C3258u) [[unlikely]] return; }
L_002C3258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12928u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002C3264:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3274u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 76u, depth + 1u); else { c.pc = 0x002A4860u; return; } if (c.pc != 0x002C3274u) [[unlikely]] return; }
L_002C3274:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C3290:
    set32(c.r[5], ld32((c.r[4].w[0] + 220u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 4095ull;
    c.r[4].d[0] = ld16((c.r[5].w[0] + 52u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002C32B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C3478; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 32u);  goto L_002C3308; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C3304; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C3304; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 216u)));  goto L_002C3408; }
L_002C3304:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_002C3308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C3310u) [[unlikely]] return; }
L_002C3310:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[19].w[0] + 216u)));  goto L_002C3368; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3330u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C3330u) [[unlikely]] return; }
L_002C3330:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3340u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C3340u) [[unlikely]] return; }
L_002C3340:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 9216u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[17], ld32((c.r[19].w[0] + 216u)));
    c.budget -= 10;
L_002C3368:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[16], ld32((c.r[18].w[0] + 12u)));  goto L_002C33F8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 216u), c.r[16].w[0]);  goto L_002C33B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3380u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C3380u) [[unlikely]] return; }
L_002C3380:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3390u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C3390u) [[unlikely]] return; }
L_002C3390:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C33AC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C33ACu) [[unlikely]] return; }
L_002C33AC:
    st32((c.r[19].w[0] + 216u), c.r[16].w[0]);
    c.budget -= 1;
L_002C33B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C33D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C33C0u) [[unlikely]] return; }
L_002C33C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33D0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C33D0u) [[unlikely]] return; }
L_002C33D0:
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C33F8; } }
L_002C33DC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_002C33EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002C33F0; } }
L_002C33EC:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002C33F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C33F8u); set32(c.r[4], ld32((c.r[19].w[0] + 216u)));  if (depth < kMaxDepth) unit_0067(c, 14u, depth + 1u); else { c.pc = 0x0029C2D0u; return; } if (c.pc != 0x002C33F8u) [[unlikely]] return; }
L_002C33F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C33DCu | kUnwind; return; } goto L_002C33DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002C34E8; } }
L_002C3408:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[18].d[0];  if (t) { goto L_002C34E4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 216u), c.r[18].w[0]);  goto L_002C3450; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3420u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C3420u) [[unlikely]] return; }
L_002C3420:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3430u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C3430u) [[unlikely]] return; }
L_002C3430:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C344C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C344Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C344Cu) [[unlikely]] return; }
L_002C344C:
    st32((c.r[19].w[0] + 216u), c.r[18].w[0]);
    c.budget -= 1;
L_002C3450:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002C34E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3460u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C3460u) [[unlikely]] return; }
L_002C3460:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3470u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C3470u) [[unlikely]] return; }
L_002C3470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C34E4; } }
L_002C3478:
    set32(c.r[16], ld32((c.r[19].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C34E4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002C34C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3494u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C3494u) [[unlikely]] return; }
L_002C3494:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34A4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C34A4u) [[unlikely]] return; }
L_002C34A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C34C0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C34C0u) [[unlikely]] return; }
L_002C34C0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C34C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 216u), 0u);  if (t) { goto L_002C34E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C34D4u) [[unlikely]] return; }
L_002C34D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C34E4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C34E4u) [[unlikely]] return; }
L_002C34E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002C34E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C3500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C351Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 219u, depth + 1u); else { c.pc = 0x002A5AC0u; return; } if (c.pc != 0x002C351Cu) [[unlikely]] return; }
L_002C351C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 396u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3530u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C3530u) [[unlikely]] return; }
L_002C3530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C3550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3564u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 260u, depth + 1u); else { c.pc = 0x002A5F50u; return; } if (c.pc != 0x002C3564u) [[unlikely]] return; }
L_002C3564:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12928u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C3590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 272u, depth + 1u); else { c.pc = 0x002A6060u; return; } if (c.pc != 0x002C35A4u) [[unlikely]] return; }
L_002C35A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12928u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C35D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 24304u);  c.pc = t; return; }
L_002C35E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C35FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 290u, depth + 1u); else { c.pc = 0x002A6280u; return; } if (c.pc != 0x002C35FCu) [[unlikely]] return; }
L_002C35FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3608u); set32(c.r[4], ld32((c.r[2].w[0] + 24304u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002C3608u) [[unlikely]] return; }
L_002C3608:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C361Cu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C361Cu) [[unlikely]] return; }
L_002C361C:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C362Cu); set32(c.r[4], c.r[4].w[0] + 24320u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002C362Cu) [[unlikely]] return; }
L_002C362C:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3640u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C3640u) [[unlikely]] return; }
L_002C3640:
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3650u); set32(c.r[4], c.r[4].w[0] + 24330u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002C3650u) [[unlikely]] return; }
L_002C3650:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3664u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C3664u) [[unlikely]] return; }
L_002C3664:
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3674u); set32(c.r[4], c.r[4].w[0] + 24340u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002C3674u) [[unlikely]] return; }
L_002C3674:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3688u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C3688u) [[unlikely]] return; }
L_002C3688:
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3698u); set32(c.r[4], c.r[4].w[0] + 24354u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002C3698u) [[unlikely]] return; }
L_002C3698:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C36ACu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C36ACu) [[unlikely]] return; }
L_002C36AC:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C36BCu); set32(c.r[4], c.r[4].w[0] + 24373u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002C36BCu) [[unlikely]] return; }
L_002C36BC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C36D0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C36D0u) [[unlikely]] return; }
L_002C36D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C36F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C370Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 321u, depth + 1u); else { c.pc = 0x002A64D0u; return; } if (c.pc != 0x002C370Cu) [[unlikely]] return; }
L_002C370C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 80u)));  goto L_002C371C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3A18; } }
L_002C371C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002C3730; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C3A18; }
L_002C3730:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002C3750; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3750; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3A18; } }
L_002C3750:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 84u)));  goto L_002C37A8; }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002C3794; } }
L_002C3764:
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[7].w[0] + 1u);  goto L_002C3790; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3A18; } }
L_002C3790:
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002C3794:
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3764u | kUnwind; return; } goto L_002C3764; }
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_002C37A8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002C37BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C3A18; }
L_002C37BC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002C37DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C37DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3A18; } }
L_002C37DC:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[8], ld32((c.r[17].w[0] + 88u)));  goto L_002C3834; }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 48u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002C3820; } }
L_002C37F0:
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[7].w[0] + 1u);  goto L_002C381C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3A18; } }
L_002C381C:
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002C3820:
    c.r[2].d[0] = c.r[7].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C37F0u | kUnwind; return; } goto L_002C37F0; }
    set32(c.r[8], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_002C3834:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002C3848; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C3A18; }
L_002C3848:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002C3868; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C3868; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C3A18; } }
L_002C3868:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 92u)));  goto L_002C3924; }
    c.r[7].d[0] = ld16((c.r[17].w[0] + 48u));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C3914; } }
L_002C3880:
    set32(c.r[6], c.r[9].w[0] << 4);
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002C38A4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C38A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C38C4; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002C38C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C38C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C38E4; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002C38E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C38E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C3904; } }
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002C3904; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C3904:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_002C3914; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3A18; } }
L_002C3914:
    c.r[2].d[0] = c.r[9].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3880u | kUnwind; return; } goto L_002C3880; }
    set32(c.r[6], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 1;
L_002C3924:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[8], ld32((c.r[17].w[0] + 96u)));  goto L_002C3970; }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 48u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002C3960; } }
L_002C3938:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002C3960; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3A18; } }
L_002C3960:
    c.r[2].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3938u | kUnwind; return; } goto L_002C3938; }
    set32(c.r[8], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002C3970:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002C3A18; }
    c.r[7].d[0] = ld16((c.r[17].w[0] + 48u));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002C3A08; } }
L_002C3988:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002C39B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C39B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C39D4; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002C39D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C39D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_002C39F8; }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002C39F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C39F4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_002C39F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_002C3A08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C3A18; } }
L_002C3A08:
    c.r[2].d[0] = c.r[9].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3988u | kUnwind; return; } goto L_002C3988; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C3A18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C3A30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3A50u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0069(c, 329u, depth + 1u); else { c.pc = 0x002A69A0u; return; } if (c.pc != 0x002C3A50u) [[unlikely]] return; }
L_002C3A50:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 79u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3A68u); st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002C3A68u) [[unlikely]] return; }
L_002C3A68:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C3A88; }
    c.r[6].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3A84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x002C3A84u) [[unlikely]] return; }
L_002C3A84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C3A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3A90u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002C3A90u) [[unlikely]] return; }
L_002C3A90:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 78u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3AA8u); st8((c.r[29].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002C3AA8u) [[unlikely]] return; }
L_002C3AA8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 78u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 88u)));  goto L_002C3AC8; }
    c.r[6].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[5], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3AC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x002C3AC4u) [[unlikely]] return; }
L_002C3AC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 1;
L_002C3AC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 77u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3ADCu); st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002C3ADCu) [[unlikely]] return; }
L_002C3ADC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 77u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 92u)));  goto L_002C3B18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C3B04; } }
L_002C3AF0:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B00u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0072(c, 197u, depth + 1u); else { c.pc = 0x002C9470u; return; } if (c.pc != 0x002C3B00u) [[unlikely]] return; }
L_002C3B00:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C3B04:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3AF0u | kUnwind; return; } goto L_002C3AF0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 1;
L_002C3B18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B2Cu); st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002C3B2Cu) [[unlikely]] return; }
L_002C3B2C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 96u)));  goto L_002C3B68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C3B54; } }
L_002C3B40:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B50u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C3B50u) [[unlikely]] return; }
L_002C3B50:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C3B54:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3B40u | kUnwind; return; } goto L_002C3B40; }
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 1;
L_002C3B68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 75u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3B7Cu); st8((c.r[29].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002C3B7Cu) [[unlikely]] return; }
L_002C3B7C:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 75u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002C3BC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C3BAC; } }
L_002C3B90:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3BA8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x002C3BA8u) [[unlikely]] return; }
L_002C3BA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002C3BAC:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3B90u | kUnwind; return; } goto L_002C3B90; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C3BC0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C3BE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6B70u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 347u, depth); }
L_002C3BF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6BE0u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 350u, depth); }
L_002C3C00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C20u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0069(c, 358u, depth + 1u); else { c.pc = 0x002A6CB0u; return; } if (c.pc != 0x002C3C20u) [[unlikely]] return; }
L_002C3C20:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C30u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C3C30u) [[unlikely]] return; }
L_002C3C30:
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C40u); set32(c.r[5], c.r[29].w[0] + 79u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002C3C40u) [[unlikely]] return; }
L_002C3C40:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_002C3C64; }
    c.r[6].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3C5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x002C3C5Cu) [[unlikely]] return; }
L_002C3C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C3C9C; } }
L_002C3C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002C3C84; } }
L_002C3C6C:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_002C3C84:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3C6Cu | kUnwind; return; } goto L_002C3C6C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C3C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CA4u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002C3CA4u) [[unlikely]] return; }
L_002C3CA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CB0u); set32(c.r[5], c.r[29].w[0] + 78u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002C3CB0u) [[unlikely]] return; }
L_002C3CB0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CC0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C3CC0u) [[unlikely]] return; }
L_002C3CC0:
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 78u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_002C3CE8; }
    c.r[6].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[5], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3CE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x002C3CE0u) [[unlikely]] return; }
L_002C3CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C3D20; } }
L_002C3CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002C3D08; } }
L_002C3CF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_002C3D08:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3CF0u | kUnwind; return; } goto L_002C3CF0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C3D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D28u); set32(c.r[5], c.r[29].w[0] + 77u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002C3D28u) [[unlikely]] return; }
L_002C3D28:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 77u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_002C3DA4; }
    c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D48u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C3D48u) [[unlikely]] return; }
L_002C3D48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 160u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D64u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C3D64u) [[unlikely]] return; }
L_002C3D64:
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C3D8C; } }
L_002C3D70:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3D84u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0072(c, 202u, depth + 1u); else { c.pc = 0x002C9590u; return; } if (c.pc != 0x002C3D84u) [[unlikely]] return; }
L_002C3D84:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002C3D8C:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3D70u | kUnwind; return; } goto L_002C3D70; }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_002C3DA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 5ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C3E88; }
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002C3F80; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DD4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C3DD4u) [[unlikely]] return; }
L_002C3DD4:
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3DF4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C3DF4u) [[unlikely]] return; }
L_002C3DF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3E10u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C3E10u) [[unlikely]] return; }
L_002C3E10:
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C3E54; } }
L_002C3E1C:
    c.r[7].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3E4Cu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0072(c, 211u, depth + 1u); else { c.pc = 0x002C9940u; return; } if (c.pc != 0x002C3E4Cu) [[unlikely]] return; }
L_002C3E4C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002C3E54:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3E1Cu | kUnwind; return; } goto L_002C3E1C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3E80u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002C3E80u) [[unlikely]] return; }
L_002C3E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), 0u);  if (t) { goto L_002C3F7C; } }
L_002C3E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3E90u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002C3E90u) [[unlikely]] return; }
L_002C3E90:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002C3EEC; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3EACu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C3EACu) [[unlikely]] return; }
L_002C3EAC:
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C3ED4; } }
L_002C3EB8:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3ECCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C3ECCu) [[unlikely]] return; }
L_002C3ECC:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002C3ED4:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3EB8u | kUnwind; return; } goto L_002C3EB8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C3EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3EF4u); set32(c.r[5], c.r[29].w[0] + 75u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002C3EF4u) [[unlikely]] return; }
L_002C3EF4:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 75u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C3F7C; } }
    c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F1Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002C3F1Cu) [[unlikely]] return; }
L_002C3F1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F38u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002C3F38u) [[unlikely]] return; }
L_002C3F38:
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C3F68; } }
L_002C3F44:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3F60u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x002C3F60u) [[unlikely]] return; }
L_002C3F60:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002C3F68:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C3F44u | kUnwind; return; } goto L_002C3F44; }
L_002C3F7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C3F80:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C3FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3FB8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C3FB8u) [[unlikely]] return; }
L_002C3FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0071(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C3FC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 486u, depth + 1u); else { c.pc = 0x002A7FD0u; return; } if (c.pc != 0x002C3FC8u) [[unlikely]] return; }
L_002C3FC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], c.r[3].w[0] + 13088u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 14;
    [[clang::musttail]] return unit_0071(c, 1u, depth);
}

}
