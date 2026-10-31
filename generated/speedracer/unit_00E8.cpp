#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00E8[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0,
    0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125,
    0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0,
    158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    243, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0,
    290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0,
    301, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 318,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 0, 348,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0,
    399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0,
    0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 413, 0,
    0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421,
    0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0,
    0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0,
    0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0,
    444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0,
    0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468,
    0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0,
    474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0,
    0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0,
    0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0,
    0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499,
    0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0,
    0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517,
    0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0,
    0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0,
    529, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0,
    539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 544, 0,
    0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0,
    0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0,
};

void unit_00E8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004A0000;
    case 2u: goto L_004A0014;
    case 3u: goto L_004A0030;
    case 4u: goto L_004A0080;
    case 5u: goto L_004A00A0;
    case 6u: goto L_004A0100;
    case 7u: goto L_004A015C;
    case 8u: goto L_004A0174;
    case 9u: goto L_004A018C;
    case 10u: goto L_004A01A0;
    case 11u: goto L_004A01B8;
    case 12u: goto L_004A01E8;
    case 13u: goto L_004A0200;
    case 14u: goto L_004A0230;
    case 15u: goto L_004A0264;
    case 16u: goto L_004A0274;
    case 17u: goto L_004A0288;
    case 18u: goto L_004A0294;
    case 19u: goto L_004A02A0;
    case 20u: goto L_004A02D8;
    case 21u: goto L_004A02FC;
    case 22u: goto L_004A0320;
    case 23u: goto L_004A0330;
    case 24u: goto L_004A0378;
    case 25u: goto L_004A0394;
    case 26u: goto L_004A03CC;
    case 27u: goto L_004A03E4;
    case 28u: goto L_004A0400;
    case 29u: goto L_004A0438;
    case 30u: goto L_004A0450;
    case 31u: goto L_004A0468;
    case 32u: goto L_004A0494;
    case 33u: goto L_004A04A0;
    case 34u: goto L_004A04C4;
    case 35u: goto L_004A04D0;
    case 36u: goto L_004A04EC;
    case 37u: goto L_004A0508;
    case 38u: goto L_004A0514;
    case 39u: goto L_004A0538;
    case 40u: goto L_004A0544;
    case 41u: goto L_004A05C4;
    case 42u: goto L_004A05D8;
    case 43u: goto L_004A05E0;
    case 44u: goto L_004A0614;
    case 45u: goto L_004A0620;
    case 46u: goto L_004A0644;
    case 47u: goto L_004A0650;
    case 48u: goto L_004A066C;
    case 49u: goto L_004A06A0;
    case 50u: goto L_004A06AC;
    case 51u: goto L_004A06D0;
    case 52u: goto L_004A06DC;
    case 53u: goto L_004A0768;
    case 54u: goto L_004A07C0;
    case 55u: goto L_004A0800;
    case 56u: goto L_004A0808;
    case 57u: goto L_004A0824;
    case 58u: goto L_004A085C;
    case 59u: goto L_004A0874;
    case 60u: goto L_004A0890;
    case 61u: goto L_004A08C8;
    case 62u: goto L_004A08E0;
    case 63u: goto L_004A08F8;
    case 64u: goto L_004A0910;
    case 65u: goto L_004A0944;
    case 66u: goto L_004A0950;
    case 67u: goto L_004A0974;
    case 68u: goto L_004A0980;
    case 69u: goto L_004A09F4;
    case 70u: goto L_004A0A08;
    case 71u: goto L_004A0A10;
    case 72u: goto L_004A0A30;
    case 73u: goto L_004A0A70;
    case 74u: goto L_004A0A7C;
    case 75u: goto L_004A0AA0;
    case 76u: goto L_004A0AAC;
    case 77u: goto L_004A0B2C;
    case 78u: goto L_004A0B80;
    case 79u: goto L_004A0BA8;
    case 80u: goto L_004A0BBC;
    case 81u: goto L_004A0BC4;
    case 82u: goto L_004A0BE4;
    case 83u: goto L_004A0BF8;
    case 84u: goto L_004A0C04;
    case 85u: goto L_004A0C20;
    case 86u: goto L_004A0C80;
    case 87u: goto L_004A0C98;
    case 88u: goto L_004A0CB0;
    case 89u: goto L_004A0CC0;
    case 90u: goto L_004A0CD0;
    case 91u: goto L_004A0CE0;
    case 92u: goto L_004A0CF0;
    case 93u: goto L_004A0DB0;
    case 94u: goto L_004A0DCC;
    case 95u: goto L_004A0DF0;
    case 96u: goto L_004A0E20;
    case 97u: goto L_004A0E2C;
    case 98u: goto L_004A0E60;
    case 99u: goto L_004A0E6C;
    case 100u: goto L_004A0EA0;
    case 101u: goto L_004A0ECC;
    case 102u: goto L_004A0EE8;
    case 103u: goto L_004A0F14;
    case 104u: goto L_004A0F20;
    case 105u: goto L_004A0F30;
    case 106u: goto L_004A0FA0;
    case 107u: goto L_004A0FB0;
    case 108u: goto L_004A0FE0;
    case 109u: goto L_004A1004;
    case 110u: goto L_004A101C;
    case 111u: goto L_004A1024;
    case 112u: goto L_004A1040;
    case 113u: goto L_004A1078;
    case 114u: goto L_004A1098;
    case 115u: goto L_004A10A4;
    case 116u: goto L_004A10E0;
    case 117u: goto L_004A1158;
    case 118u: goto L_004A1170;
    case 119u: goto L_004A1190;
    case 120u: goto L_004A11D0;
    case 121u: goto L_004A11E0;
    case 122u: goto L_004A1214;
    case 123u: goto L_004A122C;
    case 124u: goto L_004A1270;
    case 125u: goto L_004A127C;
    case 126u: goto L_004A1294;
    case 127u: goto L_004A12B0;
    case 128u: goto L_004A12C4;
    case 129u: goto L_004A12D0;
    case 130u: goto L_004A12F0;
    case 131u: goto L_004A1320;
    case 132u: goto L_004A1340;
    case 133u: goto L_004A136C;
    case 134u: goto L_004A1374;
    case 135u: goto L_004A1398;
    case 136u: goto L_004A13A4;
    case 137u: goto L_004A13B4;
    case 138u: goto L_004A13D8;
    case 139u: goto L_004A13E4;
    case 140u: goto L_004A13F8;
    case 141u: goto L_004A1408;
    case 142u: goto L_004A1430;
    case 143u: goto L_004A1498;
    case 144u: goto L_004A14A4;
    case 145u: goto L_004A14BC;
    case 146u: goto L_004A14E0;
    case 147u: goto L_004A1504;
    case 148u: goto L_004A1520;
    case 149u: goto L_004A1544;
    case 150u: goto L_004A155C;
    case 151u: goto L_004A1580;
    case 152u: goto L_004A1590;
    case 153u: goto L_004A15B4;
    case 154u: goto L_004A15C0;
    case 155u: goto L_004A15D0;
    case 156u: goto L_004A15E0;
    case 157u: goto L_004A15F0;
    case 158u: goto L_004A1600;
    case 159u: goto L_004A1610;
    case 160u: goto L_004A1620;
    case 161u: goto L_004A1630;
    case 162u: goto L_004A1640;
    case 163u: goto L_004A1650;
    case 164u: goto L_004A1660;
    case 165u: goto L_004A1670;
    case 166u: goto L_004A16B4;
    case 167u: goto L_004A16F0;
    case 168u: goto L_004A1710;
    case 169u: goto L_004A1720;
    case 170u: goto L_004A1730;
    case 171u: goto L_004A1740;
    case 172u: goto L_004A1750;
    case 173u: goto L_004A1768;
    case 174u: goto L_004A178C;
    case 175u: goto L_004A17A0;
    case 176u: goto L_004A17C0;
    case 177u: goto L_004A17D4;
    case 178u: goto L_004A17F0;
    case 179u: goto L_004A1800;
    case 180u: goto L_004A1810;
    case 181u: goto L_004A1818;
    case 182u: goto L_004A1828;
    case 183u: goto L_004A1838;
    case 184u: goto L_004A1844;
    case 185u: goto L_004A1870;
    case 186u: goto L_004A189C;
    case 187u: goto L_004A18C4;
    case 188u: goto L_004A1900;
    case 189u: goto L_004A191C;
    case 190u: goto L_004A192C;
    case 191u: goto L_004A1938;
    case 192u: goto L_004A1958;
    case 193u: goto L_004A1970;
    case 194u: goto L_004A1990;
    case 195u: goto L_004A199C;
    case 196u: goto L_004A19AC;
    case 197u: goto L_004A19C0;
    case 198u: goto L_004A19D0;
    case 199u: goto L_004A19F0;
    case 200u: goto L_004A1A08;
    case 201u: goto L_004A1A30;
    case 202u: goto L_004A1A50;
    case 203u: goto L_004A1AA0;
    case 204u: goto L_004A1AB8;
    case 205u: goto L_004A1AD0;
    case 206u: goto L_004A1AF0;
    case 207u: goto L_004A1B0C;
    case 208u: goto L_004A1B20;
    case 209u: goto L_004A1B34;
    case 210u: goto L_004A1B54;
    case 211u: goto L_004A1B70;
    case 212u: goto L_004A1B8C;
    case 213u: goto L_004A1BA0;
    case 214u: goto L_004A1BE4;
    case 215u: goto L_004A1C00;
    case 216u: goto L_004A1C20;
    case 217u: goto L_004A1C3C;
    case 218u: goto L_004A1C60;
    case 219u: goto L_004A1C70;
    case 220u: goto L_004A1C80;
    case 221u: goto L_004A1C90;
    case 222u: goto L_004A1CD4;
    case 223u: goto L_004A1CE0;
    case 224u: goto L_004A1D1C;
    case 225u: goto L_004A1D30;
    case 226u: goto L_004A1D4C;
    case 227u: goto L_004A1D74;
    case 228u: goto L_004A1DA0;
    case 229u: goto L_004A1DF0;
    case 230u: goto L_004A1E08;
    case 231u: goto L_004A1E20;
    case 232u: goto L_004A1E54;
    case 233u: goto L_004A1E5C;
    case 234u: goto L_004A1E8C;
    case 235u: goto L_004A1EC0;
    case 236u: goto L_004A1F08;
    case 237u: goto L_004A1F1C;
    case 238u: goto L_004A1F28;
    case 239u: goto L_004A1F34;
    case 240u: goto L_004A1F3C;
    case 241u: goto L_004A1F4C;
    case 242u: goto L_004A1F6C;
    case 243u: goto L_004A1F80;
    case 244u: goto L_004A1F8C;
    case 245u: goto L_004A1F98;
    case 246u: goto L_004A1FA0;
    case 247u: goto L_004A1FB0;
    case 248u: goto L_004A1FBC;
    case 249u: goto L_004A1FC8;
    case 250u: goto L_004A1FD0;
    case 251u: goto L_004A1FE0;
    case 252u: goto L_004A200C;
    case 253u: goto L_004A2020;
    case 254u: goto L_004A202C;
    case 255u: goto L_004A2038;
    case 256u: goto L_004A2040;
    case 257u: goto L_004A2050;
    case 258u: goto L_004A2070;
    case 259u: goto L_004A2084;
    case 260u: goto L_004A2090;
    case 261u: goto L_004A209C;
    case 262u: goto L_004A20A4;
    case 263u: goto L_004A20B4;
    case 264u: goto L_004A20C0;
    case 265u: goto L_004A20CC;
    case 266u: goto L_004A20D4;
    case 267u: goto L_004A20E4;
    case 268u: goto L_004A2124;
    case 269u: goto L_004A2134;
    case 270u: goto L_004A2150;
    case 271u: goto L_004A2164;
    case 272u: goto L_004A2170;
    case 273u: goto L_004A2180;
    case 274u: goto L_004A21C0;
    case 275u: goto L_004A21D0;
    case 276u: goto L_004A21E0;
    case 277u: goto L_004A2210;
    case 278u: goto L_004A2224;
    case 279u: goto L_004A2264;
    case 280u: goto L_004A2274;
    case 281u: goto L_004A22A0;
    case 282u: goto L_004A22D0;
    case 283u: goto L_004A232C;
    case 284u: goto L_004A2334;
    case 285u: goto L_004A2340;
    case 286u: goto L_004A235C;
    case 287u: goto L_004A23A4;
    case 288u: goto L_004A23E0;
    case 289u: goto L_004A23F0;
    case 290u: goto L_004A2400;
    case 291u: goto L_004A2410;
    case 292u: goto L_004A2420;
    case 293u: goto L_004A2478;
    case 294u: goto L_004A254C;
    case 295u: goto L_004A2590;
    case 296u: goto L_004A259C;
    case 297u: goto L_004A25D0;
    case 298u: goto L_004A2630;
    case 299u: goto L_004A2664;
    case 300u: goto L_004A2670;
    case 301u: goto L_004A2680;
    case 302u: goto L_004A268C;
    case 303u: goto L_004A2698;
    case 304u: goto L_004A26AC;
    case 305u: goto L_004A26B8;
    case 306u: goto L_004A26C4;
    case 307u: goto L_004A26DC;
    case 308u: goto L_004A26F0;
    case 309u: goto L_004A2708;
    case 310u: goto L_004A2750;
    case 311u: goto L_004A2798;
    case 312u: goto L_004A27A4;
    case 313u: goto L_004A27B4;
    case 314u: goto L_004A27BC;
    case 315u: goto L_004A27C8;
    case 316u: goto L_004A27DC;
    case 317u: goto L_004A27F0;
    case 318u: goto L_004A27FC;
    case 319u: goto L_004A2808;
    case 320u: goto L_004A2830;
    case 321u: goto L_004A2848;
    case 322u: goto L_004A2860;
    case 323u: goto L_004A286C;
    case 324u: goto L_004A28A0;
    case 325u: goto L_004A28C0;
    case 326u: goto L_004A28D8;
    case 327u: goto L_004A2904;
    case 328u: goto L_004A2938;
    case 329u: goto L_004A2970;
    case 330u: goto L_004A2980;
    case 331u: goto L_004A29A0;
    case 332u: goto L_004A29C4;
    case 333u: goto L_004A2A00;
    case 334u: goto L_004A2A10;
    case 335u: goto L_004A2A20;
    case 336u: goto L_004A2A40;
    case 337u: goto L_004A2A6C;
    case 338u: goto L_004A2A90;
    case 339u: goto L_004A2AC8;
    case 340u: goto L_004A2AE4;
    case 341u: goto L_004A2AF0;
    case 342u: goto L_004A2B08;
    case 343u: goto L_004A2B20;
    case 344u: goto L_004A2B38;
    case 345u: goto L_004A2B54;
    case 346u: goto L_004A2B60;
    case 347u: goto L_004A2B6C;
    case 348u: goto L_004A2B7C;
    case 349u: goto L_004A2BBC;
    case 350u: goto L_004A2BC8;
    case 351u: goto L_004A2BDC;
    case 352u: goto L_004A2BF4;
    case 353u: goto L_004A2C08;
    case 354u: goto L_004A2C24;
    case 355u: goto L_004A2C30;
    case 356u: goto L_004A2C3C;
    case 357u: goto L_004A2C4C;
    case 358u: goto L_004A2C64;
    case 359u: goto L_004A2C70;
    case 360u: goto L_004A2C84;
    case 361u: goto L_004A2C9C;
    case 362u: goto L_004A2CB0;
    case 363u: goto L_004A2CCC;
    case 364u: goto L_004A2CD8;
    case 365u: goto L_004A2CE4;
    case 366u: goto L_004A2CF4;
    case 367u: goto L_004A2D40;
    case 368u: goto L_004A2D58;
    case 369u: goto L_004A2D70;
    case 370u: goto L_004A2DA8;
    case 371u: goto L_004A2DD8;
    case 372u: goto L_004A2DF0;
    case 373u: goto L_004A2E38;
    case 374u: goto L_004A2E4C;
    case 375u: goto L_004A2E5C;
    case 376u: goto L_004A2E74;
    case 377u: goto L_004A2E84;
    case 378u: goto L_004A2E90;
    case 379u: goto L_004A2F14;
    case 380u: goto L_004A2F58;
    case 381u: goto L_004A2F64;
    case 382u: goto L_004A2F70;
    case 383u: goto L_004A2F8C;
    case 384u: goto L_004A2F98;
    case 385u: goto L_004A2FAC;
    case 386u: goto L_004A2FC0;
    case 387u: goto L_004A2FCC;
    case 388u: goto L_004A2FE0;
    case 389u: goto L_004A302C;
    case 390u: goto L_004A3040;
    case 391u: goto L_004A3094;
    case 392u: goto L_004A30AC;
    case 393u: goto L_004A30B8;
    case 394u: goto L_004A30C4;
    case 395u: goto L_004A30D0;
    case 396u: goto L_004A30DC;
    case 397u: goto L_004A30E8;
    case 398u: goto L_004A30F4;
    case 399u: goto L_004A3100;
    case 400u: goto L_004A310C;
    case 401u: goto L_004A3118;
    case 402u: goto L_004A3124;
    case 403u: goto L_004A3138;
    case 404u: goto L_004A314C;
    case 405u: goto L_004A3160;
    case 406u: goto L_004A316C;
    case 407u: goto L_004A3184;
    case 408u: goto L_004A31A0;
    case 409u: goto L_004A31B4;
    case 410u: goto L_004A31E0;
    case 411u: goto L_004A31E8;
    case 412u: goto L_004A31F0;
    case 413u: goto L_004A31F8;
    case 414u: goto L_004A3214;
    case 415u: goto L_004A3224;
    case 416u: goto L_004A3234;
    case 417u: goto L_004A3290;
    case 418u: goto L_004A32C0;
    case 419u: goto L_004A32D4;
    case 420u: goto L_004A32E8;
    case 421u: goto L_004A32FC;
    case 422u: goto L_004A3310;
    case 423u: goto L_004A3324;
    case 424u: goto L_004A3338;
    case 425u: goto L_004A334C;
    case 426u: goto L_004A3360;
    case 427u: goto L_004A3374;
    case 428u: goto L_004A3388;
    case 429u: goto L_004A33A0;
    case 430u: goto L_004A33C0;
    case 431u: goto L_004A33E4;
    case 432u: goto L_004A3400;
    case 433u: goto L_004A3424;
    case 434u: goto L_004A343C;
    case 435u: goto L_004A3460;
    case 436u: goto L_004A3470;
    case 437u: goto L_004A3494;
    case 438u: goto L_004A34A0;
    case 439u: goto L_004A34B0;
    case 440u: goto L_004A34C0;
    case 441u: goto L_004A34D0;
    case 442u: goto L_004A34E0;
    case 443u: goto L_004A34F0;
    case 444u: goto L_004A3500;
    case 445u: goto L_004A3510;
    case 446u: goto L_004A3520;
    case 447u: goto L_004A3564;
    case 448u: goto L_004A35A0;
    case 449u: goto L_004A35C0;
    case 450u: goto L_004A35F4;
    case 451u: goto L_004A3610;
    case 452u: goto L_004A361C;
    case 453u: goto L_004A3630;
    case 454u: goto L_004A3640;
    case 455u: goto L_004A3654;
    case 456u: goto L_004A3660;
    case 457u: goto L_004A366C;
    case 458u: goto L_004A3690;
    case 459u: goto L_004A36A4;
    case 460u: goto L_004A36AC;
    case 461u: goto L_004A36C0;
    case 462u: goto L_004A36D8;
    case 463u: goto L_004A36E4;
    case 464u: goto L_004A3700;
    case 465u: goto L_004A3710;
    case 466u: goto L_004A3740;
    case 467u: goto L_004A3760;
    case 468u: goto L_004A377C;
    case 469u: goto L_004A3784;
    case 470u: goto L_004A37AC;
    case 471u: goto L_004A37CC;
    case 472u: goto L_004A37E8;
    case 473u: goto L_004A37F4;
    case 474u: goto L_004A3800;
    case 475u: goto L_004A3810;
    case 476u: goto L_004A3830;
    case 477u: goto L_004A38D0;
    case 478u: goto L_004A38F4;
    case 479u: goto L_004A3918;
    case 480u: goto L_004A393C;
    case 481u: goto L_004A3960;
    case 482u: goto L_004A3984;
    case 483u: goto L_004A39A8;
    case 484u: goto L_004A39CC;
    case 485u: goto L_004A39F0;
    case 486u: goto L_004A3A14;
    case 487u: goto L_004A3A38;
    case 488u: goto L_004A3A50;
    case 489u: goto L_004A3AAC;
    case 490u: goto L_004A3AB4;
    case 491u: goto L_004A3ABC;
    case 492u: goto L_004A3AC4;
    case 493u: goto L_004A3ACC;
    case 494u: goto L_004A3AD4;
    case 495u: goto L_004A3ADC;
    case 496u: goto L_004A3AE4;
    case 497u: goto L_004A3AEC;
    case 498u: goto L_004A3AF4;
    case 499u: goto L_004A3AFC;
    case 500u: goto L_004A3B10;
    case 501u: goto L_004A3B28;
    case 502u: goto L_004A3B30;
    case 503u: goto L_004A3B38;
    case 504u: goto L_004A3B40;
    case 505u: goto L_004A3B48;
    case 506u: goto L_004A3B50;
    case 507u: goto L_004A3B58;
    case 508u: goto L_004A3B60;
    case 509u: goto L_004A3B68;
    case 510u: goto L_004A3B70;
    case 511u: goto L_004A3B78;
    case 512u: goto L_004A3B90;
    case 513u: goto L_004A3BAC;
    case 514u: goto L_004A3BB4;
    case 515u: goto L_004A3BD4;
    case 516u: goto L_004A3BEC;
    case 517u: goto L_004A3BFC;
    case 518u: goto L_004A3C08;
    case 519u: goto L_004A3C30;
    case 520u: goto L_004A3C58;
    case 521u: goto L_004A3C88;
    case 522u: goto L_004A3CF0;
    case 523u: goto L_004A3D10;
    case 524u: goto L_004A3D28;
    case 525u: goto L_004A3DA0;
    case 526u: goto L_004A3DB8;
    case 527u: goto L_004A3DE8;
    case 528u: goto L_004A3DF4;
    case 529u: goto L_004A3E00;
    case 530u: goto L_004A3E0C;
    case 531u: goto L_004A3E18;
    case 532u: goto L_004A3E24;
    case 533u: goto L_004A3E30;
    case 534u: goto L_004A3E3C;
    case 535u: goto L_004A3E48;
    case 536u: goto L_004A3E54;
    case 537u: goto L_004A3E60;
    case 538u: goto L_004A3E6C;
    case 539u: goto L_004A3E80;
    case 540u: goto L_004A3EA0;
    case 541u: goto L_004A3EC0;
    case 542u: goto L_004A3ED8;
    case 543u: goto L_004A3EEC;
    case 544u: goto L_004A3EF8;
    case 545u: goto L_004A3F10;
    case 546u: goto L_004A3F30;
    case 547u: goto L_004A3F38;
    case 548u: goto L_004A3F50;
    case 549u: goto L_004A3F74;
    case 550u: goto L_004A3F8C;
    case 551u: goto L_004A3FA0;
    case 552u: goto L_004A3FA8;
    case 553u: goto L_004A3FC0;
    case 554u: goto L_004A3FE0;
    case 555u: goto L_004A3FEC;
    case 556u: goto L_004A3FF8;
    default: bad_entry(c, 0x004A0000u); return;
    }
