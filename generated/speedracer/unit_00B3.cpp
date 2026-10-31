#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B3[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0,
    0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0,
    0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 208,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0,
    267, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0,
    0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0,
    0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0,
    0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 355,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0,
    0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    434, 0, 435, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0,
    0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449,
    0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0,
    458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0,
    465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0,
    0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0,
};

void unit_00B3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003CC000;
    case 2u: goto L_003CC004;
    case 3u: goto L_003CC028;
    case 4u: goto L_003CC038;
    case 5u: goto L_003CC068;
    case 6u: goto L_003CC094;
    case 7u: goto L_003CC0B4;
    case 8u: goto L_003CC104;
    case 9u: goto L_003CC150;
    case 10u: goto L_003CC200;
    case 11u: goto L_003CC220;
    case 12u: goto L_003CC230;
    case 13u: goto L_003CC240;
    case 14u: goto L_003CC258;
    case 15u: goto L_003CC2B8;
    case 16u: goto L_003CC2DC;
    case 17u: goto L_003CC300;
    case 18u: goto L_003CC338;
    case 19u: goto L_003CC34C;
    case 20u: goto L_003CC364;
    case 21u: goto L_003CC380;
    case 22u: goto L_003CC390;
    case 23u: goto L_003CC3A0;
    case 24u: goto L_003CC3B0;
    case 25u: goto L_003CC3E4;
    case 26u: goto L_003CC410;
    case 27u: goto L_003CC420;
    case 28u: goto L_003CC428;
    case 29u: goto L_003CC440;
    case 30u: goto L_003CC458;
    case 31u: goto L_003CC4A0;
    case 32u: goto L_003CC4AC;
    case 33u: goto L_003CC4B4;
    case 34u: goto L_003CC4E4;
    case 35u: goto L_003CC510;
    case 36u: goto L_003CC54C;
    case 37u: goto L_003CC580;
    case 38u: goto L_003CC590;
    case 39u: goto L_003CC5A0;
    case 40u: goto L_003CC5BC;
    case 41u: goto L_003CC5D4;
    case 42u: goto L_003CC5EC;
    case 43u: goto L_003CC640;
    case 44u: goto L_003CC670;
    case 45u: goto L_003CC680;
    case 46u: goto L_003CC690;
    case 47u: goto L_003CC6BC;
    case 48u: goto L_003CC6C4;
    case 49u: goto L_003CC6D4;
    case 50u: goto L_003CC714;
    case 51u: goto L_003CC750;
    case 52u: goto L_003CC784;
    case 53u: goto L_003CC794;
    case 54u: goto L_003CC7A4;
    case 55u: goto L_003CC7D0;
    case 56u: goto L_003CC810;
    case 57u: goto L_003CC820;
    case 58u: goto L_003CC860;
    case 59u: goto L_003CC8A0;
    case 60u: goto L_003CC8D4;
    case 61u: goto L_003CC8E4;
    case 62u: goto L_003CC8F4;
    case 63u: goto L_003CC920;
    case 64u: goto L_003CC94C;
    case 65u: goto L_003CC95C;
    case 66u: goto L_003CC984;
    case 67u: goto L_003CC9C0;
    case 68u: goto L_003CC9F4;
    case 69u: goto L_003CCA04;
    case 70u: goto L_003CCA14;
    case 71u: goto L_003CCA40;
    case 72u: goto L_003CCA6C;
    case 73u: goto L_003CCA7C;
    case 74u: goto L_003CCAA4;
    case 75u: goto L_003CCAE0;
    case 76u: goto L_003CCB10;
    case 77u: goto L_003CCB38;
    case 78u: goto L_003CCB90;
    case 79u: goto L_003CCBB4;
    case 80u: goto L_003CCBC4;
    case 81u: goto L_003CCBD4;
    case 82u: goto L_003CCBF8;
    case 83u: goto L_003CCC08;
    case 84u: goto L_003CCC18;
    case 85u: goto L_003CCC70;
    case 86u: goto L_003CCCA0;
    case 87u: goto L_003CCCC8;
    case 88u: goto L_003CCD20;
    case 89u: goto L_003CCD44;
    case 90u: goto L_003CCD54;
    case 91u: goto L_003CCD64;
    case 92u: goto L_003CCD88;
    case 93u: goto L_003CCD98;
    case 94u: goto L_003CCDA8;
    case 95u: goto L_003CCE00;
    case 96u: goto L_003CCE20;
    case 97u: goto L_003CCE34;
    case 98u: goto L_003CCE48;
    case 99u: goto L_003CCE68;
    case 100u: goto L_003CCE8C;
    case 101u: goto L_003CCEA4;
    case 102u: goto L_003CCED8;
    case 103u: goto L_003CCEF0;
    case 104u: goto L_003CCF14;
    case 105u: goto L_003CCF3C;
    case 106u: goto L_003CCF64;
    case 107u: goto L_003CCF80;
    case 108u: goto L_003CCFB0;
    case 109u: goto L_003CCFC4;
    case 110u: goto L_003CCFDC;
    case 111u: goto L_003CD000;
    case 112u: goto L_003CD030;
    case 113u: goto L_003CD03C;
    case 114u: goto L_003CD04C;
    case 115u: goto L_003CD054;
    case 116u: goto L_003CD060;
    case 117u: goto L_003CD06C;
    case 118u: goto L_003CD078;
    case 119u: goto L_003CD084;
    case 120u: goto L_003CD090;
    case 121u: goto L_003CD0A4;
    case 122u: goto L_003CD0C0;
    case 123u: goto L_003CD0E4;
    case 124u: goto L_003CD0FC;
    case 125u: goto L_003CD118;
    case 126u: goto L_003CD13C;
    case 127u: goto L_003CD14C;
    case 128u: goto L_003CD158;
    case 129u: goto L_003CD170;
    case 130u: goto L_003CD190;
    case 131u: goto L_003CD1A0;
    case 132u: goto L_003CD1C4;
    case 133u: goto L_003CD1CC;
    case 134u: goto L_003CD204;
    case 135u: goto L_003CD214;
    case 136u: goto L_003CD248;
    case 137u: goto L_003CD290;
    case 138u: goto L_003CD2A4;
    case 139u: goto L_003CD2E0;
    case 140u: goto L_003CD300;
    case 141u: goto L_003CD318;
    case 142u: goto L_003CD320;
    case 143u: goto L_003CD36C;
    case 144u: goto L_003CD3A8;
    case 145u: goto L_003CD3D0;
    case 146u: goto L_003CD3F4;
    case 147u: goto L_003CD410;
    case 148u: goto L_003CD428;
    case 149u: goto L_003CD444;
    case 150u: goto L_003CD460;
    case 151u: goto L_003CD478;
    case 152u: goto L_003CD490;
    case 153u: goto L_003CD4AC;
    case 154u: goto L_003CD4C4;
    case 155u: goto L_003CD4DC;
    case 156u: goto L_003CD4F8;
    case 157u: goto L_003CD510;
    case 158u: goto L_003CD52C;
    case 159u: goto L_003CD548;
    case 160u: goto L_003CD564;
    case 161u: goto L_003CD580;
    case 162u: goto L_003CD59C;
    case 163u: goto L_003CD5B4;
    case 164u: goto L_003CD5CC;
    case 165u: goto L_003CD5E4;
    case 166u: goto L_003CD5FC;
    case 167u: goto L_003CD618;
    case 168u: goto L_003CD630;
    case 169u: goto L_003CD64C;
    case 170u: goto L_003CD660;
    case 171u: goto L_003CD698;
    case 172u: goto L_003CD6A8;
    case 173u: goto L_003CD6B8;
    case 174u: goto L_003CD6DC;
    case 175u: goto L_003CD6EC;
    case 176u: goto L_003CD6FC;
    case 177u: goto L_003CD79C;
    case 178u: goto L_003CD7A4;
    case 179u: goto L_003CD7AC;
    case 180u: goto L_003CD7C8;
    case 181u: goto L_003CD7D0;
    case 182u: goto L_003CD7E8;
    case 183u: goto L_003CD7F8;
    case 184u: goto L_003CD804;
    case 185u: goto L_003CD80C;
    case 186u: goto L_003CD82C;
    case 187u: goto L_003CD838;
    case 188u: goto L_003CD870;
    case 189u: goto L_003CD890;
    case 190u: goto L_003CD8A0;
    case 191u: goto L_003CD8C0;
    case 192u: goto L_003CD8D0;
    case 193u: goto L_003CD8E0;
    case 194u: goto L_003CD910;
    case 195u: goto L_003CD920;
    case 196u: goto L_003CD930;
    case 197u: goto L_003CD954;
    case 198u: goto L_003CD964;
    case 199u: goto L_003CD974;
    case 200u: goto L_003CDA0C;
    case 201u: goto L_003CDA14;
    case 202u: goto L_003CDA1C;
    case 203u: goto L_003CDA38;
    case 204u: goto L_003CDA40;
    case 205u: goto L_003CDA58;
    case 206u: goto L_003CDA68;
    case 207u: goto L_003CDA74;
    case 208u: goto L_003CDA7C;
    case 209u: goto L_003CDA9C;
    case 210u: goto L_003CDAA8;
    case 211u: goto L_003CDAE0;
    case 212u: goto L_003CDB10;
    case 213u: goto L_003CDB20;
    case 214u: goto L_003CDB30;
    case 215u: goto L_003CDB54;
    case 216u: goto L_003CDB64;
    case 217u: goto L_003CDB74;
    case 218u: goto L_003CDC08;
    case 219u: goto L_003CDC10;
    case 220u: goto L_003CDC18;
    case 221u: goto L_003CDC34;
    case 222u: goto L_003CDC3C;
    case 223u: goto L_003CDC54;
    case 224u: goto L_003CDC64;
    case 225u: goto L_003CDC70;
    case 226u: goto L_003CDC78;
    case 227u: goto L_003CDC98;
    case 228u: goto L_003CDCA4;
    case 229u: goto L_003CDCD0;
    case 230u: goto L_003CDD20;
    case 231u: goto L_003CDD30;
    case 232u: goto L_003CDD40;
    case 233u: goto L_003CDD7C;
    case 234u: goto L_003CDD8C;
    case 235u: goto L_003CDD9C;
    case 236u: goto L_003CDE04;
    case 237u: goto L_003CDE10;
    case 238u: goto L_003CDE58;
    case 239u: goto L_003CDE88;
    case 240u: goto L_003CDE94;
    case 241u: goto L_003CDEDC;
    case 242u: goto L_003CDF00;
    case 243u: goto L_003CDF5C;
    case 244u: goto L_003CDF88;
    case 245u: goto L_003CDF94;
    case 246u: goto L_003CDFDC;
    case 247u: goto L_003CE01C;
    case 248u: goto L_003CE060;
    case 249u: goto L_003CE080;
    case 250u: goto L_003CE0A8;
    case 251u: goto L_003CE0B4;
    case 252u: goto L_003CE0CC;
    case 253u: goto L_003CE0D8;
    case 254u: goto L_003CE0F0;
    case 255u: goto L_003CE10C;
    case 256u: goto L_003CE118;
    case 257u: goto L_003CE130;
    case 258u: goto L_003CE13C;
    case 259u: goto L_003CE150;
    case 260u: goto L_003CE180;
    case 261u: goto L_003CE184;
    case 262u: goto L_003CE18C;
    case 263u: goto L_003CE194;
    case 264u: goto L_003CE1C8;
    case 265u: goto L_003CE1E0;
    case 266u: goto L_003CE1F8;
    case 267u: goto L_003CE200;
    case 268u: goto L_003CE208;
    case 269u: goto L_003CE214;
    case 270u: goto L_003CE250;
    case 271u: goto L_003CE280;
    case 272u: goto L_003CE298;
    case 273u: goto L_003CE2B0;
    case 274u: goto L_003CE2C0;
    case 275u: goto L_003CE2E8;
    case 276u: goto L_003CE2F0;
    case 277u: goto L_003CE30C;
    case 278u: goto L_003CE338;
    case 279u: goto L_003CE348;
    case 280u: goto L_003CE358;
    case 281u: goto L_003CE384;
    case 282u: goto L_003CE3F0;
    case 283u: goto L_003CE400;
    case 284u: goto L_003CE424;
    case 285u: goto L_003CE438;
    case 286u: goto L_003CE450;
    case 287u: goto L_003CE494;
    case 288u: goto L_003CE4A0;
    case 289u: goto L_003CE4A8;
    case 290u: goto L_003CE4B0;
    case 291u: goto L_003CE4EC;
    case 292u: goto L_003CE538;
    case 293u: goto L_003CE568;
    case 294u: goto L_003CE598;
    case 295u: goto L_003CE5BC;
    case 296u: goto L_003CE600;
    case 297u: goto L_003CE618;
    case 298u: goto L_003CE630;
    case 299u: goto L_003CE664;
    case 300u: goto L_003CE678;
    case 301u: goto L_003CE68C;
    case 302u: goto L_003CE6A8;
    case 303u: goto L_003CE6D4;
    case 304u: goto L_003CE6E8;
    case 305u: goto L_003CE6FC;
    case 306u: goto L_003CE724;
    case 307u: goto L_003CE738;
    case 308u: goto L_003CE74C;
    case 309u: goto L_003CE76C;
    case 310u: goto L_003CE784;
    case 311u: goto L_003CE798;
    case 312u: goto L_003CE7AC;
    case 313u: goto L_003CE7CC;
    case 314u: goto L_003CE7E8;
    case 315u: goto L_003CE7FC;
    case 316u: goto L_003CE810;
    case 317u: goto L_003CE82C;
    case 318u: goto L_003CE840;
    case 319u: goto L_003CE84C;
    case 320u: goto L_003CE870;
    case 321u: goto L_003CE894;
    case 322u: goto L_003CE900;
    case 323u: goto L_003CE910;
    case 324u: goto L_003CE91C;
    case 325u: goto L_003CE970;
    case 326u: goto L_003CE9B8;
    case 327u: goto L_003CE9CC;
    case 328u: goto L_003CE9D8;
    case 329u: goto L_003CE9E4;
    case 330u: goto L_003CE9EC;
    case 331u: goto L_003CE9FC;
    case 332u: goto L_003CEA1C;
    case 333u: goto L_003CEA30;
    case 334u: goto L_003CEA3C;
    case 335u: goto L_003CEA48;
    case 336u: goto L_003CEA50;
    case 337u: goto L_003CEA60;
    case 338u: goto L_003CEA6C;
    case 339u: goto L_003CEA74;
    case 340u: goto L_003CEA84;
    case 341u: goto L_003CEAB0;
    case 342u: goto L_003CEAC4;
    case 343u: goto L_003CEAD0;
    case 344u: goto L_003CEADC;
    case 345u: goto L_003CEAE4;
    case 346u: goto L_003CEAF4;
    case 347u: goto L_003CEB14;
    case 348u: goto L_003CEB28;
    case 349u: goto L_003CEB34;
    case 350u: goto L_003CEB40;
    case 351u: goto L_003CEB48;
    case 352u: goto L_003CEB58;
    case 353u: goto L_003CEB64;
    case 354u: goto L_003CEB6C;
    case 355u: goto L_003CEB7C;
    case 356u: goto L_003CEB8C;
    case 357u: goto L_003CEBB0;
    case 358u: goto L_003CEBC4;
    case 359u: goto L_003CEBD0;
    case 360u: goto L_003CEBE0;
    case 361u: goto L_003CEBF0;
    case 362u: goto L_003CEC00;
    case 363u: goto L_003CEC20;
    case 364u: goto L_003CEC40;
    case 365u: goto L_003CEC70;
    case 366u: goto L_003CEC90;
    case 367u: goto L_003CECB0;
    case 368u: goto L_003CED10;
    case 369u: goto L_003CED18;
    case 370u: goto L_003CED7C;
    case 371u: goto L_003CEDE8;
    case 372u: goto L_003CEE60;
    case 373u: goto L_003CEEE0;
    case 374u: goto L_003CEF10;
    case 375u: goto L_003CEF6C;
    case 376u: goto L_003CEF98;
    case 377u: goto L_003CEFD0;
    case 378u: goto L_003CF038;
    case 379u: goto L_003CF09C;
    case 380u: goto L_003CF148;
    case 381u: goto L_003CF15C;
    case 382u: goto L_003CF184;
    case 383u: goto L_003CF1B0;
    case 384u: goto L_003CF1F0;
    case 385u: goto L_003CF228;
    case 386u: goto L_003CF2D4;
    case 387u: goto L_003CF2E8;
    case 388u: goto L_003CF310;
    case 389u: goto L_003CF330;
    case 390u: goto L_003CF35C;
    case 391u: goto L_003CF370;
    case 392u: goto L_003CF3A0;
    case 393u: goto L_003CF3D8;
    case 394u: goto L_003CF3EC;
    case 395u: goto L_003CF418;
    case 396u: goto L_003CF430;
    case 397u: goto L_003CF450;
    case 398u: goto L_003CF4A8;
    case 399u: goto L_003CF4B0;
    case 400u: goto L_003CF4BC;
    case 401u: goto L_003CF51C;
    case 402u: goto L_003CF550;
    case 403u: goto L_003CF58C;
    case 404u: goto L_003CF594;
    case 405u: goto L_003CF5A0;
    case 406u: goto L_003CF5AC;
    case 407u: goto L_003CF5D0;
    case 408u: goto L_003CF628;
    case 409u: goto L_003CF640;
    case 410u: goto L_003CF660;
    case 411u: goto L_003CF6A0;
    case 412u: goto L_003CF6B0;
    case 413u: goto L_003CF6D0;
    case 414u: goto L_003CF710;
    case 415u: goto L_003CF724;
    case 416u: goto L_003CF734;
    case 417u: goto L_003CF760;
    case 418u: goto L_003CF788;
    case 419u: goto L_003CF7B4;
    case 420u: goto L_003CF7DC;
    case 421u: goto L_003CF7F0;
    case 422u: goto L_003CF814;
    case 423u: goto L_003CF830;
    case 424u: goto L_003CF854;
    case 425u: goto L_003CF86C;
    case 426u: goto L_003CF890;
    case 427u: goto L_003CF8A0;
    case 428u: goto L_003CF8C4;
    case 429u: goto L_003CF8D0;
    case 430u: goto L_003CF8E0;
    case 431u: goto L_003CF930;
    case 432u: goto L_003CF940;
    case 433u: goto L_003CF970;
    case 434u: goto L_003CF980;
    case 435u: goto L_003CF988;
    case 436u: goto L_003CF990;
    case 437u: goto L_003CF9A4;
    case 438u: goto L_003CFA30;
    case 439u: goto L_003CFA48;
    case 440u: goto L_003CFA54;
    case 441u: goto L_003CFA60;
    case 442u: goto L_003CFA6C;
    case 443u: goto L_003CFA78;
    case 444u: goto L_003CFA84;
    case 445u: goto L_003CFAA0;
    case 446u: goto L_003CFAB4;
    case 447u: goto L_003CFAD0;
    case 448u: goto L_003CFAF0;
    case 449u: goto L_003CFAFC;
    case 450u: goto L_003CFB0C;
    case 451u: goto L_003CFB18;
    case 452u: goto L_003CFB40;
    case 453u: goto L_003CFB88;
    case 454u: goto L_003CFBA0;
    case 455u: goto L_003CFBC0;
    case 456u: goto L_003CFBDC;
    case 457u: goto L_003CFBE8;
    case 458u: goto L_003CFC00;
    case 459u: goto L_003CFC20;
    case 460u: goto L_003CFC2C;
    case 461u: goto L_003CFC34;
    case 462u: goto L_003CFC40;
    case 463u: goto L_003CFC4C;
    case 464u: goto L_003CFC60;
    case 465u: goto L_003CFC80;
    case 466u: goto L_003CFD14;
    case 467u: goto L_003CFD20;
    case 468u: goto L_003CFD80;
    case 469u: goto L_003CFDB0;
    case 470u: goto L_003CFDC0;
    case 471u: goto L_003CFDE0;
    case 472u: goto L_003CFDF0;
    case 473u: goto L_003CFE00;
    case 474u: goto L_003CFE18;
    case 475u: goto L_003CFE30;
    case 476u: goto L_003CFE48;
    case 477u: goto L_003CFE70;
    case 478u: goto L_003CFE90;
    case 479u: goto L_003CFEAC;
    case 480u: goto L_003CFEB8;
    case 481u: goto L_003CFED0;
    case 482u: goto L_003CFF48;
    case 483u: goto L_003CFF70;
    case 484u: goto L_003CFF90;
    case 485u: goto L_003CFFC4;
    case 486u: goto L_003CFFD4;
    case 487u: goto L_003CFFDC;
    case 488u: goto L_003CFFE4;
    case 489u: goto L_003CFFF8;
    default: bad_entry(c, 0x003CC000u); return;
    }
