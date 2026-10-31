#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0093[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61,
    0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0,
    68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0,
    0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0,
    122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0,
    0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134,
    0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0,
    213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0,
    0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0,
    0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238,
    0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0,
    0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278,
    0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 286,
    0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0,
    320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0,
    0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381,
    0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0,
    398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403,
    0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 410, 0, 0,
    411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444,
    0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0,
    466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0,
    474, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0093(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0034C000;
    case 2u: goto L_0034C008;
    case 3u: goto L_0034C04C;
    case 4u: goto L_0034C06C;
    case 5u: goto L_0034C08C;
    case 6u: goto L_0034C0B8;
    case 7u: goto L_0034C0E0;
    case 8u: goto L_0034C120;
    case 9u: goto L_0034C150;
    case 10u: goto L_0034C170;
    case 11u: goto L_0034C1A0;
    case 12u: goto L_0034C268;
    case 13u: goto L_0034C2C8;
    case 14u: goto L_0034C2F0;
    case 15u: goto L_0034C3C8;
    case 16u: goto L_0034C3D4;
    case 17u: goto L_0034C3DC;
    case 18u: goto L_0034C3E8;
    case 19u: goto L_0034C3F0;
    case 20u: goto L_0034C400;
    case 21u: goto L_0034C448;
    case 22u: goto L_0034C45C;
    case 23u: goto L_0034C464;
    case 24u: goto L_0034C478;
    case 25u: goto L_0034C4A8;
    case 26u: goto L_0034C4B4;
    case 27u: goto L_0034C4BC;
    case 28u: goto L_0034C4C8;
    case 29u: goto L_0034C4D0;
    case 30u: goto L_0034C4E0;
    case 31u: goto L_0034C528;
    case 32u: goto L_0034C53C;
    case 33u: goto L_0034C544;
    case 34u: goto L_0034C558;
    case 35u: goto L_0034C580;
    case 36u: goto L_0034C590;
    case 37u: goto L_0034C5B0;
    case 38u: goto L_0034C5D0;
    case 39u: goto L_0034C5F0;
    case 40u: goto L_0034C600;
    case 41u: goto L_0034C610;
    case 42u: goto L_0034C620;
    case 43u: goto L_0034C640;
    case 44u: goto L_0034C670;
    case 45u: goto L_0034C690;
    case 46u: goto L_0034C6A8;
    case 47u: goto L_0034C6C0;
    case 48u: goto L_0034C6F8;
    case 49u: goto L_0034C710;
    case 50u: goto L_0034C750;
    case 51u: goto L_0034C760;
    case 52u: goto L_0034C778;
    case 53u: goto L_0034C790;
    case 54u: goto L_0034C7A4;
    case 55u: goto L_0034C7D0;
    case 56u: goto L_0034CB1C;
    case 57u: goto L_0034CB2C;
    case 58u: goto L_0034CB3C;
    case 59u: goto L_0034CB48;
    case 60u: goto L_0034CB70;
    case 61u: goto L_0034CB7C;
    case 62u: goto L_0034CB88;
    case 63u: goto L_0034CB9C;
    case 64u: goto L_0034CBA8;
    case 65u: goto L_0034CBDC;
    case 66u: goto L_0034CBE8;
    case 67u: goto L_0034CBF4;
    case 68u: goto L_0034CC00;
    case 69u: goto L_0034CC14;
    case 70u: goto L_0034CC20;
    case 71u: goto L_0034CC60;
    case 72u: goto L_0034CC6C;
    case 73u: goto L_0034CC78;
    case 74u: goto L_0034CC84;
    case 75u: goto L_0034CC90;
    case 76u: goto L_0034CCA0;
    case 77u: goto L_0034CCC4;
    case 78u: goto L_0034CCD0;
    case 79u: goto L_0034CCDC;
    case 80u: goto L_0034CCE8;
    case 81u: goto L_0034CCF4;
    case 82u: goto L_0034CD38;
    case 83u: goto L_0034CD44;
    case 84u: goto L_0034CD78;
    case 85u: goto L_0034CD84;
    case 86u: goto L_0034CD90;
    case 87u: goto L_0034CDBC;
    case 88u: goto L_0034CDC8;
    case 89u: goto L_0034CE04;
    case 90u: goto L_0034CE10;
    case 91u: goto L_0034CE1C;
    case 92u: goto L_0034CE28;
    case 93u: goto L_0034CE3C;
    case 94u: goto L_0034CE48;
    case 95u: goto L_0034CE94;
    case 96u: goto L_0034CEA0;
    case 97u: goto L_0034CEAC;
    case 98u: goto L_0034CEB8;
    case 99u: goto L_0034CEC4;
    case 100u: goto L_0034CED4;
    case 101u: goto L_0034CEFC;
    case 102u: goto L_0034CF08;
    case 103u: goto L_0034CF14;
    case 104u: goto L_0034CF20;
    case 105u: goto L_0034CF2C;
    case 106u: goto L_0034CF3C;
    case 107u: goto L_0034CF48;
    case 108u: goto L_0034CF54;
    case 109u: goto L_0034CF60;
    case 110u: goto L_0034CF6C;
    case 111u: goto L_0034CFE8;
    case 112u: goto L_0034D024;
    case 113u: goto L_0034D064;
    case 114u: goto L_0034D0A0;
    case 115u: goto L_0034D10C;
    case 116u: goto L_0034D194;
    case 117u: goto L_0034D1A4;
    case 118u: goto L_0034D1B4;
    case 119u: goto L_0034D1C0;
    case 120u: goto L_0034D1E8;
    case 121u: goto L_0034D1F4;
    case 122u: goto L_0034D200;
    case 123u: goto L_0034D214;
    case 124u: goto L_0034D220;
    case 125u: goto L_0034D254;
    case 126u: goto L_0034D260;
    case 127u: goto L_0034D26C;
    case 128u: goto L_0034D278;
    case 129u: goto L_0034D28C;
    case 130u: goto L_0034D298;
    case 131u: goto L_0034D2D8;
    case 132u: goto L_0034D2E4;
    case 133u: goto L_0034D2F0;
    case 134u: goto L_0034D2FC;
    case 135u: goto L_0034D308;
    case 136u: goto L_0034D318;
    case 137u: goto L_0034D33C;
    case 138u: goto L_0034D348;
    case 139u: goto L_0034D354;
    case 140u: goto L_0034D360;
    case 141u: goto L_0034D36C;
    case 142u: goto L_0034D3B0;
    case 143u: goto L_0034D3BC;
    case 144u: goto L_0034D3F0;
    case 145u: goto L_0034D3FC;
    case 146u: goto L_0034D408;
    case 147u: goto L_0034D434;
    case 148u: goto L_0034D440;
    case 149u: goto L_0034D47C;
    case 150u: goto L_0034D488;
    case 151u: goto L_0034D494;
    case 152u: goto L_0034D4A0;
    case 153u: goto L_0034D4B4;
    case 154u: goto L_0034D4C0;
    case 155u: goto L_0034D50C;
    case 156u: goto L_0034D518;
    case 157u: goto L_0034D524;
    case 158u: goto L_0034D530;
    case 159u: goto L_0034D53C;
    case 160u: goto L_0034D54C;
    case 161u: goto L_0034D574;
    case 162u: goto L_0034D580;
    case 163u: goto L_0034D58C;
    case 164u: goto L_0034D598;
    case 165u: goto L_0034D5A4;
    case 166u: goto L_0034D5B4;
    case 167u: goto L_0034D5C0;
    case 168u: goto L_0034D5CC;
    case 169u: goto L_0034D5D8;
    case 170u: goto L_0034D5E4;
    case 171u: goto L_0034D660;
    case 172u: goto L_0034D69C;
    case 173u: goto L_0034D6DC;
    case 174u: goto L_0034D718;
    case 175u: goto L_0034D784;
    case 176u: goto L_0034D7B0;
    case 177u: goto L_0034D9F4;
    case 178u: goto L_0034DA04;
    case 179u: goto L_0034DA14;
    case 180u: goto L_0034DA20;
    case 181u: goto L_0034DA48;
    case 182u: goto L_0034DA54;
    case 183u: goto L_0034DA60;
    case 184u: goto L_0034DA74;
    case 185u: goto L_0034DA80;
    case 186u: goto L_0034DAB4;
    case 187u: goto L_0034DAC0;
    case 188u: goto L_0034DACC;
    case 189u: goto L_0034DAD8;
    case 190u: goto L_0034DAEC;
    case 191u: goto L_0034DAF8;
    case 192u: goto L_0034DB38;
    case 193u: goto L_0034DB44;
    case 194u: goto L_0034DB50;
    case 195u: goto L_0034DB5C;
    case 196u: goto L_0034DB68;
    case 197u: goto L_0034DB78;
    case 198u: goto L_0034DB9C;
    case 199u: goto L_0034DBA8;
    case 200u: goto L_0034DBB4;
    case 201u: goto L_0034DBC0;
    case 202u: goto L_0034DBCC;
    case 203u: goto L_0034DC10;
    case 204u: goto L_0034DC1C;
    case 205u: goto L_0034DC50;
    case 206u: goto L_0034DC5C;
    case 207u: goto L_0034DC68;
    case 208u: goto L_0034DC94;
    case 209u: goto L_0034DCA0;
    case 210u: goto L_0034DCDC;
    case 211u: goto L_0034DCE8;
    case 212u: goto L_0034DCF4;
    case 213u: goto L_0034DD00;
    case 214u: goto L_0034DD14;
    case 215u: goto L_0034DD20;
    case 216u: goto L_0034DD6C;
    case 217u: goto L_0034DD78;
    case 218u: goto L_0034DD84;
    case 219u: goto L_0034DD90;
    case 220u: goto L_0034DD9C;
    case 221u: goto L_0034DDAC;
    case 222u: goto L_0034DDD4;
    case 223u: goto L_0034DDE0;
    case 224u: goto L_0034DDEC;
    case 225u: goto L_0034DDF8;
    case 226u: goto L_0034DE04;
    case 227u: goto L_0034DE14;
    case 228u: goto L_0034DE20;
    case 229u: goto L_0034DE2C;
    case 230u: goto L_0034DE38;
    case 231u: goto L_0034DE44;
    case 232u: goto L_0034DEC0;
    case 233u: goto L_0034DEFC;
    case 234u: goto L_0034DF3C;
    case 235u: goto L_0034DF78;
    case 236u: goto L_0034DFE4;
    case 237u: goto L_0034E06C;
    case 238u: goto L_0034E07C;
    case 239u: goto L_0034E08C;
    case 240u: goto L_0034E098;
    case 241u: goto L_0034E0C0;
    case 242u: goto L_0034E0CC;
    case 243u: goto L_0034E0D8;
    case 244u: goto L_0034E0EC;
    case 245u: goto L_0034E0F8;
    case 246u: goto L_0034E12C;
    case 247u: goto L_0034E138;
    case 248u: goto L_0034E144;
    case 249u: goto L_0034E150;
    case 250u: goto L_0034E164;
    case 251u: goto L_0034E170;
    case 252u: goto L_0034E1B0;
    case 253u: goto L_0034E1BC;
    case 254u: goto L_0034E1C8;
    case 255u: goto L_0034E1D4;
    case 256u: goto L_0034E1E0;
    case 257u: goto L_0034E1F0;
    case 258u: goto L_0034E214;
    case 259u: goto L_0034E220;
    case 260u: goto L_0034E22C;
    case 261u: goto L_0034E238;
    case 262u: goto L_0034E244;
    case 263u: goto L_0034E288;
    case 264u: goto L_0034E294;
    case 265u: goto L_0034E2C8;
    case 266u: goto L_0034E2D4;
    case 267u: goto L_0034E2E0;
    case 268u: goto L_0034E30C;
    case 269u: goto L_0034E318;
    case 270u: goto L_0034E354;
    case 271u: goto L_0034E360;
    case 272u: goto L_0034E36C;
    case 273u: goto L_0034E378;
    case 274u: goto L_0034E38C;
    case 275u: goto L_0034E398;
    case 276u: goto L_0034E3E4;
    case 277u: goto L_0034E3F0;
    case 278u: goto L_0034E3FC;
    case 279u: goto L_0034E408;
    case 280u: goto L_0034E414;
    case 281u: goto L_0034E424;
    case 282u: goto L_0034E44C;
    case 283u: goto L_0034E458;
    case 284u: goto L_0034E464;
    case 285u: goto L_0034E470;
    case 286u: goto L_0034E47C;
    case 287u: goto L_0034E48C;
    case 288u: goto L_0034E498;
    case 289u: goto L_0034E4A4;
    case 290u: goto L_0034E4B0;
    case 291u: goto L_0034E4BC;
    case 292u: goto L_0034E538;
    case 293u: goto L_0034E574;
    case 294u: goto L_0034E5B4;
    case 295u: goto L_0034E5F0;
    case 296u: goto L_0034E65C;
    case 297u: goto L_0034E680;
    case 298u: goto L_0034E9CC;
    case 299u: goto L_0034E9DC;
    case 300u: goto L_0034E9EC;
    case 301u: goto L_0034E9F8;
    case 302u: goto L_0034EA20;
    case 303u: goto L_0034EA2C;
    case 304u: goto L_0034EA38;
    case 305u: goto L_0034EA4C;
    case 306u: goto L_0034EA58;
    case 307u: goto L_0034EA8C;
    case 308u: goto L_0034EA98;
    case 309u: goto L_0034EAA4;
    case 310u: goto L_0034EAB0;
    case 311u: goto L_0034EAC4;
    case 312u: goto L_0034EAD0;
    case 313u: goto L_0034EB10;
    case 314u: goto L_0034EB1C;
    case 315u: goto L_0034EB28;
    case 316u: goto L_0034EB34;
    case 317u: goto L_0034EB40;
    case 318u: goto L_0034EB50;
    case 319u: goto L_0034EB74;
    case 320u: goto L_0034EB80;
    case 321u: goto L_0034EB8C;
    case 322u: goto L_0034EB98;
    case 323u: goto L_0034EBA4;
    case 324u: goto L_0034EBE8;
    case 325u: goto L_0034EBF4;
    case 326u: goto L_0034EC28;
    case 327u: goto L_0034EC34;
    case 328u: goto L_0034EC40;
    case 329u: goto L_0034EC6C;
    case 330u: goto L_0034EC78;
    case 331u: goto L_0034ECB4;
    case 332u: goto L_0034ECC0;
    case 333u: goto L_0034ECCC;
    case 334u: goto L_0034ECD8;
    case 335u: goto L_0034ECEC;
    case 336u: goto L_0034ECF8;
    case 337u: goto L_0034ED44;
    case 338u: goto L_0034ED50;
    case 339u: goto L_0034ED5C;
    case 340u: goto L_0034ED68;
    case 341u: goto L_0034ED74;
    case 342u: goto L_0034ED84;
    case 343u: goto L_0034EDAC;
    case 344u: goto L_0034EDB8;
    case 345u: goto L_0034EDC4;
    case 346u: goto L_0034EDD0;
    case 347u: goto L_0034EDDC;
    case 348u: goto L_0034EDEC;
    case 349u: goto L_0034EDF8;
    case 350u: goto L_0034EE04;
    case 351u: goto L_0034EE10;
    case 352u: goto L_0034EE1C;
    case 353u: goto L_0034EE98;
    case 354u: goto L_0034EED4;
    case 355u: goto L_0034EF14;
    case 356u: goto L_0034EF50;
    case 357u: goto L_0034EFBC;
    case 358u: goto L_0034EFE4;
    case 359u: goto L_0034F010;
    case 360u: goto L_0034F254;
    case 361u: goto L_0034F264;
    case 362u: goto L_0034F274;
    case 363u: goto L_0034F280;
    case 364u: goto L_0034F2A8;
    case 365u: goto L_0034F2B4;
    case 366u: goto L_0034F2C0;
    case 367u: goto L_0034F2D4;
    case 368u: goto L_0034F2E0;
    case 369u: goto L_0034F314;
    case 370u: goto L_0034F320;
    case 371u: goto L_0034F32C;
    case 372u: goto L_0034F338;
    case 373u: goto L_0034F34C;
    case 374u: goto L_0034F358;
    case 375u: goto L_0034F398;
    case 376u: goto L_0034F3A4;
    case 377u: goto L_0034F3B0;
    case 378u: goto L_0034F3BC;
    case 379u: goto L_0034F3C8;
    case 380u: goto L_0034F3D8;
    case 381u: goto L_0034F3FC;
    case 382u: goto L_0034F408;
    case 383u: goto L_0034F414;
    case 384u: goto L_0034F420;
    case 385u: goto L_0034F42C;
    case 386u: goto L_0034F470;
    case 387u: goto L_0034F47C;
    case 388u: goto L_0034F4B0;
    case 389u: goto L_0034F4BC;
    case 390u: goto L_0034F4C8;
    case 391u: goto L_0034F4F4;
    case 392u: goto L_0034F500;
    case 393u: goto L_0034F53C;
    case 394u: goto L_0034F548;
    case 395u: goto L_0034F554;
    case 396u: goto L_0034F560;
    case 397u: goto L_0034F574;
    case 398u: goto L_0034F580;
    case 399u: goto L_0034F5CC;
    case 400u: goto L_0034F5D8;
    case 401u: goto L_0034F5E4;
    case 402u: goto L_0034F5F0;
    case 403u: goto L_0034F5FC;
    case 404u: goto L_0034F60C;
    case 405u: goto L_0034F634;
    case 406u: goto L_0034F640;
    case 407u: goto L_0034F64C;
    case 408u: goto L_0034F658;
    case 409u: goto L_0034F664;
    case 410u: goto L_0034F674;
    case 411u: goto L_0034F680;
    case 412u: goto L_0034F68C;
    case 413u: goto L_0034F698;
    case 414u: goto L_0034F6A4;
    case 415u: goto L_0034F720;
    case 416u: goto L_0034F75C;
    case 417u: goto L_0034F79C;
    case 418u: goto L_0034F7D8;
    case 419u: goto L_0034F844;
    case 420u: goto L_0034F86C;
    case 421u: goto L_0034F890;
    case 422u: goto L_0034FB48;
    case 423u: goto L_0034FB58;
    case 424u: goto L_0034FB68;
    case 425u: goto L_0034FB74;
    case 426u: goto L_0034FB9C;
    case 427u: goto L_0034FBA8;
    case 428u: goto L_0034FBB4;
    case 429u: goto L_0034FBC8;
    case 430u: goto L_0034FBD4;
    case 431u: goto L_0034FC08;
    case 432u: goto L_0034FC14;
    case 433u: goto L_0034FC20;
    case 434u: goto L_0034FC2C;
    case 435u: goto L_0034FC40;
    case 436u: goto L_0034FC4C;
    case 437u: goto L_0034FC8C;
    case 438u: goto L_0034FC98;
    case 439u: goto L_0034FCA4;
    case 440u: goto L_0034FCB0;
    case 441u: goto L_0034FCBC;
    case 442u: goto L_0034FCCC;
    case 443u: goto L_0034FCF0;
    case 444u: goto L_0034FCFC;
    case 445u: goto L_0034FD08;
    case 446u: goto L_0034FD14;
    case 447u: goto L_0034FD20;
    case 448u: goto L_0034FD64;
    case 449u: goto L_0034FD70;
    case 450u: goto L_0034FDA4;
    case 451u: goto L_0034FDB0;
    case 452u: goto L_0034FDBC;
    case 453u: goto L_0034FDE8;
    case 454u: goto L_0034FDF4;
    case 455u: goto L_0034FE30;
    case 456u: goto L_0034FE3C;
    case 457u: goto L_0034FE48;
    case 458u: goto L_0034FE54;
    case 459u: goto L_0034FE68;
    case 460u: goto L_0034FE74;
    case 461u: goto L_0034FEC0;
    case 462u: goto L_0034FECC;
    case 463u: goto L_0034FED8;
    case 464u: goto L_0034FEE4;
    case 465u: goto L_0034FEF0;
    case 466u: goto L_0034FF00;
    case 467u: goto L_0034FF28;
    case 468u: goto L_0034FF34;
    case 469u: goto L_0034FF40;
    case 470u: goto L_0034FF4C;
    case 471u: goto L_0034FF58;
    case 472u: goto L_0034FF68;
    case 473u: goto L_0034FF74;
    case 474u: goto L_0034FF80;
    case 475u: goto L_0034FF8C;
    case 476u: goto L_0034FF98;
    case 477u: goto L_0034FFCC;
    default: bad_entry(c, 0x0034C000u); return;
    }