L_004A0000:
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004A006C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0014u); set32(c.r[4], 0u + 312u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A0014u) [[unlikely]] return; }
L_004A0014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004A006C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0030u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0023(c, 62u, depth + 1u); else { c.pc = 0x0018D210u; return; } if (c.pc != 0x004A0030u) [[unlikely]] return; }
L_004A0030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 28224u);
    set32(c.r[3], c.r[3].w[0] - 28200u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28168u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28156u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28132u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 15;
L_004A006C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0080u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 67u, depth + 1u); else { c.pc = 0x00188C30u; return; } if (c.pc != 0x004A0080u) [[unlikely]] return; }
L_004A0080:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A00A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[4], c.r[29].w[0] + 132u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.f[20] = c.f[12];
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 154u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 22;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 148u), c.r[4].w[0]);  if (t) { goto L_004A0108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0100u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A0100u) [[unlikely]] return; }
L_004A0100:
    set32(c.r[2], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 2;
L_004A0108:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 132u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 154u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 18;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 132u)));  goto L_004A0180; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A015Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A015Cu) [[unlikely]] return; }
L_004A015C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004A0178; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0174u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A0174u) [[unlikely]] return; }
L_004A0174:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004A0178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004A01A4; } }
L_004A0180:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A018Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A018Cu) [[unlikely]] return; }
L_004A018C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A01A0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A01A0u) [[unlikely]] return; }
L_004A01A0:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004A01A4:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A01B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A01B8u) [[unlikely]] return; }
L_004A01B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 154u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_004A01E8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], c.r[29].w[0] + 132u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.f[13] = ld32((c.r[28].w[0] - 31436u));  goto L_004A01EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A01E8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A01E8u) [[unlikely]] return; }
L_004A01E8:
    c.f[13] = ld32((c.r[28].w[0] - 31436u));
    c.budget -= 1;
L_004A01EC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0200u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00E2(c, 216u, depth + 1u); else { c.pc = 0x00489E00u; return; } if (c.pc != 0x004A0200u) [[unlikely]] return; }
L_004A0200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004A0230:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] - 8064u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0264u); set32(c.r[7], c.r[7].w[0] - 8042u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004A0264u) [[unlikely]] return; }
L_004A0264:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0274u); set32(c.r[5], c.r[5].w[0] - 8041u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A0274u) [[unlikely]] return; }
L_004A0274:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0288u); set32(c.r[7], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x004A0288u) [[unlikely]] return; }
L_004A0288:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0294u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A0294u) [[unlikely]] return; }
L_004A0294:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A02A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A02A0u) [[unlikely]] return; }
L_004A02A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_004A02B4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004A02B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 108u);
    set32(c.r[5], c.r[5].w[0] - 12192u);
    set32(c.r[7], c.r[29].w[0] + 104u);
    set32(c.r[8], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A02D8u); st32((c.r[29].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004A02D8u) [[unlikely]] return; }
