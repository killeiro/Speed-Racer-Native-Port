#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00EB[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7,
    8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0,
    25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114,
    0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0,
    122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0,
    0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0,
    0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0,
    0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0,
    0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0,
    269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0,
    315, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0,
    0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0,
    363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0,
    0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0,
    0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0,
    0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0,
    0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456,
    0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 462,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0,
    0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 469, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0,
};

void unit_00EB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004AC000;
    case 2u: goto L_004AC004;
    case 3u: goto L_004AC014;
    case 4u: goto L_004AC03C;
    case 5u: goto L_004AC04C;
    case 6u: goto L_004AC060;
    case 7u: goto L_004AC07C;
    case 8u: goto L_004AC080;
    case 9u: goto L_004AC090;
    case 10u: goto L_004AC0A0;
    case 11u: goto L_004AC0E8;
    case 12u: goto L_004AC100;
    case 13u: goto L_004AC120;
    case 14u: goto L_004AC134;
    case 15u: goto L_004AC180;
    case 16u: goto L_004AC1A4;
    case 17u: goto L_004AC1C0;
    case 18u: goto L_004AC1E4;
    case 19u: goto L_004AC1FC;
    case 20u: goto L_004AC220;
    case 21u: goto L_004AC230;
    case 22u: goto L_004AC254;
    case 23u: goto L_004AC260;
    case 24u: goto L_004AC270;
    case 25u: goto L_004AC280;
    case 26u: goto L_004AC290;
    case 27u: goto L_004AC2A0;
    case 28u: goto L_004AC2B0;
    case 29u: goto L_004AC2C0;
    case 30u: goto L_004AC2D0;
    case 31u: goto L_004AC2E0;
    case 32u: goto L_004AC320;
    case 33u: goto L_004AC330;
    case 34u: goto L_004AC398;
    case 35u: goto L_004AC3B0;
    case 36u: goto L_004AC3D0;
    case 37u: goto L_004AC410;
    case 38u: goto L_004AC428;
    case 39u: goto L_004AC444;
    case 40u: goto L_004AC44C;
    case 41u: goto L_004AC464;
    case 42u: goto L_004AC47C;
    case 43u: goto L_004AC48C;
    case 44u: goto L_004AC4A0;
    case 45u: goto L_004AC4CC;
    case 46u: goto L_004AC4D8;
    case 47u: goto L_004AC4E8;
    case 48u: goto L_004AC4F8;
    case 49u: goto L_004AC50C;
    case 50u: goto L_004AC538;
    case 51u: goto L_004AC544;
    case 52u: goto L_004AC554;
    case 53u: goto L_004AC564;
    case 54u: goto L_004AC578;
    case 55u: goto L_004AC5A4;
    case 56u: goto L_004AC5B0;
    case 57u: goto L_004AC5C0;
    case 58u: goto L_004AC5D0;
    case 59u: goto L_004AC5E4;
    case 60u: goto L_004AC614;
    case 61u: goto L_004AC620;
    case 62u: goto L_004AC630;
    case 63u: goto L_004AC640;
    case 64u: goto L_004AC654;
    case 65u: goto L_004AC66C;
    case 66u: goto L_004AC678;
    case 67u: goto L_004AC688;
    case 68u: goto L_004AC698;
    case 69u: goto L_004AC6AC;
    case 70u: goto L_004AC6C8;
    case 71u: goto L_004AC6D4;
    case 72u: goto L_004AC6E4;
    case 73u: goto L_004AC6F4;
    case 74u: goto L_004AC708;
    case 75u: goto L_004AC734;
    case 76u: goto L_004AC740;
    case 77u: goto L_004AC750;
    case 78u: goto L_004AC760;
    case 79u: goto L_004AC774;
    case 80u: goto L_004AC78C;
    case 81u: goto L_004AC798;
    case 82u: goto L_004AC7A4;
    case 83u: goto L_004AC7BC;
    case 84u: goto L_004AC7D4;
    case 85u: goto L_004AC7E8;
    case 86u: goto L_004AC804;
    case 87u: goto L_004AC850;
    case 88u: goto L_004AC880;
    case 89u: goto L_004AC8C4;
    case 90u: goto L_004AC8DC;
    case 91u: goto L_004AC8F4;
    case 92u: goto L_004AC908;
    case 93u: goto L_004AC920;
    case 94u: goto L_004AC950;
    case 95u: goto L_004AC968;
    case 96u: goto L_004AC9B4;
    case 97u: goto L_004AC9C8;
    case 98u: goto L_004AC9E0;
    case 99u: goto L_004ACA2C;
    case 100u: goto L_004ACA4C;
    case 101u: goto L_004ACA98;
    case 102u: goto L_004ACAB8;
    case 103u: goto L_004ACAF8;
    case 104u: goto L_004ACB18;
    case 105u: goto L_004ACB34;
    case 106u: goto L_004ACB5C;
    case 107u: goto L_004ACB9C;
    case 108u: goto L_004ACBBC;
    case 109u: goto L_004ACBD8;
    case 110u: goto L_004ACC00;
    case 111u: goto L_004ACC40;
    case 112u: goto L_004ACC50;
    case 113u: goto L_004ACC64;
    case 114u: goto L_004ACC7C;
    case 115u: goto L_004ACC88;
    case 116u: goto L_004ACC98;
    case 117u: goto L_004ACCA8;
    case 118u: goto L_004ACCBC;
    case 119u: goto L_004ACCD4;
    case 120u: goto L_004ACCE0;
    case 121u: goto L_004ACCF0;
    case 122u: goto L_004ACD00;
    case 123u: goto L_004ACD14;
    case 124u: goto L_004ACD2C;
    case 125u: goto L_004ACD38;
    case 126u: goto L_004ACD48;
    case 127u: goto L_004ACD58;
    case 128u: goto L_004ACD6C;
    case 129u: goto L_004ACD84;
    case 130u: goto L_004ACD90;
    case 131u: goto L_004ACDA8;
    case 132u: goto L_004ACDD4;
    case 133u: goto L_004ACDE0;
    case 134u: goto L_004ACDEC;
    case 135u: goto L_004ACE20;
    case 136u: goto L_004ACE30;
    case 137u: goto L_004ACE50;
    case 138u: goto L_004ACE74;
    case 139u: goto L_004ACE80;
    case 140u: goto L_004ACEA4;
    case 141u: goto L_004ACEB0;
    case 142u: goto L_004ACED4;
    case 143u: goto L_004ACEFC;
    case 144u: goto L_004ACF1C;
    case 145u: goto L_004ACF28;
    case 146u: goto L_004ACF4C;
    case 147u: goto L_004ACF58;
    case 148u: goto L_004AD0C4;
    case 149u: goto L_004AD0E0;
    case 150u: goto L_004AD0F0;
    case 151u: goto L_004AD128;
    case 152u: goto L_004AD130;
    case 153u: goto L_004AD14C;
    case 154u: goto L_004AD174;
    case 155u: goto L_004AD1B4;
    case 156u: goto L_004AD1C8;
    case 157u: goto L_004AD1DC;
    case 158u: goto L_004AD1F8;
    case 159u: goto L_004AD214;
    case 160u: goto L_004AD21C;
    case 161u: goto L_004AD244;
    case 162u: goto L_004AD258;
    case 163u: goto L_004AD28C;
    case 164u: goto L_004AD2C8;
    case 165u: goto L_004AD2F8;
    case 166u: goto L_004AD320;
    case 167u: goto L_004AD330;
    case 168u: goto L_004AD350;
    case 169u: goto L_004AD370;
    case 170u: goto L_004AD3EC;
    case 171u: goto L_004AD400;
    case 172u: goto L_004AD418;
    case 173u: goto L_004AD448;
    case 174u: goto L_004AD464;
    case 175u: goto L_004AD470;
    case 176u: goto L_004AD488;
    case 177u: goto L_004AD4EC;
    case 178u: goto L_004AD510;
    case 179u: goto L_004AD518;
    case 180u: goto L_004AD524;
    case 181u: goto L_004AD540;
    case 182u: goto L_004AD55C;
    case 183u: goto L_004AD570;
    case 184u: goto L_004AD580;
    case 185u: goto L_004AD5F0;
    case 186u: goto L_004AD628;
    case 187u: goto L_004AD648;
    case 188u: goto L_004AD65C;
    case 189u: goto L_004AD688;
    case 190u: goto L_004AD6A0;
    case 191u: goto L_004AD6C0;
    case 192u: goto L_004AD6E0;
    case 193u: goto L_004AD728;
    case 194u: goto L_004AD748;
    case 195u: goto L_004AD764;
    case 196u: goto L_004AD770;
    case 197u: goto L_004AD98C;
    case 198u: goto L_004AD9BC;
    case 199u: goto L_004AD9D0;
    case 200u: goto L_004AD9E4;
    case 201u: goto L_004ADA38;
    case 202u: goto L_004ADA48;
    case 203u: goto L_004ADA68;
    case 204u: goto L_004ADA8C;
    case 205u: goto L_004ADA9C;
    case 206u: goto L_004ADAC0;
    case 207u: goto L_004ADAE4;
    case 208u: goto L_004ADB00;
    case 209u: goto L_004ADB24;
    case 210u: goto L_004ADB3C;
    case 211u: goto L_004ADB60;
    case 212u: goto L_004ADB70;
    case 213u: goto L_004ADB94;
    case 214u: goto L_004ADBA0;
    case 215u: goto L_004ADBB0;
    case 216u: goto L_004ADBC0;
    case 217u: goto L_004ADC30;
    case 218u: goto L_004ADC40;
    case 219u: goto L_004ADC50;
    case 220u: goto L_004ADC60;
    case 221u: goto L_004ADC70;
    case 222u: goto L_004ADC80;
    case 223u: goto L_004ADCC0;
    case 224u: goto L_004ADCD0;
    case 225u: goto L_004ADD38;
    case 226u: goto L_004ADD50;
    case 227u: goto L_004ADD70;
    case 228u: goto L_004ADDB0;
    case 229u: goto L_004ADDC8;
    case 230u: goto L_004ADDE4;
    case 231u: goto L_004ADDEC;
    case 232u: goto L_004ADE04;
    case 233u: goto L_004ADE1C;
    case 234u: goto L_004ADE2C;
    case 235u: goto L_004ADE40;
    case 236u: goto L_004ADE6C;
    case 237u: goto L_004ADE78;
    case 238u: goto L_004ADE88;
    case 239u: goto L_004ADE98;
    case 240u: goto L_004ADEAC;
    case 241u: goto L_004ADED8;
    case 242u: goto L_004ADEE4;
    case 243u: goto L_004ADEF4;
    case 244u: goto L_004ADF04;
    case 245u: goto L_004ADF18;
    case 246u: goto L_004ADF44;
    case 247u: goto L_004ADF50;
    case 248u: goto L_004ADF60;
    case 249u: goto L_004ADF70;
    case 250u: goto L_004ADF84;
    case 251u: goto L_004ADFB4;
    case 252u: goto L_004ADFC0;
    case 253u: goto L_004ADFD0;
    case 254u: goto L_004ADFE0;
    case 255u: goto L_004ADFF4;
    case 256u: goto L_004AE00C;
    case 257u: goto L_004AE018;
    case 258u: goto L_004AE028;
    case 259u: goto L_004AE038;
    case 260u: goto L_004AE04C;
    case 261u: goto L_004AE068;
    case 262u: goto L_004AE074;
    case 263u: goto L_004AE084;
    case 264u: goto L_004AE094;
    case 265u: goto L_004AE0A8;
    case 266u: goto L_004AE0D4;
    case 267u: goto L_004AE0E0;
    case 268u: goto L_004AE0F0;
    case 269u: goto L_004AE100;
    case 270u: goto L_004AE114;
    case 271u: goto L_004AE12C;
    case 272u: goto L_004AE138;
    case 273u: goto L_004AE144;
    case 274u: goto L_004AE15C;
    case 275u: goto L_004AE174;
    case 276u: goto L_004AE1C0;
    case 277u: goto L_004AE1CC;
    case 278u: goto L_004AE1E4;
    case 279u: goto L_004AE1F8;
    case 280u: goto L_004AE214;
    case 281u: goto L_004AE260;
    case 282u: goto L_004AE290;
    case 283u: goto L_004AE2D4;
    case 284u: goto L_004AE2EC;
    case 285u: goto L_004AE304;
    case 286u: goto L_004AE318;
    case 287u: goto L_004AE330;
    case 288u: goto L_004AE360;
    case 289u: goto L_004AE378;
    case 290u: goto L_004AE3C4;
    case 291u: goto L_004AE3D8;
    case 292u: goto L_004AE3F0;
    case 293u: goto L_004AE43C;
    case 294u: goto L_004AE45C;
    case 295u: goto L_004AE4A8;
    case 296u: goto L_004AE4C8;
    case 297u: goto L_004AE508;
    case 298u: goto L_004AE528;
    case 299u: goto L_004AE544;
    case 300u: goto L_004AE56C;
    case 301u: goto L_004AE5AC;
    case 302u: goto L_004AE5CC;
    case 303u: goto L_004AE5E8;
    case 304u: goto L_004AE610;
    case 305u: goto L_004AE650;
    case 306u: goto L_004AE660;
    case 307u: goto L_004AE674;
    case 308u: goto L_004AE68C;
    case 309u: goto L_004AE698;
    case 310u: goto L_004AE6A8;
    case 311u: goto L_004AE6B8;
    case 312u: goto L_004AE6CC;
    case 313u: goto L_004AE6E4;
    case 314u: goto L_004AE6F0;
    case 315u: goto L_004AE700;
    case 316u: goto L_004AE710;
    case 317u: goto L_004AE724;
    case 318u: goto L_004AE73C;
    case 319u: goto L_004AE748;
    case 320u: goto L_004AE758;
    case 321u: goto L_004AE768;
    case 322u: goto L_004AE77C;
    case 323u: goto L_004AE794;
    case 324u: goto L_004AE7A0;
    case 325u: goto L_004AE7B8;
    case 326u: goto L_004AE7E4;
    case 327u: goto L_004AE7F0;
    case 328u: goto L_004AE7FC;
    case 329u: goto L_004AE830;
    case 330u: goto L_004AE840;
    case 331u: goto L_004AE870;
    case 332u: goto L_004AE894;
    case 333u: goto L_004AE8A0;
    case 334u: goto L_004AE8C4;
    case 335u: goto L_004AE8D0;
    case 336u: goto L_004AE8E0;
    case 337u: goto L_004AE900;
    case 338u: goto L_004AE90C;
    case 339u: goto L_004AE930;
    case 340u: goto L_004AE93C;
    case 341u: goto L_004AEAAC;
    case 342u: goto L_004AEAF8;
    case 343u: goto L_004AEB04;
    case 344u: goto L_004AEB28;
    case 345u: goto L_004AEB34;
    case 346u: goto L_004AEB54;
    case 347u: goto L_004AEBC0;
    case 348u: goto L_004AEBD8;
    case 349u: goto L_004AEBF0;
    case 350u: goto L_004AEC04;
    case 351u: goto L_004AEC1C;
    case 352u: goto L_004AEC4C;
    case 353u: goto L_004AEC88;
    case 354u: goto L_004AEC94;
    case 355u: goto L_004AECB8;
    case 356u: goto L_004AECC4;
    case 357u: goto L_004AECEC;
    case 358u: goto L_004AECF4;
    case 359u: goto L_004AED24;
    case 360u: goto L_004AED44;
    case 361u: goto L_004AED50;
    case 362u: goto L_004AED74;
    case 363u: goto L_004AED80;
    case 364u: goto L_004AED88;
    case 365u: goto L_004AEDAC;
    case 366u: goto L_004AEE14;
    case 367u: goto L_004AEE50;
    case 368u: goto L_004AEE8C;
    case 369u: goto L_004AEE98;
    case 370u: goto L_004AEEBC;
    case 371u: goto L_004AEEC8;
    case 372u: goto L_004AEEE4;
    case 373u: goto L_004AEEF0;
    case 374u: goto L_004AEF14;
    case 375u: goto L_004AEF20;
    case 376u: goto L_004AEF30;
    case 377u: goto L_004AEF3C;
    case 378u: goto L_004AEF60;
    case 379u: goto L_004AEF6C;
    case 380u: goto L_004AF010;
    case 381u: goto L_004AF050;
    case 382u: goto L_004AF0EC;
    case 383u: goto L_004AF110;
    case 384u: goto L_004AF120;
    case 385u: goto L_004AF160;
    case 386u: goto L_004AF1B0;
    case 387u: goto L_004AF1C8;
    case 388u: goto L_004AF1E0;
    case 389u: goto L_004AF1F4;
    case 390u: goto L_004AF20C;
    case 391u: goto L_004AF23C;
    case 392u: goto L_004AF258;
    case 393u: goto L_004AF264;
    case 394u: goto L_004AF288;
    case 395u: goto L_004AF294;
    case 396u: goto L_004AF2C4;
    case 397u: goto L_004AF320;
    case 398u: goto L_004AF338;
    case 399u: goto L_004AF350;
    case 400u: goto L_004AF364;
    case 401u: goto L_004AF37C;
    case 402u: goto L_004AF3AC;
    case 403u: goto L_004AF3BC;
    case 404u: goto L_004AF430;
    case 405u: goto L_004AF484;
    case 406u: goto L_004AF490;
    case 407u: goto L_004AF4B4;
    case 408u: goto L_004AF4C0;
    case 409u: goto L_004AF4E4;
    case 410u: goto L_004AF508;
    case 411u: goto L_004AF580;
    case 412u: goto L_004AF5A0;
    case 413u: goto L_004AF610;
    case 414u: goto L_004AF61C;
    case 415u: goto L_004AF640;
    case 416u: goto L_004AF64C;
    case 417u: goto L_004AF668;
    case 418u: goto L_004AF674;
    case 419u: goto L_004AF698;
    case 420u: goto L_004AF6A4;
    case 421u: goto L_004AF6B4;
    case 422u: goto L_004AF6CC;
    case 423u: goto L_004AF6D8;
    case 424u: goto L_004AF72C;
    case 425u: goto L_004AF734;
    case 426u: goto L_004AF73C;
    case 427u: goto L_004AF750;
    case 428u: goto L_004AF824;
    case 429u: goto L_004AF854;
    case 430u: goto L_004AF868;
    case 431u: goto L_004AF8A8;
    case 432u: goto L_004AF8CC;
    case 433u: goto L_004AF8F4;
    case 434u: goto L_004AF904;
    case 435u: goto L_004AF924;
    case 436u: goto L_004AF934;
    case 437u: goto L_004AF94C;
    case 438u: goto L_004AF960;
    case 439u: goto L_004AF980;
    case 440u: goto L_004AF9A4;
    case 441u: goto L_004AF9E0;
    case 442u: goto L_004AFA34;
    case 443u: goto L_004AFA4C;
    case 444u: goto L_004AFA64;
    case 445u: goto L_004AFA78;
    case 446u: goto L_004AFA90;
    case 447u: goto L_004AFAC0;
    case 448u: goto L_004AFAF8;
    case 449u: goto L_004AFB04;
    case 450u: goto L_004AFB28;
    case 451u: goto L_004AFB34;
    case 452u: goto L_004AFB54;
    case 453u: goto L_004AFBB8;
    case 454u: goto L_004AFBD0;
    case 455u: goto L_004AFBE8;
    case 456u: goto L_004AFBFC;
    case 457u: goto L_004AFC14;
    case 458u: goto L_004AFC44;
    case 459u: goto L_004AFCD8;
    case 460u: goto L_004AFCE0;
    case 461u: goto L_004AFCE8;
    case 462u: goto L_004AFCFC;
    case 463u: goto L_004AFD40;
    case 464u: goto L_004AFD58;
    case 465u: goto L_004AFD74;
    case 466u: goto L_004AFD8C;
    case 467u: goto L_004AFDA8;
    case 468u: goto L_004AFDE0;
    case 469u: goto L_004AFE08;
    case 470u: goto L_004AFE14;
    case 471u: goto L_004AFE1C;
    case 472u: goto L_004AFE24;
    case 473u: goto L_004AFE50;
    case 474u: goto L_004AFE64;
    case 475u: goto L_004AFE7C;
    case 476u: goto L_004AFEC0;
    case 477u: goto L_004AFED0;
    case 478u: goto L_004AFEE8;
    case 479u: goto L_004AFF18;
    case 480u: goto L_004AFF34;
    case 481u: goto L_004AFF40;
    case 482u: goto L_004AFF58;
    case 483u: goto L_004AFFBC;
    case 484u: goto L_004AFFE0;
    case 485u: goto L_004AFFEC;
    default: bad_entry(c, 0x004AC000u); return;
    }