L_0034C000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034C0BC; } }
L_0034C008:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_0034C028; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034C0BC; } }
L_0034C028:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0034C0A0; }
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 4u)));  goto L_0034C054; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C04Cu); set32(c.r[5], c.r[5].w[0] - 20144u);  if (depth < kMaxDepth) unit_00A5(c, 160u, depth + 1u); else { c.pc = 0x00397F00u; return; } if (c.pc != 0x0034C04Cu) [[unlikely]] return; }
L_0034C04C:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_0034C054:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C06Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0098(c, 229u, depth + 1u); else { c.pc = 0x00363A70u; return; } if (c.pc != 0x0034C06Cu) [[unlikely]] return; }
L_0034C06C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20064u);
    set32(c.r[6], c.r[6].w[0] - 20144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C08Cu); set32(c.r[7], 0u + 28u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0034C08Cu) [[unlikely]] return; }
L_0034C08C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0034C09C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0034C0BC; } }
L_0034C09C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0034C0A0:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C0B8u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0093(c, 14u, depth + 1u); else { c.pc = 0x0034C2F0u; return; } if (c.pc != 0x0034C0B8u) [[unlikely]] return; }
L_0034C0B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0034C0BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034C0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034C150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 20576u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034C124; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C120u); set32(c.r[5], c.r[5].w[0] - 20144u);  if (depth < kMaxDepth) unit_00A5(c, 160u, depth + 1u); else { c.pc = 0x00397F00u; return; } if (c.pc != 0x0034C120u) [[unlikely]] return; }
L_0034C120:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_0034C124:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0034C13C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 20288u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_0034C13C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034C154; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C150u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0034C150u) [[unlikely]] return; }
L_0034C150:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034C154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 20288u);
    set32(c.r[3], c.r[3].w[0] + 20576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0034C1A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u - 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[7].w[0] + 24u)));
    c.r[6].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 13;
    if (c.r[6].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0034C1D8; }
    set32(c.r[17], c.r[6].w[0] + 36u);
    c.budget -= 1;