L_004A02D8:
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A02FCu); st32((c.r[17].w[0] + 8u), c.f[1]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A02FCu) [[unlikely]] return; }
L_004A02FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004A0320:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0018A610u | kUnwind; return; } [[clang::musttail]] return unit_0022(c, 171u, depth); }
L_004A0330:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0378u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00E2(c, 273u, depth + 1u); else { c.pc = 0x0048A4A0u; return; } if (c.pc != 0x004A0378u) [[unlikely]] return; }
L_004A0378:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8039u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0394u); set32(c.r[7], c.r[7].w[0] - 8042u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004A0394u) [[unlikely]] return; }
L_004A0394:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 161u);  goto L_004A03A8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004A03A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 380u);
    set32(c.r[5], c.r[5].w[0] - 12192u);
    set32(c.r[7], c.r[29].w[0] + 376u);
    set32(c.r[8], c.r[29].w[0] + 372u);
    st32((c.r[29].w[0] + 380u), 0u);
    st32((c.r[29].w[0] + 376u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A03CCu); st32((c.r[29].w[0] + 372u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004A03CCu) [[unlikely]] return; }
L_004A03CC:
    c.f[20] = ld32((c.r[29].w[0] + 380u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[21] = ld32((c.r[29].w[0] + 376u));
    c.f[22] = ld32((c.r[29].w[0] + 372u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A03E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A03E4u) [[unlikely]] return; }
L_004A03E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8021u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0400u); set32(c.r[7], c.r[7].w[0] - 8042u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004A0400u) [[unlikely]] return; }
L_004A0400:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_004A0414; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004A0414:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[5].w[0] - 12192u);
    set32(c.r[7], c.r[29].w[0] + 364u);
    set32(c.r[8], c.r[29].w[0] + 360u);
    st32((c.r[29].w[0] + 368u), 0u);
    st32((c.r[29].w[0] + 364u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0438u); st32((c.r[29].w[0] + 360u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004A0438u) [[unlikely]] return; }
L_004A0438:
    c.f[23] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[24] = ld32((c.r[29].w[0] + 364u));
    c.f[25] = ld32((c.r[29].w[0] + 360u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A0450u) [[unlikely]] return; }
L_004A0450:
    set32(c.r[21], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[21].sd[0] <= 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_004A077C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A0468u) [[unlikely]] return; }
L_004A0468:
    st32((c.r[29].w[0] + 344u), c.f[23]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 348u), c.f[24]);
    set32(c.r[4], c.r[29].w[0] + 232u);
    st32((c.r[29].w[0] + 352u), c.f[25]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0494u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004A0494u) [[unlikely]] return; }
L_004A0494:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A04A0u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004A04A0u) [[unlikely]] return; }
L_004A04A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 296u);  goto L_004A04C8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A04C4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A04C4u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004A04C4u) [[unlikely]] return; }
L_004A04C4:
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 1;
L_004A04C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A04D0u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004A04D0u) [[unlikely]] return; }
L_004A04D0:
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A04ECu); st32((c.r[29].w[0] + 348u), c.f[0]);  if (depth < kMaxDepth) unit_00E8(c, 14u, depth + 1u); else { c.pc = 0x004A0230u; return; } if (c.pc != 0x004A04ECu) [[unlikely]] return; }
L_004A04EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0508u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004A0508u) [[unlikely]] return; }
L_004A0508:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0514u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004A0514u) [[unlikely]] return; }
L_004A0514:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 312u);  goto L_004A053C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A0538; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0538u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004A0538u) [[unlikely]] return; }
L_004A0538:
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 1;
L_004A053C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0544u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004A0544u) [[unlikely]] return; }
L_004A0544:
    c.f[5] = ld32((c.r[29].w[0] + 344u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    c.f[4] = ld32((c.r[29].w[0] + 348u));
    c.f[1] = ld32((c.r[29].w[0] + 332u));
    c.f[2] = fp::sub(c.f[5], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 352u));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[6] = fp::sqrt(c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 312u));
    c.f[1] = ld32((c.r[29].w[0] + 316u));
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.f[2] = fp::sub(c.f[5], c.f[2]);
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 312u);
    set32(c.r[7], c.r[29].w[0] + 344u);
    fpu_div(c, 1u, c.f[0], c.f[6]);
    c.f[0] = ld32((c.r[28].w[0] - 32344u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A05C4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00E8(c, 5u, depth + 1u); else { c.pc = 0x004A00A0u; return; } if (c.pc != 0x004A05C4u) [[unlikely]] return; }
L_004A05C4:
    c.r[1].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004A0778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_004A076C; } }
L_004A05D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A05E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A05E0u) [[unlikely]] return; }
L_004A05E0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004A076C; }
    st32((c.r[29].w[0] + 344u), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 200u);
    st32((c.r[29].w[0] + 348u), c.f[21]);
    st32((c.r[29].w[0] + 352u), c.f[22]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0614u); set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004A0614u) [[unlikely]] return; }
L_004A0614:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0620u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004A0620u) [[unlikely]] return; }
L_004A0620:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 280u);  goto L_004A0648; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A0644; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0644u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004A0644u) [[unlikely]] return; }
L_004A0644:
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 1;
L_004A0648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0650u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004A0650u) [[unlikely]] return; }
L_004A0650:
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A066Cu); st32((c.r[29].w[0] + 348u), c.f[0]);  if (depth < kMaxDepth) unit_00E8(c, 14u, depth + 1u); else { c.pc = 0x004A0230u; return; } if (c.pc != 0x004A066Cu) [[unlikely]] return; }
L_004A066C:
    c.f[2] = ld32((c.r[29].w[0] + 264u));
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.f[1] = ld32((c.r[29].w[0] + 268u));
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    st32((c.r[29].w[0] + 328u), c.f[2]);
    st32((c.r[29].w[0] + 332u), c.f[1]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A06A0u); set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004A06A0u) [[unlikely]] return; }
L_004A06A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A06ACu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004A06ACu) [[unlikely]] return; }
L_004A06AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 248u);  goto L_004A06D4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A06D0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A06D0u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004A06D0u) [[unlikely]] return; }
L_004A06D0:
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 1;
L_004A06D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A06DCu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004A06DCu) [[unlikely]] return; }
L_004A06DC:
    c.f[5] = ld32((c.r[29].w[0] + 344u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    c.f[8] = ld32((c.r[29].w[0] + 248u));
    c.f[7] = ld32((c.r[29].w[0] + 252u));
    c.f[2] = fp::sub(c.f[5], c.f[0]);
    c.f[4] = ld32((c.r[29].w[0] + 348u));
    c.f[1] = ld32((c.r[29].w[0] + 332u));
    c.f[6] = ld32((c.r[29].w[0] + 256u));
    c.f[3] = ld32((c.r[29].w[0] + 352u));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 312u), c.f[8]);
    st32((c.r[29].w[0] + 316u), c.f[7]);
    st32((c.r[29].w[0] + 320u), c.f[6]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[9] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[9] = fp::sqrt(c.f[9]);
    c.f[2] = fp::sub(c.f[5], c.f[8]);
    c.f[1] = fp::sub(c.f[4], c.f[7]);
    c.f[0] = fp::sub(c.f[3], c.f[6]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 312u);
    set32(c.r[7], c.r[29].w[0] + 344u);
    fpu_div(c, 1u, c.f[0], c.f[9]);
    c.f[0] = ld32((c.r[28].w[0] - 32344u));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0768u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00E8(c, 5u, depth + 1u); else { c.pc = 0x004A00A0u; return; } if (c.pc != 0x004A0768u) [[unlikely]] return; }
L_004A0768:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004A076C:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A05D8u | kUnwind; return; } goto L_004A05D8; }
L_004A0778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004A077C:
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_004A07C0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 16;
L_004A0800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0808u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00E2(c, 273u, depth + 1u); else { c.pc = 0x0048A4A0u; return; } if (c.pc != 0x004A0808u) [[unlikely]] return; }
L_004A0808:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8039u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0824u); set32(c.r[7], c.r[7].w[0] - 8042u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004A0824u) [[unlikely]] return; }
L_004A0824:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 161u);  goto L_004A0838; }
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004A0838:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 300u);
    set32(c.r[5], c.r[5].w[0] - 12192u);
    set32(c.r[7], c.r[29].w[0] + 296u);
    set32(c.r[8], c.r[29].w[0] + 292u);
    st32((c.r[29].w[0] + 300u), 0u);
    st32((c.r[29].w[0] + 296u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A085Cu); st32((c.r[29].w[0] + 292u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004A085Cu) [[unlikely]] return; }
L_004A085C:
    c.f[20] = ld32((c.r[29].w[0] + 300u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[21] = ld32((c.r[29].w[0] + 296u));
    c.f[22] = ld32((c.r[29].w[0] + 292u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A0874u) [[unlikely]] return; }
L_004A0874:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8021u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0890u); set32(c.r[7], c.r[7].w[0] - 8042u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004A0890u) [[unlikely]] return; }
L_004A0890:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_004A08A4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004A08A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[5].w[0] - 12192u);
    set32(c.r[7], c.r[29].w[0] + 284u);
    set32(c.r[8], c.r[29].w[0] + 280u);
    st32((c.r[29].w[0] + 288u), 0u);
    st32((c.r[29].w[0] + 284u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A08C8u); st32((c.r[29].w[0] + 280u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004A08C8u) [[unlikely]] return; }
L_004A08C8:
    c.f[23] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[24] = ld32((c.r[29].w[0] + 284u));
    c.f[25] = ld32((c.r[29].w[0] + 280u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A08E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A08E0u) [[unlikely]] return; }
L_004A08E0:
    set32(c.r[21], ld32((c.r[19].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[21].sd[0] <= 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_004A0B40; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A08F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A08F8u) [[unlikely]] return; }
L_004A08F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0910u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 14u, depth + 1u); else { c.pc = 0x004A0230u; return; } if (c.pc != 0x004A0910u) [[unlikely]] return; }
L_004A0910:
    c.f[2] = ld32((c.r[29].w[0] + 264u));
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.f[1] = ld32((c.r[29].w[0] + 268u));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.f[20] = fp::add(c.f[2], c.f[20]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.f[21] = fp::add(c.f[1], c.f[21]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0944u); c.f[22] = fp::add(c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004A0944u) [[unlikely]] return; }
L_004A0944:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0950u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004A0950u) [[unlikely]] return; }
L_004A0950:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 248u);  goto L_004A0978; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A0974; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0974u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004A0974u) [[unlikely]] return; }
L_004A0974:
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 1;
L_004A0978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0980u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004A0980u) [[unlikely]] return; }
L_004A0980:
    c.f[5] = ld32((c.r[29].w[0] + 264u));
    c.f[4] = ld32((c.r[29].w[0] + 268u));
    c.f[3] = ld32((c.r[29].w[0] + 272u));
    c.f[2] = fp::sub(c.f[5], c.f[20]);
    c.f[1] = fp::sub(c.f[4], c.f[21]);
    c.f[0] = fp::sub(c.f[3], c.f[22]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[6] = fp::sqrt(c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 248u));
    c.f[1] = ld32((c.r[29].w[0] + 252u));
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[2] = fp::sub(c.f[5], c.f[2]);
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 248u);
    set32(c.r[7], c.r[29].w[0] + 264u);
    fpu_div(c, 1u, c.f[0], c.f[6]);
    c.f[0] = ld32((c.r[28].w[0] - 32344u));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A09F4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00E8(c, 5u, depth + 1u); else { c.pc = 0x004A00A0u; return; } if (c.pc != 0x004A09F4u) [[unlikely]] return; }
L_004A09F4:
    c.r[1].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004A0B3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_004A0B30; } }
L_004A0A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0A10u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A0A10u) [[unlikely]] return; }
L_004A0A10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004A0B30; }
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0A30u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 14u, depth + 1u); else { c.pc = 0x004A0230u; return; } if (c.pc != 0x004A0A30u) [[unlikely]] return; }
L_004A0A30:
    c.f[2] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.f[1] = ld32((c.r[29].w[0] + 236u));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    st32((c.r[29].w[0] + 264u), c.f[2]);
    st32((c.r[29].w[0] + 268u), c.f[1]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.f[20] = fp::add(c.f[2], c.f[23]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.f[21] = fp::add(c.f[1], c.f[24]);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0A70u); c.f[22] = fp::add(c.f[0], c.f[25]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004A0A70u) [[unlikely]] return; }