L_003CC000:
    c.budget -= 1;
L_003CC004:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 12u));
    st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.budget -= 9;
L_003CC028:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC004u | kUnwind; return; } goto L_003CC004; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003CC204; } }
L_003CC038:
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003CC058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CC060; } }
L_003CC058:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003CC060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_003CC080; } }
L_003CC068:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_003CC07C; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_003CC07C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003CC080:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC068u | kUnwind; return; } goto L_003CC068; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC094u); set32(c.r[4], c.r[16].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003CC094u) [[unlikely]] return; }
L_003CC094:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_003CC0F0; } }
L_003CC0B4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_003CC0E0; }
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 9;
L_003CC0E0:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_003CC0F0:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC0B4u | kUnwind; return; } goto L_003CC0B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CC140; } }
L_003CC104:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_003CC130; }
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 9;
L_003CC130:
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_003CC140:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC104u | kUnwind; return; } goto L_003CC104; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_003CC190; } }
L_003CC150:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_003CC17C; }
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 9;
L_003CC17C:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_003CC190:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC150u | kUnwind; return; } goto L_003CC150; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_003CC1E8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[20].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 17;
L_003CC1E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_003CC200; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CC200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC200u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CC200u) [[unlikely]] return; }
L_003CC200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003CC204:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003CC220:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB750u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 304u, depth); }
L_003CC230:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9870u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 219u, depth); }
L_003CC240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CC2DC; } }
L_003CC258:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[16], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 20u);  if (t) { goto L_003CC290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CC294; } }
L_003CC290:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CC294:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 4u);  if (t) { goto L_003CC2AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CC2B0; } }
L_003CC2AC:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CC2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC2B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CC2B8u) [[unlikely]] return; }
L_003CC2B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_003CC2DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC2DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CC2DCu) [[unlikely]] return; }
L_003CC2DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC258u | kUnwind; return; } goto L_003CC258; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CC300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CC364; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] + 21904u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003CC338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC338u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CC338u) [[unlikely]] return; }
L_003CC338:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003CC350; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC34Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CC34Cu) [[unlikely]] return; }
L_003CC34C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003CC350:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CC368; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC364u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003CC364u) [[unlikely]] return; }
L_003CC364:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CC368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CC380:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  goto L_003CF8F0; }
L_003CC390:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  goto L_003CF930; }
L_003CC3A0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  goto L_003CF940; }
L_003CC3B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC3E4u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 431u, depth + 1u); else { c.pc = 0x003CF930u; return; } if (c.pc != 0x003CC3E4u) [[unlikely]] return; }
L_003CC3E4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_003CC550; }
    set32(c.r[2], 0u + 6u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 140u), 0u);
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC410u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x003CC410u) [[unlikely]] return; }
L_003CC410:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC420u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00B3(c, 51u, depth + 1u); else { c.pc = 0x003CC750u; return; } if (c.pc != 0x003CC420u) [[unlikely]] return; }
L_003CC420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 140u)));  if (t) { goto L_003CC468; } }
L_003CC428:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC440u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 205u, depth + 1u); else { c.pc = 0x004D1D60u; return; } if (c.pc != 0x003CC440u) [[unlikely]] return; }
L_003CC440:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_003CC460; }
    c.r[5].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC458u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x003CC458u) [[unlikely]] return; }