L_004AC000:
    c.budget -= 1;
L_004AC004:
    set32(c.r[6], ld32((c.r[28].w[0] - 29612u)));
    set32(c.r[5], c.r[3].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC014u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004AC014u) [[unlikely]] return; }
L_004AC014:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004AC028; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004AC028:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC03Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AC03Cu) [[unlikely]] return; }
L_004AC03C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC04Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC04Cu) [[unlikely]] return; }
L_004AC04C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004AC07C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC060u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004AC060u) [[unlikely]] return; }
L_004AC060:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AC07C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC07Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AC07Cu) [[unlikely]] return; }
L_004AC07C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004AC080:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004AC090:
    set32(c.r[3], c.r[5].w[0] + 1000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  c.pc = t; return; }
L_004AC0A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AC100; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 26320u);
    set32(c.r[3], c.r[3].w[0] - 26296u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26284u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC0E8u); st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E8(c, 390u, depth + 1u); else { c.pc = 0x004A3040u; return; } if (c.pc != 0x004AC0E8u) [[unlikely]] return; }
L_004AC0E8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004AC104; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC100u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004AC100u) [[unlikely]] return; }
L_004AC100:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AC104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AC120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC134u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 408u, depth + 1u); else { c.pc = 0x004A31A0u; return; } if (c.pc != 0x004AC134u) [[unlikely]] return; }
L_004AC134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 26320u);
    set32(c.r[3], c.r[3].w[0] - 26296u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26284u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AC180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29600u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004AC19C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004AC1AC; } }
L_004AC19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC1A4u);  if (depth < kMaxDepth) unit_00E8(c, 430u, depth + 1u); else { c.pc = 0x004A33C0u; return; } if (c.pc != 0x004AC1A4u) [[unlikely]] return; }
L_004AC1A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004AC1AC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AC1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC1E4u); set32(c.r[4], c.r[4].w[0] - 5008u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004AC1E4u) [[unlikely]] return; }
L_004AC1E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004AC1F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004AC204; } }
L_004AC1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC1FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 432u, depth + 1u); else { c.pc = 0x004A3400u; return; } if (c.pc != 0x004AC1FCu) [[unlikely]] return; }
L_004AC1FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004AC204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AC220:
    set32(c.r[2], ld32((c.r[28].w[0] - 29636u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004AC230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29600u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004AC24C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004AC254; } }
L_004AC24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC254u);  if (depth < kMaxDepth) unit_00E8(c, 436u, depth + 1u); else { c.pc = 0x004A3470u; return; } if (c.pc != 0x004AC254u) [[unlikely]] return; }
L_004AC254:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AC260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29600u)));  c.pc = t; return; }
L_004AC270:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC0A0u | kUnwind; return; } goto L_004AC0A0; }
L_004AC280:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC1C0u | kUnwind; return; } goto L_004AC1C0; }
L_004AC290:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC180u | kUnwind; return; } goto L_004AC180; }
L_004AC2A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC220u | kUnwind; return; } goto L_004AC220; }
L_004AC2B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC230u | kUnwind; return; } goto L_004AC230; }
L_004AC2C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC260u | kUnwind; return; } goto L_004AC260; }
L_004AC2D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AC0A0u | kUnwind; return; } goto L_004AC0A0; }
L_004AC2E0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004AC308; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004AC300; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004AC300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AC30C; } }
L_004AC308:
    set32(c.r[2], c.r[2].w[0] - 4816u);
    c.budget -= 1;
L_004AC30C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AC320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 4800u);  c.pc = t; return; }
L_004AC330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AC3B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 26128u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004AC398; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004AC398; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 18208u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004AC398; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004AC398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC398u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC398u) [[unlikely]] return; }
L_004AC398:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004AC3B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC3B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004AC3B0u) [[unlikely]] return; }
L_004AC3B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004AC3B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AC3D0:
    set32(c.r[29], c.r[29].w[0] - 576u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 14;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004AC42C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC410u); set32(c.r[4], 0u + 284u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004AC410u) [[unlikely]] return; }