L_0034C1D8:
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[16], c.r[5].w[0] << 5);
    set32(c.r[8], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[3], 0u - 2u);
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[8].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    st32((c.r[8].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    st32((c.r[8].w[0] + 20u), c.f[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 21;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0])));  goto L_0034C244; }
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0034C268; } }
L_0034C244:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 5);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C268u); st32((c.r[8].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0093(c, 11u, depth + 1u); else { c.pc = 0x0034C1A0u; return; } if (c.pc != 0x0034C268u) [[unlikely]] return; }
L_0034C268:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0])));  goto L_0034C2A0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28u), c.r[4].w[0]);  if (t) { goto L_0034C2C8; } }
L_0034C2A0:
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] << 5);
    st32((c.r[18].w[0]), c.r[8].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C2C8u); st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0093(c, 11u, depth + 1u); else { c.pc = 0x0034C1A0u; return; } if (c.pc != 0x0034C2C8u) [[unlikely]] return; }
L_0034C2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034C2F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], c.r[5].w[0] << 3);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 2u);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 34;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0034C390; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0034C558; } }
L_0034C390:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[19], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    set32(c.r[18], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[17].w[0] + c.r[18].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 24u)));
    c.r[21].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3C8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 39u, depth + 1u); else { c.pc = 0x0034C5F0u; return; } if (c.pc != 0x0034C3C8u) [[unlikely]] return; }
L_0034C3C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3D4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 38u, depth + 1u); else { c.pc = 0x0034C5D0u; return; } if (c.pc != 0x0034C3D4u) [[unlikely]] return; }
L_0034C3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3DCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 39u, depth + 1u); else { c.pc = 0x0034C5F0u; return; } if (c.pc != 0x0034C3DCu) [[unlikely]] return; }
L_0034C3DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3E8u); set32(c.r[5], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034C5B0u; return; } if (c.pc != 0x0034C3E8u) [[unlikely]] return; }
L_0034C3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C3F0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 36u, depth + 1u); else { c.pc = 0x0034C590u; return; } if (c.pc != 0x0034C3F0u) [[unlikely]] return; }
L_0034C3F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0034C418; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C400u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 35u, depth + 1u); else { c.pc = 0x0034C580u; return; } if (c.pc != 0x0034C400u) [[unlikely]] return; }
L_0034C400:
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0034C478; } }
L_0034C418:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[18], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    st32((c.r[16].w[0]), c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C448u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_008F(c, 108u, depth + 1u); else { c.pc = 0x0033E130u; return; } if (c.pc != 0x0034C448u) [[unlikely]] return; }
L_0034C448:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C45Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 14u, depth + 1u); else { c.pc = 0x0034C2F0u; return; } if (c.pc != 0x0034C45Cu) [[unlikely]] return; }
L_0034C45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C464u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 107u, depth + 1u); else { c.pc = 0x0033E110u; return; } if (c.pc != 0x0034C464u) [[unlikely]] return; }
L_0034C464:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C478u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 14u, depth + 1u); else { c.pc = 0x0034C2F0u; return; } if (c.pc != 0x0034C478u) [[unlikely]] return; }
L_0034C478:
    set32(c.r[3], ld32((c.r[22].w[0] + 24u)));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0034C490; }
    set32(c.r[18], c.r[2].w[0] + 36u);
    c.budget -= 1;
L_0034C490:
    set32(c.r[2], c.r[19].w[0] << 3);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[19], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4A8u); set32(c.r[20], c.r[17].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0093(c, 39u, depth + 1u); else { c.pc = 0x0034C5F0u; return; } if (c.pc != 0x0034C4A8u) [[unlikely]] return; }
L_0034C4A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4B4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 38u, depth + 1u); else { c.pc = 0x0034C5D0u; return; } if (c.pc != 0x0034C4B4u) [[unlikely]] return; }
L_0034C4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 39u, depth + 1u); else { c.pc = 0x0034C5F0u; return; } if (c.pc != 0x0034C4BCu) [[unlikely]] return; }
L_0034C4BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4C8u); set32(c.r[5], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034C5B0u; return; } if (c.pc != 0x0034C4C8u) [[unlikely]] return; }
L_0034C4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 36u, depth + 1u); else { c.pc = 0x0034C590u; return; } if (c.pc != 0x0034C4D0u) [[unlikely]] return; }
L_0034C4D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0034C4F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C4E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 35u, depth + 1u); else { c.pc = 0x0034C580u; return; } if (c.pc != 0x0034C4E0u) [[unlikely]] return; }
L_0034C4E0:
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_0034C558; } }
L_0034C4F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[19], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[19].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C528u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_008F(c, 108u, depth + 1u); else { c.pc = 0x0033E130u; return; } if (c.pc != 0x0034C528u) [[unlikely]] return; }
L_0034C528:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C53Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 14u, depth + 1u); else { c.pc = 0x0034C2F0u; return; } if (c.pc != 0x0034C53Cu) [[unlikely]] return; }
L_0034C53C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C544u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 107u, depth + 1u); else { c.pc = 0x0033E110u; return; } if (c.pc != 0x0034C544u) [[unlikely]] return; }
L_0034C544:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C558u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 14u, depth + 1u); else { c.pc = 0x0034C2F0u; return; } if (c.pc != 0x0034C558u) [[unlikely]] return; }
L_0034C558:
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
L_0034C580:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_0034C590:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0034C5B0:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_0034C5D0:
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_0034C5F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0034C600:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] << 4);  c.pc = t; return; }
L_0034C610:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] << 5);  c.pc = t; return; }
L_0034C620:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] << 2);  c.pc = t; return; }
L_0034C640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0034C674; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034C670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C670u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0034C670u) [[unlikely]] return; }
L_0034C670:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0034C674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 36u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C6A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0034C6A8u) [[unlikely]] return; }
L_0034C6A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C6C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034C6F0; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034C6F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16400u);  if (t) { goto L_0034C6F8; } }
L_0034C6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C6F8u);  if (depth < kMaxDepth) unit_0098(c, 194u, depth + 1u); else { c.pc = 0x00363320u; return; } if (c.pc != 0x0034C6F8u) [[unlikely]] return; }
L_0034C6F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034C710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034C778; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 20608u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034C758; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C750u); set32(c.r[5], c.r[5].w[0] - 14784u);  if (depth < kMaxDepth) unit_00A5(c, 160u, depth + 1u); else { c.pc = 0x00397F00u; return; } if (c.pc != 0x0034C750u) [[unlikely]] return; }
L_0034C750:
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0034C758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C760u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 195u, depth + 1u); else { c.pc = 0x00363330u; return; } if (c.pc != 0x0034C760u) [[unlikely]] return; }
L_0034C760:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0034C77C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C778u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0034C778u) [[unlikely]] return; }
L_0034C778:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034C77C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034C790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034C7A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 198u, depth + 1u); else { c.pc = 0x003633A0u; return; } if (c.pc != 0x0034C7A4u) [[unlikely]] return; }
L_0034C7A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 20608u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034C7D0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 352u), c.f[1]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 32;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[29].w[0] + 344u), c.f[0]);  if (t) { goto L_0034C85C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034C878; } }
L_0034C85C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0034C878:
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0034C894; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034C8B0; } }
L_0034C894:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0034C8B0:
    c.f[0] = ld32((c.r[17].w[0] + 124u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[3] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0034C8CC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034C8E8; } }
L_0034C8CC:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0034C8E8:
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 372u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 372u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 332u), c.f[3]);  if (t) { goto L_0034C954; } }
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[17].w[0] + 20u));  goto L_0034C958; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CAA4; } }
L_0034C954:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 1;
L_0034C958:
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    c.f[0] = ld32((c.r[29].w[0] + 348u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 368u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 368u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 24u));  goto L_0034C9A8; }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034C9A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CAA4; } }
L_0034C9A4:
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 1;
L_0034C9A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 364u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 364u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.f[12] = ld32((c.r[17].w[0] + 32u));  goto L_0034C9F8; }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034C9F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CAA4; } }
L_0034C9F4:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 1;
L_0034C9F8:
    c.f[11] = ld32((c.r[29].w[0] + 364u));
    c.f[14] = ld32((c.r[17].w[0] + 36u));
    c.f[13] = ld32((c.r[29].w[0] + 368u));
    c.facc = fp::mul(c.f[12], c.f[11]);
    c.f[7] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[14], c.f[13]));
    c.f[6] = ld32((c.r[17].w[0] + 44u));
    c.f[8] = ld32((c.r[29].w[0] + 332u));
    c.f[9] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = c.f[0] & fp::kAbs;
    c.facc = fp::mul(c.f[7], c.f[6]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[8], c.f[9]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.f[10] = 0u;
    c.budget -= 16;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = ld32((c.r[29].w[0] + 372u));  goto L_0034CA40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CAA4; } }
L_0034CA40:
    c.f[5] = ld32((c.r[17].w[0] + 28u));
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[14], c.f[4]);
    c.facc = fp::add(c.f[10], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[11]));
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = fp::mul(c.f[7], c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 328u));
    c.facc = fp::add(c.f[10], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[9]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = fp::mul(c.f[5], c.f[13]);  goto L_0034CA7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CAA4; } }
L_0034CA7C:
    c.facc = fp::add(c.f[10], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[12], c.f[4]));
    c.f[0] = fp::mul(c.f[8], c.f[2]);
    c.facc = fp::add(c.f[10], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[6]));
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], 0u + 1u);  goto L_0034CAA4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034CAA4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0034D788; }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034D104; }
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[5].w[0] >> 1);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 312u);
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[8], ld32((c.r[7].w[0] + 20u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 2u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB1Cu); set32(c.r[19], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034CB1Cu) [[unlikely]] return; }
L_0034CB1C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB2Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034CB2Cu) [[unlikely]] return; }
L_0034CB2C:
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB3Cu); set32(c.r[6], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034CB3Cu) [[unlikely]] return; }
L_0034CB3C:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB48u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034CB48u) [[unlikely]] return; }
L_0034CB48:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 360u), c.f[0]);  if (t) { goto L_0034CD4C; } }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_0034CB90; }
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CB70u) [[unlikely]] return; }
L_0034CB70:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CB7Cu) [[unlikely]] return; }
L_0034CB7C:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CB88u) [[unlikely]] return; }
L_0034CB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CF70; } }
L_0034CB90:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CB9Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034CB9Cu) [[unlikely]] return; }
L_0034CB9C:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBA8u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034CBA8u) [[unlikely]] return; }
L_0034CBA8:
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 264u);  goto L_0034CBD4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 248u);  goto L_0034CC08; }
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 1;
L_0034CBD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CBDCu) [[unlikely]] return; }
L_0034CBDC:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CBE8u) [[unlikely]] return; }
L_0034CBE8:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CBF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CBF4u) [[unlikely]] return; }
L_0034CBF4:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC00u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CC00u) [[unlikely]] return; }
L_0034CC00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CF70; } }
L_0034CC08:
    set32(c.r[5], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC14u); set32(c.r[6], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034CC14u) [[unlikely]] return; }