L_003CC458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CC468; } }
L_003CC460:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_003CC468:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC428u | kUnwind; return; } goto L_003CC428; }
    set32(c.r[21], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC4A0u); set32(c.r[4], ld32((c.r[20].w[0] + 92u)));  if (depth < kMaxDepth) unit_00B3(c, 431u, depth + 1u); else { c.pc = 0x003CF930u; return; } if (c.pc != 0x003CC4A0u) [[unlikely]] return; }
L_003CC4A0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003CC518; } }
L_003CC4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC4B4u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CC4B4u) [[unlikely]] return; }
L_003CC4B4:
    set32(c.r[3], 0u + 10000u);
    set32(c.r[16], c.r[17].w[0] << 2);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 26976u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC4E4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 432u, depth + 1u); else { c.pc = 0x003CF940u; return; } if (c.pc != 0x003CC4E4u) [[unlikely]] return; }
L_003CC4E4:
    c.r[1].d[0] = c.r[22].sd[0] < 5001ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003CC514; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003CC518; }
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC510u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 111u, depth + 1u); else { c.pc = 0x003CD000u; return; } if (c.pc != 0x003CC510u) [[unlikely]] return; }
L_003CC510:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003CC514:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003CC518:
    c.r[1].d[0] = c.r[17].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 140u)));  goto L_003CC534; }
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC4ACu | kUnwind; return; } goto L_003CC4AC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_003CC534:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CC54C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CC54C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC54Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CC54Cu) [[unlikely]] return; }
L_003CC54C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003CC550:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003CC580:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  goto L_003CFA30; }
L_003CC590:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  goto L_003CFE60; }
L_003CC5A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CC5FC; } }
L_003CC5BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC5D4u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 205u, depth + 1u); else { c.pc = 0x004D1D60u; return; } if (c.pc != 0x003CC5D4u) [[unlikely]] return; }
L_003CC5D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  goto L_003CC5F4; }
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC5ECu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x003CC5ECu) [[unlikely]] return; }
L_003CC5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CC5FC; } }
L_003CC5F4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003CC5FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC5BCu | kUnwind; return; } goto L_003CC5BC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CC640:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC670u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CC670u) [[unlikely]] return; }
L_003CC670:
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[5], c.r[20].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC680u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CC680u) [[unlikely]] return; }
L_003CC680:
    set32(c.r[16], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC690u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CC690u) [[unlikely]] return; }
L_003CC690:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], c.r[20].w[0] + 56u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u - 1u);  goto L_003CC6A8; }
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_003CC6A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003CC72C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003CC718; } }
L_003CC6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC6C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x003CC6C4u) [[unlikely]] return; }
L_003CC6C4:
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC6D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CC6D4u) [[unlikely]] return; }
L_003CC6D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003CC718; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_003CC6F0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003CC6F0:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 124u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC714u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003CC714u) [[unlikely]] return; }
L_003CC714:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003CC718:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC6BCu | kUnwind; return; } goto L_003CC6BC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003CC72C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003CC750:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC784u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CC784u) [[unlikely]] return; }
L_003CC784:
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[5], c.r[20].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC794u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CC794u) [[unlikely]] return; }
L_003CC794:
    set32(c.r[16], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC7A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CC7A4u) [[unlikely]] return; }
L_003CC7A4:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], c.r[20].w[0] + 56u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], 0u - 1u);  goto L_003CC7BC; }
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_003CC7BC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003CC878; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003CC864; } }
L_003CC7D0:
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003CC7FC; } }
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003CC7FC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003CC864; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC810u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x003CC810u) [[unlikely]] return; }
L_003CC810:
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CC820u) [[unlikely]] return; }
L_003CC820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CC860; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_003CC83C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003CC83C:
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[7], c.r[29].w[0] + 140u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC860u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003CC860u) [[unlikely]] return; }
L_003CC860:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003CC864:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]); c.r[4].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC7D0u | kUnwind; return; } goto L_003CC7D0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003CC878:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003CC8A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC8D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CC8D4u) [[unlikely]] return; }
L_003CC8D4:
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[20].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC8E4u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CC8E4u) [[unlikely]] return; }
L_003CC8E4:
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC8F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CC8F4u) [[unlikely]] return; }
L_003CC8F4:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], c.r[20].w[0] + 56u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[16], 0u - 1u);  goto L_003CC90C; }
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_003CC90C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003CC99C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003CC988; } }
L_003CC920:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003CC988; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC94Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x003CC94Cu) [[unlikely]] return; }
L_003CC94C:
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC95Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CC95Cu) [[unlikely]] return; }
L_003CC95C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CC984; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC984u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x003CC984u) [[unlikely]] return; }
L_003CC984:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003CC988:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]); c.r[5].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC920u | kUnwind; return; } goto L_003CC920; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003CC99C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003CC9C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC9F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CC9F4u) [[unlikely]] return; }
L_003CC9F4:
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[20].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA04u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CCA04u) [[unlikely]] return; }
L_003CCA04:
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CCA14u) [[unlikely]] return; }
L_003CCA14:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], c.r[20].w[0] + 56u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[16], 0u - 1u);  goto L_003CCA2C; }
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_003CCA2C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003CCABC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003CCAA8; } }
L_003CCA40:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003CCAA8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA6Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x003CCA6Cu) [[unlikely]] return; }
L_003CCA6C:
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CCA7Cu) [[unlikely]] return; }
L_003CCA7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CCAA4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCAA4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x003CCAA4u) [[unlikely]] return; }
L_003CCAA4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003CCAA8:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]); c.r[5].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CCA40u | kUnwind; return; } goto L_003CCA40; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003CCABC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003CCAE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[17].w[0] + 68u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCB10u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_00B3(c, 323u, depth + 1u); else { c.pc = 0x003CE910u; return; } if (c.pc != 0x003CCB10u) [[unlikely]] return; }
L_003CCB10:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u - 1u);  goto L_003CCB24; }
    set32(c.r[16], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_003CCB24:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[17].w[0] + 68u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCB38u); st32((c.r[29].w[0] + 80u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 323u, depth + 1u); else { c.pc = 0x003CE910u; return; } if (c.pc != 0x003CCB38u) [[unlikely]] return; }
L_003CCB38:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u - 1u);  goto L_003CCB4C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_003CCB4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003CCB90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCBB4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CCBB4u) [[unlikely]] return; }
L_003CCBB4:
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[5], c.r[17].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCBC4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CCBC4u) [[unlikely]] return; }
L_003CCBC4:
    set32(c.r[16], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCBD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CCBD4u) [[unlikely]] return; }
L_003CCBD4:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u - 1u);  goto L_003CCBEC; }
    set32(c.r[16], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CCBEC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCBF8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CCBF8u) [[unlikely]] return; }
L_003CCBF8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCC08u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CCC08u) [[unlikely]] return; }
L_003CCC08:
    set32(c.r[18], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCC18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CCC18u) [[unlikely]] return; }
L_003CCC18:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u - 1u);  goto L_003CCC30; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CCC30:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003CCC70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[17].w[0] + 68u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCCA0u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_00B3(c, 323u, depth + 1u); else { c.pc = 0x003CE910u; return; } if (c.pc != 0x003CCCA0u) [[unlikely]] return; }
L_003CCCA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u - 1u);  goto L_003CCCB4; }
    set32(c.r[16], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_003CCCB4:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[17].w[0] + 68u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCCC8u); st32((c.r[29].w[0] + 80u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 323u, depth + 1u); else { c.pc = 0x003CE910u; return; } if (c.pc != 0x003CCCC8u) [[unlikely]] return; }
L_003CCCC8:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u - 1u);  goto L_003CCCDC; }
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_003CCCDC:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003CCD20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD44u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CCD44u) [[unlikely]] return; }
L_003CCD44:
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[5], c.r[17].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD54u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CCD54u) [[unlikely]] return; }
L_003CCD54:
    set32(c.r[16], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CCD64u) [[unlikely]] return; }
L_003CCD64:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u - 1u);  goto L_003CCD7C; }
    set32(c.r[16], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CCD7C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD88u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CCD88u) [[unlikely]] return; }
L_003CCD88:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD98u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CCD98u) [[unlikely]] return; }
L_003CCD98:
    set32(c.r[18], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCDA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CCDA8u) [[unlikely]] return; }
L_003CCDA8:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u - 1u);  goto L_003CCDC0; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CCDC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003CCE00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE20u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003CCE20u) [[unlikely]] return; }
L_003CCE20:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003CCE38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE34u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003CCE34u) [[unlikely]] return; }
L_003CCE34:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003CCE38:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  goto L_003CCE4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE48u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003CCE48u) [[unlikely]] return; }
L_003CCE48:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_003CCE4C:
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE68u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x003CCE68u) [[unlikely]] return; }
L_003CCE68:
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_003CCE80; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003CCE80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE8Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B3(c, 67u, depth + 1u); else { c.pc = 0x003CC9C0u; return; } if (c.pc != 0x003CCE8Cu) [[unlikely]] return; }
L_003CCE8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_003CCED0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCEA4u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CCEA4u) [[unlikely]] return; }
L_003CCEA4:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 11;
L_003CCED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x003CCED8u) [[unlikely]] return; }
L_003CCED8:
    c.f[0] = c.f[20];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CCEF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCF14u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 95u, depth + 1u); else { c.pc = 0x003CCE00u; return; } if (c.pc != 0x003CCF14u) [[unlikely]] return; }
L_003CCF14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[28].w[0] - 32564u));  goto L_003CCF44; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCF3Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 254u, depth + 1u); else { c.pc = 0x003CE0F0u; return; } if (c.pc != 0x003CCF3Cu) [[unlikely]] return; }
L_003CCF3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003CCF68; } }
L_003CCF44:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], 0u + 1u);  if (t) { goto L_003CCF54; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CCF54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCF64u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 249u, depth + 1u); else { c.pc = 0x003CE080u; return; } if (c.pc != 0x003CCF64u) [[unlikely]] return; }
L_003CCF64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CCF68:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CCF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CCFDC; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CCFB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCFB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CCFB0u) [[unlikely]] return; }
L_003CCFB0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003CCFC8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCFC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CCFC4u) [[unlikely]] return; }
L_003CCFC4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003CCFC8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CCFE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCFDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003CCFDCu) [[unlikely]] return; }
L_003CCFDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CCFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CD000:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD030u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x003CD030u) [[unlikely]] return; }
L_003CD030:
    set32(c.r[4], c.r[2].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD03Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CD03Cu) [[unlikely]] return; }