L_004A0A70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0A7Cu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x004A0A7Cu) [[unlikely]] return; }
L_004A0A7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 216u);  goto L_004A0AA4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A0AA0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0AA0u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004A0AA0u) [[unlikely]] return; }
L_004A0AA0:
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.budget -= 1;
L_004A0AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0AACu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004A0AACu) [[unlikely]] return; }
L_004A0AAC:
    c.f[5] = ld32((c.r[29].w[0] + 264u));
    c.f[4] = ld32((c.r[29].w[0] + 268u));
    c.f[3] = ld32((c.r[29].w[0] + 272u));
    c.f[2] = fp::sub(c.f[5], c.f[20]);
    c.f[8] = ld32((c.r[29].w[0] + 216u));
    c.f[7] = ld32((c.r[29].w[0] + 220u));
    c.f[6] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = fp::sub(c.f[4], c.f[21]);
    c.f[0] = fp::sub(c.f[3], c.f[22]);
    st32((c.r[29].w[0] + 248u), c.f[8]);
    st32((c.r[29].w[0] + 252u), c.f[7]);
    st32((c.r[29].w[0] + 256u), c.f[6]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[9] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[9] = fp::sqrt(c.f[9]);
    c.f[2] = fp::sub(c.f[5], c.f[8]);
    c.f[1] = fp::sub(c.f[4], c.f[7]);
    c.f[0] = fp::sub(c.f[3], c.f[6]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 248u);
    set32(c.r[7], c.r[29].w[0] + 264u);
    fpu_div(c, 1u, c.f[0], c.f[9]);
    c.f[0] = ld32((c.r[28].w[0] - 32344u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0B2Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00E8(c, 5u, depth + 1u); else { c.pc = 0x004A00A0u; return; } if (c.pc != 0x004A0B2Cu) [[unlikely]] return; }
L_004A0B2C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004A0B30:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0A08u | kUnwind; return; } goto L_004A0A08; }
L_004A0B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004A0B40:
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_004A0B80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0BA8u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x004A0BA8u) [[unlikely]] return; }
L_004A0BA8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0BBCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 204u, depth + 1u); else { c.pc = 0x0018BBE0u; return; } if (c.pc != 0x004A0BBCu) [[unlikely]] return; }
L_004A0BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0BC4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x004A0BC4u) [[unlikely]] return; }
L_004A0BC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004A0C08; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A0BE4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0BE4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 23u, depth + 1u); else { c.pc = 0x004A0330u; return; } if (c.pc != 0x004A0BE4u) [[unlikely]] return; }
L_004A0BE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A0C04; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0BF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004A0BF8u) [[unlikely]] return; }
L_004A0BF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0C04u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 54u, depth + 1u); else { c.pc = 0x004A07C0u; return; } if (c.pc != 0x004A0C04u) [[unlikely]] return; }
L_004A0C04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004A0C08:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A0C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A0C98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 28224u);
    set32(c.r[3], c.r[3].w[0] - 28200u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28168u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28156u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28132u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0C80u); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0018D0C0u; return; } if (c.pc != 0x004A0C80u) [[unlikely]] return; }
L_004A0C80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A0C9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0C98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A0C98u) [[unlikely]] return; }
L_004A0C98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A0C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A0CB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0C20u | kUnwind; return; } goto L_004A0C20; }
L_004A0CC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0C20u | kUnwind; return; } goto L_004A0C20; }
L_004A0CD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0C20u | kUnwind; return; } goto L_004A0C20; }
L_004A0CE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0C20u | kUnwind; return; } goto L_004A0C20; }
L_004A0CF0:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29204u)));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A0D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004A0D50; } }
L_004A0D20:
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 180u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 12;
L_004A0D50:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A0D64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004A0D94; } }
L_004A0D64:
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 176u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 12;
L_004A0D94:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_004A0DB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A0DF4; } }
L_004A0DCC:
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004A0DF4; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0DF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A0DF0u) [[unlikely]] return; }
L_004A0DF0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004A0DF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0DCCu | kUnwind; return; } goto L_004A0DCC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A0E20:
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A0E48; } }
L_004A0E2C:
    set32(c.r[6], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_004A0E48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), 0u);  if (t) { goto L_004A0E58; } }
L_004A0E48:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0E2Cu | kUnwind; return; } goto L_004A0E2C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_004A0E58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A0E60:
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004A0E88; } }
L_004A0E6C:
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_004A0E88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004A0E98; } }
L_004A0E88:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0E6Cu | kUnwind; return; } goto L_004A0E6C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A0E98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A0EA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0ECCu); set32(c.r[16], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A0ECCu) [[unlikely]] return; }
L_004A0ECC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 28u)));  goto L_004A0F28; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0EE8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A0EE8u) [[unlikely]] return; }
L_004A0EE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 65u);  goto L_004A0EFC; }
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004A0EFC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 1024u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0F14u); set32(c.r[6], c.r[6].w[0] - 8000u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004A0F14u) [[unlikely]] return; }
L_004A0F14:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0F20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A0F20u) [[unlikely]] return; }
L_004A0F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004A0F88; } }
L_004A0F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004A0F4C; } }
L_004A0F30:
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_004A0F4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A0F58; } }
L_004A0F4C:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A0F30u | kUnwind; return; } goto L_004A0F30; }
L_004A0F58:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 24u)));  goto L_004A0F6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004A0F8C; } }
L_004A0F6C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 7;
L_004A0F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004A0F8C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A0FA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A0FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A101C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A0FE0u); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A0FE0u) [[unlikely]] return; }
L_004A0FE0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004A1008; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 26440u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A1004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1004u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A1004u) [[unlikely]] return; }
L_004A1004:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A1008:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A1020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A101Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A101Cu) [[unlikely]] return; }
L_004A101C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A1020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004A1024:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A1040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26440u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1078u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A1078u) [[unlikely]] return; }
L_004A1078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1098u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A1098u) [[unlikely]] return; }
L_004A1098:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004A10B4; } }
L_004A10A4:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_004A10B4:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A10A4u | kUnwind; return; } goto L_004A10A4; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A10E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A1170; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27904u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A1158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21296u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A1158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A1158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21552u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A1158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A1158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1158u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A1158u) [[unlikely]] return; }
L_004A1158:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A1174; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1170u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A1170u) [[unlikely]] return; }
L_004A1170:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A1174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A1190:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A11B8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004A11B0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004A11B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A11BC; } }
L_004A11B8:
    set32(c.r[2], c.r[2].w[0] - 7880u);
    c.budget -= 1;
L_004A11BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A11D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 7872u);  c.pc = t; return; }
L_004A11E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004A1274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1214u); set32(c.r[4], 0u + 304u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A1214u) [[unlikely]] return; }
L_004A1214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004A1274; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A122Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001C(c, 272u, depth + 1u); else { c.pc = 0x00173240u; return; } if (c.pc != 0x004A122Cu) [[unlikely]] return; }
L_004A122C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] - 27832u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27800u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 27788u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27764u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1270u); st32((c.r[16].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A1270u) [[unlikely]] return; }
L_004A1270:
    st32((c.r[16].w[0] + 284u), 0u);
    c.budget -= 1;
L_004A1274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A127Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A127Cu) [[unlikely]] return; }
L_004A127C:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 7840u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1294u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004A1294u) [[unlikely]] return; }
L_004A1294:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_004A12A8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004A12A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A12B0u); set32(c.r[4], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A12B0u) [[unlikely]] return; }
L_004A12B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A12C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 86u, depth + 1u); else { c.pc = 0x00171280u; return; } if (c.pc != 0x004A12C4u) [[unlikely]] return; }
L_004A12C4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A12D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A12D0u) [[unlikely]] return; }
L_004A12D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A12F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 288u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A1314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 296u)));  if (t) { goto L_004A1318; } }
L_004A1314:
    set32(c.r[5], c.r[16].w[0] + 289u);
    c.budget -= 1;
L_004A1318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1320u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004A1320u) [[unlikely]] return; }
L_004A1320:
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A1340:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A136Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 212u, depth + 1u); else { c.pc = 0x0016DE90u; return; } if (c.pc != 0x004A136Cu) [[unlikely]] return; }
L_004A136C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1374u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 203u, depth + 1u); else { c.pc = 0x0016DD50u; return; } if (c.pc != 0x004A1374u) [[unlikely]] return; }
L_004A1374:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_004A13AC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1398u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A1398u) [[unlikely]] return; }
L_004A1398:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A13A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001B(c, 209u, depth + 1u); else { c.pc = 0x0016DE10u; return; } if (c.pc != 0x004A13A4u) [[unlikely]] return; }
L_004A13A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004A140C; } }
L_004A13AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A13B4u);  if (depth < kMaxDepth) unit_001B(c, 203u, depth + 1u); else { c.pc = 0x0016DD50u; return; } if (c.pc != 0x004A13B4u) [[unlikely]] return; }
L_004A13B4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004A13EC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 284u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A13D8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A13D8u) [[unlikely]] return; }
L_004A13D8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A13E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001B(c, 209u, depth + 1u); else { c.pc = 0x0016DE10u; return; } if (c.pc != 0x004A13E4u) [[unlikely]] return; }
L_004A13E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004A140C; } }
L_004A13EC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A13F8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 165u, depth + 1u); else { c.pc = 0x00171F20u; return; } if (c.pc != 0x004A13F8u) [[unlikely]] return; }
L_004A13F8:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1408u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001B(c, 209u, depth + 1u); else { c.pc = 0x0016DE10u; return; } if (c.pc != 0x004A1408u) [[unlikely]] return; }
L_004A1408:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004A140C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A1430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A14BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] - 27832u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27800u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 27788u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27764u);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_004A1498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1498u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A1498u) [[unlikely]] return; }
L_004A1498:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A14A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 269u, depth + 1u); else { c.pc = 0x00173190u; return; } if (c.pc != 0x004A14A4u) [[unlikely]] return; }
L_004A14A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A14C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A14BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A14BCu) [[unlikely]] return; }
L_004A14BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A14C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A14E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29644u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004A14FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A150C; } }
L_004A14FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1504u);  if (depth < kMaxDepth) unit_001C(c, 274u, depth + 1u); else { c.pc = 0x001732E0u; return; } if (c.pc != 0x004A1504u) [[unlikely]] return; }
L_004A1504:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004A150C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A1520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1544u); set32(c.r[4], c.r[4].w[0] - 7936u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004A1544u) [[unlikely]] return; }
L_004A1544:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004A1554; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004A1564; } }
L_004A1554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A155Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 276u, depth + 1u); else { c.pc = 0x00173340u; return; } if (c.pc != 0x004A155Cu) [[unlikely]] return; }
L_004A155C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004A1564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A1580:
    set32(c.r[2], ld32((c.r[28].w[0] - 30984u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004A1590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29644u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004A15AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004A15B4; } }
L_004A15AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A15B4u);  if (depth < kMaxDepth) unit_001C(c, 280u, depth + 1u); else { c.pc = 0x001733E0u; return; } if (c.pc != 0x004A15B4u) [[unlikely]] return; }
L_004A15B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A15C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29644u)));  c.pc = t; return; }
L_004A15D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 7904u);  c.pc = t; return; }
L_004A15E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1520u | kUnwind; return; } goto L_004A1520; }
L_004A15F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A14E0u | kUnwind; return; } goto L_004A14E0; }
L_004A1600:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1580u | kUnwind; return; } goto L_004A1580; }
L_004A1610:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1590u | kUnwind; return; } goto L_004A1590; }
L_004A1620:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A15C0u | kUnwind; return; } goto L_004A15C0; }
L_004A1630:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1430u | kUnwind; return; } goto L_004A1430; }
L_004A1640:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1430u | kUnwind; return; } goto L_004A1430; }
L_004A1650:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1430u | kUnwind; return; } goto L_004A1430; }
L_004A1660:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1430u | kUnwind; return; } goto L_004A1430; }
L_004A1670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A16F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27616u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004A16D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A16B4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004A16B4u) [[unlikely]] return; }
L_004A16B4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_004A16DC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004A16D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004A16D8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_004A16DC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004A16F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A16F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A16F0u) [[unlikely]] return; }
L_004A16F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004A16F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A1710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A1720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A1730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A1740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A1750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1768u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00E8(c, 185u, depth + 1u); else { c.pc = 0x004A1870u; return; } if (c.pc != 0x004A1768u) [[unlikely]] return; }
L_004A1768:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004A17A4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004A1784; }
    set32(c.r[17], c.r[17].w[0] + 48u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004A1784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A178Cu);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x004A178Cu) [[unlikely]] return; }
L_004A178C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A17A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A17A0u) [[unlikely]] return; }
L_004A17A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004A17A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A17C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A17D4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 185u, depth + 1u); else { c.pc = 0x004A1870u; return; } if (c.pc != 0x004A17D4u) [[unlikely]] return; }
L_004A17D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004A17F4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A17F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A17F0u) [[unlikely]] return; }
L_004A17F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A17F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A1800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A1810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 2;
L_004A1818:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1828u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A1828u) [[unlikely]] return; }
L_004A1828:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1838u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00E8(c, 231u, depth + 1u); else { c.pc = 0x004A1E20u; return; } if (c.pc != 0x004A1838u) [[unlikely]] return; }
L_004A1838:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1844u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A1844u) [[unlikely]] return; }
L_004A1844:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 28u)));  goto L_004A1858; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A1858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A1870:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 30920u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A189Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A189Cu) [[unlikely]] return; }
L_004A189C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A18AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A195C; } }
L_004A18AC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] - 7744u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A18C4u); set32(c.r[7], c.r[7].w[0] - 7731u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004A18C4u) [[unlikely]] return; }
L_004A18C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  goto L_004A18EC; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004A18EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A1908; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1900u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A1900u) [[unlikely]] return; }
L_004A1900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A195C; } }
L_004A1908:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 72u)));  goto L_004A1914; }
    set32(c.r[5], c.r[29].w[0] + 65u);
    c.budget -= 1;