L_0034CC14:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC20u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034CC20u) [[unlikely]] return; }
L_0034CC20:
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 248u);  goto L_0034CC58; }
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 296u);  goto L_0034CC98; }
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 1;
L_0034CC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CC60u) [[unlikely]] return; }
L_0034CC60:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CC6Cu) [[unlikely]] return; }
L_0034CC6C:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CC78u) [[unlikely]] return; }
L_0034CC78:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CC84u) [[unlikely]] return; }
L_0034CC84:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CC90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CC90u) [[unlikely]] return; }
L_0034CC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CF70; } }
L_0034CC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCA0u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034CCA0u) [[unlikely]] return; }
L_0034CCA0:
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 360u));  goto L_0034CCFC; }
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CCC4u) [[unlikely]] return; }
L_0034CCC4:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCD0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CCD0u) [[unlikely]] return; }
L_0034CCD0:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CCDCu) [[unlikely]] return; }
L_0034CCDC:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CCE8u) [[unlikely]] return; }
L_0034CCE8:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CCF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CCF4u) [[unlikely]] return; }
L_0034CCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CF70; } }
L_0034CCFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[5], 0u - 1u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD38u); st32((c.r[17].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CD38u) [[unlikely]] return; }
L_0034CD38:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CD44u) [[unlikely]] return; }
L_0034CD44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 280u);  if (t) { goto L_0034CF4C; } }
L_0034CD4C:
    c.f[1] = ld32((c.r[28].w[0] - 31956u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0034CD9C; }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034CD98; } }
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CD78u) [[unlikely]] return; }
L_0034CD78:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CD84u) [[unlikely]] return; }
L_0034CD84:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CD90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CD90u) [[unlikely]] return; }
L_0034CD90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CF70; } }
L_0034CD98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0034CD9C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 232u);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CDBCu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034CDBCu) [[unlikely]] return; }
L_0034CDBC:
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CDC8u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034CDC8u) [[unlikely]] return; }
L_0034CDC8:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 232u);  goto L_0034CDFC; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 216u);  goto L_0034CE30; }
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 1;
L_0034CDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CE04u) [[unlikely]] return; }
L_0034CE04:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CE10u) [[unlikely]] return; }
L_0034CE10:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CE1Cu) [[unlikely]] return; }
L_0034CE1C:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CE28u) [[unlikely]] return; }
L_0034CE28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CF70; } }
L_0034CE30:
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE3Cu); set32(c.r[6], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034CE3Cu) [[unlikely]] return; }
L_0034CE3C:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE48u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034CE48u) [[unlikely]] return; }
L_0034CE48:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 216u);  goto L_0034CE8C; }
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 296u);  goto L_0034CECC; }
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.budget -= 1;
L_0034CE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CE94u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CE94u) [[unlikely]] return; }
L_0034CE94:
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CEA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CEA0u) [[unlikely]] return; }
L_0034CEA0:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CEACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CEACu) [[unlikely]] return; }
L_0034CEAC:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CEB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CEB8u) [[unlikely]] return; }
L_0034CEB8:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CEC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CEC4u) [[unlikely]] return; }
L_0034CEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CF70; } }
L_0034CECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CED4u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034CED4u) [[unlikely]] return; }
L_0034CED4:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 216u);  goto L_0034CF34; }
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CEFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CEFCu) [[unlikely]] return; }
L_0034CEFC:
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CF08u) [[unlikely]] return; }
L_0034CF08:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CF14u) [[unlikely]] return; }
L_0034CF14:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CF20u) [[unlikely]] return; }
L_0034CF20:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CF2Cu) [[unlikely]] return; }
L_0034CF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034CF70; } }
L_0034CF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CF3Cu) [[unlikely]] return; }
L_0034CF3C:
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CF48u) [[unlikely]] return; }
L_0034CF48:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 1;
L_0034CF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CF54u) [[unlikely]] return; }
L_0034CF54:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CF60u) [[unlikely]] return; }
L_0034CF60:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CF6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034CF6Cu) [[unlikely]] return; }
L_0034CF6C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0034CF70:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0034D110; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] >> 1);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 12;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0034D10C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 136u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 88u));  goto L_0034CFC8; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] >> 2);
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_0034D0C4; }
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 1;
L_0034CFC8:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 396u), c.f[0]);  if (t) { goto L_0034CFE8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034CFE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034CFE8u) [[unlikely]] return; }
L_0034CFE8:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 388u), c.f[0]);  if (t) { goto L_0034D024; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D024u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034D024u) [[unlikely]] return; }
L_0034D024:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 388u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 384u), c.f[0]);  if (t) { goto L_0034D064; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D064u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034D064u) [[unlikely]] return; }
L_0034D064:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_0034D0A4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D0A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034D0A0u) [[unlikely]] return; }
L_0034D0A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0034D0A4:
    set32(c.r[5], ld32((c.r[29].w[0] + 396u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0034D10C; } }
L_0034D0C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034D10C; } }
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034D10C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0034D10C; } }
L_0034D104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D10Cu);  if (depth < kMaxDepth) unit_0093(c, 55u, depth + 1u); else { c.pc = 0x0034C7D0u; return; } if (c.pc != 0x0034D10Cu) [[unlikely]] return; }
L_0034D10C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0034D110:
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034D784; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034D77C; }
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[5].w[0] >> 1);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[8], ld32((c.r[7].w[0] + 20u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 2u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D194u); set32(c.r[19], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034D194u) [[unlikely]] return; }
L_0034D194:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D1A4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034D1A4u) [[unlikely]] return; }
L_0034D1A4:
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D1B4u); set32(c.r[6], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034D1B4u) [[unlikely]] return; }
L_0034D1B4:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D1C0u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034D1C0u) [[unlikely]] return; }
L_0034D1C0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 356u), c.f[0]);  if (t) { goto L_0034D3C4; } }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_0034D208; }
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D1E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D1E8u) [[unlikely]] return; }
L_0034D1E8:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D1F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D1F4u) [[unlikely]] return; }
L_0034D1F4:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D200u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D200u) [[unlikely]] return; }
L_0034D200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D5E8; } }
L_0034D208:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D214u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034D214u) [[unlikely]] return; }
L_0034D214:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D220u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034D220u) [[unlikely]] return; }
L_0034D220:
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 152u);  goto L_0034D24C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_0034D280; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 1;
L_0034D24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D254u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D254u) [[unlikely]] return; }
L_0034D254:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D260u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D260u) [[unlikely]] return; }
L_0034D260:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D26Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D26Cu) [[unlikely]] return; }
L_0034D26C:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D278u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D278u) [[unlikely]] return; }
L_0034D278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D5E8; } }
L_0034D280:
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D28Cu); set32(c.r[6], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034D28Cu) [[unlikely]] return; }
L_0034D28C:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D298u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034D298u) [[unlikely]] return; }
L_0034D298:
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_0034D2D0; }
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 184u);  goto L_0034D310; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 1;
L_0034D2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D2D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D2D8u) [[unlikely]] return; }
L_0034D2D8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D2E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D2E4u) [[unlikely]] return; }
L_0034D2E4:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D2F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D2F0u) [[unlikely]] return; }
L_0034D2F0:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D2FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D2FCu) [[unlikely]] return; }
L_0034D2FC:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D308u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D308u) [[unlikely]] return; }
L_0034D308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D5E8; } }
L_0034D310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D318u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034D318u) [[unlikely]] return; }
L_0034D318:
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 356u));  goto L_0034D374; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D33Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D33Cu) [[unlikely]] return; }
L_0034D33C:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D348u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D348u) [[unlikely]] return; }
L_0034D348:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D354u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D354u) [[unlikely]] return; }
L_0034D354:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D360u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D360u) [[unlikely]] return; }
L_0034D360:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D36Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D36Cu) [[unlikely]] return; }
L_0034D36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D5E8; } }
L_0034D374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[5], 0u - 1u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D3B0u); st32((c.r[17].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D3B0u) [[unlikely]] return; }
L_0034D3B0:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D3BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D3BCu) [[unlikely]] return; }
L_0034D3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 168u);  if (t) { goto L_0034D5C4; } }
L_0034D3C4:
    c.f[1] = ld32((c.r[28].w[0] - 31956u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0034D414; }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034D410; } }
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D3F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D3F0u) [[unlikely]] return; }
L_0034D3F0:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D3FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D3FCu) [[unlikely]] return; }
L_0034D3FC:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D408u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D408u) [[unlikely]] return; }
L_0034D408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D5E8; } }
L_0034D410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0034D414:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 120u);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D434u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034D434u) [[unlikely]] return; }
L_0034D434:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D440u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034D440u) [[unlikely]] return; }
L_0034D440:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 120u);  goto L_0034D474; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034D4A8; }
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 1;
L_0034D474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D47Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D47Cu) [[unlikely]] return; }
L_0034D47C:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D488u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D488u) [[unlikely]] return; }
L_0034D488:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D494u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D494u) [[unlikely]] return; }
L_0034D494:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D4A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D4A0u) [[unlikely]] return; }
L_0034D4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D5E8; } }
L_0034D4A8:
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D4B4u); set32(c.r[6], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034D4B4u) [[unlikely]] return; }
L_0034D4B4:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D4C0u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034D4C0u) [[unlikely]] return; }
L_0034D4C0:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034D504; }
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 184u);  goto L_0034D544; }
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 1;
L_0034D504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D50Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D50Cu) [[unlikely]] return; }
L_0034D50C:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D518u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D518u) [[unlikely]] return; }
L_0034D518:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D524u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D524u) [[unlikely]] return; }
L_0034D524:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D530u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D530u) [[unlikely]] return; }
L_0034D530:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D53Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D53Cu) [[unlikely]] return; }
L_0034D53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D5E8; } }
L_0034D544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D54Cu); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034D54Cu) [[unlikely]] return; }
L_0034D54C:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034D5AC; }
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D574u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D574u) [[unlikely]] return; }
L_0034D574:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D580u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D580u) [[unlikely]] return; }
L_0034D580:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D58Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D58Cu) [[unlikely]] return; }
L_0034D58C:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D598u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D598u) [[unlikely]] return; }
L_0034D598:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D5A4u) [[unlikely]] return; }
L_0034D5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D5E8; } }
L_0034D5AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D5B4u) [[unlikely]] return; }
L_0034D5B4:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D5C0u) [[unlikely]] return; }
L_0034D5C0:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 1;
L_0034D5C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D5CCu) [[unlikely]] return; }
L_0034D5CC:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D5D8u) [[unlikely]] return; }
L_0034D5D8:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D5E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034D5E4u) [[unlikely]] return; }
L_0034D5E4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0034D5E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034D784; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] >> 1);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0034D784; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 136u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 88u));  goto L_0034D640; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] >> 2);
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_0034D73C; }
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 1;
L_0034D640:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 392u), c.f[0]);  if (t) { goto L_0034D660; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D660u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034D660u) [[unlikely]] return; }
L_0034D660:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 380u), c.f[0]);  if (t) { goto L_0034D69C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D69Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034D69Cu) [[unlikely]] return; }
L_0034D69C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 376u), c.f[0]);  if (t) { goto L_0034D6DC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D6DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034D6DCu) [[unlikely]] return; }
L_0034D6DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 376u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_0034D71C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D718u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034D718u) [[unlikely]] return; }
L_0034D718:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0034D71C:
    set32(c.r[5], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0034D784; } }