L_003CD03C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003CD098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD04Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003CD04Cu) [[unlikely]] return; }
L_003CD04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD054u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003CD054u) [[unlikely]] return; }
L_003CD054:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD060u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003CD060u) [[unlikely]] return; }
L_003CD060:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD06Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003CD06Cu) [[unlikely]] return; }
L_003CD06C:
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD078u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00B4(c, 13u, depth + 1u); else { c.pc = 0x003D01A0u; return; } if (c.pc != 0x003CD078u) [[unlikely]] return; }
L_003CD078:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD084u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CD084u) [[unlikely]] return; }
L_003CD084:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD090u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CD090u) [[unlikely]] return; }
L_003CD090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003CD0A8; } }
L_003CD098:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD0A4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 103u, depth + 1u); else { c.pc = 0x003CCEF0u; return; } if (c.pc != 0x003CD0A4u) [[unlikely]] return; }
L_003CD0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CD0A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003CD0C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD0E4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 211u, depth + 1u); else { c.pc = 0x003CDAE0u; return; } if (c.pc != 0x003CD0E4u) [[unlikely]] return; }
L_003CD0E4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 96u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_003CD140; }
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD0FCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003CD0FCu) [[unlikely]] return; }
L_003CD0FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  goto L_003CD11C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD118u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 402u, depth + 1u); else { c.pc = 0x003CF550u; return; } if (c.pc != 0x003CD118u) [[unlikely]] return; }
L_003CD118:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_003CD11C:
    set32(c.r[4], c.r[18].w[0] + 100u);
    set32(c.r[3], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[7], c.r[29].w[0] + 76u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD13Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003CD13Cu) [[unlikely]] return; }
L_003CD13C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_003CD140:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD14Cu); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x003CD14Cu) [[unlikely]] return; }
L_003CD14C:
    set32(c.r[4], c.r[2].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD158u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CD158u) [[unlikely]] return; }
L_003CD158:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003CD174; }
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD170u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 17u, depth + 1u); else { c.pc = 0x003D0200u; return; } if (c.pc != 0x003CD170u) [[unlikely]] return; }
L_003CD170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CD174:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CD190:
    c.budget -= 2;
    { c.r[7].d[0] = 0ull + 0ull;  goto L_003CD660; }
L_003CD1A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003CD260; } }
L_003CD1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003CD24C; } }
L_003CD1CC:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003CD24C; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CD248; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD204u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x003CD204u) [[unlikely]] return; }
L_003CD204:
    set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD214u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x003CD214u) [[unlikely]] return; }
L_003CD214:
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_003CD22C; }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003CD22C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 1u);  goto L_003CD240; }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003CD240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD248u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 211u, depth + 1u); else { c.pc = 0x003CDAE0u; return; } if (c.pc != 0x003CD248u) [[unlikely]] return; }
L_003CD248:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003CD24C:
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]); c.r[5].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD1CCu | kUnwind; return; } goto L_003CD1CC; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003CD260:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD1C4u | kUnwind; return; } goto L_003CD1C4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CD290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CD2E0; } }
L_003CD2A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0] + 44u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[4].w[0] - 4u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_003CD2E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD2E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD2E0u) [[unlikely]] return; }
L_003CD2E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD2A4u | kUnwind; return; } goto L_003CD2A4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CD300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CD354; } }
L_003CD318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003CD340; } }
L_003CD320:
    set32(c.r[3], ld32((c.r[28].w[0] - 30432u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_003CD340:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]); c.r[5].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD320u | kUnwind; return; } goto L_003CD320; }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003CD354:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD318u | kUnwind; return; } goto L_003CD318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  if (t) { goto L_003CD3AC; } }
L_003CD36C:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0] + 44u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[4].w[0] - 4u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_003CD3A8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD3A8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD3A8u) [[unlikely]] return; }
L_003CD3A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 1;
L_003CD3AC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD36Cu | kUnwind; return; } goto L_003CD36C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CD3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 23168u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD3F4u); set32(c.r[6], c.r[6].w[0] - 23161u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD3F4u) [[unlikely]] return; }
L_003CD3F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23168u);
    set32(c.r[6], c.r[6].w[0] - 23154u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD410u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD410u) [[unlikely]] return; }
L_003CD410:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23150u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD428u); set32(c.r[6], c.r[6].w[0] - 23136u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD428u) [[unlikely]] return; }
L_003CD428:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23150u);
    set32(c.r[6], c.r[6].w[0] - 23128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD444u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD444u) [[unlikely]] return; }
L_003CD444:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23161u);
    set32(c.r[6], c.r[6].w[0] - 23123u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD460u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD460u) [[unlikely]] return; }
L_003CD460:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23154u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD478u); set32(c.r[6], c.r[6].w[0] - 23114u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD478u) [[unlikely]] return; }
L_003CD478:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23108u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD490u); set32(c.r[6], c.r[6].w[0] - 23100u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD490u) [[unlikely]] return; }
L_003CD490:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23108u);
    set32(c.r[6], c.r[6].w[0] - 23136u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD4ACu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD4ACu) [[unlikely]] return; }
L_003CD4AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD4C4u); set32(c.r[6], c.r[6].w[0] - 23093u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD4C4u) [[unlikely]] return; }
L_003CD4C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23084u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD4DCu); set32(c.r[6], c.r[6].w[0] - 23073u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD4DCu) [[unlikely]] return; }
L_003CD4DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23084u);
    set32(c.r[6], c.r[6].w[0] - 23062u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD4F8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD4F8u) [[unlikely]] return; }
L_003CD4F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23054u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD510u); set32(c.r[6], c.r[6].w[0] - 23045u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD510u) [[unlikely]] return; }
L_003CD510:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23054u);
    set32(c.r[6], c.r[6].w[0] - 23035u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD52Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD52Cu) [[unlikely]] return; }
L_003CD52C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23093u);
    set32(c.r[6], c.r[6].w[0] - 23029u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD548u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD548u) [[unlikely]] return; }
L_003CD548:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23073u);
    set32(c.r[6], c.r[6].w[0] - 23045u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD564u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD564u) [[unlikely]] return; }
L_003CD564:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23114u);
    set32(c.r[6], c.r[6].w[0] - 23021u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD580u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD580u) [[unlikely]] return; }
L_003CD580:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23100u);
    set32(c.r[6], c.r[6].w[0] - 23018u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD59Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD59Cu) [[unlikely]] return; }
L_003CD59C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23062u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD5B4u); set32(c.r[6], c.r[6].w[0] - 23123u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD5B4u) [[unlikely]] return; }
L_003CD5B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23018u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD5CCu); set32(c.r[6], c.r[6].w[0] - 23029u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD5CCu) [[unlikely]] return; }
L_003CD5CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23035u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD5E4u); set32(c.r[6], c.r[6].w[0] - 23021u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD5E4u) [[unlikely]] return; }
L_003CD5E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23012u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD5FCu); set32(c.r[6], c.r[6].w[0] - 23003u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD5FCu) [[unlikely]] return; }
L_003CD5FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23012u);
    set32(c.r[6], c.r[6].w[0] - 22995u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD618u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD618u) [[unlikely]] return; }
L_003CD618:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22995u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD630u); set32(c.r[6], c.r[6].w[0] - 22986u);  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CD630u) [[unlikely]] return; }
L_003CD630:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23003u);
    set32(c.r[6], c.r[6].w[0] - 22986u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD64Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CD660u; return; } if (c.pc != 0x003CD64Cu) [[unlikely]] return; }
L_003CD64C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CD660:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD698u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CD698u) [[unlikely]] return; }
L_003CD698:
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[5], c.r[18].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6A8u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CD6A8u) [[unlikely]] return; }
L_003CD6A8:
    set32(c.r[19], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CD6B8u) [[unlikely]] return; }
L_003CD6B8:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    set32(c.r[2], c.r[18].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[20], 0u - 1u);  goto L_003CD6D0; }
    set32(c.r[20], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CD6D0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CD6DCu) [[unlikely]] return; }
L_003CD6DC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[18].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6ECu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CD6ECu) [[unlikely]] return; }
L_003CD6EC:
    set32(c.r[19], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CD6FCu) [[unlikely]] return; }
L_003CD6FC:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    set32(c.r[2], c.r[18].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_003CD714; }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CD714:
    set32(c.r[7], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[10], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 188u);
    set32(c.r[6], ld32((c.r[28].w[0] - 30440u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[20].w[0], c.r[7].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[19].d[0] = 0ull + 0ull;
    mmi::mult(c, 1, c.r[2].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[20].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[9], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    st8((c.r[7].w[0] + 12u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[8], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 30436u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[29].w[0] + 144u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[21].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD79Cu); st32((c.r[29].w[0] + 160u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 322u, depth + 1u); else { c.pc = 0x003CB9E0u; return; } if (c.pc != 0x003CD79Cu) [[unlikely]] return; }
L_003CD79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003CD830; } }
L_003CD7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD7ACu); set32(c.r[4], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_00B3(c, 192u, depth + 1u); else { c.pc = 0x003CD8D0u; return; } if (c.pc != 0x003CD7ACu) [[unlikely]] return; }
L_003CD7AC:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD7C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD7C8u) [[unlikely]] return; }
L_003CD7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD7D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 191u, depth + 1u); else { c.pc = 0x003CD8C0u; return; } if (c.pc != 0x003CD7D0u) [[unlikely]] return; }
L_003CD7D0:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003CD848; }
    set32(c.r[4], c.r[29].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD7E8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 322u, depth + 1u); else { c.pc = 0x003CB9E0u; return; } if (c.pc != 0x003CD7E8u) [[unlikely]] return; }
L_003CD7E8:
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD7F8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 190u, depth + 1u); else { c.pc = 0x003CD8A0u; return; } if (c.pc != 0x003CD7F8u) [[unlikely]] return; }
L_003CD7F8:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD804u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_00B3(c, 189u, depth + 1u); else { c.pc = 0x003CD890u; return; } if (c.pc != 0x003CD804u) [[unlikely]] return; }
L_003CD804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD80Cu); set32(c.r[4], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_00B3(c, 192u, depth + 1u); else { c.pc = 0x003CD8D0u; return; } if (c.pc != 0x003CD80Cu) [[unlikely]] return; }
L_003CD80C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003CD82C; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 188u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD82Cu); set32(c.r[19], c.r[19].w[0] + 1u);  if (depth < kMaxDepth) unit_00B3(c, 188u, depth + 1u); else { c.pc = 0x003CD870u; return; } if (c.pc != 0x003CD82Cu) [[unlikely]] return; }
L_003CD82C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003CD830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD838u);  if (depth < kMaxDepth) unit_00B3(c, 191u, depth + 1u); else { c.pc = 0x003CD8C0u; return; } if (c.pc != 0x003CD838u) [[unlikely]] return; }
L_003CD838:
    c.r[3].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD7A4u | kUnwind; return; } goto L_003CD7A4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003CD848:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003CD870:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_003CD890:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003CD8A0:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003CD8C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_003CD8D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_003CD8E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD910u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CD910u) [[unlikely]] return; }
L_003CD910:
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[5], c.r[20].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD920u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CD920u) [[unlikely]] return; }
L_003CD920:
    set32(c.r[16], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD930u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CD930u) [[unlikely]] return; }
L_003CD930:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], c.r[20].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u - 1u);  goto L_003CD948; }
    set32(c.r[16], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CD948:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD954u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CD954u) [[unlikely]] return; }
L_003CD954:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[20].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD964u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CD964u) [[unlikely]] return; }
L_003CD964:
    set32(c.r[17], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD974u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CD974u) [[unlikely]] return; }