L_004A1914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A191Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A191Cu) [[unlikely]] return; }
L_004A191C:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A192Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00E8(c, 231u, depth + 1u); else { c.pc = 0x004A1E20u; return; } if (c.pc != 0x004A192Cu) [[unlikely]] return; }
L_004A192C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1938u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A1938u) [[unlikely]] return; }
L_004A1938:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[3].w[0] + 28u)));  goto L_004A194C; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A194C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1958u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A1958u) [[unlikely]] return; }
L_004A1958:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004A195C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A1970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1990u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A1990u) [[unlikely]] return; }
L_004A1990:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A199Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00E8(c, 221u, depth + 1u); else { c.pc = 0x004A1C90u; return; } if (c.pc != 0x004A199Cu) [[unlikely]] return; }
L_004A199C:
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A19ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A19ACu) [[unlikely]] return; }
L_004A19AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A19C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004A1A08; } }
L_004A19D0:
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_004A19F4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A19F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A19F0u) [[unlikely]] return; }
L_004A19F0:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_004A19F4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23300u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1A08u); st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E8(c, 276u, depth + 1u); else { c.pc = 0x004A21E0u; return; } if (c.pc != 0x004A1A08u) [[unlikely]] return; }
L_004A1A08:
    set32(c.r[4], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 23300u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A19D0u | kUnwind; return; } goto L_004A19D0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 23300u), 0u);  goto L_004A1A34; }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1A30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A1A30u) [[unlikely]] return; }
L_004A1A30:
    st32((c.r[28].w[0] - 23300u), 0u);
    c.budget -= 1;
L_004A1A34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A1A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A1AB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27496u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004A1AA0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004A1AA4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A1AA0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A1AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1AA0u);  if (depth < kMaxDepth) unit_00E8(c, 235u, depth + 1u); else { c.pc = 0x004A1EC0u; return; } if (c.pc != 0x004A1AA0u) [[unlikely]] return; }
L_004A1AA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A1AA4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A1ABC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1AB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A1AB8u) [[unlikely]] return; }
L_004A1AB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A1ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A1AD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1AF0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A1AF0u) [[unlikely]] return; }
L_004A1AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004A1B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 27496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1B0Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004A1B0Cu) [[unlikely]] return; }
L_004A1B0C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004A1B24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1B20u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004A1B20u) [[unlikely]] return; }
L_004A1B20:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004A1B24:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  goto L_004A1B38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1B34u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004A1B34u) [[unlikely]] return; }
L_004A1B34:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_004A1B38:
    set32(c.r[5], c.r[29].w[0] + 52u);
    set32(c.r[2], c.r[29].w[0] + 60u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 56u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1B54u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00E8(c, 281u, depth + 1u); else { c.pc = 0x004A22A0u; return; } if (c.pc != 0x004A1B54u) [[unlikely]] return; }
L_004A1B54:
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 1;
L_004A1B58:
    st32((c.r[28].w[0] - 23300u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A1B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004A1B8C; } }
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 232u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1B8Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A1B8Cu) [[unlikely]] return; }
L_004A1B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A1BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 31120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1BE4u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x004A1BE4u) [[unlikely]] return; }
L_004A1BE4:
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A1C00:
    set32(c.r[2], ld32((c.r[28].w[0] - 29640u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_004A1C0C; }
L_004A1C0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004A1C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1C3Cu); set32(c.r[4], c.r[4].w[0] - 7768u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004A1C3Cu) [[unlikely]] return; }
L_004A1C3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004A1C44; }
L_004A1C44:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A1C60:
    set32(c.r[2], ld32((c.r[28].w[0] - 31172u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004A1C70:
    set32(c.r[2], ld32((c.r[28].w[0] - 29640u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004A1C80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29640u)));  c.pc = t; return; }
L_004A1C90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[21].w[0] + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004A1D00; } }
L_004A1CD4:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1CE0u); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004A1CE0u) [[unlikely]] return; }
L_004A1CE0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_004A1CF4; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004A1D00; } }
L_004A1CF4:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_004A1D00:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1CD4u | kUnwind; return; } goto L_004A1CD4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_004A1D28; }
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1D1Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004A1D1Cu) [[unlikely]] return; }
L_004A1D1C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_004A1D78; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_004A1D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1D30u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A1D30u) [[unlikely]] return; }
L_004A1D30:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1D4Cu); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_00E8(c, 282u, depth + 1u); else { c.pc = 0x004A22D0u; return; } if (c.pc != 0x004A1D4Cu) [[unlikely]] return; }
L_004A1D4C:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004A1D78; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A1D74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1D74u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A1D74u) [[unlikely]] return; }
L_004A1D74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004A1D78:
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
L_004A1DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A1E08; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004A1DF4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A1DF0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A1DF0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A1DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1DF0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A1DF0u) [[unlikely]] return; }
L_004A1DF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A1DF4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A1E0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1E08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A1E08u) [[unlikely]] return; }
L_004A1E08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A1E0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A1E20:
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
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_004A1E6C; } }
L_004A1E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1E5Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004A1E5Cu) [[unlikely]] return; }
L_004A1E5C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_004A1E6C; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_004A1E6C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A1E54u | kUnwind; return; } goto L_004A1E54; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_004A1E98; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1E8Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004A1E8Cu) [[unlikely]] return; }
L_004A1E8C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_004A1E9C; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_004A1E98:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_004A1E9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A1EC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A1FE0; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004A1F50; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004A1F0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1F08u);  if (depth < kMaxDepth) unit_00E8(c, 235u, depth + 1u); else { c.pc = 0x004A1EC0u; return; } if (c.pc != 0x004A1F08u) [[unlikely]] return; }
L_004A1F08:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004A1F0C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004A1F20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1F1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 235u, depth + 1u); else { c.pc = 0x004A1EC0u; return; } if (c.pc != 0x004A1F1Cu) [[unlikely]] return; }
L_004A1F1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A1F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1F28u);  if (depth < kMaxDepth) unit_00E8(c, 275u, depth + 1u); else { c.pc = 0x004A21D0u; return; } if (c.pc != 0x004A1F28u) [[unlikely]] return; }
L_004A1F28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1F34u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E8(c, 273u, depth + 1u); else { c.pc = 0x004A2180u; return; } if (c.pc != 0x004A1F34u) [[unlikely]] return; }
L_004A1F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1F3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 272u, depth + 1u); else { c.pc = 0x004A2170u; return; } if (c.pc != 0x004A1F3Cu) [[unlikely]] return; }
L_004A1F3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1F4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E8(c, 270u, depth + 1u); else { c.pc = 0x004A2150u; return; } if (c.pc != 0x004A1F4Cu) [[unlikely]] return; }
L_004A1F4C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004A1F50:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004A1FB4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004A1F70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1F6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 235u, depth + 1u); else { c.pc = 0x004A1EC0u; return; } if (c.pc != 0x004A1F6Cu) [[unlikely]] return; }
L_004A1F6C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004A1F70:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004A1F84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1F80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 235u, depth + 1u); else { c.pc = 0x004A1EC0u; return; } if (c.pc != 0x004A1F80u) [[unlikely]] return; }
L_004A1F80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A1F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1F8Cu);  if (depth < kMaxDepth) unit_00E8(c, 275u, depth + 1u); else { c.pc = 0x004A21D0u; return; } if (c.pc != 0x004A1F8Cu) [[unlikely]] return; }
L_004A1F8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1F98u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E8(c, 273u, depth + 1u); else { c.pc = 0x004A2180u; return; } if (c.pc != 0x004A1F98u) [[unlikely]] return; }
L_004A1F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1FA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 272u, depth + 1u); else { c.pc = 0x004A2170u; return; } if (c.pc != 0x004A1FA0u) [[unlikely]] return; }
L_004A1FA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1FB0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E8(c, 270u, depth + 1u); else { c.pc = 0x004A2150u; return; } if (c.pc != 0x004A1FB0u) [[unlikely]] return; }
L_004A1FB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A1FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1FBCu);  if (depth < kMaxDepth) unit_00E8(c, 275u, depth + 1u); else { c.pc = 0x004A21D0u; return; } if (c.pc != 0x004A1FBCu) [[unlikely]] return; }
L_004A1FBC:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1FC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00E8(c, 228u, depth + 1u); else { c.pc = 0x004A1DA0u; return; } if (c.pc != 0x004A1FC8u) [[unlikely]] return; }
L_004A1FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1FD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 272u, depth + 1u); else { c.pc = 0x004A2170u; return; } if (c.pc != 0x004A1FD0u) [[unlikely]] return; }
L_004A1FD0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_004A1FE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A1FE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A1FE0u) [[unlikely]] return; }
L_004A1FE0:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004A1FE4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_004A20E8; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004A2054; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004A2010; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A200Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 235u, depth + 1u); else { c.pc = 0x004A1EC0u; return; } if (c.pc != 0x004A200Cu) [[unlikely]] return; }
L_004A200C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004A2010:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004A2024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2020u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 235u, depth + 1u); else { c.pc = 0x004A1EC0u; return; } if (c.pc != 0x004A2020u) [[unlikely]] return; }
L_004A2020:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A2024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A202Cu);  if (depth < kMaxDepth) unit_00E8(c, 275u, depth + 1u); else { c.pc = 0x004A21D0u; return; } if (c.pc != 0x004A202Cu) [[unlikely]] return; }
L_004A202C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2038u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E8(c, 273u, depth + 1u); else { c.pc = 0x004A2180u; return; } if (c.pc != 0x004A2038u) [[unlikely]] return; }
L_004A2038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 272u, depth + 1u); else { c.pc = 0x004A2170u; return; } if (c.pc != 0x004A2040u) [[unlikely]] return; }
L_004A2040:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2050u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E8(c, 270u, depth + 1u); else { c.pc = 0x004A2150u; return; } if (c.pc != 0x004A2050u) [[unlikely]] return; }
L_004A2050:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004A2054:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004A20B8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004A2074; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2070u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 235u, depth + 1u); else { c.pc = 0x004A1EC0u; return; } if (c.pc != 0x004A2070u) [[unlikely]] return; }
L_004A2070:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004A2074:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004A2088; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2084u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 235u, depth + 1u); else { c.pc = 0x004A1EC0u; return; } if (c.pc != 0x004A2084u) [[unlikely]] return; }
L_004A2084:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A2088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2090u);  if (depth < kMaxDepth) unit_00E8(c, 275u, depth + 1u); else { c.pc = 0x004A21D0u; return; } if (c.pc != 0x004A2090u) [[unlikely]] return; }
L_004A2090:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A209Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00E8(c, 273u, depth + 1u); else { c.pc = 0x004A2180u; return; } if (c.pc != 0x004A209Cu) [[unlikely]] return; }
L_004A209C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A20A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 272u, depth + 1u); else { c.pc = 0x004A2170u; return; } if (c.pc != 0x004A20A4u) [[unlikely]] return; }
L_004A20A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A20B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E8(c, 270u, depth + 1u); else { c.pc = 0x004A2150u; return; } if (c.pc != 0x004A20B4u) [[unlikely]] return; }
L_004A20B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A20B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A20C0u);  if (depth < kMaxDepth) unit_00E8(c, 275u, depth + 1u); else { c.pc = 0x004A21D0u; return; } if (c.pc != 0x004A20C0u) [[unlikely]] return; }
L_004A20C0:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A20CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00E8(c, 228u, depth + 1u); else { c.pc = 0x004A1DA0u; return; } if (c.pc != 0x004A20CCu) [[unlikely]] return; }
L_004A20CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A20D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 272u, depth + 1u); else { c.pc = 0x004A2170u; return; } if (c.pc != 0x004A20D4u) [[unlikely]] return; }
L_004A20D4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004A20E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A20E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A20E4u) [[unlikely]] return; }
L_004A20E4:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_004A20E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A2124; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A2124; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A2124; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A2124; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A2124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2124u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A2124u) [[unlikely]] return; }
L_004A2124:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004A2138; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2134u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A2134u) [[unlikely]] return; }
L_004A2134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004A2138:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A2150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004A2164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2164u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A2164u) [[unlikely]] return; }
L_004A2164:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A2170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_004A2180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004A21C0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004A21C4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A21C0; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A21C0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A21C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A21C0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A21C0u) [[unlikely]] return; }
L_004A21C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A21C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A21D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004A21E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A2218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2210u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x004A2210u) [[unlikely]] return; }
L_004A2210:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004A2218:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2224u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001188B0u; return; } if (c.pc != 0x004A2224u) [[unlikely]] return; }
L_004A2224:
    set32(c.r[3], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A2264; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A2264; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A2264; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A2264; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A2264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2264u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A2264u) [[unlikely]] return; }