L_0034D73C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034D784; } }
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034D784; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0034D784; } }
L_0034D77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D784u);  if (depth < kMaxDepth) unit_0093(c, 55u, depth + 1u); else { c.pc = 0x0034C7D0u; return; } if (c.pc != 0x0034D784u) [[unlikely]] return; }
L_0034D784:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0034D788:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0034D7B0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 340u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034D82C; } }
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[17].w[0] + 20u));  goto L_0034D830; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D97C; } }
L_0034D82C:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 1;
L_0034D830:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 336u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 24u));  goto L_0034D880; }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034D87C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D97C; } }
L_0034D87C:
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 1;
L_0034D880:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 332u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.f[12] = ld32((c.r[17].w[0] + 32u));  goto L_0034D8D0; }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034D8CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D97C; } }
L_0034D8CC:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 1;
L_0034D8D0:
    c.f[4] = ld32((c.r[29].w[0] + 332u));
    c.f[14] = ld32((c.r[17].w[0] + 36u));
    c.f[13] = ld32((c.r[29].w[0] + 336u));
    c.facc = fp::mul(c.f[12], c.f[4]);
    c.f[8] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[14], c.f[13]));
    c.f[7] = ld32((c.r[17].w[0] + 44u));
    c.f[10] = ld32((c.r[16].w[0] + 16u));
    c.f[9] = ld32((c.r[17].w[0] + 48u));
    c.facc = fp::mul(c.f[8], c.f[7]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[10], c.f[9]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.f[11] = 0u;
    c.budget -= 16;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[5] = ld32((c.r[29].w[0] + 340u));  goto L_0034D918; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D97C; } }
L_0034D918:
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.f[6] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = fp::mul(c.f[14], c.f[5]);
    c.facc = fp::add(c.f[11], c.f[0]);
    c.f[0] = fp::mul(c.f[8], c.f[2]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[6], c.f[4]));
    c.facc = fp::add(c.f[11], c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = c.f[4] & fp::kAbs;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[9]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = fp::mul(c.f[6], c.f[13]);  goto L_0034D954; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034D97C; } }
L_0034D954:
    c.f[0] = fp::mul(c.f[10], c.f[2]);
    c.facc = fp::add(c.f[11], c.f[1]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[12], c.f[5]));
    c.facc = fp::add(c.f[11], c.f[0]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[7]));
    c.f[0] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], 0u + 1u);  goto L_0034D97C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034D97C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0034E660; }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034DFDC; }
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[5].w[0] >> 1);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 312u);
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[8], ld32((c.r[7].w[0] + 20u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 2u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034D9F4u); set32(c.r[19], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034D9F4u) [[unlikely]] return; }
L_0034D9F4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA04u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034DA04u) [[unlikely]] return; }
L_0034DA04:
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA14u); set32(c.r[6], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034DA14u) [[unlikely]] return; }
L_0034DA14:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA20u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034DA20u) [[unlikely]] return; }
L_0034DA20:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 328u), c.f[0]);  if (t) { goto L_0034DC24; } }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_0034DA68; }
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DA48u) [[unlikely]] return; }
L_0034DA48:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DA54u) [[unlikely]] return; }
L_0034DA54:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DA60u) [[unlikely]] return; }
L_0034DA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034DE48; } }
L_0034DA68:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA74u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034DA74u) [[unlikely]] return; }
L_0034DA74:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DA80u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034DA80u) [[unlikely]] return; }
L_0034DA80:
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 264u);  goto L_0034DAAC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 248u);  goto L_0034DAE0; }
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 1;
L_0034DAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DAB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DAB4u) [[unlikely]] return; }
L_0034DAB4:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DAC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DAC0u) [[unlikely]] return; }
L_0034DAC0:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DACCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DACCu) [[unlikely]] return; }
L_0034DACC:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DAD8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DAD8u) [[unlikely]] return; }
L_0034DAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034DE48; } }
L_0034DAE0:
    set32(c.r[5], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DAECu); set32(c.r[6], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034DAECu) [[unlikely]] return; }
L_0034DAEC:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DAF8u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034DAF8u) [[unlikely]] return; }
L_0034DAF8:
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 248u);  goto L_0034DB30; }
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 296u);  goto L_0034DB70; }
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 1;
L_0034DB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DB38u) [[unlikely]] return; }
L_0034DB38:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DB44u) [[unlikely]] return; }
L_0034DB44:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DB50u) [[unlikely]] return; }
L_0034DB50:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DB5Cu) [[unlikely]] return; }
L_0034DB5C:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DB68u) [[unlikely]] return; }
L_0034DB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034DE48; } }
L_0034DB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB78u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034DB78u) [[unlikely]] return; }
L_0034DB78:
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 328u));  goto L_0034DBD4; }
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DB9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DB9Cu) [[unlikely]] return; }
L_0034DB9C:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DBA8u) [[unlikely]] return; }
L_0034DBA8:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DBB4u) [[unlikely]] return; }
L_0034DBB4:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DBC0u) [[unlikely]] return; }
L_0034DBC0:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DBCCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DBCCu) [[unlikely]] return; }
L_0034DBCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034DE48; } }
L_0034DBD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[5], 0u - 1u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DC10u); st32((c.r[17].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DC10u) [[unlikely]] return; }
L_0034DC10:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DC1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DC1Cu) [[unlikely]] return; }
L_0034DC1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 280u);  if (t) { goto L_0034DE24; } }
L_0034DC24:
    c.f[1] = ld32((c.r[28].w[0] - 31956u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0034DC74; }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034DC70; } }
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DC50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DC50u) [[unlikely]] return; }
L_0034DC50:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DC5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DC5Cu) [[unlikely]] return; }
L_0034DC5C:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DC68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DC68u) [[unlikely]] return; }
L_0034DC68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034DE48; } }
L_0034DC70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0034DC74:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 232u);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DC94u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034DC94u) [[unlikely]] return; }
L_0034DC94:
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCA0u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034DCA0u) [[unlikely]] return; }
L_0034DCA0:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 232u);  goto L_0034DCD4; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 216u);  goto L_0034DD08; }
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 1;
L_0034DCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DCDCu) [[unlikely]] return; }
L_0034DCDC:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DCE8u) [[unlikely]] return; }
L_0034DCE8:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DCF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DCF4u) [[unlikely]] return; }
L_0034DCF4:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD00u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DD00u) [[unlikely]] return; }
L_0034DD00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034DE48; } }
L_0034DD08:
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD14u); set32(c.r[6], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034DD14u) [[unlikely]] return; }
L_0034DD14:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD20u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034DD20u) [[unlikely]] return; }
L_0034DD20:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 216u);  goto L_0034DD64; }
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 296u);  goto L_0034DDA4; }
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.budget -= 1;
L_0034DD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DD6Cu) [[unlikely]] return; }
L_0034DD6C:
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DD78u) [[unlikely]] return; }
L_0034DD78:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DD84u) [[unlikely]] return; }
L_0034DD84:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DD90u) [[unlikely]] return; }
L_0034DD90:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DD9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DD9Cu) [[unlikely]] return; }
L_0034DD9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034DE48; } }
L_0034DDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDACu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034DDACu) [[unlikely]] return; }
L_0034DDAC:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 216u);  goto L_0034DE0C; }
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DDD4u) [[unlikely]] return; }
L_0034DDD4:
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DDE0u) [[unlikely]] return; }
L_0034DDE0:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DDECu) [[unlikely]] return; }
L_0034DDEC:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DDF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DDF8u) [[unlikely]] return; }
L_0034DDF8:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DE04u) [[unlikely]] return; }
L_0034DE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034DE48; } }
L_0034DE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DE14u) [[unlikely]] return; }
L_0034DE14:
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DE20u) [[unlikely]] return; }
L_0034DE20:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 1;
L_0034DE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DE2Cu) [[unlikely]] return; }
L_0034DE2C:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DE38u) [[unlikely]] return; }
L_0034DE38:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DE44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034DE44u) [[unlikely]] return; }
L_0034DE44:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0034DE48:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_0034DFE8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] >> 1);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 12;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0034DFE4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 136u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 88u));  goto L_0034DEA0; }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] >> 2);
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_0034DF9C; }
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 1;
L_0034DEA0:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 364u), c.f[0]);  if (t) { goto L_0034DEC0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DEC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034DEC0u) [[unlikely]] return; }
L_0034DEC0:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 356u), c.f[0]);  if (t) { goto L_0034DEFC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DEFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034DEFCu) [[unlikely]] return; }
L_0034DEFC:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 352u), c.f[0]);  if (t) { goto L_0034DF3C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF3Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034DF3Cu) [[unlikely]] return; }
L_0034DF3C:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_0034DF7C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DF78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034DF78u) [[unlikely]] return; }
L_0034DF78:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0034DF7C:
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0034DFE4; } }
L_0034DF9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034DFE4; } }
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034DFE4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0034DFE4; } }
L_0034DFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034DFE4u);  if (depth < kMaxDepth) unit_0093(c, 176u, depth + 1u); else { c.pc = 0x0034D7B0u; return; } if (c.pc != 0x0034DFE4u) [[unlikely]] return; }
L_0034DFE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0034DFE8:
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034E65C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0034E654; }
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[5].w[0] >> 1);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[8], ld32((c.r[7].w[0] + 20u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 2u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E06Cu); set32(c.r[19], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034E06Cu) [[unlikely]] return; }
L_0034E06C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E07Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034E07Cu) [[unlikely]] return; }
L_0034E07C:
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E08Cu); set32(c.r[6], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034E08Cu) [[unlikely]] return; }
L_0034E08C:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E098u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034E098u) [[unlikely]] return; }
L_0034E098:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 324u), c.f[0]);  if (t) { goto L_0034E29C; } }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_0034E0E0; }
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E0C0u) [[unlikely]] return; }
L_0034E0C0:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E0CCu) [[unlikely]] return; }
L_0034E0CC:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E0D8u) [[unlikely]] return; }
L_0034E0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E4C0; } }
L_0034E0E0:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0ECu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034E0ECu) [[unlikely]] return; }
L_0034E0EC:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E0F8u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034E0F8u) [[unlikely]] return; }
L_0034E0F8:
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 152u);  goto L_0034E124; }
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_0034E158; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 1;
L_0034E124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E12Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E12Cu) [[unlikely]] return; }
L_0034E12C:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E138u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E138u) [[unlikely]] return; }
L_0034E138:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E144u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E144u) [[unlikely]] return; }
L_0034E144:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E150u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E150u) [[unlikely]] return; }
L_0034E150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E4C0; } }
L_0034E158:
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E164u); set32(c.r[6], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034E164u) [[unlikely]] return; }
L_0034E164:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E170u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034E170u) [[unlikely]] return; }
L_0034E170:
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_0034E1A8; }
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 324u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 184u);  goto L_0034E1E8; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 1;
L_0034E1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E1B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E1B0u) [[unlikely]] return; }
L_0034E1B0:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E1BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E1BCu) [[unlikely]] return; }
L_0034E1BC:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E1C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E1C8u) [[unlikely]] return; }
L_0034E1C8:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E1D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E1D4u) [[unlikely]] return; }
L_0034E1D4:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E1E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E1E0u) [[unlikely]] return; }
L_0034E1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E4C0; } }
L_0034E1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E1F0u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034E1F0u) [[unlikely]] return; }
L_0034E1F0:
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 324u));  goto L_0034E24C; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E214u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E214u) [[unlikely]] return; }
L_0034E214:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E220u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E220u) [[unlikely]] return; }
L_0034E220:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E22Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E22Cu) [[unlikely]] return; }
L_0034E22C:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E238u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E238u) [[unlikely]] return; }
L_0034E238:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E244u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E244u) [[unlikely]] return; }
L_0034E244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E4C0; } }
L_0034E24C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[5], 0u - 1u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E288u); st32((c.r[17].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E288u) [[unlikely]] return; }
L_0034E288:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E294u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E294u) [[unlikely]] return; }
L_0034E294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 168u);  if (t) { goto L_0034E49C; } }
L_0034E29C:
    c.f[1] = ld32((c.r[28].w[0] - 31956u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0034E2EC; }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034E2E8; } }
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E2C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E2C8u) [[unlikely]] return; }
L_0034E2C8:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E2D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E2D4u) [[unlikely]] return; }
L_0034E2D4:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E2E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E2E0u) [[unlikely]] return; }
L_0034E2E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E4C0; } }
L_0034E2E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0034E2EC:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 120u);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E30Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034E30Cu) [[unlikely]] return; }
L_0034E30C:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E318u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034E318u) [[unlikely]] return; }
L_0034E318:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 120u);  goto L_0034E34C; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034E380; }
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 1;
L_0034E34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E354u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E354u) [[unlikely]] return; }
L_0034E354:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E360u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E360u) [[unlikely]] return; }
L_0034E360:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E36Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E36Cu) [[unlikely]] return; }
L_0034E36C:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E378u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E378u) [[unlikely]] return; }
L_0034E378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E4C0; } }
L_0034E380:
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E38Cu); set32(c.r[6], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034E38Cu) [[unlikely]] return; }
L_0034E38C:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E398u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034E398u) [[unlikely]] return; }
L_0034E398:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034E3DC; }
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 184u);  goto L_0034E41C; }
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 1;
L_0034E3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E3E4u) [[unlikely]] return; }
L_0034E3E4:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E3F0u) [[unlikely]] return; }
L_0034E3F0:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E3FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E3FCu) [[unlikely]] return; }
L_0034E3FC:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E408u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E408u) [[unlikely]] return; }
L_0034E408:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E414u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E414u) [[unlikely]] return; }
L_0034E414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E4C0; } }
L_0034E41C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E424u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034E424u) [[unlikely]] return; }
L_0034E424:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034E484; }
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E44Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E44Cu) [[unlikely]] return; }
L_0034E44C:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E458u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E458u) [[unlikely]] return; }
L_0034E458:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E464u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E464u) [[unlikely]] return; }
L_0034E464:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E470u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E470u) [[unlikely]] return; }
L_0034E470:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E47Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E47Cu) [[unlikely]] return; }
L_0034E47C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E4C0; } }
L_0034E484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E48Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E48Cu) [[unlikely]] return; }
L_0034E48C:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E498u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E498u) [[unlikely]] return; }
L_0034E498:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 1;
L_0034E49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E4A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E4A4u) [[unlikely]] return; }
L_0034E4A4:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E4B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E4B0u) [[unlikely]] return; }
L_0034E4B0:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E4BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034E4BCu) [[unlikely]] return; }
L_0034E4BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0034E4C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034E65C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] >> 1);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0034E65C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 136u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 88u));  goto L_0034E518; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] >> 2);
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_0034E614; }
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 1;
L_0034E518:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 360u), c.f[0]);  if (t) { goto L_0034E538; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E538u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034E538u) [[unlikely]] return; }
L_0034E538:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 348u), c.f[0]);  if (t) { goto L_0034E574; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E574u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034E574u) [[unlikely]] return; }
L_0034E574:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 344u), c.f[0]);  if (t) { goto L_0034E5B4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E5B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034E5B4u) [[unlikely]] return; }
L_0034E5B4:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_0034E5F4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E5F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034E5F0u) [[unlikely]] return; }
L_0034E5F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0034E5F4:
    set32(c.r[5], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0034E65C; } }