L_004AC410:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = c.r[2].d[0] + 0ull;  goto L_004AC42C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC428u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00EB(c, 191u, depth + 1u); else { c.pc = 0x004AD6C0u; return; } if (c.pc != 0x004AC428u) [[unlikely]] return; }
L_004AC428:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004AC42C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC444u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 155u, depth + 1u); else { c.pc = 0x00192610u; return; } if (c.pc != 0x004AC444u) [[unlikely]] return; }
L_004AC444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC44Cu); set32(c.r[4], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004AC44Cu) [[unlikely]] return; }
L_004AC44C:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4768u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC464u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AC464u) [[unlikely]] return; }
L_004AC464:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AC7A8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC47Cu); set32(c.r[5], c.r[5].w[0] - 4757u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC47Cu) [[unlikely]] return; }
L_004AC47C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC48Cu); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC48Cu) [[unlikely]] return; }
L_004AC48C:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[29].w[0] + 464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC4A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AC4A0u) [[unlikely]] return; }
L_004AC4A0:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 196u));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[2], 0u - 5u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC4CCu); st8((c.r[18].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC4CCu) [[unlikely]] return; }
L_004AC4CC:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC4D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC4D8u) [[unlikely]] return; }
L_004AC4D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC4E8u); set32(c.r[5], c.r[5].w[0] - 4735u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC4E8u) [[unlikely]] return; }
L_004AC4E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC4F8u); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC4F8u) [[unlikely]] return; }
L_004AC4F8:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    set32(c.r[6], c.r[29].w[0] + 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC50Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AC50Cu) [[unlikely]] return; }
L_004AC50C:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 196u));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[2], 0u - 17u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC538u); st8((c.r[18].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC538u) [[unlikely]] return; }
L_004AC538:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC544u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC544u) [[unlikely]] return; }
L_004AC544:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC554u); set32(c.r[5], c.r[5].w[0] - 4725u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC554u) [[unlikely]] return; }
L_004AC554:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC564u); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC564u) [[unlikely]] return; }
L_004AC564:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 416u);
    set32(c.r[6], c.r[29].w[0] + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC578u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AC578u) [[unlikely]] return; }
L_004AC578:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 196u));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[2], 0u - 9u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC5A4u); st8((c.r[18].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC5A4u) [[unlikely]] return; }
L_004AC5A4:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC5B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC5B0u) [[unlikely]] return; }
L_004AC5B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC5C0u); set32(c.r[5], c.r[5].w[0] - 4715u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC5C0u) [[unlikely]] return; }
L_004AC5C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC5D0u); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC5D0u) [[unlikely]] return; }
L_004AC5D0:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC5E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AC5E4u) [[unlikely]] return; }
L_004AC5E4:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 196u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC614u); st8((c.r[18].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC614u) [[unlikely]] return; }
L_004AC614:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC620u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC620u) [[unlikely]] return; }
L_004AC620:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC630u); set32(c.r[5], c.r[5].w[0] - 4697u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC630u) [[unlikely]] return; }
L_004AC630:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC640u); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC640u) [[unlikely]] return; }
L_004AC640:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC654u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AC654u) [[unlikely]] return; }
L_004AC654:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC66Cu); st8((c.r[18].w[0] + 254u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC66Cu) [[unlikely]] return; }
L_004AC66C:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC678u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC678u) [[unlikely]] return; }
L_004AC678:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC688u); set32(c.r[5], c.r[5].w[0] - 4684u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC688u) [[unlikely]] return; }
L_004AC688:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC698u); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC698u) [[unlikely]] return; }
L_004AC698:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC6ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AC6ACu) [[unlikely]] return; }
L_004AC6AC:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC6C8u); st8((c.r[18].w[0] + 253u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC6C8u) [[unlikely]] return; }
L_004AC6C8:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC6D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC6D4u) [[unlikely]] return; }
L_004AC6D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC6E4u); set32(c.r[5], c.r[5].w[0] - 4667u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC6E4u) [[unlikely]] return; }
L_004AC6E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC6F4u); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC6F4u) [[unlikely]] return; }
L_004AC6F4:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC708u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AC708u) [[unlikely]] return; }
L_004AC708:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 196u));
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], 0u - 65u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC734u); st8((c.r[18].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC734u) [[unlikely]] return; }
L_004AC734:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC740u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC740u) [[unlikely]] return; }
L_004AC740:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC750u); set32(c.r[5], c.r[5].w[0] - 4647u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC750u) [[unlikely]] return; }
L_004AC750:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC760u); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AC760u) [[unlikely]] return; }
L_004AC760:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC774u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AC774u) [[unlikely]] return; }
L_004AC774:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC78Cu); c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AC78Cu) [[unlikely]] return; }
L_004AC78C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC798u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC798u) [[unlikely]] return; }
L_004AC798:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC7A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AC7A4u) [[unlikely]] return; }
L_004AC7A4:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004AC7A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4634u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC7BCu); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AC7BCu) [[unlikely]] return; }
L_004AC7BC:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4624u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC7D4u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AC7D4u) [[unlikely]] return; }
L_004AC7D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AC7F0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC7E8u); set32(c.r[5], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0014D0F0u; return; } if (c.pc != 0x004AC7E8u) [[unlikely]] return; }
L_004AC7E8:
    st32((c.r[18].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 2;
L_004AC7F0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4614u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC804u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AC804u) [[unlikely]] return; }
L_004AC804:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AC954; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  goto L_004AC834; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004AC834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AC950; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 552u)));  goto L_004AC848; }
    set32(c.r[4], c.r[29].w[0] + 545u);
    c.budget -= 1;
L_004AC848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC850u); set32(c.r[5], c.r[29].w[0] + 572u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004AC850u) [[unlikely]] return; }
L_004AC850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 516u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 572u));
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 532u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 538u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004AC888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC880u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AC880u) [[unlikely]] return; }
L_004AC880:
    set32(c.r[2], c.r[29].w[0] + 516u);
    st32((c.r[29].w[0] + 532u), c.r[2].w[0]);
    c.budget -= 2;
L_004AC888:
    set32(c.r[2], ld32((c.r[29].w[0] + 532u)));
    set32(c.r[5], c.r[29].w[0] + 516u);
    st32((c.r[2].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 538u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 532u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 516u)));  goto L_004AC8E8; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC8C4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AC8C4u) [[unlikely]] return; }
L_004AC8C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004AC8E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC8DCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AC8DCu) [[unlikely]] return; }
L_004AC8DC:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004AC8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004AC90C; } }
L_004AC8E8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC8F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004AC8F4u) [[unlikely]] return; }
L_004AC8F4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 532u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC908u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AC908u) [[unlikely]] return; }
L_004AC908:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_004AC90C:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC920u); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AC920u) [[unlikely]] return; }
L_004AC920:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 538u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 512u), c.r[3].w[0]);  if (t) { goto L_004AC950; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 532u)));
    set32(c.r[2], c.r[29].w[0] + 516u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004AC950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC950u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AC950u) [[unlikely]] return; }
L_004AC950:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004AC954:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4603u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC968u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AC968u) [[unlikely]] return; }
L_004AC968:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 496u);  goto L_004AC9C0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  goto L_004AC998; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004AC998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AC9BC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 552u)));  goto L_004AC9AC; }
    set32(c.r[4], c.r[29].w[0] + 545u);
    c.budget -= 1;
L_004AC9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC9B4u); set32(c.r[5], c.r[29].w[0] + 568u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004AC9B4u) [[unlikely]] return; }
L_004AC9B4:
    c.f[0] = ld32((c.r[29].w[0] + 568u));
    st32((c.r[18].w[0] + 224u), c.f[0]);
    c.budget -= 2;
L_004AC9BC:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 1;
L_004AC9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC9C8u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004AC9C8u) [[unlikely]] return; }
L_004AC9C8:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4585u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AC9E0u); set32(c.r[7], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AC9E0u) [[unlikely]] return; }
L_004AC9E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004ACA38; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));  goto L_004ACA00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  if (t) { goto L_004ACA08; } }
L_004ACA00:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004ACA08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ACA34; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 496u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 497u);  goto L_004ACA24; }
    set32(c.r[4], ld32((c.r[29].w[0] + 504u)));
    c.budget -= 1;
L_004ACA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACA2Cu); set32(c.r[5], c.r[29].w[0] + 564u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004ACA2Cu) [[unlikely]] return; }
L_004ACA2C:
    c.f[0] = ld32((c.r[29].w[0] + 564u));
    st32((c.r[18].w[0] + 220u), c.f[0]);
    c.budget -= 2;
L_004ACA34:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004ACA38:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4572u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACA4Cu); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004ACA4Cu) [[unlikely]] return; }
L_004ACA4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004ACAA4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  goto L_004ACA7C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004ACA7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ACAA0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 552u)));  goto L_004ACA90; }
    set32(c.r[4], c.r[29].w[0] + 545u);
    c.budget -= 1;
L_004ACA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACA98u); set32(c.r[5], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004ACA98u) [[unlikely]] return; }
L_004ACA98:
    c.f[0] = ld32((c.r[29].w[0] + 560u));
    st32((c.r[18].w[0] + 156u), c.f[0]);
    c.budget -= 2;
L_004ACAA0:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004ACAA4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4559u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACAB8u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004ACAB8u) [[unlikely]] return; }
L_004ACAB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004ACB48; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));  goto L_004ACAD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  if (t) { goto L_004ACAE0; } }
L_004ACAD8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004ACAE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ACB44; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACAF8u); set32(c.r[5], c.r[5].w[0] - 4540u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004ACAF8u) [[unlikely]] return; }
L_004ACAF8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004ACB0C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 248u), c.r[2].w[0]);  if (t) { goto L_004ACB44; } }
L_004ACB0C:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACB18u); set32(c.r[5], c.r[5].w[0] - 4533u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004ACB18u) [[unlikely]] return; }
L_004ACB18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004ACB28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 248u), 0u);  if (t) { goto L_004ACB44; } }
L_004ACB28:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACB34u); set32(c.r[5], c.r[5].w[0] - 4529u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004ACB34u) [[unlikely]] return; }
L_004ACB34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ACB44; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 2;
L_004ACB44:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004ACB48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4522u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACB5Cu); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004ACB5Cu) [[unlikely]] return; }
L_004ACB5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004ACBEC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));  goto L_004ACB7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  if (t) { goto L_004ACB84; } }
L_004ACB7C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004ACB84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ACBE8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACB9Cu); set32(c.r[5], c.r[5].w[0] - 4540u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004ACB9Cu) [[unlikely]] return; }
L_004ACB9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004ACBB0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_004ACBE8; } }
L_004ACBB0:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACBBCu); set32(c.r[5], c.r[5].w[0] - 4503u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004ACBBCu) [[unlikely]] return; }
L_004ACBBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004ACBCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 212u), 0u);  if (t) { goto L_004ACBE8; } }
L_004ACBCC:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACBD8u); set32(c.r[5], c.r[5].w[0] - 4498u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004ACBD8u) [[unlikely]] return; }
L_004ACBD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004ACBE8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_004ACBE8:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004ACBEC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4492u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACC00u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004ACC00u) [[unlikely]] return; }
L_004ACC00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004ACD94; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));  goto L_004ACC20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  if (t) { goto L_004ACC28; } }
L_004ACC20:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004ACC28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ACD90; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACC40u); set32(c.r[5], c.r[5].w[0] - 4503u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ACC40u) [[unlikely]] return; }
L_004ACC40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACC50u); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ACC50u) [[unlikely]] return; }
L_004ACC50:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACC64u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004ACC64u) [[unlikely]] return; }
L_004ACC64:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACC7Cu); st8((c.r[18].w[0] + 262u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ACC7Cu) [[unlikely]] return; }
L_004ACC7C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACC88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ACC88u) [[unlikely]] return; }
L_004ACC88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACC98u); set32(c.r[5], c.r[5].w[0] - 4498u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ACC98u) [[unlikely]] return; }
L_004ACC98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACCA8u); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ACCA8u) [[unlikely]] return; }
L_004ACCA8:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACCBCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004ACCBCu) [[unlikely]] return; }
L_004ACCBC:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACCD4u); st8((c.r[18].w[0] + 263u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ACCD4u) [[unlikely]] return; }
L_004ACCD4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACCE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ACCE0u) [[unlikely]] return; }
L_004ACCE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACCF0u); set32(c.r[5], c.r[5].w[0] - 4533u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ACCF0u) [[unlikely]] return; }
L_004ACCF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD00u); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ACD00u) [[unlikely]] return; }
L_004ACD00:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD14u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004ACD14u) [[unlikely]] return; }
L_004ACD14:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD2Cu); st8((c.r[18].w[0] + 260u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ACD2Cu) [[unlikely]] return; }
L_004ACD2C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ACD38u) [[unlikely]] return; }
L_004ACD38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD48u); set32(c.r[5], c.r[5].w[0] - 4529u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ACD48u) [[unlikely]] return; }
L_004ACD48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD58u); set32(c.r[5], c.r[5].w[0] - 4737u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ACD58u) [[unlikely]] return; }
L_004ACD58:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD6Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004ACD6Cu) [[unlikely]] return; }
L_004ACD6C:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD84u); st8((c.r[18].w[0] + 261u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ACD84u) [[unlikely]] return; }
L_004ACD84:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACD90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ACD90u) [[unlikely]] return; }
L_004ACD90:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004ACD94:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4478u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACDA8u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004ACDA8u) [[unlikely]] return; }
L_004ACDA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 496u);  goto L_004ACDD8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 545u);  goto L_004ACDC4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 552u)));
    c.budget -= 1;