L_004A2264:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_004A2278; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2274u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A2274u) [[unlikely]] return; }
L_004A2274:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004A2278:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A22A0:
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
L_004A22D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004A2334; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A232Cu); set32(c.r[5], c.r[5].w[0] - 7730u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004A232Cu) [[unlikely]] return; }
L_004A232C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2334u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004A2334u) [[unlikely]] return; }
L_004A2334:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2340u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004A2340u) [[unlikely]] return; }
L_004A2340:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_004A2368; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A235Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A235Cu) [[unlikely]] return; }
L_004A235C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_004A2368:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004A2388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_004A238C; } }
L_004A2388:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004A238C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A23A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x004A23A4u) [[unlikely]] return; }
L_004A23A4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A23B4; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004A23B4:
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
L_004A23E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 7656u);  c.pc = t; return; }
L_004A23F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A2400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A2410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A2420:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[12];  if (t) { goto L_004A2450; } }
    c.f[0] = fp::add(c.f[1], c.f[20]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 2;
L_004A2450:
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = ld8((c.r[16].w[0] + 92u));  goto L_004A2490; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A2478u) [[unlikely]] return; }
L_004A2478:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 92u));  goto L_004A24DC; }
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { goto L_004A24D8; } }
L_004A2490:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A24D8; } }
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = ld8((c.r[16].w[0] + 92u));  goto L_004A24C4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 92u));
    c.budget -= 3;
L_004A24C4:
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_004A24D8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 92u));
    c.budget -= 1;
L_004A24DC:
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004A25BC; }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004A25B8; } }
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 348u)));  goto L_004A2528; }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 3;
L_004A2528:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 349u);  goto L_004A2538; }
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    c.budget -= 1;
L_004A2538:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull & 1ull;  goto L_004A25A0; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A254Cu); set32(c.r[5], c.r[16].w[0] + 348u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A254Cu) [[unlikely]] return; }
L_004A254C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  goto L_004A2574; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004A2574:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_004A2594; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 56u)));  goto L_004A2588; }
    set32(c.r[5], c.r[29].w[0] + 49u);
    c.budget -= 1;
L_004A2588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2590u); set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));  if (depth < kMaxDepth) unit_00CD(c, 136u, depth + 1u); else { c.pc = 0x00434E20u; return; } if (c.pc != 0x004A2590u) [[unlikely]] return; }
L_004A2590:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_004A2594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A259Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A259Cu) [[unlikely]] return; }
L_004A259C:
    c.r[3].d[0] = 0ull & 1ull;
    c.budget -= 1;
L_004A25A0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 92u));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_004A25B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004A25BC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A25D0:
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[6].d[0] = ld8((c.r[4].w[0] + 92u));  goto L_004A2610; }
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004A2624; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_004A2624; } }
L_004A2610:
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_004A2624:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A2630:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] - 7632u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2664u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A2664u) [[unlikely]] return; }
L_004A2664:
    set32(c.r[4], c.r[16].w[0] + 316u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2670u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x004A2670u) [[unlikely]] return; }
L_004A2670:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2680u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2680u) [[unlikely]] return; }
L_004A2680:
    set32(c.r[19], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004A270C; } }
L_004A268C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2698u); set32(c.r[5], c.r[5].w[0] - 7632u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A2698u) [[unlikely]] return; }
L_004A2698:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 316u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A26ACu); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x004A26ACu) [[unlikely]] return; }
L_004A26AC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A26B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A26B8u) [[unlikely]] return; }
L_004A26B8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A26C4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004A26C4u) [[unlikely]] return; }
L_004A26C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A26E4; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A26DCu); st32((c.r[16].w[0] + 104u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A26DCu) [[unlikely]] return; }
L_004A26DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004A272C; } }
L_004A26E4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A26F0u); set32(c.r[5], c.r[5].w[0] - 7630u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004A26F0u) [[unlikely]] return; }
L_004A26F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_004A2700; }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 2;
L_004A2700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2708u) [[unlikely]] return; }
L_004A2708:
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 1;
L_004A270C:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A268Cu | kUnwind; return; } goto L_004A268C; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_004A2728; } }
    st32((c.r[16].w[0] + 104u), c.r[19].w[0]);
    c.budget -= 1;
L_004A2728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004A272C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004A2750:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 332u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A277C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 340u)));  if (t) { goto L_004A2780; } }
L_004A277C:
    set32(c.r[3], c.r[18].w[0] + 333u);
    c.budget -= 1;
L_004A2780:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004A2880; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2798u); set32(c.r[5], c.r[5].w[0] - 7632u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A2798u) [[unlikely]] return; }
L_004A2798:
    set32(c.r[4], c.r[18].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A27A4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x004A27A4u) [[unlikely]] return; }
L_004A27A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A27B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A27B4u) [[unlikely]] return; }
L_004A27B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A2870; } }
L_004A27BC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A27C8u); set32(c.r[5], c.r[5].w[0] - 7632u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A27C8u) [[unlikely]] return; }
L_004A27C8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 332u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A27DCu); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x004A27DCu) [[unlikely]] return; }
L_004A27DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A27F0u); set32(c.r[5], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_000A(c, 138u, depth + 1u); else { c.pc = 0x00129250u; return; } if (c.pc != 0x004A27F0u) [[unlikely]] return; }
L_004A27F0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A27FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A27FCu) [[unlikely]] return; }
L_004A27FC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2808u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2808u) [[unlikely]] return; }
L_004A2808:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_004A281C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004A281C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2830u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A2830u) [[unlikely]] return; }
L_004A2830:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_004A2840; }
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_004A2840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2848u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x004A2848u) [[unlikely]] return; }
L_004A2848:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_004A2864; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 232u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2860u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A2860u) [[unlikely]] return; }
L_004A2860:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_004A2864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A286Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A286Cu) [[unlikely]] return; }
L_004A286C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004A2870:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A27BCu | kUnwind; return; } goto L_004A27BC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004A2880:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004A28A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A28C0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 212u, depth + 1u); else { c.pc = 0x0016DE90u; return; } if (c.pc != 0x004A28C0u) [[unlikely]] return; }
L_004A28C0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 164u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004A2920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A28D8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001B(c, 203u, depth + 1u); else { c.pc = 0x0016DD50u; return; } if (c.pc != 0x004A28D8u) [[unlikely]] return; }
L_004A28D8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_004A28FC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A28F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004A2920; } }
L_004A28F8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_004A28FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2904u);  if (depth < kMaxDepth) unit_001B(c, 203u, depth + 1u); else { c.pc = 0x0016DD50u; return; } if (c.pc != 0x004A2904u) [[unlikely]] return; }
L_004A2904:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_004A2920; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A2920; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004A2920:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_004A2978; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2938u); set32(c.r[4], c.r[4].w[0] - 7622u);  if (depth < kMaxDepth) unit_00D5(c, 24u, depth + 1u); else { c.pc = 0x00454290u; return; } if (c.pc != 0x004A2938u) [[unlikely]] return; }
L_004A2938:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 100u), c.r[4].w[0]);
    st8((c.r[17].w[0] + 80u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 9;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_004A2968; }
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
L_004A2968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2970u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001B(c, 209u, depth + 1u); else { c.pc = 0x0016DE10u; return; } if (c.pc != 0x004A2970u) [[unlikely]] return; }
L_004A2970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004A2984; } }
L_004A2978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2980u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001B(c, 209u, depth + 1u); else { c.pc = 0x0016DE10u; return; } if (c.pc != 0x004A2980u) [[unlikely]] return; }
L_004A2980:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A2984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A29A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A29C4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 340u, depth + 1u); else { c.pc = 0x0016FD30u; return; } if (c.pc != 0x004A29C4u) [[unlikely]] return; }
L_004A29C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));  goto L_004A29DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_004A29E4; } }
L_004A29DC:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 2;
L_004A29E4:
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004A2A70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2A00u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x004A2A00u) [[unlikely]] return; }
L_004A2A00:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2A10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A2A10u) [[unlikely]] return; }
L_004A2A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_004A2A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2A20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 201u, depth + 1u); else { c.pc = 0x0016DCF0u; return; } if (c.pc != 0x004A2A20u) [[unlikely]] return; }
L_004A2A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A2A6C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2A40u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A2A40u) [[unlikely]] return; }
L_004A2A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A2A6C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 52u);  if (t) { goto L_004A2A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004A2A64; } }
L_004A2A60:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004A2A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2A6Cu); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A2A6Cu) [[unlikely]] return; }
L_004A2A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004A2A70:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A2A90:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A2AB8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004A2D5C; }
L_004A2AB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2AC8u); set32(c.r[5], c.r[5].w[0] - 7605u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A2AC8u) [[unlikely]] return; }
L_004A2AC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004A2B6C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2AE4u); set32(c.r[5], c.r[5].w[0] - 7632u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A2AE4u) [[unlikely]] return; }
L_004A2AE4:
    set32(c.r[4], c.r[16].w[0] + 316u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2AF0u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x004A2AF0u) [[unlikely]] return; }
L_004A2AF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2B08u); c.r[17].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2B08u) [[unlikely]] return; }
L_004A2B08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A2B6C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2B20u); set32(c.r[5], c.r[5].w[0] - 7632u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A2B20u) [[unlikely]] return; }
L_004A2B20:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 316u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2B38u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x004A2B38u) [[unlikely]] return; }
L_004A2B38:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_004A2B4C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004A2B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2B54u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A2B54u) [[unlikely]] return; }
L_004A2B54:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2B60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2B60u) [[unlikely]] return; }
L_004A2B60:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2B6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2B6Cu) [[unlikely]] return; }
L_004A2B6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2B7Cu); set32(c.r[5], c.r[5].w[0] - 7605u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004A2B7Cu) [[unlikely]] return; }
L_004A2B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A2C3C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 116u));  goto L_004A2B9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 120u)));  if (t) { goto L_004A2BA4; } }
L_004A2B9C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004A2BA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A2C3C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2BBCu); set32(c.r[5], c.r[5].w[0] - 7632u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A2BBCu) [[unlikely]] return; }
L_004A2BBC:
    set32(c.r[4], c.r[16].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2BC8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x004A2BC8u) [[unlikely]] return; }
L_004A2BC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2BDCu); c.r[17].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2BDCu) [[unlikely]] return; }
L_004A2BDC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A2C3C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2BF4u); set32(c.r[5], c.r[5].w[0] - 7632u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A2BF4u) [[unlikely]] return; }
L_004A2BF4:
    set32(c.r[6], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 116u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2C08u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x004A2C08u) [[unlikely]] return; }
L_004A2C08:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_004A2C1C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004A2C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2C24u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A2C24u) [[unlikely]] return; }
L_004A2C24:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2C30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2C30u) [[unlikely]] return; }
L_004A2C30:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2C3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2C3Cu) [[unlikely]] return; }
L_004A2C3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2C4Cu); set32(c.r[5], c.r[5].w[0] - 7605u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004A2C4Cu) [[unlikely]] return; }
L_004A2C4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A2CE4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2C64u); set32(c.r[5], c.r[5].w[0] - 7632u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A2C64u) [[unlikely]] return; }
L_004A2C64:
    set32(c.r[4], c.r[16].w[0] + 284u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2C70u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x004A2C70u) [[unlikely]] return; }
L_004A2C70:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2C84u); c.r[17].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2C84u) [[unlikely]] return; }
L_004A2C84:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A2CE4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2C9Cu); set32(c.r[5], c.r[5].w[0] - 7632u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A2C9Cu) [[unlikely]] return; }
L_004A2C9C:
    set32(c.r[6], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 284u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2CB0u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x004A2CB0u) [[unlikely]] return; }
L_004A2CB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_004A2CC4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004A2CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2CCCu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A2CCCu) [[unlikely]] return; }
L_004A2CCC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2CD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2CD8u) [[unlikely]] return; }
L_004A2CD8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2CE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2CE4u) [[unlikely]] return; }
L_004A2CE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2CF4u); set32(c.r[5], c.r[5].w[0] - 7605u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004A2CF4u) [[unlikely]] return; }
L_004A2CF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_004A2D44; }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 196u)));  goto L_004A2D24; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004A2D24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A2D40; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 200u)));  goto L_004A2D38; }
    set32(c.r[5], c.r[29].w[0] + 193u);
    c.budget -= 1;
L_004A2D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2D40u); set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));  if (depth < kMaxDepth) unit_00CD(c, 136u, depth + 1u); else { c.pc = 0x00434E20u; return; } if (c.pc != 0x004A2D40u) [[unlikely]] return; }
L_004A2D40:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_004A2D44:
    set32(c.r[4], c.r[29].w[0] + 192u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2D58u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2D58u) [[unlikely]] return; }
L_004A2D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004A2D5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004A2D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 120u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A2D94; } }
    set32(c.r[4], c.r[4].w[0] - 72u);
    c.budget -= 1;
L_004A2D94:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A2DA0; } }
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_004A2DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2DA8u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x004A2DA8u) [[unlikely]] return; }
L_004A2DA8:
    st8((c.r[17].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_004A2DD0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_004A2DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2DD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 150u, depth + 1u); else { c.pc = 0x00189E80u; return; } if (c.pc != 0x004A2DD8u) [[unlikely]] return; }