L_0034E614:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034E65C; } }
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034E65C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0034E65C; } }
L_0034E654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E65Cu);  if (depth < kMaxDepth) unit_0093(c, 176u, depth + 1u); else { c.pc = 0x0034D7B0u; return; } if (c.pc != 0x0034E65Cu) [[unlikely]] return; }
L_0034E65C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0034E660:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0034E680:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 240u), c.f[1]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 32;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[29].w[0] + 232u), c.f[0]);  if (t) { goto L_0034E70C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034E728; } }
L_0034E70C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0034E728:
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0034E744; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034E760; } }
L_0034E744:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0034E760:
    c.f[0] = ld32((c.r[18].w[0] + 124u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[3] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0034E77C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034E798; } }
L_0034E77C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0034E798:
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    st32((c.r[29].w[0] + 224u), c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 216u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 220u), c.f[3]);  if (t) { goto L_0034E804; } }
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[18].w[0] + 20u));  goto L_0034E808; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E954; } }
L_0034E804:
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.budget -= 1;
L_0034E808:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 252u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 252u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.f[1] = ld32((c.r[18].w[0] + 24u));  goto L_0034E858; }
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034E854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E954; } }
L_0034E854:
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 1;
L_0034E858:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 248u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 248u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.f[12] = ld32((c.r[18].w[0] + 32u));  goto L_0034E8A8; }
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034E8A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E954; } }
L_0034E8A4:
    c.f[12] = ld32((c.r[18].w[0] + 32u));
    c.budget -= 1;
L_0034E8A8:
    c.f[11] = ld32((c.r[29].w[0] + 248u));
    c.f[14] = ld32((c.r[18].w[0] + 36u));
    c.f[13] = ld32((c.r[29].w[0] + 252u));
    c.facc = fp::mul(c.f[12], c.f[11]);
    c.f[7] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[14], c.f[13]));
    c.f[6] = ld32((c.r[18].w[0] + 44u));
    c.f[8] = ld32((c.r[29].w[0] + 220u));
    c.f[9] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = c.f[0] & fp::kAbs;
    c.facc = fp::mul(c.f[7], c.f[6]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[8], c.f[9]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.f[10] = 0u;
    c.budget -= 16;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = ld32((c.r[29].w[0] + 256u));  goto L_0034E8F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E954; } }
L_0034E8F0:
    c.f[5] = ld32((c.r[18].w[0] + 28u));
    c.f[2] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::mul(c.f[14], c.f[4]);
    c.facc = fp::add(c.f[10], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[11]));
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = fp::mul(c.f[7], c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 216u));
    c.facc = fp::add(c.f[10], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[9]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = fp::mul(c.f[5], c.f[13]);  goto L_0034E92C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034E954; } }
L_0034E92C:
    c.facc = fp::add(c.f[10], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[12], c.f[4]));
    c.f[0] = fp::mul(c.f[8], c.f[2]);
    c.facc = fp::add(c.f[10], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[6]));
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], 0u + 1u);  goto L_0034E954; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034E954:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0034EFE8; }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0034EFB4; }
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], c.r[5].w[0] >> 1);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[8], ld32((c.r[7].w[0] + 20u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 2u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[16], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9CCu); set32(c.r[19], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034E9CCu) [[unlikely]] return; }
L_0034E9CC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9DCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034E9DCu) [[unlikely]] return; }
L_0034E9DC:
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[18].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9ECu); set32(c.r[6], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034E9ECu) [[unlikely]] return; }
L_0034E9EC:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034E9F8u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034E9F8u) [[unlikely]] return; }
L_0034E9F8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 244u), c.f[0]);  if (t) { goto L_0034EBFC; } }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_0034EA40; }
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EA20u) [[unlikely]] return; }
L_0034EA20:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EA2Cu) [[unlikely]] return; }
L_0034EA2C:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EA38u) [[unlikely]] return; }
L_0034EA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034EE20; } }
L_0034EA40:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA4Cu); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034EA4Cu) [[unlikely]] return; }
L_0034EA4C:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA58u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034EA58u) [[unlikely]] return; }
L_0034EA58:
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 152u);  goto L_0034EA84; }
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_0034EAB8; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 1;
L_0034EA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EA8Cu) [[unlikely]] return; }
L_0034EA8C:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EA98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EA98u) [[unlikely]] return; }
L_0034EA98:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EAA4u) [[unlikely]] return; }
L_0034EAA4:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EAB0u) [[unlikely]] return; }
L_0034EAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034EE20; } }
L_0034EAB8:
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAC4u); set32(c.r[6], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034EAC4u) [[unlikely]] return; }
L_0034EAC4:
    set32(c.r[4], c.r[18].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EAD0u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034EAD0u) [[unlikely]] return; }
L_0034EAD0:
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_0034EB08; }
    c.f[2] = ld32((c.r[18].w[0] + 84u));
    c.f[1] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 184u);  goto L_0034EB48; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 1;
L_0034EB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EB10u) [[unlikely]] return; }
L_0034EB10:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EB1Cu) [[unlikely]] return; }
L_0034EB1C:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EB28u) [[unlikely]] return; }
L_0034EB28:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EB34u) [[unlikely]] return; }
L_0034EB34:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EB40u) [[unlikely]] return; }
L_0034EB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034EE20; } }
L_0034EB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB50u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034EB50u) [[unlikely]] return; }
L_0034EB50:
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 244u));  goto L_0034EBAC; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EB74u) [[unlikely]] return; }
L_0034EB74:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EB80u) [[unlikely]] return; }
L_0034EB80:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EB8Cu) [[unlikely]] return; }
L_0034EB8C:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EB98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EB98u) [[unlikely]] return; }
L_0034EB98:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EBA4u) [[unlikely]] return; }
L_0034EBA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034EE20; } }
L_0034EBAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    set32(c.r[5], 0u - 1u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBE8u); st32((c.r[18].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EBE8u) [[unlikely]] return; }
L_0034EBE8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EBF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EBF4u) [[unlikely]] return; }
L_0034EBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 168u);  if (t) { goto L_0034EDFC; } }
L_0034EBFC:
    c.f[1] = ld32((c.r[28].w[0] - 31956u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0034EC4C; }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034EC48; } }
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EC28u) [[unlikely]] return; }
L_0034EC28:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EC34u) [[unlikely]] return; }
L_0034EC34:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EC40u) [[unlikely]] return; }
L_0034EC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034EE20; } }
L_0034EC48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0034EC4C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 120u);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC6Cu); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034EC6Cu) [[unlikely]] return; }
L_0034EC6C:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EC78u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034EC78u) [[unlikely]] return; }
L_0034EC78:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 120u);  goto L_0034ECAC; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034ECE0; }
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 1;
L_0034ECAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034ECB4u) [[unlikely]] return; }
L_0034ECB4:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034ECC0u) [[unlikely]] return; }
L_0034ECC0:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECCCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034ECCCu) [[unlikely]] return; }
L_0034ECCC:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECD8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034ECD8u) [[unlikely]] return; }
L_0034ECD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034EE20; } }
L_0034ECE0:
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECECu); set32(c.r[6], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034ECECu) [[unlikely]] return; }
L_0034ECEC:
    set32(c.r[4], c.r[18].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ECF8u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034ECF8u) [[unlikely]] return; }