L_003CD974:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[20].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_003CD98C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CD98C:
    set32(c.r[7], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 172u);
    set32(c.r[6], ld32((c.r[28].w[0] - 30448u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[7].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[17].d[0] = 0ull + 0ull;
    mmi::mult(c, 1, c.r[2].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[9], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 30444u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[19].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA0Cu); st32((c.r[29].w[0] + 144u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 322u, depth + 1u); else { c.pc = 0x003CB9E0u; return; } if (c.pc != 0x003CDA0Cu) [[unlikely]] return; }
L_003CDA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003CDAA0; } }
L_003CDA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA1Cu); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_00B3(c, 192u, depth + 1u); else { c.pc = 0x003CD8D0u; return; } if (c.pc != 0x003CDA1Cu) [[unlikely]] return; }
L_003CDA1C:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CDA38u) [[unlikely]] return; }
L_003CDA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA40u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 191u, depth + 1u); else { c.pc = 0x003CD8C0u; return; } if (c.pc != 0x003CDA40u) [[unlikely]] return; }
L_003CDA40:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003CDAB8; }
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA58u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 322u, depth + 1u); else { c.pc = 0x003CB9E0u; return; } if (c.pc != 0x003CDA58u) [[unlikely]] return; }
L_003CDA58:
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA68u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 190u, depth + 1u); else { c.pc = 0x003CD8A0u; return; } if (c.pc != 0x003CDA68u) [[unlikely]] return; }
L_003CDA68:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA74u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_00B3(c, 189u, depth + 1u); else { c.pc = 0x003CD890u; return; } if (c.pc != 0x003CDA74u) [[unlikely]] return; }
L_003CDA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA7Cu); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_00B3(c, 192u, depth + 1u); else { c.pc = 0x003CD8D0u; return; } if (c.pc != 0x003CDA7Cu) [[unlikely]] return; }
L_003CDA7C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003CDA9C; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 172u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA9Cu); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_00B3(c, 188u, depth + 1u); else { c.pc = 0x003CD870u; return; } if (c.pc != 0x003CDA9Cu) [[unlikely]] return; }
L_003CDA9C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003CDAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDAA8u);  if (depth < kMaxDepth) unit_00B3(c, 191u, depth + 1u); else { c.pc = 0x003CD8C0u; return; } if (c.pc != 0x003CDAA8u) [[unlikely]] return; }
L_003CDAA8:
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDA14u | kUnwind; return; } goto L_003CDA14; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003CDAB8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003CDAE0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB10u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CDB10u) [[unlikely]] return; }
L_003CDB10:
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[5], c.r[20].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB20u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CDB20u) [[unlikely]] return; }
L_003CDB20:
    set32(c.r[16], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CDB30u) [[unlikely]] return; }
L_003CDB30:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], c.r[20].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u - 1u);  goto L_003CDB48; }
    set32(c.r[16], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CDB48:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB54u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CDB54u) [[unlikely]] return; }
L_003CDB54:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[20].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB64u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CDB64u) [[unlikely]] return; }
L_003CDB64:
    set32(c.r[17], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CDB74u) [[unlikely]] return; }
L_003CDB74:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[20].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_003CDB8C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CDB8C:
    set32(c.r[6], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 172u);
    set32(c.r[9], ld32((c.r[20].w[0] + 40u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30456u)));
    c.r[17].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[9], ld32((c.r[6].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 30452u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[18].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC08u); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_00B2(c, 322u, depth + 1u); else { c.pc = 0x003CB9E0u; return; } if (c.pc != 0x003CDC08u) [[unlikely]] return; }
L_003CDC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003CDC9C; } }
L_003CDC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC18u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_00B3(c, 192u, depth + 1u); else { c.pc = 0x003CD8D0u; return; } if (c.pc != 0x003CDC18u) [[unlikely]] return; }
L_003CDC18:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CDC34u) [[unlikely]] return; }
L_003CDC34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC3Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 191u, depth + 1u); else { c.pc = 0x003CD8C0u; return; } if (c.pc != 0x003CDC3Cu) [[unlikely]] return; }
L_003CDC3C:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003CDCB4; }
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC54u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 322u, depth + 1u); else { c.pc = 0x003CB9E0u; return; } if (c.pc != 0x003CDC54u) [[unlikely]] return; }
L_003CDC54:
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC64u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 190u, depth + 1u); else { c.pc = 0x003CD8A0u; return; } if (c.pc != 0x003CDC64u) [[unlikely]] return; }
L_003CDC64:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC70u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_00B3(c, 189u, depth + 1u); else { c.pc = 0x003CD890u; return; } if (c.pc != 0x003CDC70u) [[unlikely]] return; }
L_003CDC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC78u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_00B3(c, 192u, depth + 1u); else { c.pc = 0x003CD8D0u; return; } if (c.pc != 0x003CDC78u) [[unlikely]] return; }
L_003CDC78:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003CDC98; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 172u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC98u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_00B3(c, 188u, depth + 1u); else { c.pc = 0x003CD870u; return; } if (c.pc != 0x003CDC98u) [[unlikely]] return; }
L_003CDC98:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003CDC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDCA4u);  if (depth < kMaxDepth) unit_00B3(c, 191u, depth + 1u); else { c.pc = 0x003CD8C0u; return; } if (c.pc != 0x003CDCA4u) [[unlikely]] return; }
L_003CDCA4:
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDC10u | kUnwind; return; } goto L_003CDC10; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003CDCB4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003CDCD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CDDD8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 4u);  if (t) { goto L_003CDD14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDD18; } }
L_003CDD14:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD20u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CDD20u) [[unlikely]] return; }
L_003CDD20:
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[5], c.r[18].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD30u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CDD30u) [[unlikely]] return; }
L_003CDD30:
    set32(c.r[16], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CDD40u) [[unlikely]] return; }
L_003CDD40:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], c.r[18].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u - 1u);  goto L_003CDD58; }
    set32(c.r[16], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CDD58:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 20u);  if (t) { goto L_003CDD70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDD74; } }
L_003CDD70:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD7Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CDD7Cu) [[unlikely]] return; }
L_003CDD7C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[18].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD8Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CDD8Cu) [[unlikely]] return; }
L_003CDD8C:
    set32(c.r[19], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CDD9Cu) [[unlikely]] return; }
L_003CDD9C:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[18].w[0] + 56u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], ld32((c.r[28].w[0] - 30460u)));  if (t) { goto L_003CDDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 28u)));  if (t) { goto L_003CDDBC; } }
L_003CDDB8:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_003CDDBC:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 7;
L_003CDDD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 20u);  if (t) { goto L_003CDDF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDDF4; } }
L_003CDDF0:
    set32(c.r[16], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDDF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDE04u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x003CDE04u) [[unlikely]] return; }
L_003CDE04:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDE10u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CDE10u) [[unlikely]] return; }
L_003CDE10:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_003CDE60; }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 20u);  if (t) { goto L_003CDE30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDE34; } }
L_003CDE30:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDE34:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 4u);  if (t) { goto L_003CDE4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDE50; } }
L_003CDE4C:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDE58u); set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  if (depth < kMaxDepth) unit_00B3(c, 484u, depth + 1u); else { c.pc = 0x003CFF90u; return; } if (c.pc != 0x003CDE58u) [[unlikely]] return; }
L_003CDE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003CDEE0; } }
L_003CDE60:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 4u);  if (t) { goto L_003CDE74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDE78; } }
L_003CDE74:
    set32(c.r[16], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDE78:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDE88u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x003CDE88u) [[unlikely]] return; }
L_003CDE88:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDE94u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CDE94u) [[unlikely]] return; }
L_003CDE94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CDEDC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 4u);  if (t) { goto L_003CDEB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDEB8; } }
L_003CDEB4:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDEB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 20u);  if (t) { goto L_003CDED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDED4; } }
L_003CDED0:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDEDCu); set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  if (depth < kMaxDepth) unit_00B4(c, 36u, depth + 1u); else { c.pc = 0x003D03D0u; return; } if (c.pc != 0x003CDEDCu) [[unlikely]] return; }
L_003CDEDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003CDEE0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003CDF00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 20u);  if (t) { goto L_003CDF34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDF38; } }
L_003CDF34:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDF38:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 4u);  if (t) { goto L_003CDF50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDF54; } }
L_003CDF50:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDF5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 193u, depth + 1u); else { c.pc = 0x003CD8E0u; return; } if (c.pc != 0x003CDF5Cu) [[unlikely]] return; }
L_003CDF5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 20u);  if (t) { goto L_003CDF74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDF78; } }
L_003CDF74:
    set32(c.r[18], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDF78:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDF88u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x003CDF88u) [[unlikely]] return; }
L_003CDF88:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDF94u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CDF94u) [[unlikely]] return; }
L_003CDF94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_003CE024; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 20u);  if (t) { goto L_003CDFB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDFB8; } }
L_003CDFB4:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDFB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 4u);  if (t) { goto L_003CDFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDFD4; } }
L_003CDFD0:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDFD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDFDCu); set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  if (depth < kMaxDepth) unit_00B3(c, 484u, depth + 1u); else { c.pc = 0x003CFF90u; return; } if (c.pc != 0x003CDFDCu) [[unlikely]] return; }
L_003CDFDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 20u);  if (t) { goto L_003CDFF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CDFF8; } }
L_003CDFF4:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CDFF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 4u);  if (t) { goto L_003CE010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CE014; } }
L_003CE010:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CE014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE01Cu); set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  if (depth < kMaxDepth) unit_00B4(c, 64u, depth + 1u); else { c.pc = 0x003D0660u; return; } if (c.pc != 0x003CE01Cu) [[unlikely]] return; }
L_003CE01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003CE064; } }
L_003CE024:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 4u);  if (t) { goto L_003CE038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CE03C; } }
L_003CE038:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CE03C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 20u);  if (t) { goto L_003CE054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CE058; } }
L_003CE054:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CE058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE060u); set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  if (depth < kMaxDepth) unit_00B4(c, 50u, depth + 1u); else { c.pc = 0x003D0510u; return; } if (c.pc != 0x003CE060u) [[unlikely]] return; }
L_003CE060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003CE064:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CE080:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CE09C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 3u);  if (t) { goto L_003CE0A0; } }
L_003CE09C:
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_003CE0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE0A8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B3(c, 402u, depth + 1u); else { c.pc = 0x003CF550u; return; } if (c.pc != 0x003CE0A8u) [[unlikely]] return; }
L_003CE0A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE0B4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B3(c, 229u, depth + 1u); else { c.pc = 0x003CDCD0u; return; } if (c.pc != 0x003CE0B4u) [[unlikely]] return; }
L_003CE0B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] + 21904u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE0CCu); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CE0CCu) [[unlikely]] return; }
L_003CE0CC:
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE0D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CE0D8u) [[unlikely]] return; }
L_003CE0D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CE0F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE10Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B3(c, 402u, depth + 1u); else { c.pc = 0x003CF550u; return; } if (c.pc != 0x003CE10Cu) [[unlikely]] return; }
L_003CE10C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE118u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B3(c, 242u, depth + 1u); else { c.pc = 0x003CDF00u; return; } if (c.pc != 0x003CE118u) [[unlikely]] return; }
L_003CE118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] + 21904u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE130u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CE130u) [[unlikely]] return; }
L_003CE130:
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE13Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CE13Cu) [[unlikely]] return; }
L_003CE13C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CE150:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22676u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 28u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE184u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 383u, depth + 1u); else { c.pc = 0x003CF1B0u; return; } if (c.pc != 0x003CE184u) [[unlikely]] return; }
    goto L_003CE184;