L_004A2DD8:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A2DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004A2E64; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_004A2E54; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_004A2E40; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_004A2E2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A2E7C; } }
L_004A2E2C:
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2E38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A2E38u) [[unlikely]] return; }
L_004A2E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A2E88; } }
L_004A2E40:
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2E4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A2E4Cu) [[unlikely]] return; }
L_004A2E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A2E84; } }
L_004A2E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2E5Cu);  if (depth < kMaxDepth) unit_00E8(c, 378u, depth + 1u); else { c.pc = 0x004A2E90u; return; } if (c.pc != 0x004A2E5Cu) [[unlikely]] return; }
L_004A2E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A2E84; } }
L_004A2E64:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2E74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A2E74u) [[unlikely]] return; }
L_004A2E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A2E84; } }
L_004A2E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2E84u);  if (depth < kMaxDepth) unit_0029(c, 10u, depth + 1u); else { c.pc = 0x001A4160u; return; } if (c.pc != 0x004A2E84u) [[unlikely]] return; }
L_004A2E84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A2E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A2E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[4].w[0] + 180u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    st32((c.r[4].w[0] + 108u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 184u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004A2ECC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A2ECC:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 92u));
    c.r[5].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 300u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[4].w[0] + 301u);  goto L_004A2F00; }
    set32(c.r[3], ld32((c.r[4].w[0] + 308u)));
    c.budget -= 1;
L_004A2F00:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004A2F68; }
    set32(c.r[5], c.r[4].w[0] + 300u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2F14u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A2F14u) [[unlikely]] return; }
L_004A2F14:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 20u)));  goto L_004A2F3C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004A2F3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 16u);  goto L_004A2F5C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 24u)));  goto L_004A2F50; }
    set32(c.r[5], c.r[29].w[0] + 17u);
    c.budget -= 1;
L_004A2F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2F58u); set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));  if (depth < kMaxDepth) unit_00CD(c, 136u, depth + 1u); else { c.pc = 0x00434E20u; return; } if (c.pc != 0x004A2F58u) [[unlikely]] return; }
L_004A2F58:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_004A2F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2F64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A2F64u) [[unlikely]] return; }
L_004A2F64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A2F68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A2F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2F8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 260u, depth + 1u); else { c.pc = 0x001A3CE0u; return; } if (c.pc != 0x004A2F8Cu) [[unlikely]] return; }
L_004A2F8C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2F98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 194u, depth + 1u); else { c.pc = 0x0019F0E0u; return; } if (c.pc != 0x004A2F98u) [[unlikely]] return; }
L_004A2F98:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2FACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A2FACu) [[unlikely]] return; }
L_004A2FAC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2FC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A2FC0u) [[unlikely]] return; }
L_004A2FC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A2FCCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x004A2FCCu) [[unlikely]] return; }
L_004A2FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A2FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 9;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 152u)));  goto L_004A3010; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 148u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_004A3010:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004A3030; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 156u)));  goto L_004A3024; }
    set32(c.r[5], c.r[4].w[0] + 149u);
    c.budget -= 1;
L_004A3024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A302Cu); set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));  if (depth < kMaxDepth) unit_00CD(c, 136u, depth + 1u); else { c.pc = 0x00434E20u; return; } if (c.pc != 0x004A302Cu) [[unlikely]] return; }
L_004A302C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A3030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A3040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A3184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27472u);
    set32(c.r[3], c.r[3].w[0] - 27448u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27436u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 12;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 164u);  goto L_004A3098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3094u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 186u, depth + 1u); else { c.pc = 0x0019EEA0u; return; } if (c.pc != 0x004A3094u) [[unlikely]] return; }
L_004A3094:
    set32(c.r[2], c.r[16].w[0] + 164u);
    c.budget -= 1;
L_004A3098:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 148u);  goto L_004A3128; }
    set32(c.r[4], c.r[16].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A30ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A30ACu) [[unlikely]] return; }
L_004A30AC:
    set32(c.r[4], c.r[16].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A30B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A30B8u) [[unlikely]] return; }
L_004A30B8:
    set32(c.r[4], c.r[16].w[0] + 316u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A30C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A30C4u) [[unlikely]] return; }
L_004A30C4:
    set32(c.r[4], c.r[16].w[0] + 300u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A30D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A30D0u) [[unlikely]] return; }
L_004A30D0:
    set32(c.r[4], c.r[16].w[0] + 284u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A30DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A30DCu) [[unlikely]] return; }
L_004A30DC:
    set32(c.r[4], c.r[16].w[0] + 268u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A30E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A30E8u) [[unlikely]] return; }
L_004A30E8:
    set32(c.r[4], c.r[16].w[0] + 252u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A30F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A30F4u) [[unlikely]] return; }
L_004A30F4:
    set32(c.r[4], c.r[16].w[0] + 236u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3100u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3100u) [[unlikely]] return; }
L_004A3100:
    set32(c.r[4], c.r[16].w[0] + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A310Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A310Cu) [[unlikely]] return; }
L_004A310C:
    set32(c.r[4], c.r[16].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3118u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3118u) [[unlikely]] return; }
L_004A3118:
    set32(c.r[4], c.r[16].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3124u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3124u) [[unlikely]] return; }
L_004A3124:
    set32(c.r[4], c.r[16].w[0] + 148u);
    c.budget -= 1;
L_004A3128:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 132u);  goto L_004A313C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3138u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A3138u) [[unlikely]] return; }
L_004A3138:
    set32(c.r[4], c.r[16].w[0] + 132u);
    c.budget -= 1;
L_004A313C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 116u);  goto L_004A3150; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A314Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A314Cu) [[unlikely]] return; }
L_004A314C:
    set32(c.r[4], c.r[16].w[0] + 116u);
    c.budget -= 1;
L_004A3150:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004A3164; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3160u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A3160u) [[unlikely]] return; }
L_004A3160:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004A3164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A316Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0029(c, 15u, depth + 1u); else { c.pc = 0x001A4220u; return; } if (c.pc != 0x004A316Cu) [[unlikely]] return; }
L_004A316C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004A3188; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3184u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A3184u) [[unlikely]] return; }
L_004A3184:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004A3188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A31A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A31B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 20u, depth + 1u); else { c.pc = 0x001A4370u; return; } if (c.pc != 0x004A31B4u) [[unlikely]] return; }
L_004A31B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27472u);
    set32(c.r[3], c.r[3].w[0] - 27448u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 116u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27436u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A31E0u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A31E0u) [[unlikely]] return; }
L_004A31E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A31E8u); set32(c.r[4], c.r[16].w[0] + 132u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A31E8u) [[unlikely]] return; }
L_004A31E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A31F0u); set32(c.r[4], c.r[16].w[0] + 148u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A31F0u) [[unlikely]] return; }
L_004A31F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A31F8u); set32(c.r[4], c.r[16].w[0] + 164u);  if (depth < kMaxDepth) unit_00E8(c, 488u, depth + 1u); else { c.pc = 0x004A3A50u; return; } if (c.pc != 0x004A31F8u) [[unlikely]] return; }
L_004A31F8:
    set32(c.r[2], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 116u);
    set32(c.r[5], c.r[5].w[0] - 7600u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3214u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A3214u) [[unlikely]] return; }
L_004A3214:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3224u); set32(c.r[5], c.r[5].w[0] - 7600u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A3224u) [[unlikely]] return; }
L_004A3224:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3234u); set32(c.r[5], c.r[5].w[0] - 7600u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A3234u) [[unlikely]] return; }
L_004A3234:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 92u));
    set32(c.r[2], 0u - 2u);
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[7].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 92u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A3290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A33A0; } }
    set32(c.r[4], c.r[17].w[0] + 184u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 168u);  goto L_004A32C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A32C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A32C0u) [[unlikely]] return; }
L_004A32C0:
    set32(c.r[4], c.r[17].w[0] + 168u);
    c.budget -= 1;
L_004A32C4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 152u);  goto L_004A32D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A32D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A32D4u) [[unlikely]] return; }
L_004A32D4:
    set32(c.r[4], c.r[17].w[0] + 152u);
    c.budget -= 1;
L_004A32D8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 136u);  goto L_004A32EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A32E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A32E8u) [[unlikely]] return; }
L_004A32E8:
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.budget -= 1;
L_004A32EC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 120u);  goto L_004A3300; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A32FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A32FCu) [[unlikely]] return; }
L_004A32FC:
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.budget -= 1;
L_004A3300:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 104u);  goto L_004A3314; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A3310u) [[unlikely]] return; }
L_004A3310:
    set32(c.r[4], c.r[17].w[0] + 104u);
    c.budget -= 1;
L_004A3314:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 88u);  goto L_004A3328; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A3324u) [[unlikely]] return; }
L_004A3324:
    set32(c.r[4], c.r[17].w[0] + 88u);
    c.budget -= 1;
L_004A3328:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 72u);  goto L_004A333C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3338u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A3338u) [[unlikely]] return; }
L_004A3338:
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 1;
L_004A333C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 56u);  goto L_004A3350; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A334Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A334Cu) [[unlikely]] return; }
L_004A334C:
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 1;
L_004A3350:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 40u);  goto L_004A3364; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3360u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A3360u) [[unlikely]] return; }
L_004A3360:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 1;
L_004A3364:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 24u);  goto L_004A3378; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3374u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A3374u) [[unlikely]] return; }
L_004A3374:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_004A3378:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004A338C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A3388u) [[unlikely]] return; }
L_004A3388:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A338C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A33A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A33A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A33A0u) [[unlikely]] return; }
L_004A33A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A33A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A33C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29636u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004A33DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A33EC; } }
L_004A33DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A33E4u);  if (depth < kMaxDepth) unit_0029(c, 23u, depth + 1u); else { c.pc = 0x001A4470u; return; } if (c.pc != 0x004A33E4u) [[unlikely]] return; }
L_004A33E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004A33EC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A3400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3424u); set32(c.r[4], c.r[4].w[0] - 7672u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004A3424u) [[unlikely]] return; }
L_004A3424:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004A3434; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004A3444; } }
L_004A3434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A343Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 24u, depth + 1u); else { c.pc = 0x001A44B0u; return; } if (c.pc != 0x004A343Cu) [[unlikely]] return; }
L_004A343C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004A3444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A3460:
    set32(c.r[2], ld32((c.r[28].w[0] - 30852u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004A3470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29636u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004A348C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004A3494; } }
L_004A348C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3494u);  if (depth < kMaxDepth) unit_0029(c, 27u, depth + 1u); else { c.pc = 0x001A4540u; return; } if (c.pc != 0x004A3494u) [[unlikely]] return; }
L_004A3494:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A34A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29636u)));  c.pc = t; return; }
L_004A34B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3040u | kUnwind; return; } goto L_004A3040; }
L_004A34C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3400u | kUnwind; return; } goto L_004A3400; }
L_004A34D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A33C0u | kUnwind; return; } goto L_004A33C0; }
L_004A34E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3460u | kUnwind; return; } goto L_004A3460; }
L_004A34F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3470u | kUnwind; return; } goto L_004A3470; }
L_004A3500:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A34A0u | kUnwind; return; } goto L_004A34A0; }
L_004A3510:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3040u | kUnwind; return; } goto L_004A3040; }
L_004A3520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A35A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 27280u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004A3588; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3564u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004A3564u) [[unlikely]] return; }
L_004A3564:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_004A358C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004A3588; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004A3588:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_004A358C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004A35A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A35A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A35A0u) [[unlikely]] return; }
L_004A35A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004A35A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A35C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 7456u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 68u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A35F4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004A35F4u) [[unlikely]] return; }
L_004A35F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_004A3608; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004A3608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3610u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A3610u) [[unlikely]] return; }
L_004A3610:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A361Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A361Cu) [[unlikely]] return; }
L_004A361C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3630u); set32(c.r[5], c.r[2].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A3630u) [[unlikely]] return; }
L_004A3630:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3640u); set32(c.r[5], c.r[5].w[0] - 7447u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A3640u) [[unlikely]] return; }
L_004A3640:
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3654u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x004A3654u) [[unlikely]] return; }
L_004A3654:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A3660u) [[unlikely]] return; }
L_004A3660:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A366Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A366Cu) [[unlikely]] return; }
L_004A366C:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_004A3680; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004A3680:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3690u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A3690u) [[unlikely]] return; }
L_004A3690:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004A369C; } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 1;
L_004A369C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A36A4u);  if (depth < kMaxDepth) unit_00E0(c, 472u, depth + 1u); else { c.pc = 0x004838E0u; return; } if (c.pc != 0x004A36A4u) [[unlikely]] return; }
L_004A36A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A36ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 73u, depth + 1u); else { c.pc = 0x0049CBA0u; return; } if (c.pc != 0x004A36ACu) [[unlikely]] return; }
L_004A36AC:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A36C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A36C0u) [[unlikely]] return; }
L_004A36C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A36D8u); st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A36D8u) [[unlikely]] return; }
L_004A36D8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A36E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A36E4u) [[unlikely]] return; }
L_004A36E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004A3700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A3710:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004A3738; } }
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_004A3738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3740u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x004A3740u) [[unlikely]] return; }
L_004A3740:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[6].w[0] - 7445u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3760u); set32(c.r[7], c.r[7].w[0] - 7427u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004A3760u) [[unlikely]] return; }
L_004A3760:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 65u);  goto L_004A3774; }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004A3774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A377Cu);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004A377Cu) [[unlikely]] return; }
L_004A377C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3784u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 103u, depth + 1u); else { c.pc = 0x0047CD10u; return; } if (c.pc != 0x004A3784u) [[unlikely]] return; }
L_004A3784:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[2].sd[0] <= 0) { set32(c.r[18], ld32((c.r[17].w[0] + 76u)));  goto L_004A37D8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29244u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A37ACu); st32((c.r[28].w[0] - 29244u), 0u);  if (depth < kMaxDepth) unit_0026(c, 323u, depth + 1u); else { c.pc = 0x0019BE80u; return; } if (c.pc != 0x004A37ACu) [[unlikely]] return; }
L_004A37AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[16].w[0] + 60u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A37CCu); c.r[9].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 306u, depth + 1u); else { c.pc = 0x0019BB20u; return; } if (c.pc != 0x004A37CCu) [[unlikely]] return; }
L_004A37CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[28].w[0] - 29244u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
L_004A37D8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 60u);  goto L_004A37F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A37E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x004A37E8u) [[unlikely]] return; }
L_004A37E8:
    c.r[5].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A37F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004A37F4u) [[unlikely]] return; }