L_0034ECF8:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034ED3C; }
    c.f[2] = ld32((c.r[18].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 184u);  goto L_0034ED7C; }
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 1;
L_0034ED3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034ED44u) [[unlikely]] return; }
L_0034ED44:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034ED50u) [[unlikely]] return; }
L_0034ED50:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034ED5Cu) [[unlikely]] return; }
L_0034ED5C:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034ED68u) [[unlikely]] return; }
L_0034ED68:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034ED74u) [[unlikely]] return; }
L_0034ED74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034EE20; } }
L_0034ED7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ED84u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034ED84u) [[unlikely]] return; }
L_0034ED84:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034EDE4; }
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EDACu) [[unlikely]] return; }
L_0034EDAC:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EDB8u) [[unlikely]] return; }
L_0034EDB8:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EDC4u) [[unlikely]] return; }
L_0034EDC4:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDD0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EDD0u) [[unlikely]] return; }
L_0034EDD0:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EDDCu) [[unlikely]] return; }
L_0034EDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034EE20; } }
L_0034EDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EDECu) [[unlikely]] return; }
L_0034EDEC:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EDF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EDF8u) [[unlikely]] return; }
L_0034EDF8:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 1;
L_0034EDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EE04u) [[unlikely]] return; }
L_0034EE04:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EE10u) [[unlikely]] return; }
L_0034EE10:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034EE1Cu) [[unlikely]] return; }
L_0034EE1C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0034EE20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034EFE4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] >> 1);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0034EFE4; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 136u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0] + 88u));  goto L_0034EE78; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] >> 2);
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_0034EF74; }
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.budget -= 1;
L_0034EE78:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 268u), c.f[0]);  if (t) { goto L_0034EE98; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EE98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034EE98u) [[unlikely]] return; }
L_0034EE98:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 264u), c.f[0]);  if (t) { goto L_0034EED4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EED4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034EED4u) [[unlikely]] return; }
L_0034EED4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 260u), c.f[0]);  if (t) { goto L_0034EF14; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF14u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034EF14u) [[unlikely]] return; }
L_0034EF14:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0034EF54; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EF50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034EF50u) [[unlikely]] return; }
L_0034EF50:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0034EF54:
    set32(c.r[5], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0034EFE4; } }
L_0034EF74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034EFE4; } }
    c.f[1] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034EFE4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0034EFE4; } }
L_0034EFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFBCu);  if (depth < kMaxDepth) unit_0093(c, 297u, depth + 1u); else { c.pc = 0x0034E680u; return; } if (c.pc != 0x0034EFBCu) [[unlikely]] return; }
L_0034EFBC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034EFE4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034EFE4u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0093(c, 297u, depth + 1u); else { c.pc = 0x0034E680u; return; } if (c.pc != 0x0034EFE4u) [[unlikely]] return; }
L_0034EFE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0034EFE8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0034F010:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 224u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 224u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034F08C; } }
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[18].w[0] + 20u));  goto L_0034F090; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F1DC; } }
L_0034F08C:
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.budget -= 1;
L_0034F090:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 220u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.f[1] = ld32((c.r[18].w[0] + 24u));  goto L_0034F0E0; }
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034F0DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F1DC; } }
L_0034F0DC:
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 1;
L_0034F0E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 216u), c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.r[4].d[0] = c.r[4].d[0] << 33;
    c.r[4].d[0] = c.r[4].d[0] >> 33;
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { c.f[12] = ld32((c.r[18].w[0] + 32u));  goto L_0034F130; }
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0034F12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F1DC; } }
L_0034F12C:
    c.f[12] = ld32((c.r[18].w[0] + 32u));
    c.budget -= 1;
L_0034F130:
    c.f[4] = ld32((c.r[29].w[0] + 216u));
    c.f[14] = ld32((c.r[18].w[0] + 36u));
    c.f[13] = ld32((c.r[29].w[0] + 220u));
    c.facc = fp::mul(c.f[12], c.f[4]);
    c.f[8] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[14], c.f[13]));
    c.f[7] = ld32((c.r[18].w[0] + 44u));
    c.f[10] = ld32((c.r[17].w[0] + 16u));
    c.f[9] = ld32((c.r[18].w[0] + 48u));
    c.facc = fp::mul(c.f[8], c.f[7]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[10], c.f[9]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.f[11] = 0u;
    c.budget -= 16;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[5] = ld32((c.r[29].w[0] + 224u));  goto L_0034F178; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F1DC; } }
L_0034F178:
    c.f[2] = ld32((c.r[18].w[0] + 40u));
    c.f[6] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = fp::mul(c.f[14], c.f[5]);
    c.facc = fp::add(c.f[11], c.f[0]);
    c.f[0] = fp::mul(c.f[8], c.f[2]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[6], c.f[4]));
    c.facc = fp::add(c.f[11], c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = c.f[4] & fp::kAbs;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[9]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = fp::mul(c.f[6], c.f[13]);  goto L_0034F1B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F1DC; } }
L_0034F1B4:
    c.f[0] = fp::mul(c.f[10], c.f[2]);
    c.facc = fp::add(c.f[11], c.f[1]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[12], c.f[5]));
    c.facc = fp::add(c.f[11], c.f[0]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[7]));
    c.f[0] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], 0u + 1u);  goto L_0034F1DC; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034F1DC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0034F870; }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0034F83C; }
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], c.r[5].w[0] >> 1);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[8], ld32((c.r[7].w[0] + 20u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 2u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[16], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F254u); set32(c.r[19], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034F254u) [[unlikely]] return; }
L_0034F254:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F264u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034F264u) [[unlikely]] return; }
L_0034F264:
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[18].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F274u); set32(c.r[6], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034F274u) [[unlikely]] return; }
L_0034F274:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F280u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034F280u) [[unlikely]] return; }
L_0034F280:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 212u), c.f[0]);  if (t) { goto L_0034F484; } }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_0034F2C8; }
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F2A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F2A8u) [[unlikely]] return; }
L_0034F2A8:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F2B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F2B4u) [[unlikely]] return; }
L_0034F2B4:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F2C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F2C0u) [[unlikely]] return; }
L_0034F2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F6A8; } }
L_0034F2C8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F2D4u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034F2D4u) [[unlikely]] return; }
L_0034F2D4:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F2E0u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034F2E0u) [[unlikely]] return; }
L_0034F2E0:
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 152u);  goto L_0034F30C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_0034F340; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 1;
L_0034F30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F314u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F314u) [[unlikely]] return; }
L_0034F314:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F320u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F320u) [[unlikely]] return; }
L_0034F320:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F32Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F32Cu) [[unlikely]] return; }
L_0034F32C:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F338u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F338u) [[unlikely]] return; }
L_0034F338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F6A8; } }
L_0034F340:
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F34Cu); set32(c.r[6], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034F34Cu) [[unlikely]] return; }
L_0034F34C:
    set32(c.r[4], c.r[18].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F358u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034F358u) [[unlikely]] return; }
L_0034F358:
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_0034F390; }
    c.f[2] = ld32((c.r[18].w[0] + 84u));
    c.f[1] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 184u);  goto L_0034F3D0; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 1;
L_0034F390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F398u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F398u) [[unlikely]] return; }
L_0034F398:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F3A4u) [[unlikely]] return; }
L_0034F3A4:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F3B0u) [[unlikely]] return; }
L_0034F3B0:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F3BCu) [[unlikely]] return; }
L_0034F3BC:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F3C8u) [[unlikely]] return; }
L_0034F3C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F6A8; } }
L_0034F3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3D8u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034F3D8u) [[unlikely]] return; }
L_0034F3D8:
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 212u));  goto L_0034F434; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F3FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F3FCu) [[unlikely]] return; }
L_0034F3FC:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F408u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F408u) [[unlikely]] return; }
L_0034F408:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F414u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F414u) [[unlikely]] return; }
L_0034F414:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F420u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F420u) [[unlikely]] return; }
L_0034F420:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F42Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F42Cu) [[unlikely]] return; }
L_0034F42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F6A8; } }
L_0034F434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    set32(c.r[5], 0u - 1u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F470u); st32((c.r[18].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F470u) [[unlikely]] return; }
L_0034F470:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F47Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F47Cu) [[unlikely]] return; }
L_0034F47C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 168u);  if (t) { goto L_0034F684; } }
L_0034F484:
    c.f[1] = ld32((c.r[28].w[0] - 31956u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0034F4D4; }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034F4D0; } }
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F4B0u) [[unlikely]] return; }
L_0034F4B0:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F4BCu) [[unlikely]] return; }
L_0034F4BC:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F4C8u) [[unlikely]] return; }
L_0034F4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F6A8; } }
L_0034F4D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0034F4D4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 120u);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F4F4u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034F4F4u) [[unlikely]] return; }
L_0034F4F4:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F500u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034F500u) [[unlikely]] return; }
L_0034F500:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 120u);  goto L_0034F534; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034F568; }
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 1;
L_0034F534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F53Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F53Cu) [[unlikely]] return; }
L_0034F53C:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F548u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F548u) [[unlikely]] return; }
L_0034F548:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F554u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F554u) [[unlikely]] return; }
L_0034F554:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F560u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F560u) [[unlikely]] return; }
L_0034F560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F6A8; } }
L_0034F568:
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F574u); set32(c.r[6], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034F574u) [[unlikely]] return; }
L_0034F574:
    set32(c.r[4], c.r[18].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F580u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034F580u) [[unlikely]] return; }
L_0034F580:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034F5C4; }
    c.f[2] = ld32((c.r[18].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 184u);  goto L_0034F604; }
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 1;
L_0034F5C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F5CCu) [[unlikely]] return; }
L_0034F5CC:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F5D8u) [[unlikely]] return; }
L_0034F5D8:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F5E4u) [[unlikely]] return; }
L_0034F5E4:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F5F0u) [[unlikely]] return; }
L_0034F5F0:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F5FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F5FCu) [[unlikely]] return; }
L_0034F5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F6A8; } }
L_0034F604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F60Cu); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034F60Cu) [[unlikely]] return; }
L_0034F60C:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_0034F66C; }
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F634u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F634u) [[unlikely]] return; }
L_0034F634:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F640u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F640u) [[unlikely]] return; }
L_0034F640:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F64Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F64Cu) [[unlikely]] return; }
L_0034F64C:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F658u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F658u) [[unlikely]] return; }
L_0034F658:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F664u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F664u) [[unlikely]] return; }
L_0034F664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034F6A8; } }
L_0034F66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F674u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F674u) [[unlikely]] return; }
L_0034F674:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F680u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F680u) [[unlikely]] return; }
L_0034F680:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 1;
L_0034F684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F68Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F68Cu) [[unlikely]] return; }
L_0034F68C:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F698u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F698u) [[unlikely]] return; }
L_0034F698:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F6A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034F6A4u) [[unlikely]] return; }
L_0034F6A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0034F6A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034F86C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] >> 1);
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0034F86C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 136u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0] + 88u));  goto L_0034F700; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] >> 2);
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_0034F7FC; }
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.budget -= 1;
L_0034F700:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 236u), c.f[0]);  if (t) { goto L_0034F720; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F720u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034F720u) [[unlikely]] return; }
L_0034F720:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 232u), c.f[0]);  if (t) { goto L_0034F75C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F75Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034F75Cu) [[unlikely]] return; }
L_0034F75C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 228u), c.f[0]);  if (t) { goto L_0034F79C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F79Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034F79Cu) [[unlikely]] return; }
L_0034F79C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 12;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0034F7DC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F7D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 200u, depth + 1u); else { c.pc = 0x003633E0u; return; } if (c.pc != 0x0034F7D8u) [[unlikely]] return; }
L_0034F7D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0034F7DC:
    set32(c.r[5], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0034F86C; } }