L_004ACDC4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACDD4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ACDD4u) [[unlikely]] return; }
L_004ACDD4:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 1;
L_004ACDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACDE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ACDE0u) [[unlikely]] return; }
L_004ACDE0:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACDECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ACDECu) [[unlikely]] return; }
L_004ACDEC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_004ACE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 136u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_004ACE30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACE50u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 170u, depth + 1u); else { c.pc = 0x001B2E50u; return; } if (c.pc != 0x004ACE50u) [[unlikely]] return; }
L_004ACE50:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 120u)));  goto L_004ACF00; }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACE74u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004ACE74u) [[unlikely]] return; }
L_004ACE74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACE80u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004ACE80u) [[unlikely]] return; }
L_004ACE80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_004ACEA8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004ACEA4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACEA4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004ACEA4u) [[unlikely]] return; }
L_004ACEA4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_004ACEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACEB0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004ACEB0u) [[unlikely]] return; }
L_004ACEB0:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[17].w[0] + 216u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 228u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004ACEFC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACED4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ACED4u) [[unlikely]] return; }
L_004ACED4:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004ACEF4; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 172u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004ACEFC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004ACEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACEFCu);  if (depth < kMaxDepth) unit_00EB(c, 150u, depth + 1u); else { c.pc = 0x004AD0F0u; return; } if (c.pc != 0x004ACEFCu) [[unlikely]] return; }
L_004ACEFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 1;
L_004ACF00:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004AD0C8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACF1Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x004ACF1Cu) [[unlikely]] return; }
L_004ACF1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACF28u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x004ACF28u) [[unlikely]] return; }
L_004ACF28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_004ACF50; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004ACF4C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACF4Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x004ACF4Cu) [[unlikely]] return; }
L_004ACF4C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_004ACF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ACF58u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x004ACF58u) [[unlikely]] return; }
L_004ACF58:
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004ACF90; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 80u));  if (t) { goto L_004ACFA8; } }
L_004ACF90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 6;
L_004ACFA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] << 24);  if (t) { goto L_004ACFDC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 84u));  if (t) { goto L_004ACFF8; } }
L_004ACFDC:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 7;
L_004ACFF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_004AD030; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 88u));  if (t) { goto L_004AD04C; } }
L_004AD030:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 7;
L_004AD04C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_004AD084; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_004AD0A0; } }
L_004AD084:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 7;
L_004AD0A0:
    st32((c.r[17].w[0] + 208u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 252u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AD0C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AD0C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD0C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EB(c, 150u, depth + 1u); else { c.pc = 0x004AD0F0u; return; } if (c.pc != 0x004AD0C4u) [[unlikely]] return; }
L_004AD0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004AD0C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004AD0E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 160u));  c.pc = t; return; }
L_004AD0F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 272u), 0u);
    set32(c.r[18], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004AD118; } }
    set32(c.r[18], c.r[18].w[0] - 72u);
    c.budget -= 1;
L_004AD118:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));  goto L_004AD18C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004AD178; } }
L_004AD128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD130u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004AD130u) [[unlikely]] return; }
L_004AD130:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[16].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004AD178; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD14Cu); set32(c.r[5], ld32((c.r[28].w[0] - 29592u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AD14Cu) [[unlikely]] return; }
L_004AD14C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_004AD174; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[4], c.r[16].w[0] + 264u);
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 124u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD174u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004AD174u) [[unlikely]] return; }
L_004AD174:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004AD178:
    set32(c.r[3], ld32((c.r[18].w[0] + 272u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD128u | kUnwind; return; } goto L_004AD128; }
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004AD18C:
    set32(c.r[3], ld32((c.r[16].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004AD354; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[16].w[0] + 252u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 180u);
    set32(c.r[5], c.r[5].w[0] - 4466u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD1B4u); st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AD1B4u) [[unlikely]] return; }
L_004AD1B4:
    st32((c.r[16].w[0] + 200u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004AD1E0; } }
L_004AD1C8:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD1DCu); set32(c.r[5], c.r[16].w[0] + 196u);  if (depth < kMaxDepth) unit_00EB(c, 468u, depth + 1u); else { c.pc = 0x004AFDE0u; return; } if (c.pc != 0x004AD1DCu) [[unlikely]] return; }
L_004AD1DC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004AD1E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 276u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD1C8u | kUnwind; return; } goto L_004AD1C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD1F8u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004AD1F8u) [[unlikely]] return; }
L_004AD1F8:
    set32(c.r[2], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[5].w[0] - 29952u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD214u); st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AD214u) [[unlikely]] return; }
L_004AD214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 172u));  if (t) { goto L_004AD2FC; } }
L_004AD21C:
    set32(c.r[6], c.r[18].w[0] << 2);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 172u));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[16].w[0] + 180u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD244u); st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004AD244u) [[unlikely]] return; }
L_004AD244:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 140u);
    set32(c.r[6], c.r[16].w[0] + 196u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD258u); set32(c.r[7], c.r[16].w[0] + 172u);  if (depth < kMaxDepth) unit_00EB(c, 412u, depth + 1u); else { c.pc = 0x004AF5A0u; return; } if (c.pc != 0x004AD258u) [[unlikely]] return; }
L_004AD258:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 72u)));  goto L_004AD29C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 96u));
    st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 105u);  goto L_004AD284; }
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_004AD284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD28Cu); set32(c.r[4], c.r[16].w[0] + 180u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AD28Cu) [[unlikely]] return; }
L_004AD28C:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_004AD2D8; } }
L_004AD29C:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 64u));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_004AD2BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_004AD2C0; } }
L_004AD2BC:
    set32(c.r[5], c.r[29].w[0] + 73u);
    c.budget -= 1;
L_004AD2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD2C8u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AD2C8u) [[unlikely]] return; }
L_004AD2C8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 172u));  goto L_004AD2DC; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004AD2D8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 172u));
    c.budget -= 1;
L_004AD2DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 72u);  goto L_004AD2F0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    st32((c.r[16].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
L_004AD2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD2F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AD2F8u) [[unlikely]] return; }
L_004AD2F8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 172u));
    c.budget -= 1;
L_004AD2FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004AD334; }
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 276u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD21Cu | kUnwind; return; } goto L_004AD21C; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AD334; } }
L_004AD320:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD330u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00EB(c, 404u, depth + 1u); else { c.pc = 0x004AF430u; return; } if (c.pc != 0x004AD330u) [[unlikely]] return; }
L_004AD330:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004AD334:
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 276u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD320u | kUnwind; return; } goto L_004AD320; }
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD350u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AD350u) [[unlikely]] return; }
L_004AD350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004AD354:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004AD370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 253u));
    c.r[3].d[0] = c.r[7].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { st8((c.r[4].w[0] + 253u), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_004AD3A4; }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 254u));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[7].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 253u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
L_004AD3A4:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[4].w[0] + 254u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_004AD3EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004AD3F0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 140u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 140u));  goto L_004AD3D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 144u)));  if (t) { goto L_004AD3DC; } }
L_004AD3D4:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 2;
L_004AD3DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AD3EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD3ECu);  if (depth < kMaxDepth) unit_00EB(c, 150u, depth + 1u); else { c.pc = 0x004AD0F0u; return; } if (c.pc != 0x004AD3ECu) [[unlikely]] return; }
L_004AD3EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004AD3F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AD400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD418u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AD418u) [[unlikely]] return; }
L_004AD418:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 136u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 228u)));  goto L_004AD474; }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 49u);  goto L_004AD438; }
    set32(c.r[6], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004AD438:
    set32(c.r[5], ld32((c.r[28].w[0] - 29004u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD448u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 372u, depth + 1u); else { c.pc = 0x00142DF0u; return; } if (c.pc != 0x004AD448u) [[unlikely]] return; }
L_004AD448:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_004AD45C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_004AD45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD464u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AD464u) [[unlikely]] return; }
L_004AD464:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD470u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AD470u) [[unlikely]] return; }
L_004AD470:
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    c.budget -= 1;
L_004AD474:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_004AD4E4; }
    set32(c.r[4], c.r[16].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD488u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004AD488u) [[unlikely]] return; }
L_004AD488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD4E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 140u));  goto L_004AD4A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_004AD4B0; } }
L_004AD4A8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004AD4B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  goto L_004AD4F8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 48u));  goto L_004AD4D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_004AD4D8; } }
L_004AD4D0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004AD4D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AD4F4; } }
L_004AD4E0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_004AD4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD4ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AD4ECu) [[unlikely]] return; }
L_004AD4EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AD528; } }
L_004AD4F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_004AD4F8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004AD508; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004AD508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD510u); set32(c.r[4], c.r[16].w[0] + 140u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AD510u) [[unlikely]] return; }
L_004AD510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD518u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EB(c, 150u, depth + 1u); else { c.pc = 0x004AD0F0u; return; } if (c.pc != 0x004AD518u) [[unlikely]] return; }
L_004AD518:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD524u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AD524u) [[unlikely]] return; }
L_004AD524:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004AD528:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004AD540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004AD560; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD55Cu); st32((c.r[4].w[0] + 228u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00EB(c, 150u, depth + 1u); else { c.pc = 0x004AD0F0u; return; } if (c.pc != 0x004AD55Cu) [[unlikely]] return; }
L_004AD55C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004AD560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AD570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_004AD580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AD6A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 26096u);
    set32(c.r[3], c.r[3].w[0] - 26072u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + 264u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_004AD5F0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 256u);  goto L_004AD5F4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD5F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AD5F0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AD5F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AD5F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD5F0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004AD5F0u) [[unlikely]] return; }
L_004AD5F0:
    set32(c.r[2], c.r[17].w[0] + 256u);
    c.budget -= 1;
L_004AD5F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 196u);  goto L_004AD60C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    st32((c.r[17].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + 196u);
    c.budget -= 4;
L_004AD60C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 172u);  goto L_004AD62C; }
    set32(c.r[4], c.r[17].w[0] + 232u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AD628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD628u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AD628u) [[unlikely]] return; }
L_004AD628:
    set32(c.r[2], c.r[17].w[0] + 172u);
    c.budget -= 1;
L_004AD62C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 140u);  goto L_004AD64C; }
    set32(c.r[4], c.r[17].w[0] + 180u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AD648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD648u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AD648u) [[unlikely]] return; }
L_004AD648:
    set32(c.r[4], c.r[17].w[0] + 140u);
    c.budget -= 1;
L_004AD64C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AD65C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD65Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AD65Cu) [[unlikely]] return; }
L_004AD65C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004AD68C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21824u);
    set32(c.r[2], c.r[2].w[0] - 21800u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B3480u; return; } if (c.pc != 0x004AD688u) [[unlikely]] return; }