L_003CE180:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CE184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003CE1E4; } }
L_003CE18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE194u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x003CE194u) [[unlikely]] return; }
L_003CE194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 28u);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE1C8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 367u, depth + 1u); else { c.pc = 0x003CECB0u; return; } if (c.pc != 0x003CE1C8u) [[unlikely]] return; }
L_003CE1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE1E0u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003CE1E0u) [[unlikely]] return; }
L_003CE1E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003CE1E4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE18Cu | kUnwind; return; } goto L_003CE18C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE1F8u); set32(c.r[4], c.r[18].w[0] + 44u);  if (depth < kMaxDepth) unit_00B3(c, 365u, depth + 1u); else { c.pc = 0x003CEC70u; return; } if (c.pc != 0x003CE1F8u) [[unlikely]] return; }
L_003CE1F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003CE21C; } }
L_003CE200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE208u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x003CE208u) [[unlikely]] return; }
L_003CE208:
    set32(c.r[4], c.r[18].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE214u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0018(c, 50u, depth + 1u); else { c.pc = 0x00160750u; return; } if (c.pc != 0x003CE214u) [[unlikely]] return; }
L_003CE214:
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_003CE21C:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE200u | kUnwind; return; } goto L_003CE200; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CE250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CE298; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 21952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE280u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003CE280u) [[unlikely]] return; }
L_003CE280:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CE29C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE298u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003CE298u) [[unlikely]] return; }
L_003CE298:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CE29C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CE2B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 68u);  goto L_003CEC00; }
L_003CE2C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 68u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE2E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B3(c, 362u, depth + 1u); else { c.pc = 0x003CEC00u; return; } if (c.pc != 0x003CE2E8u) [[unlikely]] return; }
L_003CE2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE2F0u);  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x003CE2F0u) [[unlikely]] return; }
L_003CE2F0:
    set32(c.r[17], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 124u)));  if (t) { goto L_003CE394; } }
L_003CE30C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 48u);  if (t) { goto L_003CE32C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003CE330; } }
L_003CE32C:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003CE330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE338u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003CE338u) [[unlikely]] return; }
L_003CE338:
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[5], c.r[18].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE348u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 61u, depth + 1u); else { c.pc = 0x001608B0u; return; } if (c.pc != 0x003CE348u) [[unlikely]] return; }
L_003CE348:
    set32(c.r[20], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE358u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CE358u) [[unlikely]] return; }
L_003CE358:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    set32(c.r[2], c.r[18].w[0] + 56u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[20], 0u - 1u);  goto L_003CE370; }
    set32(c.r[20], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_003CE370:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + 68u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE384u); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 320u, depth + 1u); else { c.pc = 0x003CE870u; return; } if (c.pc != 0x003CE384u) [[unlikely]] return; }
L_003CE384:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    st32((c.r[2].w[0] + 4u), c.r[20].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[19], c.r[3].w[0] + 4u);
    c.budget -= 4;
L_003CE394:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[19].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 15;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE30Cu | kUnwind; return; } goto L_003CE30C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003CE3F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 48u)));  c.pc = t; return; }
L_003CE400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CE440; } }
    set32(c.r[4], 0u + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE424u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003CE424u) [[unlikely]] return; }
L_003CE424:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 26976u), c.r[4].w[0]);  goto L_003CE440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE438u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 298u, depth + 1u); else { c.pc = 0x003CE630u; return; } if (c.pc != 0x003CE438u) [[unlikely]] return; }
L_003CE438:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 26976u), c.r[4].w[0]);
    c.budget -= 2;
L_003CE440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CE450:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CE618; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21888u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 44u);  goto L_003CE498; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE494u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CE494u) [[unlikely]] return; }
L_003CE494:
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 1;
L_003CE498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE4A0u); st32((c.r[17].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_00B3(c, 365u, depth + 1u); else { c.pc = 0x003CEC70u; return; } if (c.pc != 0x003CE4A0u) [[unlikely]] return; }
L_003CE4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE4A8u); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_00B3(c, 389u, depth + 1u); else { c.pc = 0x003CF330u; return; } if (c.pc != 0x003CE4A8u) [[unlikely]] return; }
L_003CE4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 108u)));  if (t) { goto L_003CE4F0; } }
L_003CE4B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_003CE4EC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE4ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CE4ECu) [[unlikely]] return; }
L_003CE4EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 1;
L_003CE4F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE4B0u | kUnwind; return; } goto L_003CE4B0; }
    set32(c.r[2], c.r[17].w[0] + 100u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 68u);  goto L_003CE53C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CE538; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CE538; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CE538; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CE538; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CE538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE538u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CE538u) [[unlikely]] return; }
L_003CE538:
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 1;
L_003CE53C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 44u);  goto L_003CE56C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CE568; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CE568; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003CE568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE568u);  if (depth < kMaxDepth) unit_00B3(c, 325u, depth + 1u); else { c.pc = 0x003CE970u; return; } if (c.pc != 0x003CE568u) [[unlikely]] return; }
L_003CE568:
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 1;
L_003CE56C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 28u);  goto L_003CE59C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CE598; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CE598; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003CE598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE598u);  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x00161E40u; return; } if (c.pc != 0x003CE598u) [[unlikely]] return; }
L_003CE598:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 1;
L_003CE59C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CE5BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CE5BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CE5BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE5BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 392u, depth + 1u); else { c.pc = 0x003CF3A0u; return; } if (c.pc != 0x003CE5BCu) [[unlikely]] return; }
L_003CE5BC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003CE604; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003CE600; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003CE600; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003CE600; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003CE600; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CE600; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CE600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE600u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CE600u) [[unlikely]] return; }
L_003CE600:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003CE604:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CE61C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE618u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003CE618u) [[unlikely]] return; }
L_003CE618:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CE61C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CE630:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003CE68C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE664u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003CE664u) [[unlikely]] return; }
L_003CE664:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003CE67C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE678u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003CE678u) [[unlikely]] return; }
L_003CE678:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003CE67C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_003CE690; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE68Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003CE68Cu) [[unlikely]] return; }
L_003CE68C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003CE690:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 32u);
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE6A8u); st32((c.r[19].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x003CE6A8u) [[unlikely]] return; }
L_003CE6A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 21888u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[19].w[0] + 28u);  if (t) { goto L_003CE6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE6D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003CE6D4u) [[unlikely]] return; }
L_003CE6D4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003CE6EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE6E8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003CE6E8u) [[unlikely]] return; }
L_003CE6E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003CE6EC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_003CE700; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE6FCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003CE6FCu) [[unlikely]] return; }
L_003CE6FC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003CE700:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[17], c.r[19].w[0] + 44u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_003CE74C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE724u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003CE724u) [[unlikely]] return; }
L_003CE724:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003CE73C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE738u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003CE738u) [[unlikely]] return; }
L_003CE738:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003CE73C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  goto L_003CE750; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE74Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003CE74Cu) [[unlikely]] return; }
L_003CE74C:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_003CE750:
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[2], c.r[29].w[0] + 108u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 104u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE76Cu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0018(c, 196u, depth + 1u); else { c.pc = 0x00161CE0u; return; } if (c.pc != 0x003CE76Cu) [[unlikely]] return; }
L_003CE76C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[19].w[0] + 68u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003CE7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE784u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003CE784u) [[unlikely]] return; }
L_003CE784:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003CE79C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE798u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003CE798u) [[unlikely]] return; }
L_003CE798:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003CE79C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  goto L_003CE7B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE7ACu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003CE7ACu) [[unlikely]] return; }
L_003CE7AC:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_003CE7B0:
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[2], c.r[29].w[0] + 100u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE7CCu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B3(c, 364u, depth + 1u); else { c.pc = 0x003CEC40u; return; } if (c.pc != 0x003CE7CCu) [[unlikely]] return; }
L_003CE7CC:
    st8((c.r[19].w[0] + 96u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[19].w[0] + 100u);  if (t) { goto L_003CE810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE7E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003CE7E8u) [[unlikely]] return; }
L_003CE7E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003CE800; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE7FCu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003CE7FCu) [[unlikely]] return; }
L_003CE7FC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003CE800:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_003CE814; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE810u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003CE810u) [[unlikely]] return; }
L_003CE810:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003CE814:
    set32(c.r[4], 0u + 76u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE82Cu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003CE82Cu) [[unlikely]] return; }