L_0034F7FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034F86C; } }
    c.f[1] = ld32((c.r[18].w[0] + 80u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034F86C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0034F86C; } }
L_0034F83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F844u);  if (depth < kMaxDepth) unit_0093(c, 359u, depth + 1u); else { c.pc = 0x0034F010u; return; } if (c.pc != 0x0034F844u) [[unlikely]] return; }
L_0034F844:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 5ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 5ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034F86C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034F86Cu); set32(c.r[5], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_0093(c, 359u, depth + 1u); else { c.pc = 0x0034F010u; return; } if (c.pc != 0x0034F86Cu) [[unlikely]] return; }
L_0034F86C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0034F870:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0034F890:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 340u), c.f[0]);
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 32;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[29].w[0] + 336u), c.f[0]);  if (t) { goto L_0034F91C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034F938; } }
L_0034F91C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0034F938:
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0034F954; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034F970; } }
L_0034F954:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0034F970:
    c.f[0] = ld32((c.r[17].w[0] + 124u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[3] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0034F98C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034F9A8; } }
L_0034F98C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0034F9A8:
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    st32((c.r[29].w[0] + 324u), c.f[3]);
    st32((c.r[29].w[0] + 328u), c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[4] = ld32((c.r[17].w[0] + 64u));
    c.f[13] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    c.f[4] = fp::add(c.f[1], c.f[13]);
    c.f[5] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[4]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 320u), c.f[1]);  if (t) { goto L_0034F9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FAD0; } }
L_0034F9F0:
    c.f[5] = ld32((c.r[17].w[0] + 68u));
    c.f[4] = ld32((c.r[29].w[0] + 340u));
    c.f[11] = ld32((c.r[17].w[0] + 44u));
    c.f[12] = fp::sub(c.f[5], c.f[4]);
    c.f[4] = fp::add(c.f[3], c.f[11]);
    c.f[5] = c.f[12] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[4]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[5] = ld32((c.r[17].w[0] + 72u));  goto L_0034FA1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FAD0; } }
L_0034FA1C:
    c.f[4] = ld32((c.r[29].w[0] + 344u));
    c.f[9] = ld32((c.r[17].w[0] + 48u));
    c.f[10] = fp::sub(c.f[5], c.f[4]);
    c.f[4] = fp::add(c.f[2], c.f[9]);
    c.f[5] = c.f[10] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[4]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[7] = ld32((c.r[17].w[0] + 56u));  goto L_0034FA44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FAD0; } }
L_0034FA44:
    c.f[8] = ld32((c.r[17].w[0] + 60u));
    c.f[6] = 0u;
    c.facc = fp::mul(c.f[7], c.f[10]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[8], c.f[12]));
    c.f[5] = c.f[4] & fp::kAbs;
    c.facc = fp::mul(c.f[2], c.f[11]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[3], c.f[9]));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[4]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = fp::mul(c.f[8], c.f[0]);  goto L_0034FA78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FAD0; } }
L_0034FA78:
    c.f[2] = fp::mul(c.f[2], c.f[13]);
    c.f[5] = ld32((c.r[17].w[0] + 52u));
    c.facc = fp::add(c.f[6], c.f[4]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[5], c.f[10]));
    c.facc = fp::add(c.f[6], c.f[2]);
    c.f[4] = c.f[4] & fp::kAbs;
    c.f[2] = fp::add(c.facc, fp::mul(c.f[1], c.f[9]));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[2]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = fp::mul(c.f[5], c.f[12]);  goto L_0034FAA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FAD0; } }
L_0034FAA8:
    c.f[2] = fp::mul(c.f[3], c.f[13]);
    c.facc = fp::add(c.f[6], c.f[4]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[7], c.f[0]));
    c.facc = fp::add(c.f[6], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[11]));
    c.f[1] = c.f[3] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], 0u + 1u);  goto L_0034FAD0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034FAD0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  [[clang::musttail]] return unit_0094(c, 73u, depth); }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  [[clang::musttail]] return unit_0094(c, 10u, depth); }
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[5].w[0] >> 1);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[8], ld32((c.r[7].w[0] + 20u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 2u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB48u); set32(c.r[19], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034FB48u) [[unlikely]] return; }
L_0034FB48:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB58u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034FB58u) [[unlikely]] return; }
L_0034FB58:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB68u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034FB68u) [[unlikely]] return; }
L_0034FB68:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB74u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034FB74u) [[unlikely]] return; }
L_0034FB74:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 356u), c.f[0]);  if (t) { goto L_0034FD78; } }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[6].d[0] = c.r[18].d[0] + 0ull;  goto L_0034FBBC; }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FB9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FB9Cu) [[unlikely]] return; }
L_0034FB9C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FBA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FBA8u) [[unlikely]] return; }
L_0034FBA8:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FBB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FBB4u) [[unlikely]] return; }
L_0034FBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FF9C; } }
L_0034FBBC:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FBC8u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034FBC8u) [[unlikely]] return; }
L_0034FBC8:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FBD4u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034FBD4u) [[unlikely]] return; }
L_0034FBD4:
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 256u);  goto L_0034FC00; }
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_0034FC34; }
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 1;
L_0034FC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FC08u) [[unlikely]] return; }
L_0034FC08:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FC14u) [[unlikely]] return; }
L_0034FC14:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FC20u) [[unlikely]] return; }
L_0034FC20:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FC2Cu) [[unlikely]] return; }
L_0034FC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FF9C; } }
L_0034FC34:
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC40u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034FC40u) [[unlikely]] return; }
L_0034FC40:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC4Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034FC4Cu) [[unlikely]] return; }
L_0034FC4C:
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_0034FC84; }
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 288u);  goto L_0034FCC4; }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_0034FC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FC8Cu) [[unlikely]] return; }
L_0034FC8C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FC98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FC98u) [[unlikely]] return; }
L_0034FC98:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FCA4u) [[unlikely]] return; }
L_0034FCA4:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FCB0u) [[unlikely]] return; }
L_0034FCB0:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FCBCu) [[unlikely]] return; }
L_0034FCBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FF9C; } }
L_0034FCC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCCCu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034FCCCu) [[unlikely]] return; }
L_0034FCCC:
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 356u));  goto L_0034FD28; }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FCF0u) [[unlikely]] return; }
L_0034FCF0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FCFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FCFCu) [[unlikely]] return; }
L_0034FCFC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FD08u) [[unlikely]] return; }
L_0034FD08:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FD14u) [[unlikely]] return; }
L_0034FD14:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FD20u) [[unlikely]] return; }
L_0034FD20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FF9C; } }
L_0034FD28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[5], 0u - 1u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD64u); st32((c.r[17].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FD64u) [[unlikely]] return; }
L_0034FD64:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FD70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FD70u) [[unlikely]] return; }
L_0034FD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_0034FF78; } }
L_0034FD78:
    c.f[1] = ld32((c.r[28].w[0] - 31956u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0034FDC8; }
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0034FDC4; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FDA4u) [[unlikely]] return; }
L_0034FDA4:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FDB0u) [[unlikely]] return; }
L_0034FDB0:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FDBCu) [[unlikely]] return; }
L_0034FDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FF9C; } }
L_0034FDC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0034FDC8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 224u);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDE8u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008B(c, 12u, depth + 1u); else { c.pc = 0x0032C260u; return; } if (c.pc != 0x0034FDE8u) [[unlikely]] return; }
L_0034FDE8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FDF4u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034FDF4u) [[unlikely]] return; }
L_0034FDF4:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 84u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 224u);  goto L_0034FE28; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  goto L_0034FE5C; }
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_0034FE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FE30u) [[unlikely]] return; }
L_0034FE30:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FE3Cu) [[unlikely]] return; }
L_0034FE3C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FE48u) [[unlikely]] return; }
L_0034FE48:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FE54u) [[unlikely]] return; }
L_0034FE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FF9C; } }
L_0034FE5C:
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE68u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_008B(c, 11u, depth + 1u); else { c.pc = 0x0032C220u; return; } if (c.pc != 0x0034FE68u) [[unlikely]] return; }
L_0034FE68:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FE74u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034FE74u) [[unlikely]] return; }
L_0034FE74:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  goto L_0034FEB8; }
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 288u);  goto L_0034FEF8; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_0034FEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FEC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FEC0u) [[unlikely]] return; }
L_0034FEC0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FECCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FECCu) [[unlikely]] return; }
L_0034FECC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FED8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FED8u) [[unlikely]] return; }
L_0034FED8:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FEE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FEE4u) [[unlikely]] return; }
L_0034FEE4:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FEF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FEF0u) [[unlikely]] return; }
L_0034FEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FF9C; } }
L_0034FEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF00u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_008F(c, 99u, depth + 1u); else { c.pc = 0x0033DF90u; return; } if (c.pc != 0x0034FF00u) [[unlikely]] return; }
L_0034FF00:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  goto L_0034FF60; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FF28u) [[unlikely]] return; }
L_0034FF28:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FF34u) [[unlikely]] return; }
L_0034FF34:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FF40u) [[unlikely]] return; }
L_0034FF40:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FF4Cu) [[unlikely]] return; }
L_0034FF4C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FF58u) [[unlikely]] return; }
L_0034FF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034FF9C; } }
L_0034FF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FF68u) [[unlikely]] return; }
L_0034FF68:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FF74u) [[unlikely]] return; }
L_0034FF74:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_0034FF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FF80u) [[unlikely]] return; }
L_0034FF80:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FF8Cu) [[unlikely]] return; }
L_0034FF8C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034FF98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 8u, depth + 1u); else { c.pc = 0x0032C0F0u; return; } if (c.pc != 0x0034FF98u) [[unlikely]] return; }
L_0034FF98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0034FF9C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  [[clang::musttail]] return unit_0094(c, 12u, depth); }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0094(c, 11u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 5;
L_0034FFCC:
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] >> 1);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0094(c, 11u, depth); } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 136u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 88u));  [[clang::musttail]] return unit_0094(c, 3u, depth); }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] >> 2);
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  [[clang::musttail]] return unit_0094(c, 9u, depth); }
    [[clang::musttail]] return unit_0094(c, 2u, depth);
}

}