L_004AD688:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004AD68C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004AD6A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD6A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004AD6A0u) [[unlikely]] return; }
L_004AD6A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AD6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AD6C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD6E0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 222u, depth + 1u); else { c.pc = 0x001B3670u; return; } if (c.pc != 0x004AD6E0u) [[unlikely]] return; }
L_004AD6E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21824u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 21800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26096u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 26072u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 140u);
    st8((c.r[17].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD728u); set32(c.r[5], c.r[5].w[0] - 4466u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AD728u) [[unlikely]] return; }
L_004AD728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[18], c.r[17].w[0] + 172u);
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 8u);
    st32((c.r[17].w[0] + 160u), 0u);
    st32((c.r[17].w[0] + 164u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD748u); st32((c.r[17].w[0] + 168u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004AD748u) [[unlikely]] return; }
L_004AD748:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[18].w[0] + 8u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD764u); set32(c.r[5], c.r[5].w[0] - 29952u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AD764u) [[unlikely]] return; }
L_004AD764:
    set32(c.r[16], c.r[17].w[0] + 196u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD770u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004AD770u) [[unlikely]] return; }
L_004AD770:
    c.r[6].d[0] = ld8((c.r[16].w[0]));
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 2u);
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[12], 0u - 5u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    set32(c.r[13], c.r[5].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[10], 0u - 9u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[11], c.r[5].w[0] << 3);
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[9], c.r[5].w[0] << 4);
    set32(c.r[8], 0u - 17u);
    set32(c.r[6], 0u - 65u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[14].d[0] = ld8((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.r[3].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[13].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.f[1] = ld32((c.r[2].w[0] - 8804u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 55;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004AD85C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_004AD874; } }
L_004AD85C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 6;
L_004AD874:
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[1] = ld32((c.r[2].w[0] - 8816u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_004AD8AC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] << 16);  if (t) { goto L_004AD8C8; } }
L_004AD8AC:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] << 16);
    c.budget -= 7;
L_004AD8C8:
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[1] = ld32((c.r[2].w[0] - 8812u));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004AD908; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] << 8);  if (t) { goto L_004AD920; } }
L_004AD908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] << 8);
    c.budget -= 6;
L_004AD920:
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[1] = ld32((c.r[2].w[0] - 8808u));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004AD960; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (t) { goto L_004AD978; } }
L_004AD960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 6;
L_004AD978:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD98Cu); set32(c.r[5], c.r[5].w[0] - 29944u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AD98Cu) [[unlikely]] return; }
L_004AD98C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[17].w[0] + 264u);
    st8((c.r[17].w[0] + 252u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 16544u);
    st32((c.r[17].w[0] + 256u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 260u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 261u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 262u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD9BCu); st8((c.r[17].w[0] + 263u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004AD9BCu) [[unlikely]] return; }
L_004AD9BC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004AD9D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD9D0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004AD9D0u) [[unlikely]] return; }
L_004AD9D0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004AD9D4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_004AD9E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AD9E4u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004AD9E4u) [[unlikely]] return; }
L_004AD9E4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004AD9E8:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u - 2u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 12u), 0u);
    st8((c.r[17].w[0] + 280u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 196u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 248u), 0u);
    st8((c.r[17].w[0] + 253u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[17].w[0] + 254u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004ADA2C; } }
    set32(c.r[16], c.r[17].w[0] + 60u);
    c.budget -= 1;
L_004ADA2C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADA38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x004ADA38u) [[unlikely]] return; }
L_004ADA38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADA48u); set32(c.r[5], c.r[5].w[0] - 4465u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x004ADA48u) [[unlikely]] return; }
L_004ADA48:
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    st16((c.r[29].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 68u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_004ADA74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADA68u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004ADA68u) [[unlikely]] return; }
L_004ADA68:
    set32(c.r[2], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
L_004ADA74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADA8Cu); st32((c.r[2].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004ADA8Cu) [[unlikely]] return; }
L_004ADA8C:
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADA9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004ADA9Cu) [[unlikely]] return; }
L_004ADA9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004ADAC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29596u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004ADADC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004ADAEC; } }
L_004ADADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADAE4u);  if (depth < kMaxDepth) unit_001B(c, 175u, depth + 1u); else { c.pc = 0x0016D7A0u; return; } if (c.pc != 0x004ADAE4u) [[unlikely]] return; }
L_004ADAE4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004ADAEC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004ADB00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADB24u); set32(c.r[4], c.r[4].w[0] - 4880u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004ADB24u) [[unlikely]] return; }
L_004ADB24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004ADB34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004ADB44; } }
L_004ADB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADB3Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 177u, depth + 1u); else { c.pc = 0x0016D800u; return; } if (c.pc != 0x004ADB3Cu) [[unlikely]] return; }
L_004ADB3C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004ADB44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004ADB60:
    set32(c.r[2], ld32((c.r[28].w[0] - 30996u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004ADB70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29596u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004ADB8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004ADB94; } }
L_004ADB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADB94u);  if (depth < kMaxDepth) unit_001B(c, 181u, depth + 1u); else { c.pc = 0x0016D8A0u; return; } if (c.pc != 0x004ADB94u) [[unlikely]] return; }
L_004ADB94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004ADBA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29596u)));  c.pc = t; return; }
L_004ADBB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 4848u);  c.pc = t; return; }
L_004ADBC0:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 212u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[4].w[0] + 224u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[4].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 22;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 37u);  goto L_004ADC1C; }
    set32(c.r[5], ld32((c.r[5].w[0] + 44u)));
    c.budget -= 1;
L_004ADC1C:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 232u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105240u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 129u, depth); }
L_004ADC30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 140u);  c.pc = t; return; }
L_004ADC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 164u));  c.pc = t; return; }
L_004ADC50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 228u)));  c.pc = t; return; }
L_004ADC60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004ACE30u | kUnwind; return; } goto L_004ACE30; }
L_004ADC70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AD580u | kUnwind; return; } goto L_004AD580; }
L_004ADC80:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004ADCA8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004ADCA0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004ADCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004ADCAC; } }
L_004ADCA8:
    set32(c.r[2], c.r[2].w[0] - 4280u);
    c.budget -= 1;
L_004ADCAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004ADCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 4272u);  c.pc = t; return; }
L_004ADCD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004ADD50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 25952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004ADD38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004ADD38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 18208u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004ADD38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004ADD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADD38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ADD38u) [[unlikely]] return; }
L_004ADD38:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004ADD54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADD50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004ADD50u) [[unlikely]] return; }
L_004ADD50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004ADD54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004ADD70:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 14;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004ADDCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADDB0u); set32(c.r[4], 0u + 264u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004ADDB0u) [[unlikely]] return; }
L_004ADDB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = c.r[2].d[0] + 0ull;  goto L_004ADDCC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADDC8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00EC(c, 13u, depth + 1u); else { c.pc = 0x004B0210u; return; } if (c.pc != 0x004ADDC8u) [[unlikely]] return; }
L_004ADDC8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004ADDCC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADDE4u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 155u, depth + 1u); else { c.pc = 0x00192610u; return; } if (c.pc != 0x004ADDE4u) [[unlikely]] return; }
L_004ADDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADDECu); set32(c.r[4], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004ADDECu) [[unlikely]] return; }
L_004ADDEC:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE04u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004ADE04u) [[unlikely]] return; }
L_004ADE04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AE148; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE1Cu); set32(c.r[5], c.r[5].w[0] - 4229u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ADE1Cu) [[unlikely]] return; }
L_004ADE1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE2Cu); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ADE2Cu) [[unlikely]] return; }
L_004ADE2C:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[6], c.r[29].w[0] + 464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE40u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004ADE40u) [[unlikely]] return; }
L_004ADE40:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 172u));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[2], 0u - 5u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE6Cu); st8((c.r[18].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ADE6Cu) [[unlikely]] return; }
L_004ADE6C:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ADE78u) [[unlikely]] return; }
L_004ADE78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE88u); set32(c.r[5], c.r[5].w[0] - 4207u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ADE88u) [[unlikely]] return; }
L_004ADE88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADE98u); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ADE98u) [[unlikely]] return; }
L_004ADE98:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    set32(c.r[6], c.r[29].w[0] + 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADEACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004ADEACu) [[unlikely]] return; }
L_004ADEAC:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 172u));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[2], 0u - 17u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADED8u); st8((c.r[18].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ADED8u) [[unlikely]] return; }
L_004ADED8:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADEE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ADEE4u) [[unlikely]] return; }
L_004ADEE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADEF4u); set32(c.r[5], c.r[5].w[0] - 4197u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ADEF4u) [[unlikely]] return; }
L_004ADEF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADF04u); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ADF04u) [[unlikely]] return; }
L_004ADF04:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 416u);
    set32(c.r[6], c.r[29].w[0] + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADF18u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004ADF18u) [[unlikely]] return; }
L_004ADF18:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 172u));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[2], 0u - 9u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADF44u); st8((c.r[18].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ADF44u) [[unlikely]] return; }
L_004ADF44:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADF50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ADF50u) [[unlikely]] return; }
L_004ADF50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADF60u); set32(c.r[5], c.r[5].w[0] - 4187u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ADF60u) [[unlikely]] return; }
L_004ADF60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADF70u); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ADF70u) [[unlikely]] return; }
L_004ADF70:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADF84u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004ADF84u) [[unlikely]] return; }
L_004ADF84:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 172u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADFB4u); st8((c.r[18].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ADFB4u) [[unlikely]] return; }
L_004ADFB4:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADFC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ADFC0u) [[unlikely]] return; }
L_004ADFC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADFD0u); set32(c.r[5], c.r[5].w[0] - 4169u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ADFD0u) [[unlikely]] return; }
L_004ADFD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADFE0u); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004ADFE0u) [[unlikely]] return; }
L_004ADFE0:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ADFF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004ADFF4u) [[unlikely]] return; }
L_004ADFF4:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE00Cu); st8((c.r[18].w[0] + 230u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE00Cu) [[unlikely]] return; }
L_004AE00C:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE018u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE018u) [[unlikely]] return; }
L_004AE018:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE028u); set32(c.r[5], c.r[5].w[0] - 4156u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE028u) [[unlikely]] return; }
L_004AE028:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE038u); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE038u) [[unlikely]] return; }
L_004AE038:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE04Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AE04Cu) [[unlikely]] return; }
L_004AE04C:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE068u); st8((c.r[18].w[0] + 229u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE068u) [[unlikely]] return; }
L_004AE068:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE074u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE074u) [[unlikely]] return; }
L_004AE074:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE084u); set32(c.r[5], c.r[5].w[0] - 4139u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE084u) [[unlikely]] return; }
L_004AE084:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE094u); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE094u) [[unlikely]] return; }
L_004AE094:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE0A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AE0A8u) [[unlikely]] return; }
L_004AE0A8:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 172u));
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], 0u - 65u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE0D4u); st8((c.r[18].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE0D4u) [[unlikely]] return; }
L_004AE0D4:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE0E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE0E0u) [[unlikely]] return; }
L_004AE0E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE0F0u); set32(c.r[5], c.r[5].w[0] - 4119u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE0F0u) [[unlikely]] return; }
L_004AE0F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE100u); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE100u) [[unlikely]] return; }
L_004AE100:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE114u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AE114u) [[unlikely]] return; }
L_004AE114:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE12Cu); c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AE12Cu) [[unlikely]] return; }
L_004AE12C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE138u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE138u) [[unlikely]] return; }
L_004AE138:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE144u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE144u) [[unlikely]] return; }
L_004AE144:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004AE148:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4106u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE15Cu); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AE15Cu) [[unlikely]] return; }
L_004AE15C:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE174u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AE174u) [[unlikely]] return; }
L_004AE174:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AE1D0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  goto L_004AE1A4; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004AE1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AE1CC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 552u)));  goto L_004AE1B8; }
    set32(c.r[4], c.r[29].w[0] + 545u);
    c.budget -= 1;