L_003CE82C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 92u), c.r[2].w[0]);  goto L_003CE844; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE840u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 85u, depth + 1u); else { c.pc = 0x003D0870u; return; } if (c.pc != 0x003CE840u) [[unlikely]] return; }
L_003CE840:
    st32((c.r[19].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 1;
L_003CE844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE84Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 259u, depth + 1u); else { c.pc = 0x003CE150u; return; } if (c.pc != 0x003CE84Cu) [[unlikely]] return; }
L_003CE84C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003CE870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[9], c.r[4].w[0] + 12u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003CE8C0; } }
L_003CE894:
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003CE8B0; } }
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CE8C0; } }
L_003CE8B0:
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003CE8C0:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[6], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE894u | kUnwind; return; } goto L_003CE894; }
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0])));  goto L_003CE8E8; }
    set32(c.r[3], ld32((c.r[10].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[10].w[0] + 12u);  goto L_003CE904; }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_003CE8E8:
    set32(c.r[8], c.r[29].w[0] + 24u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30428u)));
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE900u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 397u, depth + 1u); else { c.pc = 0x003CF450u; return; } if (c.pc != 0x003CE900u) [[unlikely]] return; }
L_003CE900:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_003CE904:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CE910:
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + 12u);  if (t) { goto L_003CE934; } }
L_003CE91C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], ld32((c.r[9].w[0] + 4u)));  goto L_003CE934; }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 2;
L_003CE934:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[7], ld32((c.r[9].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE91Cu | kUnwind; return; } goto L_003CE91C; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[5].w[0] + 12u);  goto L_003CE960; }
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0]), c.r[8].w[0]);  goto L_003CE964; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 1;
L_003CE960:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003CE964:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CE970:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CEA84; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003CEA00; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003CE9BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE9B8u);  if (depth < kMaxDepth) unit_00B3(c, 325u, depth + 1u); else { c.pc = 0x003CE970u; return; } if (c.pc != 0x003CE9B8u) [[unlikely]] return; }
L_003CE9B8:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003CE9BC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CE9D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE9CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 325u, depth + 1u); else { c.pc = 0x003CE970u; return; } if (c.pc != 0x003CE9CCu) [[unlikely]] return; }
L_003CE9CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CE9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE9D8u);  if (depth < kMaxDepth) unit_00B3(c, 361u, depth + 1u); else { c.pc = 0x003CEBF0u; return; } if (c.pc != 0x003CE9D8u) [[unlikely]] return; }
L_003CE9D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE9E4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B3(c, 360u, depth + 1u); else { c.pc = 0x003CEBE0u; return; } if (c.pc != 0x003CE9E4u) [[unlikely]] return; }
L_003CE9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE9ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 359u, depth + 1u); else { c.pc = 0x003CEBD0u; return; } if (c.pc != 0x003CE9ECu) [[unlikely]] return; }
L_003CE9EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE9FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 357u, depth + 1u); else { c.pc = 0x003CEBB0u; return; } if (c.pc != 0x003CE9FCu) [[unlikely]] return; }
L_003CE9FC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003CEA00:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CEA64; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003CEA20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 325u, depth + 1u); else { c.pc = 0x003CE970u; return; } if (c.pc != 0x003CEA1Cu) [[unlikely]] return; }
L_003CEA1C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003CEA20:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CEA34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 325u, depth + 1u); else { c.pc = 0x003CE970u; return; } if (c.pc != 0x003CEA30u) [[unlikely]] return; }
L_003CEA30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CEA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA3Cu);  if (depth < kMaxDepth) unit_00B3(c, 361u, depth + 1u); else { c.pc = 0x003CEBF0u; return; } if (c.pc != 0x003CEA3Cu) [[unlikely]] return; }
L_003CEA3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA48u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B3(c, 360u, depth + 1u); else { c.pc = 0x003CEBE0u; return; } if (c.pc != 0x003CEA48u) [[unlikely]] return; }
L_003CEA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 359u, depth + 1u); else { c.pc = 0x003CEBD0u; return; } if (c.pc != 0x003CEA50u) [[unlikely]] return; }
L_003CEA50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA60u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 357u, depth + 1u); else { c.pc = 0x003CEBB0u; return; } if (c.pc != 0x003CEA60u) [[unlikely]] return; }
L_003CEA60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CEA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA6Cu);  if (depth < kMaxDepth) unit_00B3(c, 361u, depth + 1u); else { c.pc = 0x003CEBF0u; return; } if (c.pc != 0x003CEA6Cu) [[unlikely]] return; }
L_003CEA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 359u, depth + 1u); else { c.pc = 0x003CEBD0u; return; } if (c.pc != 0x003CEA74u) [[unlikely]] return; }
L_003CEA74:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_003CEA88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA84u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CEA84u) [[unlikely]] return; }
L_003CEA84:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003CEA88:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003CEB7C; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003CEAF8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003CEAB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEAB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 325u, depth + 1u); else { c.pc = 0x003CE970u; return; } if (c.pc != 0x003CEAB0u) [[unlikely]] return; }
L_003CEAB0:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003CEAB4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CEAC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEAC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 325u, depth + 1u); else { c.pc = 0x003CE970u; return; } if (c.pc != 0x003CEAC4u) [[unlikely]] return; }
L_003CEAC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CEAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEAD0u);  if (depth < kMaxDepth) unit_00B3(c, 361u, depth + 1u); else { c.pc = 0x003CEBF0u; return; } if (c.pc != 0x003CEAD0u) [[unlikely]] return; }
L_003CEAD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEADCu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B3(c, 360u, depth + 1u); else { c.pc = 0x003CEBE0u; return; } if (c.pc != 0x003CEADCu) [[unlikely]] return; }
L_003CEADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEAE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 359u, depth + 1u); else { c.pc = 0x003CEBD0u; return; } if (c.pc != 0x003CEAE4u) [[unlikely]] return; }
L_003CEAE4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEAF4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 357u, depth + 1u); else { c.pc = 0x003CEBB0u; return; } if (c.pc != 0x003CEAF4u) [[unlikely]] return; }
L_003CEAF4:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003CEAF8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CEB5C; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003CEB18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 325u, depth + 1u); else { c.pc = 0x003CE970u; return; } if (c.pc != 0x003CEB14u) [[unlikely]] return; }
L_003CEB14:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003CEB18:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CEB2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 325u, depth + 1u); else { c.pc = 0x003CE970u; return; } if (c.pc != 0x003CEB28u) [[unlikely]] return; }
L_003CEB28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CEB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB34u);  if (depth < kMaxDepth) unit_00B3(c, 361u, depth + 1u); else { c.pc = 0x003CEBF0u; return; } if (c.pc != 0x003CEB34u) [[unlikely]] return; }
L_003CEB34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB40u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B3(c, 360u, depth + 1u); else { c.pc = 0x003CEBE0u; return; } if (c.pc != 0x003CEB40u) [[unlikely]] return; }
L_003CEB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 359u, depth + 1u); else { c.pc = 0x003CEBD0u; return; } if (c.pc != 0x003CEB48u) [[unlikely]] return; }
L_003CEB48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB58u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 357u, depth + 1u); else { c.pc = 0x003CEBB0u; return; } if (c.pc != 0x003CEB58u) [[unlikely]] return; }
L_003CEB58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CEB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB64u);  if (depth < kMaxDepth) unit_00B3(c, 361u, depth + 1u); else { c.pc = 0x003CEBF0u; return; } if (c.pc != 0x003CEB64u) [[unlikely]] return; }
L_003CEB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 359u, depth + 1u); else { c.pc = 0x003CEBD0u; return; } if (c.pc != 0x003CEB6Cu) [[unlikely]] return; }
L_003CEB6C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003CEB7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CEB7Cu) [[unlikely]] return; }
L_003CEB7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003CEB90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CEB8Cu) [[unlikely]] return; }
L_003CEB8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003CEB90:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CEBB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CEBC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEBC4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CEBC4u) [[unlikely]] return; }
L_003CEBC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CEBD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_003CEBE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CEBF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003CEC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CEC30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEC20u);  if (depth < kMaxDepth) unit_00B3(c, 325u, depth + 1u); else { c.pc = 0x003CE970u; return; } if (c.pc != 0x003CEC20u) [[unlikely]] return; }
L_003CEC20:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_003CEC30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CEC40:
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
L_003CEC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CECA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEC90u);  if (depth < kMaxDepth) unit_0018(c, 206u, depth + 1u); else { c.pc = 0x00161E40u; return; } if (c.pc != 0x003CEC90u) [[unlikely]] return; }
L_003CEC90:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_003CECA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CECB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003CF184; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_003CED1C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CED10u); set32(c.r[5], c.r[5].w[0] - 22976u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003CED10u) [[unlikely]] return; }
L_003CED10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CED18u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003CED18u) [[unlikely]] return; }
L_003CED18:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_003CED1C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_003CEF3C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] - c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));  if (t) { goto L_003CED50; } }
    set32(c.r[3], c.r[5].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_003CED50:
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[9], c.r[17].w[0] << 4);  goto L_003CEE3C; }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 26416u);
    set32(c.r[8], c.r[8].w[0] - 25632u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 21952u);  if (t) { goto L_003CEDBC; } }
L_003CED7C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 8u)));  goto L_003CEDAC; }
    st32((c.r[5].w[0]), c.r[9].w[0]);
    st32((c.r[5].w[0]), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 12u));
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 10;
L_003CEDAC:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 4;
L_003CEDBC:
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CED7Cu | kUnwind; return; } goto L_003CED7C; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 26416u);
    set32(c.r[7], c.r[7].w[0] - 25632u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 21952u);  if (t) { goto L_003CEE28; } }
L_003CEDE8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_003CEE18; }
    st32((c.r[5].w[0]), c.r[8].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[9].w[0] + 12u));
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 10;
L_003CEE18:
    set32(c.r[9], c.r[9].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003CEE28:
    c.r[3].d[0] = c.r[9].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEDE8u | kUnwind; return; } goto L_003CEDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CEF08; } }
L_003CEE3C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[11], c.r[4].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] - 26416u);
    set32(c.r[7], c.r[7].w[0] - 25632u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 21952u);  if (t) { goto L_003CEEA0; } }
L_003CEE60:
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_003CEE90; }
    st32((c.r[10].w[0]), c.r[8].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[11].w[0] + 4u)));
    st32((c.r[10].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[10].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[11].w[0] + 8u)));
    st32((c.r[10].w[0] + 8u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[11].w[0] + 12u));
    st8((c.r[10].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 10;
L_003CEE90:
    set32(c.r[11], c.r[11].w[0] + 16u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 4;
L_003CEEA0:
    c.r[5].d[0] = c.r[11].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEE60u | kUnwind; return; } goto L_003CEE60; } }
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  goto L_003CEEFC; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CEED4; } }
    set32(c.r[16], c.r[16].w[0] + c.r[9].w[0]);
    c.budget -= 1;
L_003CEED4:
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CEEFC; } }
L_003CEEE0:
    set32(c.r[4], c.r[4].w[0] - 16u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 12u));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003CEEFC:
    c.r[1].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEEE0u | kUnwind; return; } goto L_003CEEE0; }
L_003CEF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CEF2C; } }
L_003CEF10:
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 7;
L_003CEF2C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEF10u | kUnwind; return; } goto L_003CEF10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003CF188; } }
L_003CEF3C:
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003CEF5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CEF64; } }
L_003CEF5C:
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003CEF64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_003CEF84; } }
L_003CEF6C:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_003CEF80; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_003CEF80:
    c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003CEF84:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEF6Cu | kUnwind; return; } goto L_003CEF6C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEF98u); set32(c.r[4], c.r[20].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003CEF98u) [[unlikely]] return; }
L_003CEF98:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[29].w[0] + 100u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] - 26416u);
    set32(c.r[8], c.r[8].w[0] - 25632u);
    set32(c.r[7], c.r[7].w[0] + 21952u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_003CF010; } }
L_003CEFD0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  goto L_003CF000; }
    st32((c.r[5].w[0]), c.r[9].w[0]);
    st32((c.r[5].w[0]), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 12u));
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 10;
L_003CF000:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[6].w[0]);
    c.budget -= 4;
L_003CF010:
    c.r[6].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEFD0u | kUnwind; return; } goto L_003CEFD0; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[9], c.r[9].w[0] - 26416u);
    set32(c.r[8], c.r[8].w[0] - 25632u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 21952u);  if (t) { goto L_003CF078; } }
L_003CF038:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  goto L_003CF068; }
    st32((c.r[5].w[0]), c.r[9].w[0]);
    st32((c.r[5].w[0]), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 12u));
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 10;
L_003CF068:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[6].w[0]);
    c.budget -= 4;
L_003CF078:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF038u | kUnwind; return; } goto L_003CF038; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[9], c.r[9].w[0] - 26416u);
    set32(c.r[8], c.r[8].w[0] - 25632u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 21952u);  if (t) { goto L_003CF0DC; } }
L_003CF09C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  goto L_003CF0CC; }
    st32((c.r[5].w[0]), c.r[9].w[0]);
    st32((c.r[5].w[0]), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 12u));
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 10;
L_003CF0CC:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[6].w[0]);
    c.budget -= 4;
L_003CF0DC:
    c.r[6].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF09Cu | kUnwind; return; } goto L_003CF09C; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_003CF138; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 17;
L_003CF138:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_003CF15C; } }
L_003CF148:
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF15Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CF15Cu) [[unlikely]] return; }
L_003CF15C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF148u | kUnwind; return; } goto L_003CF148; }
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_003CF184; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CF184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF184u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CF184u) [[unlikely]] return; }
L_003CF184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003CF188:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003CF1B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CF310; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 4);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF1F0u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003CF1F0u) [[unlikely]] return; }
L_003CF1F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] - 26416u);
    set32(c.r[5], c.r[5].w[0] - 25632u);
    set32(c.r[4], c.r[4].w[0] + 21952u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);  if (t) { goto L_003CF268; } }
L_003CF228:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_003CF258; }
    st32((c.r[9].w[0]), c.r[6].w[0]);
    st32((c.r[9].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[9].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 8u)));
    st32((c.r[9].w[0] + 8u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[8].w[0] + 12u));
    st8((c.r[9].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 10;
L_003CF258:
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_003CF268:
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF228u | kUnwind; return; } goto L_003CF228; } }
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_003CF2C4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 17;
L_003CF2C4:
    set32(c.r[16], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_003CF2E8; } }
L_003CF2D4:
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF2E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CF2E8u) [[unlikely]] return; }
L_003CF2E8:
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF2D4u | kUnwind; return; } goto L_003CF2D4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 56u), 0u);  if (t) { goto L_003CF310; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003CF314; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF310u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CF310u) [[unlikely]] return; }
L_003CF310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003CF314:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CF330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_003CF370; } }
L_003CF35C:
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF370u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CF370u) [[unlikely]] return; }
L_003CF370:
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF35Cu | kUnwind; return; } goto L_003CF35C; }
    st32((c.r[18].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CF3A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CF430; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_003CF3EC; } }