L_004A37F4:
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 1;
L_004A37F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3800u);  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x004A3800u) [[unlikely]] return; }
L_004A3800:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3810u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A3810u) [[unlikely]] return; }
L_004A3810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A3830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u - 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[5].w[0] + 44u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 68u));
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 33;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A38BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 24u);  if (t) { goto L_004A38C8; } }
L_004A38BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 7368u);
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
L_004A38C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A38D0u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A38D0u) [[unlikely]] return; }
L_004A38D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A38E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 40u);  if (t) { goto L_004A38EC; } }
L_004A38E4:
    set32(c.r[5], c.r[5].w[0] - 7368u);
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 2;
L_004A38EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A38F4u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A38F4u) [[unlikely]] return; }
L_004A38F4:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A3908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 56u);  if (t) { goto L_004A3910; } }
L_004A3908:
    set32(c.r[5], c.r[5].w[0] - 7368u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 2;
L_004A3910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3918u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A3918u) [[unlikely]] return; }
L_004A3918:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A392C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 72u);  if (t) { goto L_004A3934; } }
L_004A392C:
    set32(c.r[5], c.r[5].w[0] - 7368u);
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 2;
L_004A3934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A393Cu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A393Cu) [[unlikely]] return; }
L_004A393C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A3950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 88u);  if (t) { goto L_004A3958; } }
L_004A3950:
    set32(c.r[5], c.r[5].w[0] - 7368u);
    set32(c.r[4], c.r[17].w[0] + 88u);
    c.budget -= 2;
L_004A3958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3960u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A3960u) [[unlikely]] return; }
L_004A3960:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A3974; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 104u);  if (t) { goto L_004A397C; } }
L_004A3974:
    set32(c.r[5], c.r[5].w[0] - 7368u);
    set32(c.r[4], c.r[17].w[0] + 104u);
    c.budget -= 2;
L_004A397C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3984u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A3984u) [[unlikely]] return; }
L_004A3984:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A3998; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 120u);  if (t) { goto L_004A39A0; } }
L_004A3998:
    set32(c.r[5], c.r[5].w[0] - 7368u);
    set32(c.r[4], c.r[17].w[0] + 120u);
    c.budget -= 2;
L_004A39A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A39A8u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A39A8u) [[unlikely]] return; }
L_004A39A8:
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A39BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 136u);  if (t) { goto L_004A39C4; } }
L_004A39BC:
    set32(c.r[5], c.r[5].w[0] - 7368u);
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.budget -= 2;
L_004A39C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A39CCu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A39CCu) [[unlikely]] return; }
L_004A39CC:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A39E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 152u);  if (t) { goto L_004A39E8; } }
L_004A39E0:
    set32(c.r[5], c.r[5].w[0] - 7368u);
    set32(c.r[4], c.r[17].w[0] + 152u);
    c.budget -= 2;
L_004A39E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A39F0u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A39F0u) [[unlikely]] return; }
L_004A39F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A3A04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 168u);  if (t) { goto L_004A3A0C; } }
L_004A3A04:
    set32(c.r[5], c.r[5].w[0] - 7368u);
    set32(c.r[4], c.r[17].w[0] + 168u);
    c.budget -= 2;
L_004A3A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3A14u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A3A14u) [[unlikely]] return; }
L_004A3A14:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A3A28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 184u);  if (t) { goto L_004A3A30; } }
L_004A3A28:
    set32(c.r[5], c.r[5].w[0] - 7368u);
    set32(c.r[4], c.r[17].w[0] + 184u);
    c.budget -= 2;
L_004A3A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3A38u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004A3A38u) [[unlikely]] return; }
L_004A3A38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A3A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u - 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u - 3u);
    c.r[7].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3AACu); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A3AACu) [[unlikely]] return; }
L_004A3AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3AB4u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A3AB4u) [[unlikely]] return; }
L_004A3AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3ABCu); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A3ABCu) [[unlikely]] return; }
L_004A3ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3AC4u); set32(c.r[4], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A3AC4u) [[unlikely]] return; }
L_004A3AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3ACCu); set32(c.r[4], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A3ACCu) [[unlikely]] return; }
L_004A3ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3AD4u); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A3AD4u) [[unlikely]] return; }
L_004A3AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3ADCu); set32(c.r[4], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A3ADCu) [[unlikely]] return; }
L_004A3ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3AE4u); set32(c.r[4], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A3AE4u) [[unlikely]] return; }
L_004A3AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3AECu); set32(c.r[4], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A3AECu) [[unlikely]] return; }
L_004A3AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3AF4u); set32(c.r[4], c.r[16].w[0] + 168u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A3AF4u) [[unlikely]] return; }
L_004A3AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3AFCu); set32(c.r[4], c.r[16].w[0] + 184u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A3AFCu) [[unlikely]] return; }
L_004A3AFC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A3B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3B28u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A3B28u) [[unlikely]] return; }
L_004A3B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3B30u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A3B30u) [[unlikely]] return; }
L_004A3B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3B38u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A3B38u) [[unlikely]] return; }
L_004A3B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3B40u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A3B40u) [[unlikely]] return; }
L_004A3B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3B48u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A3B48u) [[unlikely]] return; }
L_004A3B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3B50u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A3B50u) [[unlikely]] return; }
L_004A3B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3B58u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A3B58u) [[unlikely]] return; }
L_004A3B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3B60u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A3B60u) [[unlikely]] return; }
L_004A3B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3B68u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A3B68u) [[unlikely]] return; }
L_004A3B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3B70u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A3B70u) [[unlikely]] return; }
L_004A3B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3B78u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A3B78u) [[unlikely]] return; }
L_004A3B78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A3B90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3BACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 82u, depth + 1u); else { c.pc = 0x001A5330u; return; } if (c.pc != 0x004A3BACu) [[unlikely]] return; }
L_004A3BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004A3C00; } }
L_004A3BB4:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A3BCC; } }
    set32(c.r[4], c.r[4].w[0] + 68u);
    c.budget -= 1;
L_004A3BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3BD4u);  if (depth < kMaxDepth) unit_00CD(c, 82u, depth + 1u); else { c.pc = 0x004348B0u; return; } if (c.pc != 0x004A3BD4u) [[unlikely]] return; }
L_004A3BD4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3BECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A3BECu) [[unlikely]] return; }
L_004A3BEC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3BFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A3BFCu) [[unlikely]] return; }
L_004A3BFC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004A3C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3C08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 82u, depth + 1u); else { c.pc = 0x001A5330u; return; } if (c.pc != 0x004A3C08u) [[unlikely]] return; }
L_004A3C08:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3BB4u | kUnwind; return; } goto L_004A3BB4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A3C30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004A3CA0; } }
L_004A3C58:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_004A3C78; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_004A3C98; }
L_004A3C78:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3C88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A3C88u) [[unlikely]] return; }
L_004A3C88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A3C94; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004A3C94:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_004A3C98:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004A3CA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3C58u | kUnwind; return; } goto L_004A3C58; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A3CF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A3D50; } }
L_004A3D10:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3D28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A3D28u) [[unlikely]] return; }
L_004A3D28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_004A3D80; }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 80u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  goto L_004A3D48; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A3D80; } }
L_004A3D48:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004A3D50:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A3D10u | kUnwind; return; } goto L_004A3D10; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A3D80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A3DA0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3DB8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00E8(c, 476u, depth + 1u); else { c.pc = 0x004A3830u; return; } if (c.pc != 0x004A3DB8u) [[unlikely]] return; }
L_004A3DB8:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], c.r[16].w[0] + 72u);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3DE8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00E9(c, 171u, depth + 1u); else { c.pc = 0x004A56C0u; return; } if (c.pc != 0x004A3DE8u) [[unlikely]] return; }
L_004A3DE8:
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3DF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3DF4u) [[unlikely]] return; }
L_004A3DF4:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E00u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3E00u) [[unlikely]] return; }
L_004A3E00:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3E0Cu) [[unlikely]] return; }
L_004A3E0C:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3E18u) [[unlikely]] return; }
L_004A3E18:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3E24u) [[unlikely]] return; }
L_004A3E24:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3E30u) [[unlikely]] return; }
L_004A3E30:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3E3Cu) [[unlikely]] return; }
L_004A3E3C:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3E48u) [[unlikely]] return; }
L_004A3E48:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3E54u) [[unlikely]] return; }
L_004A3E54:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3E60u) [[unlikely]] return; }
L_004A3E60:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3E6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0000(c, 224u, depth + 1u); else { c.pc = 0x00102DC0u; return; } if (c.pc != 0x004A3E6Cu) [[unlikely]] return; }
L_004A3E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004A3E80:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A3E8C; } }
    set32(c.r[7], c.r[7].w[0] + 56u);
    c.budget -= 1;
L_004A3E8C:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 7360u);
    c.budget -= 5;
    { c.r[8].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00102E60u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 231u, depth); }
L_004A3EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004A3EFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3EC0u);  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A51D0u; return; } if (c.pc != 0x004A3EC0u) [[unlikely]] return; }
L_004A3EC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_004A3ED0; }
    set32(c.r[2], c.r[2].w[0] + 68u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_004A3ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3ED8u);  if (depth < kMaxDepth) unit_00CD(c, 82u, depth + 1u); else { c.pc = 0x004348B0u; return; } if (c.pc != 0x004A3ED8u) [[unlikely]] return; }
L_004A3ED8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004A3EF0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3EECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E8(c, 297u, depth + 1u); else { c.pc = 0x004A25D0u; return; } if (c.pc != 0x004A3EECu) [[unlikely]] return; }
L_004A3EEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004A3EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3EF8u);  if (depth < kMaxDepth) unit_00E9(c, 60u, depth + 1u); else { c.pc = 0x004A4790u; return; } if (c.pc != 0x004A3EF8u) [[unlikely]] return; }
L_004A3EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A3EFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A3F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A3F30; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3F30u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E8(c, 297u, depth + 1u); else { c.pc = 0x004A25D0u; return; } if (c.pc != 0x004A3F30u) [[unlikely]] return; }
L_004A3F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3F38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 60u, depth + 1u); else { c.pc = 0x004A4790u; return; } if (c.pc != 0x004A3F38u) [[unlikely]] return; }
L_004A3F38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A3F50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3F74u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 2u, depth + 1u); else { c.pc = 0x004A4020u; return; } if (c.pc != 0x004A3F74u) [[unlikely]] return; }
L_004A3F74:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3F8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A3F8Cu) [[unlikely]] return; }
L_004A3F8C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3FA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A3FA0u) [[unlikely]] return; }
L_004A3FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3FA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 60u, depth + 1u); else { c.pc = 0x004A4790u; return; } if (c.pc != 0x004A3FA8u) [[unlikely]] return; }
L_004A3FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A3FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3FE0u); set32(c.r[4], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_000C(c, 225u, depth + 1u); else { c.pc = 0x00132910u; return; } if (c.pc != 0x004A3FE0u) [[unlikely]] return; }
L_004A3FE0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3FECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 2u, depth + 1u); else { c.pc = 0x004A4020u; return; } if (c.pc != 0x004A3FECu) [[unlikely]] return; }
L_004A3FEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A3FF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 60u, depth + 1u); else { c.pc = 0x004A4790u; return; } if (c.pc != 0x004A3FF8u) [[unlikely]] return; }
L_004A3FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4000u); set32(c.r[4], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_000C(c, 222u, depth + 1u); else { c.pc = 0x001328D0u; return; } if (c.pc != 0x004A4000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00E9(c, 1u, depth);
}

}