L_004AE1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE1C0u); set32(c.r[5], c.r[29].w[0] + 588u);  if (depth < kMaxDepth) unit_000F(c, 313u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x004AE1C0u) [[unlikely]] return; }
L_004AE1C0:
    set32(c.r[5], ld32((c.r[29].w[0] + 588u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE1CCu); set32(c.r[4], c.r[18].w[0] + 240u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004AE1CCu) [[unlikely]] return; }
L_004AE1CC:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004AE1D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4081u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE1E4u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AE1E4u) [[unlikely]] return; }
L_004AE1E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AE200; }
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE1F8u); set32(c.r[5], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0014D0F0u; return; } if (c.pc != 0x004AE1F8u) [[unlikely]] return; }
L_004AE1F8:
    st32((c.r[18].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 2;
L_004AE200:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4071u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE214u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AE214u) [[unlikely]] return; }
L_004AE214:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AE364; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  goto L_004AE244; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004AE244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AE360; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 552u)));  goto L_004AE258; }
    set32(c.r[4], c.r[29].w[0] + 545u);
    c.budget -= 1;
L_004AE258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE260u); set32(c.r[5], c.r[29].w[0] + 584u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004AE260u) [[unlikely]] return; }
L_004AE260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 516u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 584u));
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 532u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 538u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004AE298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE290u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AE290u) [[unlikely]] return; }
L_004AE290:
    set32(c.r[2], c.r[29].w[0] + 516u);
    st32((c.r[29].w[0] + 532u), c.r[2].w[0]);
    c.budget -= 2;
L_004AE298:
    set32(c.r[2], ld32((c.r[29].w[0] + 532u)));
    set32(c.r[5], c.r[29].w[0] + 516u);
    st32((c.r[2].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 538u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 532u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 516u)));  goto L_004AE2F8; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE2D4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AE2D4u) [[unlikely]] return; }
L_004AE2D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004AE2F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE2ECu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AE2ECu) [[unlikely]] return; }
L_004AE2EC:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004AE2F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004AE31C; } }
L_004AE2F8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE304u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004AE304u) [[unlikely]] return; }
L_004AE304:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 532u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE318u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AE318u) [[unlikely]] return; }
L_004AE318:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_004AE31C:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE330u); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AE330u) [[unlikely]] return; }
L_004AE330:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 538u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 512u), c.r[3].w[0]);  if (t) { goto L_004AE360; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 532u)));
    set32(c.r[2], c.r[29].w[0] + 516u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004AE360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE360u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AE360u) [[unlikely]] return; }
L_004AE360:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004AE364:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4060u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE378u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AE378u) [[unlikely]] return; }
L_004AE378:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 496u);  goto L_004AE3D0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  goto L_004AE3A8; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004AE3A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AE3CC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 552u)));  goto L_004AE3BC; }
    set32(c.r[4], c.r[29].w[0] + 545u);
    c.budget -= 1;
L_004AE3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE3C4u); set32(c.r[5], c.r[29].w[0] + 580u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004AE3C4u) [[unlikely]] return; }
L_004AE3C4:
    c.f[0] = ld32((c.r[29].w[0] + 580u));
    st32((c.r[18].w[0] + 200u), c.f[0]);
    c.budget -= 2;
L_004AE3CC:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 1;
L_004AE3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE3D8u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004AE3D8u) [[unlikely]] return; }
L_004AE3D8:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4042u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE3F0u); set32(c.r[7], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AE3F0u) [[unlikely]] return; }
L_004AE3F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AE448; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));  goto L_004AE410; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  if (t) { goto L_004AE418; } }
L_004AE410:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004AE418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AE444; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 496u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 497u);  goto L_004AE434; }
    set32(c.r[4], ld32((c.r[29].w[0] + 504u)));
    c.budget -= 1;
L_004AE434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE43Cu); set32(c.r[5], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004AE43Cu) [[unlikely]] return; }
L_004AE43C:
    c.f[0] = ld32((c.r[29].w[0] + 576u));
    st32((c.r[18].w[0] + 196u), c.f[0]);
    c.budget -= 2;
L_004AE444:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004AE448:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4029u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE45Cu); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AE45Cu) [[unlikely]] return; }
L_004AE45C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AE4B4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  goto L_004AE48C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004AE48C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AE4B0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 552u)));  goto L_004AE4A0; }
    set32(c.r[4], c.r[29].w[0] + 545u);
    c.budget -= 1;
L_004AE4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE4A8u); set32(c.r[5], c.r[29].w[0] + 572u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004AE4A8u) [[unlikely]] return; }
L_004AE4A8:
    c.f[0] = ld32((c.r[29].w[0] + 572u));
    st32((c.r[18].w[0] + 156u), c.f[0]);
    c.budget -= 2;
L_004AE4B0:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004AE4B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 4016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE4C8u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AE4C8u) [[unlikely]] return; }
L_004AE4C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AE558; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));  goto L_004AE4E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  if (t) { goto L_004AE4F0; } }
L_004AE4E8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004AE4F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AE554; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE508u); set32(c.r[5], c.r[5].w[0] - 3997u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004AE508u) [[unlikely]] return; }
L_004AE508:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004AE51C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_004AE554; } }
L_004AE51C:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE528u); set32(c.r[5], c.r[5].w[0] - 3990u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004AE528u) [[unlikely]] return; }
L_004AE528:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004AE538; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 224u), 0u);  if (t) { goto L_004AE554; } }
L_004AE538:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE544u); set32(c.r[5], c.r[5].w[0] - 3986u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004AE544u) [[unlikely]] return; }
L_004AE544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AE554; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 2;
L_004AE554:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004AE558:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 3979u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE56Cu); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AE56Cu) [[unlikely]] return; }
L_004AE56C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AE5FC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));  goto L_004AE58C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  if (t) { goto L_004AE594; } }
L_004AE58C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004AE594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AE5F8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE5ACu); set32(c.r[5], c.r[5].w[0] - 3997u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004AE5ACu) [[unlikely]] return; }
L_004AE5AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004AE5C0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_004AE5F8; } }
L_004AE5C0:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE5CCu); set32(c.r[5], c.r[5].w[0] - 3960u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004AE5CCu) [[unlikely]] return; }
L_004AE5CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004AE5DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 188u), 0u);  if (t) { goto L_004AE5F8; } }
L_004AE5DC:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE5E8u); set32(c.r[5], c.r[5].w[0] - 3955u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004AE5E8u) [[unlikely]] return; }
L_004AE5E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AE5F8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 2;
L_004AE5F8:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004AE5FC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 3949u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE610u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AE610u) [[unlikely]] return; }
L_004AE610:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 100u)));  goto L_004AE7A4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 544u));  goto L_004AE630; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 548u)));  if (t) { goto L_004AE638; } }
L_004AE630:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004AE638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AE7A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE650u); set32(c.r[5], c.r[5].w[0] - 3960u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE650u) [[unlikely]] return; }
L_004AE650:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE660u); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE660u) [[unlikely]] return; }
L_004AE660:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE674u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AE674u) [[unlikely]] return; }
L_004AE674:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE68Cu); st8((c.r[18].w[0] + 238u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE68Cu) [[unlikely]] return; }
L_004AE68C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE698u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE698u) [[unlikely]] return; }
L_004AE698:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE6A8u); set32(c.r[5], c.r[5].w[0] - 3955u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE6A8u) [[unlikely]] return; }
L_004AE6A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE6B8u); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE6B8u) [[unlikely]] return; }
L_004AE6B8:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE6CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AE6CCu) [[unlikely]] return; }
L_004AE6CC:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE6E4u); st8((c.r[18].w[0] + 239u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE6E4u) [[unlikely]] return; }
L_004AE6E4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE6F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE6F0u) [[unlikely]] return; }
L_004AE6F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE700u); set32(c.r[5], c.r[5].w[0] - 3990u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE700u) [[unlikely]] return; }
L_004AE700:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE710u); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE710u) [[unlikely]] return; }
L_004AE710:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE724u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AE724u) [[unlikely]] return; }
L_004AE724:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE73Cu); st8((c.r[18].w[0] + 236u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE73Cu) [[unlikely]] return; }
L_004AE73C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE748u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE748u) [[unlikely]] return; }
L_004AE748:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE758u); set32(c.r[5], c.r[5].w[0] - 3986u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE758u) [[unlikely]] return; }
L_004AE758:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE768u); set32(c.r[5], c.r[5].w[0] - 4209u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AE768u) [[unlikely]] return; }
L_004AE768:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE77Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x004AE77Cu) [[unlikely]] return; }
L_004AE77C:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE794u); st8((c.r[18].w[0] + 237u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE794u) [[unlikely]] return; }
L_004AE794:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE7A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE7A0u) [[unlikely]] return; }
L_004AE7A0:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 1;
L_004AE7A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 3935u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE7B8u); set32(c.r[7], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004AE7B8u) [[unlikely]] return; }
L_004AE7B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 496u);  goto L_004AE7E8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 545u);  goto L_004AE7D4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 552u)));
    c.budget -= 1;
L_004AE7D4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE7E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AE7E4u) [[unlikely]] return; }
L_004AE7E4:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 1;
L_004AE7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE7F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE7F0u) [[unlikely]] return; }
L_004AE7F0:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE7FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AE7FCu) [[unlikely]] return; }
L_004AE7FC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_004AE830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 136u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_004AE840:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE870u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002C(c, 170u, depth + 1u); else { c.pc = 0x001B2E50u; return; } if (c.pc != 0x004AE870u) [[unlikely]] return; }
L_004AE870:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 120u)));  goto L_004AE8E4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE894u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004AE894u) [[unlikely]] return; }
L_004AE894:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE8A0u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004AE8A0u) [[unlikely]] return; }
L_004AE8A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_004AE8C8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AE8C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE8C4u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004AE8C4u) [[unlikely]] return; }
L_004AE8C4:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 1;
L_004AE8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE8D0u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004AE8D0u) [[unlikely]] return; }
L_004AE8D0:
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE8E0u); st32((c.r[20].w[0] + 192u), c.f[0]);  if (depth < kMaxDepth) unit_00EB(c, 367u, depth + 1u); else { c.pc = 0x004AEE50u; return; } if (c.pc != 0x004AE8E0u) [[unlikely]] return; }
L_004AE8E0:
    set32(c.r[3], ld32((c.r[20].w[0] + 120u)));
    c.budget -= 1;
L_004AE8E4:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 124u)));  goto L_004AEC64; }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE900u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x004AE900u) [[unlikely]] return; }
L_004AE900:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE90Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x004AE90Cu) [[unlikely]] return; }
L_004AE90C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_004AE934; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AE930; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE930u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x004AE930u) [[unlikely]] return; }
L_004AE930:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_004AE934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AE93Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x004AE93Cu) [[unlikely]] return; }
L_004AE93C:
    c.f[1] = ld32((c.r[29].w[0] + 188u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004AE974; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 176u));  if (t) { goto L_004AE98C; } }
L_004AE974:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 6;
L_004AE98C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] << 24);  if (t) { goto L_004AE9C0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 180u));  if (t) { goto L_004AE9DC; } }
L_004AE9C0:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 7;
L_004AE9DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_004AEA14; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 184u));  if (t) { goto L_004AEA30; } }
L_004AEA14:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 7;
L_004AEA30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_004AEA68; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_004AEA84; } }
L_004AEA68:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 7;
L_004AEA84:
    st32((c.r[20].w[0] + 184u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 228u));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_004AEC50; }
    set32(c.r[3], ld32((c.r[20].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004AEC60; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AEC50; } }
L_004AEAAC:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004AEC50; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEAF8u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x004AEAF8u) [[unlikely]] return; }
L_004AEAF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEB04u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x004AEB04u) [[unlikely]] return; }
L_004AEB04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_004AEB2C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AEB28; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEB28u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x004AEB28u) [[unlikely]] return; }
L_004AEB28:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_004AEB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEB34u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x004AEB34u) [[unlikely]] return; }
L_004AEB34:
    set32(c.r[2], 0u + 64u);
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 212u)));  goto L_004AEB60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEB54u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AEB54u) [[unlikely]] return; }
L_004AEB54:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
L_004AEB60:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[5], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 252u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[22], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 21;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 196u)));  goto L_004AEBE4; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEBC0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AEBC0u) [[unlikely]] return; }
L_004AEBC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004AEBDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEBD8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AEBD8u) [[unlikely]] return; }
L_004AEBD8:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004AEBDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004AEC08; } }
L_004AEBE4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEBF0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004AEBF0u) [[unlikely]] return; }
L_004AEBF0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC04u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AEC04u) [[unlikely]] return; }
L_004AEC04:
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_004AEC08:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC1Cu); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AEC1Cu) [[unlikely]] return; }
L_004AEC1C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[4].w[0]);  if (t) { goto L_004AEC4C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004AEC4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC4Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AEC4Cu) [[unlikely]] return; }
L_004AEC4C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004AEC50:
    set32(c.r[3], ld32((c.r[20].w[0] + 248u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 252u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AEAACu | kUnwind; return; } goto L_004AEAAC; }
L_004AEC60:
    set32(c.r[3], ld32((c.r[20].w[0] + 124u)));
    c.budget -= 1;
L_004AEC64:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_004AECF8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC88u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004AEC88u) [[unlikely]] return; }
L_004AEC88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEC94u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004AEC94u) [[unlikely]] return; }
L_004AEC94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 288u);  goto L_004AECBC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AECB8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AECB8u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004AECB8u) [[unlikely]] return; }
L_004AECB8:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 1;
L_004AECBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AECC4u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004AECC4u) [[unlikely]] return; }
L_004AECC4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], 0u - 1u);  goto L_004AECE0; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_004AECE0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AECECu); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_00EB(c, 381u, depth + 1u); else { c.pc = 0x004AF050u; return; } if (c.pc != 0x004AECECu) [[unlikely]] return; }
L_004AECEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AECF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EB(c, 367u, depth + 1u); else { c.pc = 0x004AEE50u; return; } if (c.pc != 0x004AECF4u) [[unlikely]] return; }
L_004AECF4:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_004AECF8:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_004AED1C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_004AED18; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 132u)));  goto L_004AED28; }
L_004AED18:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_004AED1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AED24u);  if (depth < kMaxDepth) unit_00EB(c, 367u, depth + 1u); else { c.pc = 0x004AEE50u; return; } if (c.pc != 0x004AED24u) [[unlikely]] return; }
L_004AED24:
    set32(c.r[3], ld32((c.r[20].w[0] + 132u)));
    c.budget -= 1;