L_003CF3D8:
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF3ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CF3ECu) [[unlikely]] return; }
L_003CF3EC:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF3D8u | kUnwind; return; } goto L_003CF3D8; }
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] << 48;  goto L_003CF41C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CF418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF418u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CF418u) [[unlikely]] return; }
L_003CF418:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.budget -= 1;
L_003CF41C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003CF434; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF430u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003CF430u) [[unlikely]] return; }
L_003CF430:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CF434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CF450:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003CF4B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF4A8u); set32(c.r[5], c.r[5].w[0] - 22867u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003CF4A8u) [[unlikely]] return; }
L_003CF4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF4B0u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003CF4B0u) [[unlikely]] return; }
L_003CF4B0:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF4BCu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003CF4BCu) [[unlikely]] return; }
L_003CF4BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_003CF4E0; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 5;
L_003CF4E0:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003CF500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_003CF504; } }
L_003CF500:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_003CF504:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF51Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x003CF51Cu) [[unlikely]] return; }
L_003CF51C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003CF52C; }
    st32((c.r[21].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003CF52C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003CF550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 21904u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF58Cu); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003CF58Cu) [[unlikely]] return; }
L_003CF58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF594u); set32(c.r[4], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003CF594u) [[unlikely]] return; }
L_003CF594:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF5A0u); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003CF5A0u) [[unlikely]] return; }
L_003CF5A0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF5ACu); set32(c.r[4], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003CF5ACu) [[unlikely]] return; }
L_003CF5AC:
    st32((c.r[19].w[0] + 36u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CF5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CF640; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21920u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003CF628; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003CF628; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003CF628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF628u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CF628u) [[unlikely]] return; }
L_003CF628:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CF644; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF640u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003CF640u) [[unlikely]] return; }
L_003CF640:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CF644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CF660:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003CF688; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_003CF680; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003CF680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CF68C; } }
L_003CF688:
    set32(c.r[2], c.r[2].w[0] - 22840u);
    c.budget -= 1;
L_003CF68C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CF6A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22832u);  c.pc = t; return; }
L_003CF6B0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].d[0] = c.r[3].d[0] & 3ull;
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003CF6D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 252ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_003CF700; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 4ull;  if (t) { goto L_003CF708; } }
L_003CF700:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 251ull;
    c.budget -= 2;
L_003CF708:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; return; }
L_003CF710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF724u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003CF724u) [[unlikely]] return; }
L_003CF724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CF748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF734u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x003CF734u) [[unlikely]] return; }
L_003CF734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21952u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_003CF748:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CF760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 22816u);
    set32(c.r[5], c.r[5].w[0] - 22784u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF788u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003CF788u) [[unlikely]] return; }
L_003CF788:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 22769u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22764u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF7B4u); set32(c.r[9], c.r[9].w[0] - 22760u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x003CF7B4u) [[unlikely]] return; }
L_003CF7B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22759u);
    set32(c.r[6], c.r[6].w[0] - 22744u);
    set32(c.r[7], 0u + 12u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF7DCu); set32(c.r[9], c.r[9].w[0] - 22760u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x003CF7DCu) [[unlikely]] return; }
L_003CF7DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CF7F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30424u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003CF80C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CF81C; } }
L_003CF80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF814u);  if (depth < kMaxDepth) unit_000D(c, 144u, depth + 1u); else { c.pc = 0x001355D0u; return; } if (c.pc != 0x003CF814u) [[unlikely]] return; }
L_003CF814:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003CF81C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF854u); set32(c.r[4], c.r[4].w[0] - 22816u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003CF854u) [[unlikely]] return; }
L_003CF854:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CF864; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CF874; } }
L_003CF864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF86Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 145u, depth + 1u); else { c.pc = 0x001355F0u; return; } if (c.pc != 0x003CF86Cu) [[unlikely]] return; }
L_003CF86C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003CF874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CF890:
    set32(c.r[2], ld32((c.r[28].w[0] - 31220u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003CF8A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30424u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003CF8BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CF8C4; } }
L_003CF8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF8C4u);  if (depth < kMaxDepth) unit_000D(c, 148u, depth + 1u); else { c.pc = 0x00135640u; return; } if (c.pc != 0x003CF8C4u) [[unlikely]] return; }
L_003CF8C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF8D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30424u)));  c.pc = t; return; }
L_003CF8E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22800u);  c.pc = t; return; }
L_003CF8F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] >> 4);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    mmi::divu(c, 0, c.r[5].w[0], c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_003CF930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  c.pc = t; return; }
L_003CF940:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF970u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 247u, depth + 1u); else { c.pc = 0x003D2450u; return; } if (c.pc != 0x003CF970u) [[unlikely]] return; }
L_003CF970:
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF980u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B4(c, 247u, depth + 1u); else { c.pc = 0x003D2450u; return; } if (c.pc != 0x003CF980u) [[unlikely]] return; }
L_003CF980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_003CFA08; } }
L_003CF988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF990u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CF990u) [[unlikely]] return; }
L_003CF990:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF9A4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CF9A4u) [[unlikely]] return; }
L_003CF9A4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003CF9C0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 112u)));  goto L_003CF9C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CFA18; } }
L_003CF9C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_003CF9C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_003CFA04; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003CF9F0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003CF9F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 5;
L_003CFA04:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_003CFA08:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF988u | kUnwind; return; } goto L_003CF988; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CFA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003CFA30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA48u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00B4(c, 202u, depth + 1u); else { c.pc = 0x003D1C30u; return; } if (c.pc != 0x003CFA48u) [[unlikely]] return; }
L_003CFA48:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA54u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B3(c, 473u, depth + 1u); else { c.pc = 0x003CFE00u; return; } if (c.pc != 0x003CFA54u) [[unlikely]] return; }
L_003CFA54:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA60u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 472u, depth + 1u); else { c.pc = 0x003CFDF0u; return; } if (c.pc != 0x003CFA60u) [[unlikely]] return; }
L_003CFA60:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA6Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B3(c, 445u, depth + 1u); else { c.pc = 0x003CFAA0u; return; } if (c.pc != 0x003CFA6Cu) [[unlikely]] return; }
L_003CFA6C:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA78u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B4(c, 245u, depth + 1u); else { c.pc = 0x003D23E0u; return; } if (c.pc != 0x003CFA78u) [[unlikely]] return; }
L_003CFA78:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 128u, depth + 1u); else { c.pc = 0x003D0CF0u; return; } if (c.pc != 0x003CFA84u) [[unlikely]] return; }
L_003CFA84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CFAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFAB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 447u, depth + 1u); else { c.pc = 0x003CFAD0u; return; } if (c.pc != 0x003CFAB4u) [[unlikely]] return; }
L_003CFAB4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CFAD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFAF0u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00B3(c, 471u, depth + 1u); else { c.pc = 0x003CFDE0u; return; } if (c.pc != 0x003CFAF0u) [[unlikely]] return; }
L_003CFAF0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFAFCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B3(c, 470u, depth + 1u); else { c.pc = 0x003CFDC0u; return; } if (c.pc != 0x003CFAFCu) [[unlikely]] return; }
L_003CFAFC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFB0Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B3(c, 455u, depth + 1u); else { c.pc = 0x003CFBC0u; return; } if (c.pc != 0x003CFB0Cu) [[unlikely]] return; }
L_003CFB0C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFB18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B3(c, 452u, depth + 1u); else { c.pc = 0x003CFB40u; return; } if (c.pc != 0x003CFB18u) [[unlikely]] return; }
L_003CFB18:
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CFB40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CFBA0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003CFB8C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003CFB88; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CFB88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CFB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFB88u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003CFB88u) [[unlikely]] return; }
L_003CFB88:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003CFB8C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CFBA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFBA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003CFBA0u) [[unlikely]] return; }
L_003CFBA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CFBA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CFBC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFBDCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 469u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFBDCu) [[unlikely]] return; }
L_003CFBDC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFBE8u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B3(c, 458u, depth + 1u); else { c.pc = 0x003CFC00u; return; } if (c.pc != 0x003CFBE8u) [[unlikely]] return; }
L_003CFBE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CFC00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFC20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 485u, depth + 1u); else { c.pc = 0x00123BF0u; return; } if (c.pc != 0x003CFC20u) [[unlikely]] return; }
L_003CFC20:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFC2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 484u, depth + 1u); else { c.pc = 0x00123BD0u; return; } if (c.pc != 0x003CFC2Cu) [[unlikely]] return; }
L_003CFC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFC34u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x003CFC34u) [[unlikely]] return; }
L_003CFC34:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFC40u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 468u, depth + 1u); else { c.pc = 0x003CFD80u; return; } if (c.pc != 0x003CFC40u) [[unlikely]] return; }
L_003CFC40:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFC4Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B3(c, 467u, depth + 1u); else { c.pc = 0x003CFD20u; return; } if (c.pc != 0x003CFC4Cu) [[unlikely]] return; }
L_003CFC4C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFC60u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B3(c, 465u, depth + 1u); else { c.pc = 0x003CFC80u; return; } if (c.pc != 0x003CFC60u) [[unlikely]] return; }
L_003CFC60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003CFC80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 112u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[29].w[0] + 120u), c.f[2]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 124u), c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 96u)));
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[29].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[29].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFD14u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 143u, depth + 1u); else { c.pc = 0x003D0F20u; return; } if (c.pc != 0x003CFD14u) [[unlikely]] return; }
L_003CFD14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003CFD20:
    set32(c.r[7], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_003CFD40; }
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
L_003CFD40:
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[8], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[7], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    st32((c.r[4].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_003CFD80:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  c.pc = t; return; }
L_003CFDB0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003CFDC0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_003CFDE0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003CFDF0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003CFE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CFE4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE18u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003CFE18u) [[unlikely]] return; }
L_003CFE18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_003CFE38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE30u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003CFE30u) [[unlikely]] return; }
L_003CFE30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003CFE38:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003CFE50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE48u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003CFE48u) [[unlikely]] return; }
L_003CFE48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003CFE4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CFE50:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CFE60:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.budget -= 3;
    { set32(c.r[5], 0u + 4u);  [[clang::musttail]] return unit_00CA(c, 249u, depth); }
L_003CFE70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26924u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE90u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 350u, depth + 1u); else { c.pc = 0x0013F5E0u; return; } if (c.pc != 0x003CFE90u) [[unlikely]] return; }
L_003CFE90:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_003CFEA4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_003CFEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFEACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003CFEACu) [[unlikely]] return; }
L_003CFEAC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFEB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003CFEB8u) [[unlikely]] return; }
L_003CFEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CFED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26924u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CFEF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CFF74; } }
L_003CFEF4:
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] >> 4);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].d[0] & 15ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 18;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_003CFF40; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003CFF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFF48u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x003CFF48u) [[unlikely]] return; }
L_003CFF48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003CFF74; }
    set32(c.r[3], c.r[2].w[0] + 20u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_003CFF68; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003CFF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFF70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003CFF70u) [[unlikely]] return; }
L_003CFF70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003CFF74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CFF90:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFFC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 247u, depth + 1u); else { c.pc = 0x003D2450u; return; } if (c.pc != 0x003CFFC4u) [[unlikely]] return; }
L_003CFFC4:
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFFD4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B4(c, 247u, depth + 1u); else { c.pc = 0x003D2450u; return; } if (c.pc != 0x003CFFD4u) [[unlikely]] return; }
L_003CFFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 288u)));  if (t) { [[clang::musttail]] return unit_00B4(c, 9u, depth); } }
L_003CFFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFFE4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CFFE4u) [[unlikely]] return; }
L_003CFFE4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFFF8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003CFFF8u) [[unlikely]] return; }
L_003CFFF8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_00B4(c, 8u, depth); } }
    [[clang::musttail]] return unit_00B4(c, 2u, depth);
}

}