L_004AED28:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_004AEE2C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AED44u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004AED44u) [[unlikely]] return; }
L_004AED44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AED50u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004AED50u) [[unlikely]] return; }
L_004AED50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 272u);  goto L_004AED78; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AED74; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AED74u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004AED74u) [[unlikely]] return; }
L_004AED74:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_004AED78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AED80u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004AED80u) [[unlikely]] return; }
L_004AED80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004AEE18; } }
L_004AED88:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004AEE18; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEDACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AEDACu) [[unlikely]] return; }
L_004AEDAC:
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[3], 0u - 9u);
    c.f[1] = ld32((c.r[2].w[0] + 28u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.f[4] = ld32((c.r[29].w[0] + 276u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[5] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[4] = fp::add(c.f[5], c.f[4]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[2].w[0] + 20u), c.f[4]);
    st32((c.r[2].w[0] + 24u), c.f[2]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 104u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 252u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEE14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AEE14u) [[unlikely]] return; }
L_004AEE14:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004AEE18:
    set32(c.r[3], ld32((c.r[20].w[0] + 248u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 252u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AED88u | kUnwind; return; } goto L_004AED88; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_004AEE2C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_004AEE50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEE8Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004AEE8Cu) [[unlikely]] return; }
L_004AEE8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEE98u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004AEE98u) [[unlikely]] return; }
L_004AEE98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_004AEEC0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AEEBC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEEBCu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004AEEBCu) [[unlikely]] return; }
L_004AEEBC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_004AEEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEEC8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004AEEC8u) [[unlikely]] return; }
L_004AEEC8:
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEEE4u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004AEEE4u) [[unlikely]] return; }
L_004AEEE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEEF0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004AEEF0u) [[unlikely]] return; }
L_004AEEF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_004AEF18; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AEF14; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEF14u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004AEF14u) [[unlikely]] return; }
L_004AEF14:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_004AEF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEF20u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004AEF20u) [[unlikely]] return; }
L_004AEF20:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEF30u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AEF30u) [[unlikely]] return; }
L_004AEF30:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004AF014; } }
L_004AEF3C:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004AF014; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEF60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AEF60u) [[unlikely]] return; }
L_004AEF60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AEF6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 180u, depth + 1u); else { c.pc = 0x001A6D80u; return; } if (c.pc != 0x004AEF6Cu) [[unlikely]] return; }
L_004AEF6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 104u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u - 5u);
    fpu_div(c, 6u, c.f[0], c.f[20]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[3], 0u - 3u);
    c.r[7].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[3] = ld32((c.r[29].w[0] + 152u));
    c.f[5] = fp::mul(c.f[0], c.f[6]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[4] = ld32((c.r[29].w[0] + 132u));
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[4] = fp::add(c.f[4], c.f[5]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 76u), c.f[4]);
    st32((c.r[16].w[0] + 80u), c.f[2]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 41;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF010u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AF010u) [[unlikely]] return; }
L_004AF010:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004AF014:
    set32(c.r[3], ld32((c.r[19].w[0] + 248u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 252u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AEF3Cu | kUnwind; return; } goto L_004AEF3C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004AF050:
    set32(c.r[29], c.r[29].w[0] - 256u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 224u)));
    c.f[20] = 0u;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004AF0A8; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[21].w[0] + 164u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_004AF0D0; } }
L_004AF0A8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 124u)));  goto L_004AF0D4; }
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[21].w[0] + 164u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 7;
L_004AF0D0:
    set32(c.r[3], ld32((c.r[21].w[0] + 124u)));
    c.budget -= 1;
L_004AF0D4:
    set32(c.r[5], c.r[29].w[0] + 252u);
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF0ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004AF0ECu) [[unlikely]] return; }
L_004AF0EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[21] = ld32((c.r[29].w[0] + 252u));  goto L_004AF114; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004AF110; } }
    c.f[12] = ld32((c.r[29].w[0] + 252u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004AF110u) [[unlikely]] return; }
L_004AF110:
    c.f[21] = ld32((c.r[29].w[0] + 252u));
    c.budget -= 1;
L_004AF114:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[20], c.f[21]);  if (t) { goto L_004AF3EC; } }
L_004AF120:
    set32(c.r[16], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[19].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_004AF3EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004AF168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AF160u) [[unlikely]] return; }
L_004AF160:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_004AF168:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[5], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[3], ld32((c.r[21].w[0] + 252u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[22], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[29].w[0] + 196u)));  goto L_004AF1D4; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF1B0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AF1B0u) [[unlikely]] return; }
L_004AF1B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004AF1CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF1C8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AF1C8u) [[unlikely]] return; }
L_004AF1C8:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004AF1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004AF1F8; } }
L_004AF1D4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF1E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004AF1E0u) [[unlikely]] return; }
L_004AF1E0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF1F4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AF1F4u) [[unlikely]] return; }
L_004AF1F4:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_004AF1F8:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF20Cu); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AF20Cu) [[unlikely]] return; }
L_004AF20C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_004AF23C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 52u)));  goto L_004AF240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF23Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AF23Cu) [[unlikely]] return; }
L_004AF23C:
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 1;
L_004AF240:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF258u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004AF258u) [[unlikely]] return; }
L_004AF258:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF264u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004AF264u) [[unlikely]] return; }
L_004AF264:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_004AF28C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AF288; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF288u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004AF288u) [[unlikely]] return; }
L_004AF288:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_004AF28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF294u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004AF294u) [[unlikely]] return; }
L_004AF294:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 244u), c.f[20]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 180u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004AF2CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF2C4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AF2C4u) [[unlikely]] return; }
L_004AF2C4:
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 2;
L_004AF2CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[5], c.r[29].w[0] + 164u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[18], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[22], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 18;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 164u)));  goto L_004AF344; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF320u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AF320u) [[unlikely]] return; }
L_004AF320:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004AF33C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF338u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AF338u) [[unlikely]] return; }
L_004AF338:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004AF33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004AF368; } }
L_004AF344:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF350u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004AF350u) [[unlikely]] return; }
L_004AF350:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF364u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AF364u) [[unlikely]] return; }
L_004AF364:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004AF368:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF37Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AF37Cu) [[unlikely]] return; }
L_004AF37C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_004AF3AC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_004AF3B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF3ACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AF3ACu) [[unlikely]] return; }
L_004AF3AC:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_004AF3B0:
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF3BCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AF3BCu) [[unlikely]] return; }
L_004AF3BC:
    c.f[2] = ld32((c.r[21].w[0] + 156u));
    c.f[1] = ld32((c.r[2].w[0] + 100u));
    c.f[0] = c.r[23].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[20]);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 12;
L_004AF3EC:
    set32(c.r[3], ld32((c.r[21].w[0] + 248u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 252u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AF120u | kUnwind; return; } goto L_004AF120; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_004AF430:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004AF464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_004AF468; } }
L_004AF464:
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_004AF468:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF484u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004AF484u) [[unlikely]] return; }
L_004AF484:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF490u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004AF490u) [[unlikely]] return; }
L_004AF490:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_004AF4B8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AF4B4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF4B4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004AF4B4u) [[unlikely]] return; }
L_004AF4B4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_004AF4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF4C0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004AF4C0u) [[unlikely]] return; }
L_004AF4C0:
    c.f[0] = ld32((c.r[17].w[0] + 260u));
    set32(c.r[5], c.r[29].w[0] + 92u);
    st32((c.r[17].w[0] + 164u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF4E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004AF4E4u) [[unlikely]] return; }
L_004AF4E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[29].w[0] + 92u));  goto L_004AF50C; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004AF508; } }
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF508u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004AF508u) [[unlikely]] return; }
L_004AF508:
    c.f[2] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 1;
L_004AF50C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004AF574; }
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004AF584; }
    fpu_div(c, 0u, c.f[1], c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004AF580; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AF580; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AF574:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF580u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00EB(c, 381u, depth + 1u); else { c.pc = 0x004AF050u; return; } if (c.pc != 0x004AF580u) [[unlikely]] return; }
L_004AF580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004AF584:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004AF5A0:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004AF5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_004AF5F4; } }
L_004AF5F0:
    set32(c.r[19], 0u - 1u);
    c.budget -= 1;
L_004AF5F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF610u); set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004AF610u) [[unlikely]] return; }
L_004AF610:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF61Cu); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004AF61Cu) [[unlikely]] return; }
L_004AF61C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 512u);  goto L_004AF644; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AF640; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF640u); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004AF640u) [[unlikely]] return; }
L_004AF640:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 1;
L_004AF644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF64Cu); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004AF64Cu) [[unlikely]] return; }
L_004AF64C:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF668u); set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004AF668u) [[unlikely]] return; }
L_004AF668:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF674u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004AF674u) [[unlikely]] return; }
L_004AF674:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 496u);  goto L_004AF69C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AF698; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF698u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004AF698u) [[unlikely]] return; }
L_004AF698:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 1;
L_004AF69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF6A4u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004AF6A4u) [[unlikely]] return; }
L_004AF6A4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF6B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AF6B4u) [[unlikely]] return; }
L_004AF6B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_004AF6CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_004AF6D0; } }
L_004AF6CC:
    set32(c.r[5], c.r[16].w[0] + 9u);
    c.budget -= 1;
L_004AF6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF6D8u); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AF6D8u) [[unlikely]] return; }
L_004AF6D8:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 230u));
    set32(c.r[5], 0u - 3u);
    c.r[7].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[20], c.r[29].w[0] + 336u);
    c.r[6].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], 0u - 1u);
    c.f[0] = ld32((c.r[29].w[0] + 496u));
    fpu_div(c, 0u, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF72Cu); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002B(c, 9u, depth + 1u); else { c.pc = 0x001AC370u; return; } if (c.pc != 0x004AF72Cu) [[unlikely]] return; }
L_004AF72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF734u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_002B(c, 6u, depth + 1u); else { c.pc = 0x001AC1D0u; return; } if (c.pc != 0x004AF734u) [[unlikely]] return; }
L_004AF734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF73Cu); set32(c.r[4], c.r[20].w[0] + 104u);  if (depth < kMaxDepth) unit_002B(c, 5u, depth + 1u); else { c.pc = 0x001AC0E0u; return; } if (c.pc != 0x004AF73Cu) [[unlikely]] return; }
L_004AF73C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF750u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 8u, depth + 1u); else { c.pc = 0x00150180u; return; } if (c.pc != 0x004AF750u) [[unlikely]] return; }
L_004AF750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 228u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u - 3u);
    fpu_div(c, 3u, c.f[0], c.f[20]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 392u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[18].w[0] + 228u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 5u);
    c.r[8].d[0] = ld8((c.r[29].w[0] + 440u));
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = ld32((c.r[29].w[0] + 496u));
    c.f[1] = ld32((c.r[29].w[0] + 500u));
    c.f[0] = ld32((c.r[29].w[0] + 504u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[6] = ld32((c.r[29].w[0] + 512u));
    c.f[5] = ld32((c.r[29].w[0] + 516u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[4] = ld32((c.r[29].w[0] + 520u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[2] = fp::add(c.f[6], c.f[2]);
    c.f[1] = fp::add(c.f[5], c.f[1]);
    c.f[0] = fp::add(c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 396u), c.f[6]);
    st32((c.r[29].w[0] + 400u), c.f[5]);
    st32((c.r[29].w[0] + 404u), c.f[4]);
    st32((c.r[29].w[0] + 408u), c.f[2]);
    st32((c.r[29].w[0] + 412u), c.f[1]);
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 237u));
    st8((c.r[29].w[0] + 425u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[18].w[0] + 238u));
    st8((c.r[29].w[0] + 426u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[18].w[0] + 239u));
    st8((c.r[29].w[0] + 427u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[18].w[0] + 236u));
    st8((c.r[29].w[0] + 440u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 440u));
    st8((c.r[29].w[0] + 424u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[29].w[0] + 440u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 440u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[29].w[0] + 440u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF824u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0013(c, 84u, depth + 1u); else { c.pc = 0x0014CB80u; return; } if (c.pc != 0x004AF824u) [[unlikely]] return; }
L_004AF824:
    set32(c.r[16], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004AF834; } }
    set32(c.r[16], c.r[16].w[0] + 1432u);
    c.budget -= 1;
L_004AF834:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004AF85C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF854u); st32((c.r[29].w[0] + 420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x004AF854u) [[unlikely]] return; }
L_004AF854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004AFDAC; } }
L_004AF85C:
    set32(c.r[4], c.r[16].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF868u); set32(c.r[5], c.r[5].w[0] - 3923u);  if (depth < kMaxDepth) unit_0023(c, 112u, depth + 1u); else { c.pc = 0x0018DCE0u; return; } if (c.pc != 0x004AF868u) [[unlikely]] return; }
L_004AF868:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_004AF888; }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
L_004AF888:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[29].w[0] + 524u), 0u);  goto L_004AF8B0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF8A8u); st32((c.r[29].w[0] + 420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x004AF8A8u) [[unlikely]] return; }
L_004AF8A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004AFDAC; } }
L_004AF8B0:
    set32(c.r[5], ld32((c.r[18].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 240u);  goto L_004AF92C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF8CCu); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0013(c, 84u, depth + 1u); else { c.pc = 0x0014CB80u; return; } if (c.pc != 0x004AF8CCu) [[unlikely]] return; }
L_004AF8CC:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 480u), c.f[1]);
    st32((c.r[29].w[0] + 488u), 0u);
    st32((c.r[29].w[0] + 484u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 168u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF8F4u); set32(c.r[8], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_002B(c, 86u, depth + 1u); else { c.pc = 0x001ADA60u; return; } if (c.pc != 0x004AF8F4u) [[unlikely]] return; }
L_004AF8F4:
    st32((c.r[29].w[0] + 524u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF904u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 246u, depth + 1u); else { c.pc = 0x001A7D10u; return; } if (c.pc != 0x004AF904u) [[unlikely]] return; }
L_004AF904:
    set32(c.r[3], ld32((c.r[18].w[0] + 248u)));
    set32(c.r[4], c.r[18].w[0] + 240u);
    set32(c.r[2], ld32((c.r[18].w[0] + 252u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 524u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF924u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004AF924u) [[unlikely]] return; }
L_004AF924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 256u)));  if (t) { goto L_004AF964; } }
L_004AF92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF934u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x004AF934u) [[unlikely]] return; }
L_004AF934:
    set32(c.r[4], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 524u), c.r[4].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF94Cu); set32(c.r[5], c.r[29].w[0] + 336u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AF94Cu) [[unlikely]] return; }
L_004AF94C:
    set32(c.r[4], ld32((c.r[29].w[0] + 524u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF960u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AF960u) [[unlikely]] return; }
L_004AF960:
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    c.budget -= 1;
L_004AF964:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 524u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF980u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AF980u) [[unlikely]] return; }
L_004AF980:
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004AF9A8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 524u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF9A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AF9A4u) [[unlikely]] return; }
L_004AF9A4:
    st32((c.r[18].w[0] + 160u), c.f[0]);
    c.budget -= 1;
L_004AF9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 308u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 328u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 324u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 330u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[20] = ld32((c.r[18].w[0] + 260u));
    set32(c.r[2], 0u + 16u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 330u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004AF9E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AF9E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AF9E0u) [[unlikely]] return; }
L_004AF9E0:
    set32(c.r[2], c.r[29].w[0] + 308u);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 2;
L_004AF9E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[5], c.r[29].w[0] + 308u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 524u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 308u)));  goto L_004AFA58; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFA34u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AFA34u) [[unlikely]] return; }
L_004AFA34:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004AFA50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFA4Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AFA4Cu) [[unlikely]] return; }
L_004AFA4C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004AFA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004AFA7C; } }
L_004AFA58:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFA64u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004AFA64u) [[unlikely]] return; }
L_004AFA64:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFA78u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AFA78u) [[unlikely]] return; }
L_004AFA78:
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_004AFA7C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFA90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AFA90u) [[unlikely]] return; }
L_004AFA90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_004AFAC0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004AFAC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFAC0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AFAC0u) [[unlikely]] return; }
L_004AFAC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[29].w[0] + 296u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 298u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 276u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFAF8u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x004AFAF8u) [[unlikely]] return; }
L_004AFAF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFB04u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x004AFB04u) [[unlikely]] return; }
L_004AFB04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_004AFB2C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AFB28; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFB28u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x004AFB28u) [[unlikely]] return; }
L_004AFB28:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_004AFB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFB34u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x004AFB34u) [[unlikely]] return; }
L_004AFB34:
    set32(c.r[2], 0u + 64u);
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    st16((c.r[29].w[0] + 298u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 292u)));  goto L_004AFB60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFB54u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AFB54u) [[unlikely]] return; }
L_004AFB54:
    set32(c.r[2], c.r[29].w[0] + 276u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
L_004AFB60:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[5], c.r[29].w[0] + 276u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 524u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[20].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 19;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 276u)));  goto L_004AFBDC; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFBB8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AFBB8u) [[unlikely]] return; }
L_004AFBB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004AFBD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFBD0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AFBD0u) [[unlikely]] return; }
L_004AFBD0:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004AFBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004AFC00; } }
L_004AFBDC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFBE8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004AFBE8u) [[unlikely]] return; }
L_004AFBE8:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFBFCu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AFBFCu) [[unlikely]] return; }
L_004AFBFC:
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_004AFC00:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFC14u); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AFC14u) [[unlikely]] return; }
L_004AFC14:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_004AFC44; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 524u)));  goto L_004AFC48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFC44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AFC44u) [[unlikely]] return; }
L_004AFC44:
    set32(c.r[5], ld32((c.r[29].w[0] + 524u)));
    c.budget -= 1;
L_004AFC48:
    c.f[0] = c.r[19].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 128u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[29].w[0] + 436u));
    c.f[1] = ld32((c.r[18].w[0] + 260u));
    c.f[4] = ld32((c.r[18].w[0] + 156u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    st32((c.r[18].w[0] + 260u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 500u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], 0u + 1u);  if (t) { goto L_004AFCA0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004AFCA0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_004AFCB4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 229u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_004AFCB4:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);  goto L_004AFD94; }
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    set32(c.r[16], c.r[29].w[0] + 160u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFCD8u); st32((c.r[18].w[0] + 256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002B(c, 9u, depth + 1u); else { c.pc = 0x001AC370u; return; } if (c.pc != 0x004AFCD8u) [[unlikely]] return; }
L_004AFCD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFCE0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002B(c, 6u, depth + 1u); else { c.pc = 0x001AC1D0u; return; } if (c.pc != 0x004AFCE0u) [[unlikely]] return; }
L_004AFCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFCE8u); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_002B(c, 5u, depth + 1u); else { c.pc = 0x001AC0E0u; return; } if (c.pc != 0x004AFCE8u) [[unlikely]] return; }
L_004AFCE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 524u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFCFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AFCFCu) [[unlikely]] return; }
L_004AFCFC:
    set32(c.r[5], ld32((c.r[29].w[0] + 524u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 128u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);  goto L_004AFD60; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 16544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFD40u); st32((c.r[29].w[0] + 244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x004AFD40u) [[unlikely]] return; }
L_004AFD40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFD58u); st32((c.r[29].w[0] + 420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x004AFD58u) [[unlikely]] return; }
L_004AFD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004AFDAC; } }
L_004AFD60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 16544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFD74u); st32((c.r[29].w[0] + 244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x004AFD74u) [[unlikely]] return; }
L_004AFD74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFD8Cu); st32((c.r[29].w[0] + 420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x004AFD8Cu) [[unlikely]] return; }
L_004AFD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004AFDAC; } }
L_004AFD94:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFDA8u); st32((c.r[29].w[0] + 420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x004AFDA8u) [[unlikely]] return; }
L_004AFDA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004AFDAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_004AFDE0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004AFE80; } }
L_004AFE08:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFE14u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 9u, depth + 1u); else { c.pc = 0x001AC370u; return; } if (c.pc != 0x004AFE14u) [[unlikely]] return; }
L_004AFE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFE1Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002B(c, 6u, depth + 1u); else { c.pc = 0x001AC1D0u; return; } if (c.pc != 0x004AFE1Cu) [[unlikely]] return; }
L_004AFE1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFE24u); set32(c.r[4], c.r[19].w[0] + 104u);  if (depth < kMaxDepth) unit_002B(c, 5u, depth + 1u); else { c.pc = 0x001AC0E0u; return; } if (c.pc != 0x004AFE24u) [[unlikely]] return; }
L_004AFE24:
    set32(c.r[2], ld32((c.r[18].w[0] + 252u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004AFE64; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFE50u); set32(c.r[5], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AFE50u) [[unlikely]] return; }
L_004AFE50:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFE64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AFE64u) [[unlikely]] return; }
L_004AFE64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFE7Cu); st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x004AFE7Cu) [[unlikely]] return; }
L_004AFE7C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004AFE80:
    set32(c.r[3], ld32((c.r[18].w[0] + 248u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AFE08u | kUnwind; return; } goto L_004AFE08; }
    st32((c.r[18].w[0] + 256u), 0u);
    st32((c.r[18].w[0] + 260u), 0u);
    st8((c.r[18].w[0] + 228u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004AFEC0:
    st8((c.r[4].w[0] + 229u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 230u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_004AFED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFEE8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AFEE8u) [[unlikely]] return; }
L_004AFEE8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 136u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 204u)));  goto L_004AFF44; }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 49u);  goto L_004AFF08; }
    set32(c.r[6], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004AFF08:
    set32(c.r[5], ld32((c.r[28].w[0] - 29004u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFF18u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 372u, depth + 1u); else { c.pc = 0x00142DF0u; return; } if (c.pc != 0x004AFF18u) [[unlikely]] return; }
L_004AFF18:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_004AFF2C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_004AFF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFF34u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AFF34u) [[unlikely]] return; }
L_004AFF34:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFF40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AFF40u) [[unlikely]] return; }
L_004AFF40:
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 1;
L_004AFF44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_004AFFB4; }
    set32(c.r[4], c.r[16].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFF58u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004AFF58u) [[unlikely]] return; }
L_004AFF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AFFB0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 140u));  goto L_004AFF78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_004AFF80; } }
L_004AFF78:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004AFF80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  goto L_004AFFC8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 48u));  goto L_004AFFA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_004AFFA8; } }
L_004AFFA0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004AFFA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AFFC4; } }
L_004AFFB0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_004AFFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFFBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AFFBCu) [[unlikely]] return; }
L_004AFFBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AFFF0; } }
L_004AFFC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_004AFFC8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004AFFD8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004AFFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFFE0u); set32(c.r[4], c.r[16].w[0] + 140u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AFFE0u) [[unlikely]] return; }
L_004AFFE0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AFFECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AFFECu) [[unlikely]] return; }
L_004AFFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004AFFF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
}

}
