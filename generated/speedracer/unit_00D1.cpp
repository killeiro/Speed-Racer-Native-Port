#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D1[4096] = {
    1, 2, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42,
    0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 60, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81,
    0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 108, 109, 110, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 114,
    0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0,
    170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0,
    190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 239,
    0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0,
    0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0,
    313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 326, 0, 327, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0,
    345, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0,
    0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 383, 0,
    384, 0, 0, 0, 385, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390,
    0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0,
    403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 408, 0, 0,
    409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00D1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00444000;
    case 2u: goto L_00444004;
    case 3u: goto L_00444014;
    case 4u: goto L_00444018;
    case 5u: goto L_00444030;
    case 6u: goto L_0044404C;
    case 7u: goto L_00444060;
    case 8u: goto L_00444084;
    case 9u: goto L_00444090;
    case 10u: goto L_004440B4;
    case 11u: goto L_004440C0;
    case 12u: goto L_004440D0;
    case 13u: goto L_004440FC;
    case 14u: goto L_00444118;
    case 15u: goto L_00444120;
    case 16u: goto L_00444148;
    case 17u: goto L_00444154;
    case 18u: goto L_00444170;
    case 19u: goto L_00444180;
    case 20u: goto L_00444190;
    case 21u: goto L_004441B4;
    case 22u: goto L_004441C0;
    case 23u: goto L_004441D4;
    case 24u: goto L_004441F0;
    case 25u: goto L_00444200;
    case 26u: goto L_00444224;
    case 27u: goto L_0044422C;
    case 28u: goto L_00444234;
    case 29u: goto L_00444250;
    case 30u: goto L_00444260;
    case 31u: goto L_00444270;
    case 32u: goto L_00444298;
    case 33u: goto L_004442A0;
    case 34u: goto L_004442A8;
    case 35u: goto L_004442C4;
    case 36u: goto L_004442D4;
    case 37u: goto L_00444304;
    case 38u: goto L_0044432C;
    case 39u: goto L_00444344;
    case 40u: goto L_0044435C;
    case 41u: goto L_00444374;
    case 42u: goto L_0044437C;
    case 43u: goto L_00444388;
    case 44u: goto L_00444394;
    case 45u: goto L_0044439C;
    case 46u: goto L_004443B0;
    case 47u: goto L_004443D4;
    case 48u: goto L_004443E0;
    case 49u: goto L_00444414;
    case 50u: goto L_00444430;
    case 51u: goto L_00444440;
    case 52u: goto L_00444450;
    case 53u: goto L_00444474;
    case 54u: goto L_004444AC;
    case 55u: goto L_004444D0;
    case 56u: goto L_00444508;
    case 57u: goto L_00444538;
    case 58u: goto L_00444544;
    case 59u: goto L_0044454C;
    case 60u: goto L_00444550;
    case 61u: goto L_00444554;
    case 62u: goto L_0044459C;
    case 63u: goto L_004445DC;
    case 64u: goto L_004445F4;
    case 65u: goto L_00444610;
    case 66u: goto L_0044463C;
    case 67u: goto L_00444650;
    case 68u: goto L_0044465C;
    case 69u: goto L_0044466C;
    case 70u: goto L_00444680;
    case 71u: goto L_004446A8;
    case 72u: goto L_004446B8;
    case 73u: goto L_004446D0;
    case 74u: goto L_004446E0;
    case 75u: goto L_004446E8;
    case 76u: goto L_0044470C;
    case 77u: goto L_0044471C;
    case 78u: goto L_00444740;
    case 79u: goto L_00444754;
    case 80u: goto L_0044476C;
    case 81u: goto L_0044477C;
    case 82u: goto L_00444784;
    case 83u: goto L_0044478C;
    case 84u: goto L_00444794;
    case 85u: goto L_0044479C;
    case 86u: goto L_004447A8;
    case 87u: goto L_004447BC;
    case 88u: goto L_004447CC;
    case 89u: goto L_004447E0;
    case 90u: goto L_00444800;
    case 91u: goto L_00444814;
    case 92u: goto L_00444820;
    case 93u: goto L_00444828;
    case 94u: goto L_0044483C;
    case 95u: goto L_00444864;
    case 96u: goto L_00444874;
    case 97u: goto L_0044488C;
    case 98u: goto L_0044489C;
    case 99u: goto L_004448A4;
    case 100u: goto L_004448C8;
    case 101u: goto L_004448D8;
    case 102u: goto L_004448FC;
    case 103u: goto L_00444900;
    case 104u: goto L_00444910;
    case 105u: goto L_00444928;
    case 106u: goto L_00444938;
    case 107u: goto L_00444940;
    case 108u: goto L_00444948;
    case 109u: goto L_0044494C;
    case 110u: goto L_00444950;
    case 111u: goto L_00444958;
    case 112u: goto L_00444960;
    case 113u: goto L_00444974;
    case 114u: goto L_0044497C;
    case 115u: goto L_00444984;
    case 116u: goto L_0044498C;
    case 117u: goto L_00444994;
    case 118u: goto L_0044499C;
    case 119u: goto L_004449A4;
    case 120u: goto L_004449B4;
    case 121u: goto L_004449F0;
    case 122u: goto L_00444A08;
    case 123u: goto L_00444A20;
    case 124u: goto L_00444A44;
    case 125u: goto L_00444A60;
    case 126u: goto L_00444A9C;
    case 127u: goto L_00444AA4;
    case 128u: goto L_00444AD4;
    case 129u: goto L_00444AF0;
    case 130u: goto L_00444B1C;
    case 131u: goto L_00444B2C;
    case 132u: goto L_00444B7C;
    case 133u: goto L_00444B90;
    case 134u: goto L_00444B9C;
    case 135u: goto L_00444BB4;
    case 136u: goto L_00444BBC;
    case 137u: goto L_00444BCC;
    case 138u: goto L_00444BD8;
    case 139u: goto L_00444C0C;
    case 140u: goto L_00444C20;
    case 141u: goto L_00444C30;
    case 142u: goto L_00444C44;
    case 143u: goto L_00444C5C;
    case 144u: goto L_00444C74;
    case 145u: goto L_00444C88;
    case 146u: goto L_00444C98;
    case 147u: goto L_00444CA8;
    case 148u: goto L_00444CB4;
    case 149u: goto L_00444CC0;
    case 150u: goto L_00444CE4;
    case 151u: goto L_00444D00;
    case 152u: goto L_00444D20;
    case 153u: goto L_00444D74;
    case 154u: goto L_00444D8C;
    case 155u: goto L_00444DB0;
    case 156u: goto L_00444DD4;
    case 157u: goto L_00444DDC;
    case 158u: goto L_00444DEC;
    case 159u: goto L_00444DF4;
    case 160u: goto L_00444F30;
    case 161u: goto L_00444F4C;
    case 162u: goto L_00444F50;
    case 163u: goto L_00444F7C;
    case 164u: goto L_00444F84;
    case 165u: goto L_00444F8C;
    case 166u: goto L_00445034;
    case 167u: goto L_004450C0;
    case 168u: goto L_004450E4;
    case 169u: goto L_004450F8;
    case 170u: goto L_00445100;
    case 171u: goto L_00445108;
    case 172u: goto L_00445180;
    case 173u: goto L_00445188;
    case 174u: goto L_00445230;
    case 175u: goto L_00445254;
    case 176u: goto L_00445264;
    case 177u: goto L_00445280;
    case 178u: goto L_004452AC;
    case 179u: goto L_004452C0;
    case 180u: goto L_004452D0;
    case 181u: goto L_004452E4;
    case 182u: goto L_00445308;
    case 183u: goto L_0044531C;
    case 184u: goto L_00445328;
    case 185u: goto L_00445334;
    case 186u: goto L_00445344;
    case 187u: goto L_00445350;
    case 188u: goto L_0044535C;
    case 189u: goto L_00445368;
    case 190u: goto L_00445380;
    case 191u: goto L_00445388;
    case 192u: goto L_00445398;
    case 193u: goto L_004453C0;
    case 194u: goto L_004453F4;
    case 195u: goto L_00445404;
    case 196u: goto L_00445420;
    case 197u: goto L_004454D8;
    case 198u: goto L_00445500;
    case 199u: goto L_0044553C;
    case 200u: goto L_00445550;
    case 201u: goto L_00445578;
    case 202u: goto L_00445584;
    case 203u: goto L_0044558C;
    case 204u: goto L_004455B0;
    case 205u: goto L_004455D0;
    case 206u: goto L_00445628;
    case 207u: goto L_00445640;
    case 208u: goto L_00445660;
    case 209u: goto L_004456A0;
    case 210u: goto L_004456B0;
    case 211u: goto L_004456EC;
    case 212u: goto L_004456FC;
    case 213u: goto L_00445714;
    case 214u: goto L_00445728;
    case 215u: goto L_0044573C;
    case 216u: goto L_00445748;
    case 217u: goto L_00445758;
    case 218u: goto L_00445764;
    case 219u: goto L_00445778;
    case 220u: goto L_00445790;
    case 221u: goto L_004457A0;
    case 222u: goto L_004457C4;
    case 223u: goto L_004457DC;
    case 224u: goto L_004457F4;
    case 225u: goto L_00445804;
    case 226u: goto L_00445828;
    case 227u: goto L_0044583C;
    case 228u: goto L_00445874;
    case 229u: goto L_00445884;
    case 230u: goto L_0044589C;
    case 231u: goto L_004458A8;
    case 232u: goto L_004458E4;
    case 233u: goto L_00445900;
    case 234u: goto L_00445910;
    case 235u: goto L_00445928;
    case 236u: goto L_00445938;
    case 237u: goto L_0044595C;
    case 238u: goto L_00445970;
    case 239u: goto L_0044597C;
    case 240u: goto L_00445988;
    case 241u: goto L_004459B0;
    case 242u: goto L_004459DC;
    case 243u: goto L_004459EC;
    case 244u: goto L_00445A0C;
    case 245u: goto L_00445A58;
    case 246u: goto L_00445A7C;
    case 247u: goto L_00445AA0;
    case 248u: goto L_00445AF4;
    case 249u: goto L_00445AFC;
    case 250u: goto L_00445B10;
    case 251u: goto L_00445B44;
    case 252u: goto L_00445B64;
    case 253u: goto L_00445B74;
    case 254u: goto L_00445B84;
    case 255u: goto L_00445BB0;
    case 256u: goto L_00445C04;
    case 257u: goto L_00445C10;
    case 258u: goto L_00445C28;
    case 259u: goto L_00445C40;
    case 260u: goto L_00445C64;
    case 261u: goto L_00445C80;
    case 262u: goto L_00445CA4;
    case 263u: goto L_00445CBC;
    case 264u: goto L_00445CE0;
    case 265u: goto L_00445CF0;
    case 266u: goto L_00445D14;
    case 267u: goto L_00445D20;
    case 268u: goto L_00445D30;
    case 269u: goto L_00445D40;
    case 270u: goto L_00445EB0;
    case 271u: goto L_00445ED0;
    case 272u: goto L_00445EF0;
    case 273u: goto L_00445F48;
    case 274u: goto L_00445F78;
    case 275u: goto L_00445F84;
    case 276u: goto L_00445FC8;
    case 277u: goto L_00445FDC;
    case 278u: goto L_00445FF0;
    case 279u: goto L_00445FFC;
    case 280u: goto L_00446010;
    case 281u: goto L_0044607C;
    case 282u: goto L_00446094;
    case 283u: goto L_004460AC;
    case 284u: goto L_004460BC;
    case 285u: goto L_004460C4;
    case 286u: goto L_004460D0;
    case 287u: goto L_004460E8;
    case 288u: goto L_00446100;
    case 289u: goto L_00446118;
    case 290u: goto L_00446128;
    case 291u: goto L_00446130;
    case 292u: goto L_0044613C;
    case 293u: goto L_00446150;
    case 294u: goto L_004461B8;
    case 295u: goto L_004461FC;
    case 296u: goto L_004462AC;
    case 297u: goto L_00446418;
    case 298u: goto L_0044646C;
    case 299u: goto L_00446478;
    case 300u: goto L_004464B4;
    case 301u: goto L_004464BC;
    case 302u: goto L_004464C4;
    case 303u: goto L_004464CC;
    case 304u: goto L_004464DC;
    case 305u: goto L_004464E8;
    case 306u: goto L_004464F0;
    case 307u: goto L_00446500;
    case 308u: goto L_00446520;
    case 309u: goto L_00446548;
    case 310u: goto L_00446558;
    case 311u: goto L_00446564;
    case 312u: goto L_00446570;
    case 313u: goto L_00446580;
    case 314u: goto L_0044658C;
    case 315u: goto L_00446598;
    case 316u: goto L_004466C8;
    case 317u: goto L_004466E0;
    case 318u: goto L_004466F8;
    case 319u: goto L_00446708;
    case 320u: goto L_00446710;
    case 321u: goto L_0044671C;
    case 322u: goto L_0044674C;
    case 323u: goto L_004467F4;
    case 324u: goto L_00446844;
    case 325u: goto L_00446850;
    case 326u: goto L_0044688C;
    case 327u: goto L_00446894;
    case 328u: goto L_0044689C;
    case 329u: goto L_004468A4;
    case 330u: goto L_004468B4;
    case 331u: goto L_004468C0;
    case 332u: goto L_004468C8;
    case 333u: goto L_004468D8;
    case 334u: goto L_004468F8;
    case 335u: goto L_00446920;
    case 336u: goto L_00446930;
    case 337u: goto L_0044693C;
    case 338u: goto L_00446948;
    case 339u: goto L_00446958;
    case 340u: goto L_00446964;
    case 341u: goto L_00446970;
    case 342u: goto L_00446A84;
    case 343u: goto L_00446C70;
    case 344u: goto L_00446C78;
    case 345u: goto L_00446C80;
    case 346u: goto L_00446C88;
    case 347u: goto L_00446C98;
    case 348u: goto L_00446CA4;
    case 349u: goto L_00446CAC;
    case 350u: goto L_00446CBC;
    case 351u: goto L_00446CDC;
    case 352u: goto L_00446D04;
    case 353u: goto L_00446D14;
    case 354u: goto L_00446D20;
    case 355u: goto L_00446D2C;
    case 356u: goto L_00446D3C;
    case 357u: goto L_00446D48;
    case 358u: goto L_00446D54;
    case 359u: goto L_00446EE4;
    case 360u: goto L_00447198;
    case 361u: goto L_004471C4;
    case 362u: goto L_00447210;
    case 363u: goto L_00447250;
    case 364u: goto L_00447268;
    case 365u: goto L_00447270;
    case 366u: goto L_00447278;
    case 367u: goto L_0044734C;
    case 368u: goto L_004473EC;
    case 369u: goto L_00447478;
    case 370u: goto L_004474C4;
    case 371u: goto L_004475C8;
    case 372u: goto L_004475E4;
    case 373u: goto L_004475F4;
    case 374u: goto L_0044760C;
    case 375u: goto L_00447624;
    case 376u: goto L_00447630;
    case 377u: goto L_00447640;
    case 378u: goto L_004476D0;
    case 379u: goto L_00447714;
    case 380u: goto L_00447720;
    case 381u: goto L_00447768;
    case 382u: goto L_00447770;
    case 383u: goto L_00447778;
    case 384u: goto L_00447780;
    case 385u: goto L_00447790;
    case 386u: goto L_0044779C;
    case 387u: goto L_004477A4;
    case 388u: goto L_004477B4;
    case 389u: goto L_004477D4;
    case 390u: goto L_004477FC;
    case 391u: goto L_0044780C;
    case 392u: goto L_00447818;
    case 393u: goto L_00447824;
    case 394u: goto L_00447834;
    case 395u: goto L_00447840;
    case 396u: goto L_0044784C;
    case 397u: goto L_00447944;
    case 398u: goto L_0044794C;
    case 399u: goto L_00447954;
    case 400u: goto L_0044795C;
    case 401u: goto L_0044796C;
    case 402u: goto L_00447978;
    case 403u: goto L_00447980;
    case 404u: goto L_00447990;
    case 405u: goto L_004479B0;
    case 406u: goto L_004479D8;
    case 407u: goto L_004479E8;
    case 408u: goto L_004479F4;
    case 409u: goto L_00447A00;
    case 410u: goto L_00447A10;
    case 411u: goto L_00447A1C;
    case 412u: goto L_00447A28;
    case 413u: goto L_00447AD0;
    case 414u: goto L_00447B44;
    case 415u: goto L_00447B90;
    case 416u: goto L_00447BEC;
    case 417u: goto L_00447CF4;
    case 418u: goto L_00447F50;
    case 419u: goto L_00447FD0;
    default: bad_entry(c, 0x00444000u); return;
    }
L_00444000:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_00444004:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444014u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444014u) [[unlikely]] return; }
L_00444014:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_00444018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00444030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0044404C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044404Cu);  if (depth < kMaxDepth) unit_00FF(c, 204u, depth + 1u); else { c.pc = 0x004FDB20u; return; } if (c.pc != 0x0044404Cu) [[unlikely]] return; }
L_0044404C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00444060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00444084; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444084u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444084u) [[unlikely]] return; }
L_00444084:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00444090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));  goto L_004440B8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004440B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004440B4u) [[unlikely]] return; }
L_004440B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 1;
L_004440B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004440C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 323u, depth + 1u); else { c.pc = 0x0044AAD0u; return; } if (c.pc != 0x004440C0u) [[unlikely]] return; }
L_004440C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004440D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00444184; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004440FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004440FCu) [[unlikely]] return; }
L_004440FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_00444110; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00444180; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_00444110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444118u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_00FF(c, 313u, depth + 1u); else { c.pc = 0x004FE930u; return; } if (c.pc != 0x00444118u) [[unlikely]] return; }
L_00444118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444120u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00FF(c, 116u, depth + 1u); else { c.pc = 0x004FD000u; return; } if (c.pc != 0x00444120u) [[unlikely]] return; }
L_00444120:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 29052u));  goto L_0044413C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 96u));  if (t) { goto L_0044413C; } }
    c.f[1] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 1;
L_0044413C:
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444148u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00F4(c, 174u, depth + 1u); else { c.pc = 0x004D1930u; return; } if (c.pc != 0x00444148u) [[unlikely]] return; }
L_00444148:
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444154u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D2(c, 323u, depth + 1u); else { c.pc = 0x0044AAD0u; return; } if (c.pc != 0x00444154u) [[unlikely]] return; }
L_00444154:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_00444174; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444170u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444170u) [[unlikely]] return; }
L_00444170:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_00444174:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444180u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 163u, depth + 1u); else { c.pc = 0x004D1840u; return; } if (c.pc != 0x00444180u) [[unlikely]] return; }
L_00444180:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00444184:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00444190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004441B8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004441B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004441B4u) [[unlikely]] return; }
L_004441B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004441B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004441C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004441D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 423u, depth + 1u); else { c.pc = 0x00163690u; return; } if (c.pc != 0x004441D4u) [[unlikely]] return; }
L_004441D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004441F4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004441F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004441F0u) [[unlikely]] return; }
L_004441F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004441F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00444200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25052u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444224u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 276u, depth + 1u); else { c.pc = 0x00162490u; return; } if (c.pc != 0x00444224u) [[unlikely]] return; }
L_00444224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044422Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 24u, depth + 1u); else { c.pc = 0x001643C0u; return; } if (c.pc != 0x0044422Cu) [[unlikely]] return; }
L_0044422C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444234u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 30u, depth + 1u); else { c.pc = 0x001644B0u; return; } if (c.pc != 0x00444234u) [[unlikely]] return; }
L_00444234:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_00444254; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444250u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444250u) [[unlikely]] return; }
L_00444250:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_00444254:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444260u); set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));  if (depth < kMaxDepth) unit_00CE(c, 127u, depth + 1u); else { c.pc = 0x00439230u; return; } if (c.pc != 0x00444260u) [[unlikely]] return; }
L_00444260:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00444270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25052u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 276u, depth + 1u); else { c.pc = 0x00162490u; return; } if (c.pc != 0x00444298u) [[unlikely]] return; }
L_00444298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004442A0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 24u, depth + 1u); else { c.pc = 0x001643C0u; return; } if (c.pc != 0x004442A0u) [[unlikely]] return; }
L_004442A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004442A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 30u, depth + 1u); else { c.pc = 0x001644B0u; return; } if (c.pc != 0x004442A8u) [[unlikely]] return; }
L_004442A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_004442C8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004442C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004442C4u) [[unlikely]] return; }
L_004442C4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_004442C8:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004442D4u); set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));  if (depth < kMaxDepth) unit_00CE(c, 127u, depth + 1u); else { c.pc = 0x00439230u; return; } if (c.pc != 0x004442D4u) [[unlikely]] return; }
L_004442D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 1648u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_004442EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], ld32((c.r[2].w[0] - 1644u)));
    c.budget -= 2;
L_004442EC:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 25680u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444304u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00444304u) [[unlikely]] return; }
L_00444304:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 12u);  goto L_00444324; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00444320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0044434C; } }
L_00444320:
    set32(c.r[4], 0u + 12u);
    c.budget -= 1;
L_00444324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044432Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0044432Cu) [[unlikely]] return; }
L_0044432C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  goto L_00444348; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444344u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_00BC(c, 280u, depth + 1u); else { c.pc = 0x003F2010u; return; } if (c.pc != 0x00444344u) [[unlikely]] return; }
L_00444344:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_00444348:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0044434C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044435Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044435Cu) [[unlikely]] return; }
L_0044435C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25052u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444374u); set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));  if (depth < kMaxDepth) unit_0018(c, 276u, depth + 1u); else { c.pc = 0x00162490u; return; } if (c.pc != 0x00444374u) [[unlikely]] return; }
L_00444374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044437Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0019(c, 30u, depth + 1u); else { c.pc = 0x001644B0u; return; } if (c.pc != 0x0044437Cu) [[unlikely]] return; }
L_0044437C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444388u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CE(c, 132u, depth + 1u); else { c.pc = 0x004392A0u; return; } if (c.pc != 0x00444388u) [[unlikely]] return; }
L_00444388:
    set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444394u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CE(c, 116u, depth + 1u); else { c.pc = 0x00439100u; return; } if (c.pc != 0x00444394u) [[unlikely]] return; }
L_00444394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044439Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 27u, depth + 1u); else { c.pc = 0x00164460u; return; } if (c.pc != 0x0044439Cu) [[unlikely]] return; }
L_0044439C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004443B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004443D8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004443D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004443D4u) [[unlikely]] return; }
L_004443D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004443D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004443E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25052u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00444418; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444414u); set32(c.r[6], 0u + 255u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444414u) [[unlikely]] return; }
L_00444414:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00444418:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00444434; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444430u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444430u) [[unlikely]] return; }
L_00444430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00444434:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00444440:
    set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));
    c.budget -= 3;
    { set32(c.r[5], 0u + 1u);  goto L_004444D0; }
L_00444450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24844u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_004444B8; }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00444474u) [[unlikely]] return; }
L_00444474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004444B0; } }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004444ACu); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004444ACu) [[unlikely]] return; }
L_004444AC:
    st32((c.r[28].w[0] - 24844u), c.r[16].w[0]);
    c.budget -= 1;
L_004444B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24844u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004444B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004444D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004445F4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0044450C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444508u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444508u) [[unlikely]] return; }
L_00444508:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_0044450C:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 48u), c.f[0]);  if (t) { goto L_00444560; } }
L_00444538:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  goto L_00444558; }
L_00444544:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 2;
L_0044454C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444554u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444554u) [[unlikely]] return; }
    goto L_00444554;
L_00444550:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00444554:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 1;
L_00444558:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_00444560:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444538u | kUnwind; return; } goto L_00444538; }
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_004445A0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044459Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044459Cu) [[unlikely]] return; }
L_0044459C:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_004445A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 24844u), 0u);  if (t) { goto L_004445DC; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004445E0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004445DC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004445DC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004445DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004445DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004445DCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004445DCu) [[unlikely]] return; }
L_004445DC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004445E0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004445F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004445F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004445F4u) [[unlikely]] return; }
L_004445F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004445F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00444610:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 1648u));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);  goto L_00444630; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004447D0; } }
L_00444630:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044463Cu); set32(c.r[5], c.r[5].w[0] - 1640u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x0044463Cu) [[unlikely]] return; }
L_0044463C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 264u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444650u); set32(c.r[6], c.r[6].w[0] + 25988u);  if (depth < kMaxDepth) unit_000F(c, 42u, depth + 1u); else { c.pc = 0x0013C4E0u; return; } if (c.pc != 0x00444650u) [[unlikely]] return; }
L_00444650:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044465Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0044465Cu) [[unlikely]] return; }
L_0044465C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044466Cu); st8((c.r[2].w[0] - 1648u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0044466Cu) [[unlikely]] return; }
L_0044466C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_00444688; }
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444680u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x00444680u) [[unlikely]] return; }
L_00444680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004447D0; } }
L_00444688:
    set32(c.r[2], 0u + 180u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[29].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 248u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25991u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004446A8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x004446A8u) [[unlikely]] return; }
L_004446A8:
    set32(c.r[4], c.r[29].w[0] + 264u);
    set32(c.r[5], c.r[29].w[0] + 248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004446B8u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_000F(c, 35u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x004446B8u) [[unlikely]] return; }
L_004446B8:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 252u);  goto L_004446D8; }
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004446D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x004446D0u) [[unlikely]] return; }
L_004446D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004447D0; } }
L_004446D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004446E0u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x004446E0u) [[unlikely]] return; }
L_004446E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004446E8u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x004446E8u) [[unlikely]] return; }
L_004446E8:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 180u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 232u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25991u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044470Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0044470Cu) [[unlikely]] return; }
L_0044470C:
    set32(c.r[4], c.r[29].w[0] + 248u);
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044471Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0044471Cu) [[unlikely]] return; }
L_0044471C:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 264u);  goto L_00444748; }
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444740u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x00444740u) [[unlikely]] return; }
L_00444740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004447D0; } }
L_00444748:
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444754u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_000F(c, 35u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00444754u) [[unlikely]] return; }
L_00444754:
    set32(c.r[3], 0u + 180u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00444774; }
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044476Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x0044476Cu) [[unlikely]] return; }
L_0044476C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004447D0; } }
L_00444774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044477Cu);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x0044477Cu) [[unlikely]] return; }
L_0044477C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444784u); set32(c.r[4], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x00444784u) [[unlikely]] return; }
L_00444784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044478Cu); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x0044478Cu) [[unlikely]] return; }
L_0044478C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444794u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x00444794u) [[unlikely]] return; }
L_00444794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044479Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x0044479Cu) [[unlikely]] return; }
L_0044479C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004447A8u); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_00D1(c, 7u, depth + 1u); else { c.pc = 0x00444060u; return; } if (c.pc != 0x004447A8u) [[unlikely]] return; }
L_004447A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 264u);  goto L_004447C4; }
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004447BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x004447BCu) [[unlikely]] return; }
L_004447BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004447D0; } }
L_004447C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004447CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x004447CCu) [[unlikely]] return; }
L_004447CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004447D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004447E0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444800u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x00444800u) [[unlikely]] return; }
L_00444800:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444814u); set32(c.r[6], c.r[6].w[0] + 25988u);  if (depth < kMaxDepth) unit_000F(c, 42u, depth + 1u); else { c.pc = 0x0013C4E0u; return; } if (c.pc != 0x00444814u) [[unlikely]] return; }
L_00444814:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444820u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00444820u) [[unlikely]] return; }
L_00444820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444828u); set32(c.r[4], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x00444828u) [[unlikely]] return; }
L_00444828:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_00444844; }
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044483Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x0044483Cu) [[unlikely]] return; }
L_0044483C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00444A0C; } }
L_00444844:
    set32(c.r[2], 0u + 180u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[29].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 280u);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25991u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444864u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x00444864u) [[unlikely]] return; }
L_00444864:
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[5], c.r[29].w[0] + 280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444874u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_000F(c, 35u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00444874u) [[unlikely]] return; }
L_00444874:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 284u);  goto L_00444894; }
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044488Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x0044488Cu) [[unlikely]] return; }
L_0044488C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00444A0C; } }
L_00444894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044489Cu);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x0044489Cu) [[unlikely]] return; }
L_0044489C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004448A4u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x004448A4u) [[unlikely]] return; }
L_004448A4:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 180u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[29].w[0] + 268u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 264u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25991u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004448C8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x004448C8u) [[unlikely]] return; }
L_004448C8:
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[5], c.r[29].w[0] + 264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004448D8u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x004448D8u) [[unlikely]] return; }
L_004448D8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 296u);  goto L_00444904; }
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004448FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x004448FCu) [[unlikely]] return; }
L_004448FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00444A0C; } }
    goto L_00444904;
L_00444900:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00444904:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444910u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_000F(c, 35u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00444910u) [[unlikely]] return; }
L_00444910:
    set32(c.r[3], 0u + 180u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_00444930; }
    set32(c.r[4], c.r[29].w[0] + 296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444928u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x00444928u) [[unlikely]] return; }
L_00444928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00444A0C; } }
L_00444930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444938u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x00444938u) [[unlikely]] return; }
L_00444938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444940u); set32(c.r[4], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x00444940u) [[unlikely]] return; }
L_00444940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444948u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x00444948u) [[unlikely]] return; }
L_00444948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444950u); set32(c.r[4], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x00444950u) [[unlikely]] return; }
    goto L_00444950;
L_0044494C:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 1;
L_00444950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444958u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0018(c, 29u, depth + 1u); else { c.pc = 0x00160430u; return; } if (c.pc != 0x00444958u) [[unlikely]] return; }
L_00444958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444960u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00C1(c, 565u, depth + 1u); else { c.pc = 0x004078C0u; return; } if (c.pc != 0x00444960u) [[unlikely]] return; }
L_00444960:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444974u); set32(c.r[4], ld32((c.r[29].w[0] + 116u)));  if (depth < kMaxDepth) unit_00C1(c, 526u, depth + 1u); else { c.pc = 0x00407480u; return; } if (c.pc != 0x00444974u) [[unlikely]] return; }
L_00444974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044497Cu); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_00C1(c, 541u, depth + 1u); else { c.pc = 0x004075F0u; return; } if (c.pc != 0x0044497Cu) [[unlikely]] return; }
L_0044497C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444984u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_00C1(c, 536u, depth + 1u); else { c.pc = 0x00407550u; return; } if (c.pc != 0x00444984u) [[unlikely]] return; }
L_00444984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044498Cu); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_00C1(c, 529u, depth + 1u); else { c.pc = 0x004074B0u; return; } if (c.pc != 0x0044498Cu) [[unlikely]] return; }
L_0044498C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444994u); set32(c.r[4], ld32((c.r[29].w[0] + 184u)));  if (depth < kMaxDepth) unit_00C1(c, 557u, depth + 1u); else { c.pc = 0x00407830u; return; } if (c.pc != 0x00444994u) [[unlikely]] return; }
L_00444994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044499Cu); set32(c.r[4], ld32((c.r[29].w[0] + 188u)));  if (depth < kMaxDepth) unit_00C1(c, 527u, depth + 1u); else { c.pc = 0x00407490u; return; } if (c.pc != 0x0044499Cu) [[unlikely]] return; }
L_0044499C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004449B8; } }
L_004449A4:
    set32(c.r[4], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004449B4u); set32(c.r[5], c.r[2].w[0] + 196u);  if (depth < kMaxDepth) unit_00C1(c, 555u, depth + 1u); else { c.pc = 0x00407800u; return; } if (c.pc != 0x004449B4u) [[unlikely]] return; }
L_004449B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004449B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004449D4; } }
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004449A4u | kUnwind; return; } goto L_004449A4; }
L_004449D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1640u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004449F0u); st8((c.r[2].w[0] - 1648u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004449F0u) [[unlikely]] return; }
L_004449F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 296u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444A08u); st32((c.r[2].w[0] - 1644u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x00444A08u) [[unlikely]] return; }
L_00444A08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00444A0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00444A20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 24824u), 0u);  goto L_00444A48; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444A44u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444A44u) [[unlikely]] return; }
L_00444A44:
    st32((c.r[28].w[0] - 24824u), 0u);
    c.budget -= 1;
L_00444A48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00444A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00444AD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28672u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00444AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444A9Cu);  if (depth < kMaxDepth) unit_00D0(c, 536u, depth + 1u); else { c.pc = 0x00443F10u; return; } if (c.pc != 0x00444A9Cu) [[unlikely]] return; }
L_00444A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444AA4u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00444AA4u) [[unlikely]] return; }
L_00444AA4:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_00444AA8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00444AC0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00444AC0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00444AD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444AD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00444AD4u) [[unlikely]] return; }
L_00444AD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00444AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00444AF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 20u);  goto L_00444B20; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444B1Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444B1Cu) [[unlikely]] return; }
L_00444B1C:
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_00444B20:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444B2Cu); st32((c.r[28].w[0] - 24824u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00444B2Cu) [[unlikely]] return; }
L_00444B2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00444B68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27888u);
    set32(c.r[3], c.r[3].w[0] + 28672u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] + 25728u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], 0u + 262u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 13;
L_00444B68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[28].w[0] - 24824u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444B7Cu); set32(c.r[5], c.r[5].w[0] + 25996u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00444B7Cu) [[unlikely]] return; }
L_00444B7C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444B90u); set32(c.r[6], c.r[6].w[0] + 26005u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x00444B90u) [[unlikely]] return; }
L_00444B90:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444B9Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x00444B9Cu) [[unlikely]] return; }
L_00444B9C:
    set32(c.r[16], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00444BC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444BB4u);  if (depth < kMaxDepth) unit_00D0(c, 536u, depth + 1u); else { c.pc = 0x00443F10u; return; } if (c.pc != 0x00444BB4u) [[unlikely]] return; }
L_00444BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444BBCu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00444BBCu) [[unlikely]] return; }
L_00444BBC:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_00444BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444BCCu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x00444BCCu) [[unlikely]] return; }
L_00444BCC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444BD8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102E20u; return; } if (c.pc != 0x00444BD8u) [[unlikely]] return; }
L_00444BD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 64u));  goto L_00444BF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  if (t) { goto L_00444BF8; } }
L_00444BF0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00444BF8:
    c.r[17].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444C0Cu); c.r[17].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00444C0Cu) [[unlikely]] return; }
L_00444C0C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00444C4C; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444C20u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102E20u; return; } if (c.pc != 0x00444C20u) [[unlikely]] return; }
L_00444C20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444C30u); set32(c.r[5], c.r[5].w[0] + 25960u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00444C30u) [[unlikely]] return; }
L_00444C30:
    c.r[17].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444C44u); c.r[17].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00444C44u) [[unlikely]] return; }
L_00444C44:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00444C60; }
L_00444C4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444C5Cu); set32(c.r[5], c.r[5].w[0] + 25952u);  if (depth < kMaxDepth) unit_000A(c, 328u, depth + 1u); else { c.pc = 0x0012AC80u; return; } if (c.pc != 0x00444C5Cu) [[unlikely]] return; }
L_00444C5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00444C60:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444C74u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 231u, depth + 1u); else { c.pc = 0x00102E60u; return; } if (c.pc != 0x00444C74u) [[unlikely]] return; }
L_00444C74:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_00444C90; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444C88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00444C88u) [[unlikely]] return; }
L_00444C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00444C9C; } }
L_00444C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444C98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00444C98u) [[unlikely]] return; }
L_00444C98:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00444C9C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444CA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00444CA8u) [[unlikely]] return; }
L_00444CA8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444CB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00444CB4u) [[unlikely]] return; }
L_00444CB4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444CC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00444CC0u) [[unlikely]] return; }
L_00444CC0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00444CEC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 24824u), 0u);  goto L_00444CE8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00444CE4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00444CE4u) [[unlikely]] return; }
L_00444CE4:
    st32((c.r[28].w[0] - 24824u), 0u);
    c.budget -= 1;
L_00444CE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00444CEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00444D00:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00444D14; } }
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 1;
L_00444D14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00444D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00444D8C; } }
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00444D78; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00444D74; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00444D74; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00444D74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444D74u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00444D74u) [[unlikely]] return; }
L_00444D74:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00444D78:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00444D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444D8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00444D8Cu) [[unlikely]] return; }
L_00444D8C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00444D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00444DB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 1600u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444DD4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00D1(c, 160u, depth + 1u); else { c.pc = 0x00444F30u; return; } if (c.pc != 0x00444DD4u) [[unlikely]] return; }
L_00444DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00444F08; } }
L_00444DDC:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[29].w[0] + 76u));  goto L_00444EC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444DECu); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00444DECu) [[unlikely]] return; }
L_00444DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444DF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x00444DF4u) [[unlikely]] return; }
L_00444DF4:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  if (t) { goto L_00444E0C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_00444E14; } }
L_00444E0C:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 2;
L_00444E14:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 68u)));  goto L_00444E2C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
L_00444E2C:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00444E3C; } }
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 1;
L_00444E3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], ld32((c.r[4].w[0] - 1576u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0] - 1576u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  goto L_00444E68; }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
L_00444E68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00444E78; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_00444E78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1596u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00444E94; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[3].w[0] - 1596u), c.r[4].w[0]);
    c.budget -= 3;
L_00444E94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1592u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00444EA8; } }
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_00444EA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], ld32((c.r[4].w[0] - 1592u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 1592u), c.r[2].w[0]);  if (t) { goto L_00444F08; } }
L_00444EC8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  goto L_00444EDC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_00444EE0; } }
L_00444EDC:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_00444EE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 68u)));  goto L_00444EF8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
L_00444EF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  goto L_00444F0C; }
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 1;
L_00444F08:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_00444F0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444DDCu | kUnwind; return; } goto L_00444DDC; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00444F30:
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00444F4C:
    c.budget -= 1;
L_00444F50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444F7Cu); set32(c.r[5], c.r[5].w[0] - 1600u);  if (depth < kMaxDepth) unit_00D1(c, 160u, depth + 1u); else { c.pc = 0x00444F30u; return; } if (c.pc != 0x00444F7Cu) [[unlikely]] return; }
L_00444F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00444FE4; } }
L_00444F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00444F8Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00444F8Cu) [[unlikely]] return; }
L_00444F8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 76u));  goto L_00444F9C; }
    set32(c.r[16], ld32((c.r[29].w[0] + 68u)));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 76u));
    c.budget -= 2;
L_00444F9C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 68u)));  goto L_00444FB4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_00444FBC; } }
L_00444FB4:
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 2;
L_00444FBC:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 68u)));  goto L_00444FD4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
L_00444FD4:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 68u)));  goto L_00444FE8; }
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 1;
L_00444FE4:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_00444FE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00444FF8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00444F84u | kUnwind; return; } goto L_00444F84; }
L_00444FF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1592u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00445034; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1584u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  goto L_00445020; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004450A0; } }
L_00445020:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 1572u)));
    set32(c.r[4], c.r[4].w[0] - 1600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445034u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D1(c, 193u, depth + 1u); else { c.pc = 0x004453C0u; return; } if (c.pc != 0x00445034u) [[unlikely]] return; }
L_00445034:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 1576u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], ld32((c.r[3].w[0] - 1592u)));
    st32((c.r[4].w[0] - 1576u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[3].w[0] - 1592u), c.r[4].w[0]);  if (t) { goto L_00445064; } }
    st32((c.r[6].w[0] + 12u), 0u);
    c.budget -= 1;
L_00445064:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1596u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[6].w[0] + 12u), 0u);  goto L_00445094; }
    st32((c.r[6].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 1596u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 1596u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { goto L_00445098; } }
L_00445094:
    st32((c.r[6].w[0] + 8u), 0u);
    c.budget -= 1;
L_00445098:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[3].w[0] - 1596u), c.r[6].w[0]);
    c.budget -= 2;
L_004450A0:
    st32((c.r[6].w[0]), c.r[17].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004450C0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    set32(c.r[6], 0u + 256u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004450E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x004450E4u) [[unlikely]] return; }
L_004450E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 1600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004450F8u); st8((c.r[29].w[0] + 319u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00D1(c, 160u, depth + 1u); else { c.pc = 0x00444F30u; return; } if (c.pc != 0x004450F8u) [[unlikely]] return; }
L_004450F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00445160; } }
L_00445100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445108u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00445108u) [[unlikely]] return; }
L_00445108:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 60u));  goto L_00445118; }
    set32(c.r[16], ld32((c.r[29].w[0] + 52u)));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 60u));
    c.budget -= 2;
L_00445118:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  goto L_00445130; }
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00445138; } }
L_00445130:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_00445138:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 52u)));  goto L_00445150; }
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
L_00445150:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  goto L_00445164; }
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 1;
L_00445160:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 1;
L_00445164:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00445178; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00445100u | kUnwind; return; } goto L_00445100; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00445178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445180u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00445180u) [[unlikely]] return; }
L_00445180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445188u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x00445188u) [[unlikely]] return; }
L_00445188:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00445218; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], ld32((c.r[4].w[0] - 1576u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0] - 1576u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_004451BC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
L_004451BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004451CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_004451CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1596u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_004451E8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[3].w[0] - 1596u), c.r[4].w[0]);
    c.budget -= 3;
L_004451E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1592u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004451FC; } }
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 1;
L_004451FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], ld32((c.r[4].w[0] - 1592u)));
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[3].w[0] - 1592u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
L_00445218:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00445230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445254u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 177u, depth + 1u); else { c.pc = 0x00445280u; return; } if (c.pc != 0x00445254u) [[unlikely]] return; }
L_00445254:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 162u, depth + 1u); else { c.pc = 0x00444F50u; return; } if (c.pc != 0x00445264u) [[unlikely]] return; }
L_00445264:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00445280:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004452ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x004452ACu) [[unlikely]] return; }
L_004452AC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004452C0u); set32(c.r[6], c.r[6].w[0] + 26128u);  if (depth < kMaxDepth) unit_000F(c, 42u, depth + 1u); else { c.pc = 0x0013C4E0u; return; } if (c.pc != 0x004452C0u) [[unlikely]] return; }
L_004452C0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004452D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x004452D0u) [[unlikely]] return; }
L_004452D0:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004452E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 13u, depth + 1u); else { c.pc = 0x001200F0u; return; } if (c.pc != 0x004452E4u) [[unlikely]] return; }
L_004452E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0044533C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445308u); set32(c.r[6], c.r[6].w[0] + 26130u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00445308u) [[unlikely]] return; }
L_00445308:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044531Cu); set32(c.r[16], c.r[16].w[0] + 26193u);  if (depth < kMaxDepth) unit_0008(c, 427u, depth + 1u); else { c.pc = 0x001234B0u; return; } if (c.pc != 0x0044531Cu) [[unlikely]] return; }
L_0044531C:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445328u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x00445328u) [[unlikely]] return; }
L_00445328:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445334u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00445334u) [[unlikely]] return; }
L_00445334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044539C; } }
L_0044533C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445344u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 427u, depth + 1u); else { c.pc = 0x001234B0u; return; } if (c.pc != 0x00445344u) [[unlikely]] return; }
L_00445344:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445350u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x00445350u) [[unlikely]] return; }
L_00445350:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044535Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0044535Cu) [[unlikely]] return; }
L_0044535C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445368u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x00445368u) [[unlikely]] return; }
L_00445368:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445380u); set32(c.r[6], c.r[6].w[0] + 26194u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00445380u) [[unlikely]] return; }
L_00445380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x00445388u) [[unlikely]] return; }
L_00445388:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445398u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00445398u) [[unlikely]] return; }
L_00445398:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0044539C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004453C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004454E4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004453F4u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004453F4u) [[unlikely]] return; }
L_004453F4:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445404u); set32(c.r[4], c.r[16].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00445404u) [[unlikely]] return; }
L_00445404:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[7], c.r[16].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[18].w[0]);  if (t) { goto L_00445498; } }
L_00445420:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_00445440; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[8], c.r[3].w[0] << 4);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), 0u);  if (t) { goto L_0044545C; } }
L_00445440:
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[8], c.r[3].w[0] << 4);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 7;
L_0044545C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[7].d[0]) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_0044547C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_00445494; } }
L_0044547C:
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 6;
L_00445494:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00445498:
    c.r[4].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00445420u | kUnwind; return; } goto L_00445420; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_004454DC; }
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004454D8u); set32(c.r[6], c.r[6].w[0] + 26233u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004454D8u) [[unlikely]] return; }
L_004454D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_004454DC:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 2;
L_004454E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00445500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0044553C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044553Cu);  if (depth < kMaxDepth) unit_00D1(c, 193u, depth + 1u); else { c.pc = 0x004453C0u; return; } if (c.pc != 0x0044553Cu) [[unlikely]] return; }
L_0044553C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00445550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004455B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0])));  if (t) { goto L_00445590; } }
L_00445578:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445584u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00445584u) [[unlikely]] return; }
L_00445584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044558Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0044558Cu) [[unlikely]] return; }
L_0044558C:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00445590:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00445578u | kUnwind; return; } goto L_00445578; }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_004455B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004455B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004455B0u) [[unlikely]] return; }
L_004455B0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004455B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004455D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00445640; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28688u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00445628; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00445628; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00445628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445628u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00445628u) [[unlikely]] return; }
L_00445628:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00445644; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445640u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00445640u) [[unlikely]] return; }
L_00445640:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00445644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00445660:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00445688; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_00445680; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00445680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044568C; } }
L_00445688:
    set32(c.r[2], c.r[2].w[0] + 26304u);
    c.budget -= 1;
L_0044568C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004456A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 26752u);  c.pc = t; return; }
L_004456B0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[6].w[0] + 26848u);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 10u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004456ECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x004456ECu) [[unlikely]] return; }
L_004456EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004456FCu); set32(c.r[5], c.r[5].w[0] + 26850u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004456FCu) [[unlikely]] return; }
L_004456FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_00445720; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445714u); set32(c.r[5], c.r[5].w[0] + 26855u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00445714u) [[unlikely]] return; }
L_00445714:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00445730; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_00445720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445728u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00445728u) [[unlikely]] return; }
L_00445728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0044598C; } }
L_00445730:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044573Cu); set32(c.r[5], c.r[5].w[0] + 26850u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0044573Cu) [[unlikely]] return; }
L_0044573C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445748u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x00445748u) [[unlikely]] return; }
L_00445748:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445758u); set32(c.r[5], c.r[5].w[0] + 26855u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00445758u) [[unlikely]] return; }
L_00445758:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445764u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x00445764u) [[unlikely]] return; }
L_00445764:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 26860u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445778u); c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00445778u) [[unlikely]] return; }
L_00445778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004457C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445790u); set32(c.r[5], c.r[5].w[0] + 26860u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00445790u) [[unlikely]] return; }
L_00445790:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 239u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004457A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x004457A0u) [[unlikely]] return; }
L_004457A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = ld8((c.r[29].w[0] + 239u));  goto L_004457C8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004457C4; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004457C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x004457C4u) [[unlikely]] return; }
L_004457C4:
    c.r[19].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 1;
L_004457C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 26869u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004457DCu); c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004457DCu) [[unlikely]] return; }
L_004457DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 68u);  goto L_00445830; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004457F4u); set32(c.r[5], c.r[5].w[0] + 26869u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004457F4u) [[unlikely]] return; }
L_004457F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 238u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445804u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00445804u) [[unlikely]] return; }
L_00445804:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = ld8((c.r[29].w[0] + 238u));  goto L_0044582C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00445828; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 238u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445828u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00445828u) [[unlikely]] return; }
L_00445828:
    c.r[18].d[0] = ld8((c.r[29].w[0] + 238u));
    c.budget -= 1;
L_0044582C:
    set32(c.r[4], 0u + 68u);
    c.budget -= 1;
L_00445830:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044583Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0044583Cu) [[unlikely]] return; }
L_0044583C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004458EC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 161u);  goto L_00445858; }
    set32(c.r[16], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00445858:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_0044586C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0044586C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445874u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x00445874u) [[unlikely]] return; }
L_00445874:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445884u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00445884u) [[unlikely]] return; }
L_00445884:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044589Cu); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 432u, depth + 1u); else { c.pc = 0x0013BF00u; return; } if (c.pc != 0x0044589Cu) [[unlikely]] return; }
L_0044589C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004458A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004458A8u) [[unlikely]] return; }
L_004458A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28720u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st8((c.r[17].w[0] + 65u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 64u));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004458E8; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 66u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004458E4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004458E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004458E4u) [[unlikely]] return; }
L_004458E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004458E8:
    st8((c.r[17].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_004458EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00445900; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445900u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00445900u) [[unlikely]] return; }
L_00445900:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445910u); set32(c.r[5], c.r[5].w[0] + 26881u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00445910u) [[unlikely]] return; }
L_00445910:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_00445968; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445928u); set32(c.r[5], c.r[5].w[0] + 26881u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00445928u) [[unlikely]] return; }
L_00445928:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 237u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445938u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00445938u) [[unlikely]] return; }
L_00445938:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 237u));  goto L_00445960; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0044595C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 237u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044595Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0044595Cu) [[unlikely]] return; }
L_0044595C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 237u));
    c.budget -= 1;
L_00445960:
    st8((c.r[17].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_00445968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445970u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00445970u) [[unlikely]] return; }
L_00445970:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044597Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0044597Cu) [[unlikely]] return; }
L_0044597C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445988u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00445988u) [[unlikely]] return; }
L_00445988:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0044598C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_004459B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 26784u);
    set32(c.r[5], c.r[5].w[0] + 26894u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004459DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x004459DCu) [[unlikely]] return; }
L_004459DC:
    set32(c.r[17], ld32((c.r[28].w[0] - 29076u)));
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004459ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004459ECu) [[unlikely]] return; }
L_004459EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 808u)));  goto L_00445A2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A0Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00445A0Cu) [[unlikely]] return; }
L_00445A0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 27696u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 28688u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 8;
L_00445A2C:
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00445A8C; }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26916u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A58u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x00445A58u) [[unlikely]] return; }
L_00445A58:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445A7Cu); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x00445A7Cu) [[unlikely]] return; }
L_00445A7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 808u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_00445A8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00445AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 66u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00445B00; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00445AD8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 67u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00445AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), 0u);  if (t) { goto L_00445B00; } }
L_00445AD8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00445B04; }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00445B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445AF4u);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x00445AF4u) [[unlikely]] return; }
L_00445AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445AFCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 167u, depth + 1u); else { c.pc = 0x004450C0u; return; } if (c.pc != 0x00445AFCu) [[unlikely]] return; }
L_00445AFC:
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_00445B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00445B04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00445B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 66u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00445B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00445B9C; } }
L_00445B38:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445B44u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00445B44u) [[unlikely]] return; }
L_00445B44:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 49u);  goto L_00445B58; }
    set32(c.r[6], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00445B58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445B64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 177u, depth + 1u); else { c.pc = 0x00445280u; return; } if (c.pc != 0x00445B64u) [[unlikely]] return; }
L_00445B64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445B74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00445B74u) [[unlikely]] return; }
L_00445B74:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  goto L_00445B8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445B84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00445B84u) [[unlikely]] return; }
L_00445B84:
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00445B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00445B9C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00445B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00445BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00445C28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28720u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 64u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00445C08; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 67u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00445C04; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 66u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00445C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445C04u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x00445C04u) [[unlikely]] return; }
L_00445C04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00445C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445C10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 428u, depth + 1u); else { c.pc = 0x0013BE90u; return; } if (c.pc != 0x00445C10u) [[unlikely]] return; }
L_00445C10:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00445C2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445C28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00445C28u) [[unlikely]] return; }
L_00445C28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00445C2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00445C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30004u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00445C5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00445C6C; } }
L_00445C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445C64u);  if (depth < kMaxDepth) unit_000E(c, 80u, depth + 1u); else { c.pc = 0x00138FF0u; return; } if (c.pc != 0x00445C64u) [[unlikely]] return; }
L_00445C64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00445C6C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00445C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445CA4u); set32(c.r[4], c.r[4].w[0] + 26784u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00445CA4u) [[unlikely]] return; }
L_00445CA4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00445CB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00445CC4; } }
L_00445CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445CBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 82u, depth + 1u); else { c.pc = 0x00139030u; return; } if (c.pc != 0x00445CBCu) [[unlikely]] return; }
L_00445CBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00445CC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00445CE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00445CF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30004u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00445D0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00445D14; } }
L_00445D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445D14u);  if (depth < kMaxDepth) unit_000E(c, 89u, depth + 1u); else { c.pc = 0x001390A0u; return; } if (c.pc != 0x00445D14u) [[unlikely]] return; }
L_00445D14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00445D20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30004u)));  c.pc = t; return; }
L_00445D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 26816u);  c.pc = t; return; }
L_00445D40:
    set32(c.r[29], c.r[29].w[0] - 1504u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 504u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 508u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st8((c.r[29].w[0] + 503u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[9], ld32((c.r[7].w[0] + 24u)));
    c.f[28] = c.f[13];
    set32(c.r[4], ld32((c.r[7].w[0] + 16u)));
    c.f[20] = c.f[12];
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    c.f[27] = c.f[14];
    set32(c.r[5], c.r[9].w[0] >> 7);
    set32(c.r[2], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.r[9].d[0] & 127ull;
    set32(c.r[6], c.r[5].w[0] << 2);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[28]) < fp::key(c.f[0]));
    c.budget -= 52;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[26] = c.f[15];  if (t) { goto L_00445E5C; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[6], c.r[5].w[0] >> 7);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    mmi::divu(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 19;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00445E68; }
L_00445E5C:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00447668; } }
L_00445E68:
    set32(c.r[3], ld32((c.r[28].w[0] - 24772u)));
    mmi::pmaxw(c.r[5], c.r[8], c.r[2]);
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.f[1] = ld32((c.r[28].w[0] - 32556u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    mmi::pminw(c.r[5], c.r[5], c.r[2]);
    set32(c.r[17], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445EB0u); st32((c.r[29].w[0] + 480u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00445EB0u) [[unlikely]] return; }
L_00445EB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24772u)));
    c.f[25] = c.f[0];
    c.f[1] = ld32((c.r[28].w[0] - 32556u));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445ED0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00445ED0u) [[unlikely]] return; }
L_00445ED0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24772u)));
    c.f[24] = c.f[0];
    c.f[1] = ld32((c.r[28].w[0] - 32556u));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445EF0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00445EF0u) [[unlikely]] return; }
L_00445EF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24772u)));
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 960u);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_div(c, 23u, c.f[0], c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445F48u);  if (depth < kMaxDepth) unit_0005(c, 171u, depth + 1u); else { c.pc = 0x00116E00u; return; } if (c.pc != 0x00445F48u) [[unlikely]] return; }
L_00445F48:
    set32(c.r[6], ld32((c.r[29].w[0] + 480u)));
    c.f[12] = c.f[23];
    set32(c.r[7], ld32((c.r[29].w[0] + 464u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.f[14] = c.f[28];
    set32(c.r[8], c.r[29].w[0] + 1500u);
    set32(c.r[9], c.r[29].w[0] + 1496u);
    st32((c.r[29].w[0] + 1500u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445F78u); st32((c.r[29].w[0] + 1496u), 0u);  if (depth < kMaxDepth) unit_00D1(c, 413u, depth + 1u); else { c.pc = 0x00447AD0u; return; } if (c.pc != 0x00445F78u) [[unlikely]] return; }
L_00445F78:
    set32(c.r[5], ld32((c.r[29].w[0] + 508u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445F84u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00445F84u) [[unlikely]] return; }
L_00445F84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 544u);  goto L_00446000; }
    set32(c.r[5], ld32((c.r[29].w[0] + 1496u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 1500u)));
    set32(c.r[2], c.r[2].w[0] + 28808u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[6], 0u + 6u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445FC8u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00102150u; return; } if (c.pc != 0x00445FC8u) [[unlikely]] return; }
L_00445FC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 508u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445FDCu); st32((c.r[29].w[0] + 1420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00445FDCu) [[unlikely]] return; }
L_00445FDC:
    st32((c.r[29].w[0] + 1416u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445FF0u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00445FF0u) [[unlikely]] return; }
L_00445FF0:
    set32(c.r[4], ld32((c.r[29].w[0] + 1416u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00445FFCu); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00445FFCu) [[unlikely]] return; }
L_00445FFC:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 1;
L_00446000:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446010u); st32((c.r[20].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x00446010u) [[unlikely]] return; }
L_00446010:
    set32(c.r[2], ld32((c.r[29].w[0] + 548u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 544u)));
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    set32(c.r[17], c.r[22].w[0] + 4u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 564u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_00446058; } }
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_00446050; }
    set32(c.r[16], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00446050:
    set32(c.r[2], c.r[17].w[0] + 512u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 2;
L_00446058:
    c.f[12] = 0u;
    set32(c.r[4], c.r[29].w[0] + 836u);
    c.f[13] = c.f[12];
    st32((c.r[29].w[0] + 832u), 0u);
    c.f[14] = c.f[12];
    c.r[30].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 448u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044607Cu); st32((c.r[29].w[0] + 432u), 0u);  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x0044607Cu) [[unlikely]] return; }
L_0044607C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446094u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x00446094u) [[unlikely]] return; }
L_00446094:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 860u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004460ACu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x004460ACu) [[unlikely]] return; }
L_004460AC:
    set32(c.r[4], c.r[29].w[0] + 880u);
    st32((c.r[29].w[0] + 872u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004460BCu); st32((c.r[29].w[0] + 876u), 0u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004460BCu) [[unlikely]] return; }
L_004460BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004460C4u); set32(c.r[4], c.r[29].w[0] + 892u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004460C4u) [[unlikely]] return; }
L_004460C4:
    set32(c.r[4], c.r[29].w[0] + 892u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004460D0u); st32((c.r[29].w[0] + 956u), 0u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004460D0u) [[unlikely]] return; }
L_004460D0:
    c.f[12] = 0u;
    set32(c.r[4], c.r[29].w[0] + 708u);
    c.f[13] = c.f[12];
    st32((c.r[29].w[0] + 704u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004460E8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x004460E8u) [[unlikely]] return; }
L_004460E8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446100u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x00446100u) [[unlikely]] return; }
L_00446100:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 732u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446118u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x00446118u) [[unlikely]] return; }
L_00446118:
    set32(c.r[4], c.r[29].w[0] + 752u);
    st32((c.r[29].w[0] + 744u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446128u); st32((c.r[29].w[0] + 748u), 0u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00446128u) [[unlikely]] return; }
L_00446128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446130u); set32(c.r[4], c.r[29].w[0] + 764u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x00446130u) [[unlikely]] return; }
L_00446130:
    set32(c.r[4], c.r[29].w[0] + 764u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044613Cu); st32((c.r[29].w[0] + 828u), 0u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x0044613Cu) [[unlikely]] return; }
L_0044613C:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::max(c.f[20], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 832u), c.f[0]);  if (t) { goto L_00446180; } }
L_00446150:
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00446184; }
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_00446178; }
    set32(c.r[16], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00446178:
    set32(c.r[2], c.r[17].w[0] + 512u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 2;
L_00446180:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00446184:
    c.f[0] = ld32((c.r[29].w[0] + 832u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0044619C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044619C:
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 960u)));  goto L_004461C8; }
    set32(c.r[6], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004461B8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x004461B8u) [[unlikely]] return; }
L_004461B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 528u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 336u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00446150u | kUnwind; return; } goto L_00446150; }
    set32(c.r[3], ld32((c.r[29].w[0] + 960u)));
    c.budget -= 1;
L_004461C8:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 832u));
    c.r[2].d[0] = c.r[23].d[0] ^ 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.f[22] = ld32((c.r[28].w[0] - 31864u));
    st32((c.r[29].w[0] + 416u), 0u);
    st8((c.r[29].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[21] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 744u), c.f[21]);  if (t) { goto L_0044753C; } }
L_004461FC:
    st32((c.r[29].w[0] + 956u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 384u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 832u));  goto L_00446220; }
    set32(c.r[2], ld32((c.r[29].w[0] + 464u)));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 828u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 956u), c.r[2].w[0]);  if (t) { goto L_00446294; } }
L_00446220:
    c.f[1] = fp::add(c.f[0], c.f[23]);
    st32((c.r[29].w[0] + 832u), c.f[1]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00446244; } }
    st32((c.r[29].w[0] + 832u), c.f[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00446244:
    c.f[0] = ld32((c.r[29].w[0] + 832u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[28]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = ld8((c.r[29].w[0] + 368u));  goto L_00446268; }
    set32(c.r[2], ld32((c.r[29].w[0] + 464u)));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 832u), c.f[28]);
    st32((c.r[29].w[0] + 956u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 368u));
    c.budget -= 5;
L_00446268:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[12] = ld32((c.r[29].w[0] + 832u));  goto L_00446298; }
    c.f[1] = ld32((c.r[23].w[0] + 16u));
    c.f[0] = ld32((c.r[29].w[0] + 832u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00446294; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 832u), c.f[1]);
    st8((c.r[29].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00446294:
    c.f[12] = ld32((c.r[29].w[0] + 832u));
    c.budget -= 1;
L_00446298:
    set32(c.r[4], c.r[29].w[0] + 960u);
    set32(c.r[5], c.r[29].w[0] + 836u);
    set32(c.r[6], c.r[29].w[0] + 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004462ACu); set32(c.r[7], c.r[29].w[0] + 860u);  if (depth < kMaxDepth) unit_0005(c, 150u, depth + 1u); else { c.pc = 0x00116080u; return; } if (c.pc != 0x004462ACu) [[unlikely]] return; }
L_004462AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 960u)));
    c.f[1] = ld32((c.r[29].w[0] + 832u));
    c.f[0] = ld32((c.r[29].w[0] + 744u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 872u), c.f[1]);  if (t) { goto L_004462E4; } }
    c.f[1] = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[8] = ld32((c.r[29].w[0] + 720u));  goto L_004462E8; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004462E4:
    c.f[8] = ld32((c.r[29].w[0] + 720u));
    c.budget -= 1;
L_004462E8:
    c.f[5] = ld32((c.r[29].w[0] + 848u));
    c.f[7] = ld32((c.r[29].w[0] + 724u));
    c.f[4] = ld32((c.r[29].w[0] + 852u));
    c.f[6] = ld32((c.r[29].w[0] + 728u));
    c.f[3] = ld32((c.r[29].w[0] + 856u));
    c.facc = fp::mul(c.f[8], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[4]));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));  if (t) { goto L_0044631C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[25]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0044631C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044631C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_004463BC; }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004463B8; } }
    c.f[1] = ld32((c.r[29].w[0] + 736u));
    c.f[0] = ld32((c.r[29].w[0] + 740u));
    c.f[2] = ld32((c.r[29].w[0] + 732u));
    c.facc = fp::mul(c.f[1], c.f[6]);
    c.f[12] = fp::sub(c.facc, fp::mul(c.f[0], c.f[7]));
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.f[11] = fp::sub(c.facc, fp::mul(c.f[2], c.f[6]));
    c.facc = fp::mul(c.f[2], c.f[7]);
    c.f[10] = fp::sub(c.facc, fp::mul(c.f[1], c.f[8]));
    c.facc = fp::mul(c.f[12], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[4]));
    c.f[9] = fp::add(c.facc, fp::mul(c.f[10], c.f[3]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::mul(c.f[12], c.f[9]);
    c.f[2] = fp::sub(c.f[5], c.f[0]);
    c.f[0] = fp::mul(c.f[11], c.f[9]);
    c.f[1] = fp::sub(c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[10], c.f[9]);
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[3], c.f[4]);
    c.facc = fp::mul(c.f[8], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[24]));
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004463B8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004463B8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004463BC:
    c.f[20] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = fp::sub(c.f[1], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[20]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[4] = ld32((c.r[29].w[0] + 832u));  if (t) { goto L_00446400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 31836u));  if (t) { goto L_00446410; } }
L_00446400:
    c.f[0] = fp::sub(c.f[4], c.f[3]);
    fpu_div(c, 20u, c.f[0], c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 31836u));
    c.budget -= 4;
L_00446410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446418u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00446418u) [[unlikely]] return; }
L_00446418:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[4] = ld32((c.r[2].w[0] + 16u));
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[2].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[3]));
    c.f[0] = ld32((c.r[28].w[0] - 31836u));
    st32((c.r[29].w[0] + 876u), c.f[1]);
    c.f[29] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044646Cu); c.f[12] = c.f[29];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0044646Cu) [[unlikely]] return; }
L_0044646C:
    c.f[12] = c.f[29];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446478u); c.f[31] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x00446478u) [[unlikely]] return; }
L_00446478:
    c.f[30] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 892u);
    c.f[1] = ld32((c.r[29].w[0] + 836u));
    c.f[0] = ld32((c.r[29].w[0] + 848u));
    c.f[3] = ld32((c.r[29].w[0] + 840u));
    c.f[2] = ld32((c.r[29].w[0] + 852u));
    c.f[4] = fp::add(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 844u));
    c.f[0] = ld32((c.r[29].w[0] + 856u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 1456u), c.f[4]);
    st32((c.r[29].w[0] + 1460u), c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004464B4u); st32((c.r[29].w[0] + 1464u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004464B4u) [[unlikely]] return; }
L_004464B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004464BCu); set32(c.r[4], c.r[29].w[0] + 1400u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004464BCu) [[unlikely]] return; }
L_004464BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004464C4u); set32(c.r[4], c.r[29].w[0] + 1384u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004464C4u) [[unlikely]] return; }
L_004464C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004464CCu); set32(c.r[4], c.r[29].w[0] + 1368u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004464CCu) [[unlikely]] return; }
L_004464CC:
    set32(c.r[4], c.r[29].w[0] + 1352u);
    set32(c.r[5], c.r[29].w[0] + 1456u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004464DCu); set32(c.r[6], c.r[29].w[0] + 836u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128070u; return; } if (c.pc != 0x004464DCu) [[unlikely]] return; }
L_004464DC:
    set32(c.r[4], c.r[29].w[0] + 1400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004464E8u); set32(c.r[5], c.r[29].w[0] + 1352u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004464E8u) [[unlikely]] return; }
L_004464E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004464F0u); set32(c.r[4], c.r[29].w[0] + 1400u);  if (depth < kMaxDepth) unit_0013(c, 292u, depth + 1u); else { c.pc = 0x0014E450u; return; } if (c.pc != 0x004464F0u) [[unlikely]] return; }
L_004464F0:
    c.f[29] = c.f[0];
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446500u); c.f[12] = c.f[29];  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x00446500u) [[unlikely]] return; }
L_00446500:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00446528; }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 1400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446520u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 362u, depth + 1u); else { c.pc = 0x00127FD0u; return; } if (c.pc != 0x00446520u) [[unlikely]] return; }
L_00446520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 1320u);  if (t) { goto L_0044654C; } }
L_00446528:
    set32(c.r[4], c.r[29].w[0] + 1400u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[29]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446548u);  if (depth < kMaxDepth) unit_0013(c, 291u, depth + 1u); else { c.pc = 0x0014E420u; return; } if (c.pc != 0x00446548u) [[unlikely]] return; }
L_00446548:
    set32(c.r[4], c.r[29].w[0] + 1320u);
    c.budget -= 1;
L_0044654C:
    set32(c.r[5], c.r[29].w[0] + 860u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446558u); set32(c.r[6], c.r[29].w[0] + 1400u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x00446558u) [[unlikely]] return; }
L_00446558:
    set32(c.r[4], c.r[29].w[0] + 1336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446564u); set32(c.r[5], c.r[29].w[0] + 1320u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x00446564u) [[unlikely]] return; }
L_00446564:
    set32(c.r[4], c.r[29].w[0] + 1384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446570u); set32(c.r[5], c.r[29].w[0] + 1336u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00446570u) [[unlikely]] return; }
L_00446570:
    set32(c.r[4], c.r[29].w[0] + 1288u);
    set32(c.r[5], c.r[29].w[0] + 1400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446580u); set32(c.r[6], c.r[29].w[0] + 1384u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x00446580u) [[unlikely]] return; }
L_00446580:
    set32(c.r[4], c.r[29].w[0] + 1304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044658Cu); set32(c.r[5], c.r[29].w[0] + 1288u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x0044658Cu) [[unlikely]] return; }
L_0044658C:
    set32(c.r[4], c.r[29].w[0] + 1368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446598u); set32(c.r[5], c.r[29].w[0] + 1304u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00446598u) [[unlikely]] return; }
L_00446598:
    c.f[1] = ld32((c.r[29].w[0] + 1372u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 1388u));
    st32((c.r[29].w[0] + 904u), 0u);
    c.f[4] = ld32((c.r[29].w[0] + 1376u));
    st32((c.r[29].w[0] + 920u), 0u);
    c.facc = fp::mul(c.f[31], c.f[1]);
    st32((c.r[29].w[0] + 952u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 896u), c.f[2]);
    st32((c.r[29].w[0] + 936u), 0u);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[2]));
    st32((c.r[29].w[0] + 940u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 1404u));
    st32((c.r[29].w[0] + 944u), 0u);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 948u), 0u);
    c.f[7] = ld32((c.r[29].w[0] + 1392u));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    st32((c.r[29].w[0] + 912u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 1408u));
    c.f[6] = ld32((c.r[29].w[0] + 1368u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[8] = ld32((c.r[29].w[0] + 1384u));
    c.f[3] = ld32((c.r[29].w[0] + 1400u));
    st32((c.r[29].w[0] + 916u), c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    c.facc = fp::mul(c.f[31], c.f[6]);
    st32((c.r[29].w[0] + 924u), c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[8]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    st32((c.r[29].w[0] + 892u), c.f[8]);
    st32((c.r[29].w[0] + 900u), c.f[7]);
    st32((c.r[29].w[0] + 908u), c.f[6]);
    st32((c.r[29].w[0] + 928u), c.f[2]);
    st32((c.r[29].w[0] + 932u), c.f[1]);
    st32((c.r[29].w[0] + 884u), c.f[5]);
    st32((c.r[29].w[0] + 888u), c.f[4]);
    c.budget -= 40;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 880u), c.f[3]);  if (t) { goto L_00446664; } }
    c.f[2] = ld32((c.r[29].w[0] + 752u));
    c.f[1] = ld32((c.r[29].w[0] + 756u));
    c.f[0] = ld32((c.r[29].w[0] + 760u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00446664; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00446664:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_004474D4; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 384u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 960u)));  goto L_00446A90; }
    c.f[1] = ld32((c.r[29].w[0] + 836u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[29].w[0] + 708u));
    set32(c.r[4], c.r[29].w[0] + 580u);
    c.f[12] = 0u;
    st32((c.r[29].w[0] + 576u), 0u);
    c.f[3] = ld32((c.r[29].w[0] + 840u));
    c.f[5] = fp::add(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 712u));
    c.f[1] = ld32((c.r[29].w[0] + 844u));
    c.f[0] = ld32((c.r[29].w[0] + 716u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[4] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[29] = fp::mul(c.f[5], c.f[4]);
    c.f[30] = fp::mul(c.f[2], c.f[4]);
    c.f[31] = fp::mul(c.f[0], c.f[4]);
    c.f[13] = c.f[12];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004466C8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x004466C8u) [[unlikely]] return; }
L_004466C8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004466E0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x004466E0u) [[unlikely]] return; }
L_004466E0:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 604u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004466F8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x004466F8u) [[unlikely]] return; }
L_004466F8:
    set32(c.r[4], c.r[29].w[0] + 624u);
    st32((c.r[29].w[0] + 616u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446708u); st32((c.r[29].w[0] + 620u), 0u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00446708u) [[unlikely]] return; }
L_00446708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446710u); set32(c.r[4], c.r[29].w[0] + 636u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x00446710u) [[unlikely]] return; }
L_00446710:
    set32(c.r[4], c.r[29].w[0] + 636u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044671Cu); st32((c.r[29].w[0] + 700u), 0u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x0044671Cu) [[unlikely]] return; }
L_0044671C:
    c.f[2] = ld32((c.r[29].w[0] + 832u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[29].w[0] + 704u));
    set32(c.r[4], c.r[29].w[0] + 960u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 580u);
    set32(c.r[6], c.r[29].w[0] + 592u);
    set32(c.r[7], c.r[29].w[0] + 604u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[12] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044674Cu); st32((c.r[29].w[0] + 576u), c.f[12]);  if (depth < kMaxDepth) unit_0005(c, 150u, depth + 1u); else { c.pc = 0x00116080u; return; } if (c.pc != 0x0044674Cu) [[unlikely]] return; }
L_0044674C:
    set32(c.r[2], ld32((c.r[29].w[0] + 960u)));
    c.f[0] = ld32((c.r[29].w[0] + 580u));
    c.f[4] = ld32((c.r[29].w[0] + 584u));
    c.f[3] = ld32((c.r[29].w[0] + 588u));
    c.f[7] = ld32((c.r[29].w[0] + 576u));
    c.f[6] = ld32((c.r[2].w[0] + 32u));
    c.f[5] = fp::sub(c.f[29], c.f[0]);
    c.f[6] = fp::mul(c.f[7], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 604u));
    c.f[4] = fp::sub(c.f[30], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 608u));
    c.f[3] = fp::sub(c.f[31], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 612u));
    st32((c.r[29].w[0] + 616u), c.f[6]);
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00446A8C; } }
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.f[20] = 0u;
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = fp::sub(c.f[1], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[20]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  if (t) { goto L_004467DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 31836u));  if (t) { goto L_004467EC; } }
L_004467DC:
    c.f[0] = fp::sub(c.f[7], c.f[3]);
    fpu_div(c, 20u, c.f[0], c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 31836u));
    c.budget -= 4;
L_004467EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004467F4u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x004467F4u) [[unlikely]] return; }
L_004467F4:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[4] = ld32((c.r[2].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[3]));
    c.f[0] = ld32((c.r[28].w[0] - 31836u));
    st32((c.r[29].w[0] + 620u), c.f[1]);
    c.f[29] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446844u); c.f[12] = c.f[29];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00446844u) [[unlikely]] return; }
L_00446844:
    c.f[12] = c.f[29];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446850u); c.f[31] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x00446850u) [[unlikely]] return; }
L_00446850:
    c.f[30] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 636u);
    c.f[1] = ld32((c.r[29].w[0] + 580u));
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    c.f[3] = ld32((c.r[29].w[0] + 584u));
    c.f[2] = ld32((c.r[29].w[0] + 596u));
    c.f[4] = fp::add(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 588u));
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 1440u), c.f[4]);
    st32((c.r[29].w[0] + 1444u), c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044688Cu); st32((c.r[29].w[0] + 1448u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x0044688Cu) [[unlikely]] return; }
L_0044688C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446894u); set32(c.r[4], c.r[29].w[0] + 1272u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00446894u) [[unlikely]] return; }
L_00446894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044689Cu); set32(c.r[4], c.r[29].w[0] + 1256u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0044689Cu) [[unlikely]] return; }
L_0044689C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004468A4u); set32(c.r[4], c.r[29].w[0] + 1240u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004468A4u) [[unlikely]] return; }
L_004468A4:
    set32(c.r[4], c.r[29].w[0] + 1224u);
    set32(c.r[5], c.r[29].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004468B4u); set32(c.r[6], c.r[29].w[0] + 580u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128070u; return; } if (c.pc != 0x004468B4u) [[unlikely]] return; }
L_004468B4:
    set32(c.r[4], c.r[29].w[0] + 1272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004468C0u); set32(c.r[5], c.r[29].w[0] + 1224u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004468C0u) [[unlikely]] return; }
L_004468C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004468C8u); set32(c.r[4], c.r[29].w[0] + 1272u);  if (depth < kMaxDepth) unit_0013(c, 292u, depth + 1u); else { c.pc = 0x0014E450u; return; } if (c.pc != 0x004468C8u) [[unlikely]] return; }
L_004468C8:
    c.f[29] = c.f[0];
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004468D8u); c.f[12] = c.f[29];  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x004468D8u) [[unlikely]] return; }
L_004468D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00446900; }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 1272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004468F8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 362u, depth + 1u); else { c.pc = 0x00127FD0u; return; } if (c.pc != 0x004468F8u) [[unlikely]] return; }
L_004468F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 1192u);  if (t) { goto L_00446924; } }
L_00446900:
    set32(c.r[4], c.r[29].w[0] + 1272u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[29]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446920u);  if (depth < kMaxDepth) unit_0013(c, 291u, depth + 1u); else { c.pc = 0x0014E420u; return; } if (c.pc != 0x00446920u) [[unlikely]] return; }
L_00446920:
    set32(c.r[4], c.r[29].w[0] + 1192u);
    c.budget -= 1;
L_00446924:
    set32(c.r[5], c.r[29].w[0] + 604u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446930u); set32(c.r[6], c.r[29].w[0] + 1272u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x00446930u) [[unlikely]] return; }
L_00446930:
    set32(c.r[4], c.r[29].w[0] + 1208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044693Cu); set32(c.r[5], c.r[29].w[0] + 1192u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x0044693Cu) [[unlikely]] return; }
L_0044693C:
    set32(c.r[4], c.r[29].w[0] + 1256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446948u); set32(c.r[5], c.r[29].w[0] + 1208u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00446948u) [[unlikely]] return; }
L_00446948:
    set32(c.r[4], c.r[29].w[0] + 1160u);
    set32(c.r[5], c.r[29].w[0] + 1272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446958u); set32(c.r[6], c.r[29].w[0] + 1256u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x00446958u) [[unlikely]] return; }
L_00446958:
    set32(c.r[4], c.r[29].w[0] + 1176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446964u); set32(c.r[5], c.r[29].w[0] + 1160u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x00446964u) [[unlikely]] return; }
L_00446964:
    set32(c.r[4], c.r[29].w[0] + 1240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446970u); set32(c.r[5], c.r[29].w[0] + 1176u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00446970u) [[unlikely]] return; }
L_00446970:
    c.f[0] = ld32((c.r[29].w[0] + 1244u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 1260u));
    st32((c.r[29].w[0] + 696u), c.r[2].w[0]);
    c.f[4] = ld32((c.r[29].w[0] + 1248u));
    set32(c.r[4], c.r[29].w[0] + 892u);
    c.facc = fp::mul(c.f[31], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 636u);
    st32((c.r[29].w[0] + 656u), c.f[0]);
    st32((c.r[29].w[0] + 648u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 1276u));
    st32((c.r[29].w[0] + 664u), 0u);
    c.f[6] = ld32((c.r[29].w[0] + 1264u));
    st32((c.r[29].w[0] + 680u), 0u);
    c.f[1] = 0u;
    st32((c.r[29].w[0] + 684u), 0u);
    st32((c.r[29].w[0] + 640u), c.f[2]);
    st32((c.r[29].w[0] + 688u), 0u);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[2]));
    st32((c.r[29].w[0] + 692u), 0u);
    st32((c.r[29].w[0] + 672u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.f[2] = ld32((c.r[29].w[0] + 1280u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[5] = ld32((c.r[29].w[0] + 1240u));
    c.f[7] = ld32((c.r[29].w[0] + 1256u));
    c.f[3] = ld32((c.r[29].w[0] + 1272u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[6]));
    st32((c.r[29].w[0] + 628u), c.f[0]);
    st32((c.r[29].w[0] + 884u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));
    c.facc = fp::mul(c.f[31], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[3]));
    st32((c.r[29].w[0] + 676u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 580u));
    st32((c.r[29].w[0] + 632u), c.f[0]);
    st32((c.r[29].w[0] + 888u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 576u));
    st32((c.r[29].w[0] + 836u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 592u));
    st32((c.r[29].w[0] + 832u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 588u));
    st32((c.r[29].w[0] + 848u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 604u));
    st32((c.r[29].w[0] + 844u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    st32((c.r[29].w[0] + 624u), c.f[1]);
    st32((c.r[29].w[0] + 880u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 584u));
    st32((c.r[29].w[0] + 856u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 612u));
    st32((c.r[29].w[0] + 840u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 596u));
    st32((c.r[29].w[0] + 868u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 620u));
    st32((c.r[29].w[0] + 852u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 608u));
    st32((c.r[29].w[0] + 636u), c.f[7]);
    st32((c.r[29].w[0] + 644u), c.f[6]);
    st32((c.r[29].w[0] + 864u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 616u));
    st32((c.r[29].w[0] + 652u), c.f[5]);
    st32((c.r[29].w[0] + 660u), c.f[4]);
    st32((c.r[29].w[0] + 668u), c.f[3]);
    st32((c.r[29].w[0] + 860u), c.f[2]);
    st32((c.r[29].w[0] + 872u), c.f[1]);
    c.budget -= 69;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446A84u); st32((c.r[29].w[0] + 876u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 355u, depth + 1u); else { c.pc = 0x00127BC0u; return; } if (c.pc != 0x00446A84u) [[unlikely]] return; }
L_00446A84:
    set32(c.r[2], ld32((c.r[29].w[0] + 700u)));
    st32((c.r[29].w[0] + 956u), c.r[2].w[0]);
    c.budget -= 2;
L_00446A8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 960u)));
    c.budget -= 1;
L_00446A90:
    c.f[3] = ld32((c.r[29].w[0] + 832u));
    c.f[29] = c.f[22];
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 503u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = fp::mul(c.f[3], c.f[0]);  if (t) { goto L_00446AB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[21]);  if (t) { goto L_00446AC4; } }
L_00446AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    c.budget -= 3;
L_00446AC4:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.f[1] = fp::mul(c.f[26], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[27]);
    c.f[22] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[3], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_00446B8C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00446B88; } }
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[29].w[0] + 892u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[29].w[0] + 896u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[29].w[0] + 900u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[29].w[0] + 904u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[29].w[0] + 908u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[29].w[0] + 912u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[29].w[0] + 916u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[29].w[0] + 920u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[29].w[0] + 924u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[29].w[0] + 928u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[29].w[0] + 932u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    st32((c.r[29].w[0] + 936u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[29].w[0] + 940u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[29].w[0] + 944u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    st32((c.r[29].w[0] + 948u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 952u), c.f[0]);  if (t) { goto L_00446DD4; } }
L_00446B88:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00446B8C:
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::sub(c.f[3], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 836u));  goto L_00446C3C; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00446C38; } }
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[29].w[0] + 892u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[29].w[0] + 896u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[29].w[0] + 900u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[29].w[0] + 904u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[29].w[0] + 908u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[29].w[0] + 912u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[29].w[0] + 916u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[29].w[0] + 920u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[29].w[0] + 924u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[29].w[0] + 928u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[29].w[0] + 932u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    st32((c.r[29].w[0] + 936u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[29].w[0] + 940u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[29].w[0] + 944u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    st32((c.r[29].w[0] + 948u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 952u), c.f[0]);  if (t) { goto L_00446DD4; } }
L_00446C38:
    c.f[1] = ld32((c.r[29].w[0] + 836u));
    c.budget -= 1;
L_00446C3C:
    set32(c.r[4], c.r[29].w[0] + 892u);
    c.f[0] = ld32((c.r[29].w[0] + 848u));
    c.f[3] = ld32((c.r[29].w[0] + 840u));
    c.f[2] = ld32((c.r[29].w[0] + 852u));
    c.f[4] = fp::add(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 844u));
    c.f[0] = ld32((c.r[29].w[0] + 856u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 1424u), c.f[4]);
    st32((c.r[29].w[0] + 1428u), c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446C70u); st32((c.r[29].w[0] + 1432u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x00446C70u) [[unlikely]] return; }
L_00446C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446C78u); set32(c.r[4], c.r[29].w[0] + 1144u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00446C78u) [[unlikely]] return; }
L_00446C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446C80u); set32(c.r[4], c.r[29].w[0] + 1128u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00446C80u) [[unlikely]] return; }
L_00446C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446C88u); set32(c.r[4], c.r[29].w[0] + 1112u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00446C88u) [[unlikely]] return; }
L_00446C88:
    set32(c.r[4], c.r[29].w[0] + 1096u);
    set32(c.r[5], c.r[29].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446C98u); set32(c.r[6], c.r[29].w[0] + 836u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128070u; return; } if (c.pc != 0x00446C98u) [[unlikely]] return; }
L_00446C98:
    set32(c.r[4], c.r[29].w[0] + 1144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446CA4u); set32(c.r[5], c.r[29].w[0] + 1096u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00446CA4u) [[unlikely]] return; }
L_00446CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446CACu); set32(c.r[4], c.r[29].w[0] + 1144u);  if (depth < kMaxDepth) unit_0013(c, 292u, depth + 1u); else { c.pc = 0x0014E450u; return; } if (c.pc != 0x00446CACu) [[unlikely]] return; }
L_00446CAC:
    c.f[30] = c.f[0];
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446CBCu); c.f[12] = c.f[30];  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x00446CBCu) [[unlikely]] return; }
L_00446CBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00446CE4; }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 1144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446CDCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 362u, depth + 1u); else { c.pc = 0x00127FD0u; return; } if (c.pc != 0x00446CDCu) [[unlikely]] return; }
L_00446CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 1064u);  if (t) { goto L_00446D08; } }
L_00446CE4:
    set32(c.r[4], c.r[29].w[0] + 1144u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[30]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D04u);  if (depth < kMaxDepth) unit_0013(c, 291u, depth + 1u); else { c.pc = 0x0014E420u; return; } if (c.pc != 0x00446D04u) [[unlikely]] return; }
L_00446D04:
    set32(c.r[4], c.r[29].w[0] + 1064u);
    c.budget -= 1;
L_00446D08:
    set32(c.r[5], c.r[29].w[0] + 880u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D14u); set32(c.r[6], c.r[29].w[0] + 1144u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x00446D14u) [[unlikely]] return; }
L_00446D14:
    set32(c.r[4], c.r[29].w[0] + 1080u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D20u); set32(c.r[5], c.r[29].w[0] + 1064u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x00446D20u) [[unlikely]] return; }
L_00446D20:
    set32(c.r[4], c.r[29].w[0] + 1128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D2Cu); set32(c.r[5], c.r[29].w[0] + 1080u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00446D2Cu) [[unlikely]] return; }
L_00446D2C:
    set32(c.r[4], c.r[29].w[0] + 1032u);
    set32(c.r[5], c.r[29].w[0] + 1144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D3Cu); set32(c.r[6], c.r[29].w[0] + 1128u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x00446D3Cu) [[unlikely]] return; }
L_00446D3C:
    set32(c.r[4], c.r[29].w[0] + 1048u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D48u); set32(c.r[5], c.r[29].w[0] + 1032u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x00446D48u) [[unlikely]] return; }
L_00446D48:
    set32(c.r[4], c.r[29].w[0] + 1112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446D54u); set32(c.r[5], c.r[29].w[0] + 1048u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00446D54u) [[unlikely]] return; }
L_00446D54:
    c.f[2] = ld32((c.r[29].w[0] + 1128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 1132u));
    st32((c.r[29].w[0] + 940u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 1136u));
    st32((c.r[29].w[0] + 944u), 0u);
    st32((c.r[29].w[0] + 892u), c.f[2]);
    st32((c.r[29].w[0] + 948u), 0u);
    st32((c.r[29].w[0] + 896u), c.f[1]);
    st32((c.r[29].w[0] + 904u), 0u);
    st32((c.r[29].w[0] + 900u), c.f[0]);
    st32((c.r[29].w[0] + 952u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 1112u));
    st32((c.r[29].w[0] + 920u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 1116u));
    st32((c.r[29].w[0] + 936u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 1120u));
    st32((c.r[29].w[0] + 908u), c.f[2]);
    st32((c.r[29].w[0] + 912u), c.f[1]);
    st32((c.r[29].w[0] + 916u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 1144u));
    c.f[1] = ld32((c.r[29].w[0] + 1148u));
    c.f[0] = ld32((c.r[29].w[0] + 1152u));
    st32((c.r[29].w[0] + 924u), c.f[2]);
    st32((c.r[29].w[0] + 928u), c.f[1]);
    st32((c.r[29].w[0] + 932u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 836u));
    c.f[1] = ld32((c.r[29].w[0] + 840u));
    c.f[0] = ld32((c.r[29].w[0] + 844u));
    st32((c.r[29].w[0] + 940u), c.f[2]);
    st32((c.r[29].w[0] + 944u), c.f[1]);
    st32((c.r[29].w[0] + 948u), c.f[0]);
    c.budget -= 32;
L_00446DD4:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; st8((c.r[29].w[0] + 352u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00446DFC; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 368u));
    c.r[3].d[0] = ld8((c.r[23].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0])));  goto L_00446E00; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 352u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00446DFC:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_00446E00:
    c.f[2] = ld32((c.r[29].w[0] + 832u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00446E48; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00446F24; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 956u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 828u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00446F24; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00446E48:
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_00446E5C; }
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_00446E5C:
    set32(c.r[2], ld32((c.r[29].w[0] + 956u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] << 2);  goto L_00446E84; }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0])));  if (t) { goto L_00446E90; } }
L_00446E84:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 3;
L_00446E90:
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00446EC8; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_00446ED8; } }
L_00446EC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 4;
L_00446ED8:
    set32(c.r[7], c.r[29].w[0] + 892u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00446EE4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00D2(c, 199u, depth + 1u); else { c.pc = 0x004499B0u; return; } if (c.pc != 0x00446EE4u) [[unlikely]] return; }
L_00446EE4:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 956u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_00446F10; }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_00446F1C; } }
L_00446F10:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00446F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 412u), c.r[19].w[0]);  if (t) { goto L_00447368; } }
L_00446F24:
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { st32((c.r[29].w[0] + 1492u), 0u);  goto L_00446FA0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 828u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] << 2);  goto L_00446F54; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[30], ld32((c.r[3].w[0])));  if (t) { goto L_00446F60; } }
L_00446F54:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[30], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 3;
L_00446F60:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  goto L_00446F88; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 432u), c.r[2].w[0]);  if (t) { goto L_00446F98; } }
L_00446F88:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 4u)));
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    c.budget -= 4;
L_00446F98:
    st8((c.r[29].w[0] + 448u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 1492u), 0u);
    c.budget -= 2;
L_00446FA0:
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[22].w[0])));  goto L_0044703C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 956u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_00446FEC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00446FF8; } }
L_00446FEC:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00446FF8:
    st32((c.r[29].w[0] + 1492u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_00447028; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00447034; } }
L_00447028:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00447034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1488u), c.r[2].w[0]);  if (t) { goto L_00447198; } }
L_0044703C:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], ld32((c.r[29].w[0] + 956u)));  goto L_004470BC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 956u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] << 2);  goto L_00447074; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_00447080; } }
L_00447074:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 3;
L_00447080:
    st32((c.r[29].w[0] + 1492u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  goto L_004470A8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_004470B4; } }
L_004470A8:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_004470B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1488u), c.r[2].w[0]);  if (t) { goto L_00447198; } }
L_004470BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 828u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    mmi::pminw(c.r[4], c.r[4], c.r[6]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[5].w[0] << 2);  goto L_004470E8; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[5].w[0])));  if (t) { goto L_004470F4; } }
L_004470E8:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] - 4u)));
    c.budget -= 3;
L_004470F4:
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00447118; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[2].w[0])));  if (t) { goto L_00447124; } }
L_00447118:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00447124:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] << 2);  goto L_00447148; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0])));  if (t) { goto L_00447154; } }
L_00447148:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00447154:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[2].w[0] << 2);  goto L_00447178; }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_00447184; } }
L_00447178:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00447184:
    set32(c.r[4], ld32((c.r[29].w[0] + 508u)));
    c.f[12] = c.f[20];
    set32(c.r[9], c.r[29].w[0] + 1492u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447198u); set32(c.r[10], c.r[29].w[0] + 1488u);  if (depth < kMaxDepth) unit_00D2(c, 29u, depth + 1u); else { c.pc = 0x004488B0u; return; } if (c.pc != 0x00447198u) [[unlikely]] return; }
L_00447198:
    set32(c.r[4], ld32((c.r[29].w[0] + 508u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[7], c.r[29].w[0] + 1484u);
    set32(c.r[8], ld32((c.r[29].w[0] + 1492u)));
    set32(c.r[10], c.r[29].w[0] + 1480u);
    set32(c.r[9], ld32((c.r[29].w[0] + 1488u)));
    set32(c.r[11], 0u + 1u);
    st32((c.r[29].w[0] + 1484u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004471C4u); st32((c.r[29].w[0] + 1480u), 0u);  if (depth < kMaxDepth) unit_00D1(c, 418u, depth + 1u); else { c.pc = 0x00447F50u; return; } if (c.pc != 0x004471C4u) [[unlikely]] return; }
L_004471C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 384u));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 1);  goto L_00447218; }
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_004471FC; }
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_004471FC:
    set32(c.r[5], ld32((c.r[29].w[0] + 1484u)));
    c.f[12] = c.f[29];
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447210u); set32(c.r[7], c.r[29].w[0] + 764u);  if (depth < kMaxDepth) unit_00D2(c, 199u, depth + 1u); else { c.pc = 0x004499B0u; return; } if (c.pc != 0x00447210u) [[unlikely]] return; }
L_00447210:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] << 1);
    c.budget -= 2;
L_00447218:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_0044723C; }
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_0044723C:
    set32(c.r[5], ld32((c.r[29].w[0] + 1480u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447250u); set32(c.r[7], c.r[29].w[0] + 892u);  if (depth < kMaxDepth) unit_00D2(c, 199u, depth + 1u); else { c.pc = 0x004499B0u; return; } if (c.pc != 0x00447250u) [[unlikely]] return; }
L_00447250:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 448u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 412u), c.r[19].w[0]);  if (t) { goto L_00447268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447268u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00447268u) [[unlikely]] return; }
L_00447268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447270u); set32(c.r[4], ld32((c.r[29].w[0] + 1484u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00447270u) [[unlikely]] return; }
L_00447270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447278u); set32(c.r[4], ld32((c.r[29].w[0] + 1480u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00447278u) [[unlikely]] return; }
L_00447278:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.f[1] = ld32((c.r[29].w[0] + 832u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));  goto L_004472B4; }
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00447358; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));
    c.budget -= 1;
L_004472B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_004472C0; }
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_004472C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 956u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[4].w[0] << 2);  goto L_004472EC; }
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[4].w[0])));  if (t) { goto L_004472F8; } }
L_004472EC:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] - 4u)));
    c.budget -= 3;
L_004472F8:
    set32(c.r[4], c.r[19].w[0] << 1);
    set32(c.r[7], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[9], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00447330; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_00447340; } }
L_00447330:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 4;
L_00447340:
    set32(c.r[7], c.r[29].w[0] + 892u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044734Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00D2(c, 199u, depth + 1u); else { c.pc = 0x004499B0u; return; } if (c.pc != 0x0044734Cu) [[unlikely]] return; }
L_0044734C:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_00447368; } }
L_00447358:
    set32(c.r[30], ld32((c.r[29].w[0] + 1492u)));
    st8((c.r[29].w[0] + 448u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 1488u)));
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    c.budget -= 4;
L_00447368:
    c.f[2] = ld32((c.r[29].w[0] + 832u));
    set32(c.r[4], c.r[29].w[0] + 764u);
    c.f[1] = ld32((c.r[29].w[0] + 836u));
    set32(c.r[5], c.r[29].w[0] + 892u);
    c.f[0] = ld32((c.r[29].w[0] + 840u));
    st32((c.r[29].w[0] + 704u), c.f[2]);
    st32((c.r[29].w[0] + 708u), c.f[1]);
    st32((c.r[29].w[0] + 712u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 844u));
    c.f[1] = ld32((c.r[29].w[0] + 848u));
    c.f[0] = ld32((c.r[29].w[0] + 852u));
    st32((c.r[29].w[0] + 716u), c.f[2]);
    st32((c.r[29].w[0] + 720u), c.f[1]);
    st32((c.r[29].w[0] + 724u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 856u));
    c.f[1] = ld32((c.r[29].w[0] + 860u));
    c.f[0] = ld32((c.r[29].w[0] + 864u));
    st32((c.r[29].w[0] + 728u), c.f[2]);
    st32((c.r[29].w[0] + 732u), c.f[1]);
    st32((c.r[29].w[0] + 736u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 868u));
    c.f[1] = ld32((c.r[29].w[0] + 872u));
    c.f[0] = ld32((c.r[29].w[0] + 876u));
    st32((c.r[29].w[0] + 740u), c.f[2]);
    st32((c.r[29].w[0] + 744u), c.f[1]);
    st32((c.r[29].w[0] + 748u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 880u));
    c.f[1] = ld32((c.r[29].w[0] + 884u));
    c.f[0] = ld32((c.r[29].w[0] + 888u));
    st32((c.r[29].w[0] + 752u), c.f[2]);
    st32((c.r[29].w[0] + 756u), c.f[1]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004473ECu); st32((c.r[29].w[0] + 760u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 355u, depth + 1u); else { c.pc = 0x00127BC0u; return; } if (c.pc != 0x004473ECu) [[unlikely]] return; }
L_004473EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 956u)));
    st32((c.r[29].w[0] + 828u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 384u));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00447408; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004474D0; } }
L_00447408:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 416u)));  goto L_004474A8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 412u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u - c.r[18].w[0]);  goto L_00447448; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00447498; } }
L_00447448:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + 1u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447478u); set32(c.r[4], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_00D2(c, 197u, depth + 1u); else { c.pc = 0x00449910u; return; } if (c.pc != 0x00447478u) [[unlikely]] return; }
L_00447478:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] - 2u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00447498:
    set32(c.r[2], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 416u), c.r[2].w[0]);  if (t) { goto L_004474D0; } }
L_004474A8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004474C4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D2(c, 197u, depth + 1u); else { c.pc = 0x00449910u; return; } if (c.pc != 0x004474C4u) [[unlikely]] return; }
L_004474C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 416u), c.r[3].w[0]);
    c.budget -= 3;
L_004474D0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004474D4:
    c.f[2] = ld32((c.r[29].w[0] + 832u));
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[29].w[0] + 336u)));  goto L_0044750C; }
    c.f[0] = fp::sub(c.f[2], c.f[28]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[21].w[0] + 24u)));  goto L_00447540; }
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 1;
L_0044750C:
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0044753C; } }
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_00447534; }
    set32(c.r[16], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00447534:
    set32(c.r[2], c.r[17].w[0] + 512u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 2;
L_0044753C:
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 1;
L_00447540:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[6], c.r[2].w[0] >> 7);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], 0u + 1u);  if (t) { goto L_0044759C; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044759C:
    c.r[2].d[0] = c.r[7].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 448u));  goto L_004475B8; }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[28]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[29].w[0] + 480u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004461FCu | kUnwind; return; } goto L_004461FC; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 448u));
    c.budget -= 1;
L_004475B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0])));  goto L_004475CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004475C8u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004475C8u) [[unlikely]] return; }
L_004475C8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_004475CC:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[6], 0u + 6u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004475E4u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 144u, depth + 1u); else { c.pc = 0x00102250u; return; } if (c.pc != 0x004475E4u) [[unlikely]] return; }
L_004475E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 508u)));
    st32((c.r[29].w[0] + 1476u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004475F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004475F4u) [[unlikely]] return; }
L_004475F4:
    st32((c.r[29].w[0] + 1472u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[17], c.r[2].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044760Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0044760Cu) [[unlikely]] return; }
L_0044760C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00447624u) [[unlikely]] return; }
L_00447624:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447630u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00447630u) [[unlikely]] return; }
L_00447630:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 1472u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447640u); st32((c.r[2].w[0] + 8u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00447640u) [[unlikely]] return; }
L_00447640:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 416u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 504u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00447668; }
    st32((c.r[2].w[0]), c.f[22]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00447668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1504u);  c.pc = t; return; }
L_004476D0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32288u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447714u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00447714u) [[unlikely]] return; }
L_00447714:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447720u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x00447720u) [[unlikely]] return; }
L_00447720:
    st32((c.r[29].w[0] + 384u), 0u);
    c.f[20] = c.f[0];
    st32((c.r[29].w[0] + 388u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 392u), 0u);
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 372u), c.f[2]);
    st32((c.r[29].w[0] + 376u), c.f[3]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447768u); st32((c.r[29].w[0] + 368u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x00447768u) [[unlikely]] return; }
L_00447768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447770u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00447770u) [[unlikely]] return; }
L_00447770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447778u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00447778u) [[unlikely]] return; }
L_00447778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447780u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00447780u) [[unlikely]] return; }
L_00447780:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447790u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128070u; return; } if (c.pc != 0x00447790u) [[unlikely]] return; }
L_00447790:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044779Cu); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x0044779Cu) [[unlikely]] return; }
L_0044779C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004477A4u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0013(c, 292u, depth + 1u); else { c.pc = 0x0014E450u; return; } if (c.pc != 0x004477A4u) [[unlikely]] return; }
L_004477A4:
    c.f[22] = c.f[0];
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004477B4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x004477B4u) [[unlikely]] return; }
L_004477B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004477DC; }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004477D4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 362u, depth + 1u); else { c.pc = 0x00127FD0u; return; } if (c.pc != 0x004477D4u) [[unlikely]] return; }
L_004477D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00447800; } }
L_004477DC:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[22]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004477FCu);  if (depth < kMaxDepth) unit_0013(c, 291u, depth + 1u); else { c.pc = 0x0014E420u; return; } if (c.pc != 0x004477FCu) [[unlikely]] return; }
L_004477FC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00447800:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044780Cu); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x0044780Cu) [[unlikely]] return; }
L_0044780C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447818u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x00447818u) [[unlikely]] return; }
L_00447818:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447824u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00447824u) [[unlikely]] return; }
L_00447824:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447834u); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x00447834u) [[unlikely]] return; }
L_00447834:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447840u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x00447840u) [[unlikely]] return; }
L_00447840:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044784Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x0044784Cu) [[unlikely]] return; }
L_0044784C:
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 324u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[19].w[0] + 40u), c.f[0]);
    st32((c.r[19].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 28u), 0u);
    st32((c.r[19].w[0] + 44u), 0u);
    st32((c.r[19].w[0] + 48u), 0u);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.facc = fp::mul(c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    c.facc = fp::mul(c.f[21], c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.f[4] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[3]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[6], c.f[4]));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.facc = fp::mul(c.f[21], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    st32((c.r[29].w[0] + 388u), c.f[5]);
    st32((c.r[29].w[0] + 392u), c.f[3]);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 356u), c.f[2]);
    st32((c.r[29].w[0] + 360u), c.f[3]);
    c.budget -= 62;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447944u); st32((c.r[29].w[0] + 352u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x00447944u) [[unlikely]] return; }
L_00447944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044794Cu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0044794Cu) [[unlikely]] return; }
L_0044794C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447954u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00447954u) [[unlikely]] return; }
L_00447954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044795Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0044795Cu) [[unlikely]] return; }
L_0044795C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044796Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128070u; return; } if (c.pc != 0x0044796Cu) [[unlikely]] return; }
L_0044796C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447978u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00447978u) [[unlikely]] return; }
L_00447978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447980u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0013(c, 292u, depth + 1u); else { c.pc = 0x0014E450u; return; } if (c.pc != 0x00447980u) [[unlikely]] return; }
L_00447980:
    c.f[20] = c.f[0];
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447990u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x00447990u) [[unlikely]] return; }
L_00447990:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004479B8; }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004479B0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 362u, depth + 1u); else { c.pc = 0x00127FD0u; return; } if (c.pc != 0x004479B0u) [[unlikely]] return; }
L_004479B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_004479DC; } }
L_004479B8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004479D8u);  if (depth < kMaxDepth) unit_0013(c, 291u, depth + 1u); else { c.pc = 0x0014E420u; return; } if (c.pc != 0x004479D8u) [[unlikely]] return; }
L_004479D8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_004479DC:
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004479E8u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x004479E8u) [[unlikely]] return; }
L_004479E8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004479F4u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x004479F4u) [[unlikely]] return; }
L_004479F4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447A00u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00447A00u) [[unlikely]] return; }
L_00447A00:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447A10u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x00447A10u) [[unlikely]] return; }
L_00447A10:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447A1Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x00447A1Cu) [[unlikely]] return; }
L_00447A1C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447A28u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00447A28u) [[unlikely]] return; }
L_00447A28:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[19].w[0] + 40u), c.f[0]);
    st32((c.r[19].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 28u), 0u);
    st32((c.r[19].w[0] + 44u), 0u);
    st32((c.r[19].w[0] + 48u), 0u);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_00447AD0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 220u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 216u), c.r[6].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 212u), c.r[9].w[0]);
    c.f[21] = c.f[12];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[22] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447B44u); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x00447B44u) [[unlikely]] return; }
L_00447B44:
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[17], c.r[22].w[0] + 4u);
    set32(c.r[16], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != c.r[23].d[0]; st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);  if (t) { goto L_00447B80; } }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_00447B7C; }
    set32(c.r[16], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00447B7C:
    set32(c.r[23], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_00447B80:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[22] = fp::max(c.f[22], c.f[0]);  if (t) { goto L_00447BB8; } }
L_00447B90:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[23].d[0]) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_00447BBC; }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_00447BB4; }
    set32(c.r[16], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00447BB4:
    set32(c.r[23], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_00447BB8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00447BBC:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_00447BD0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00447BD0:
    c.r[3].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[22].w[0])));  goto L_00447BFC; }
    set32(c.r[6], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447BECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x00447BECu) [[unlikely]] return; }
L_00447BEC:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[22].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00447B90u | kUnwind; return; } goto L_00447B90; }
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_00447BFC:
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.r[1].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  goto L_00447C24; }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_00447C30; } }
L_00447C24:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 3;
L_00447C30:
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[21].d[0]) { set32(c.r[9], ld32((c.r[20].w[0] + 24u)));  goto L_00447C8C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.r[1].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  goto L_00447C64; }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_00447C70; } }
L_00447C64:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 3;
L_00447C70:
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 7;
L_00447C8C:
    c.f[2] = ld32((c.r[28].w[0] - 32636u));
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[10], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[6].d[0] = c.r[3].d[0] ^ 0ull;
    set32(c.r[11], c.r[4].w[0] >> 7);
    set32(c.r[9], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[11], c.r[7].w[0] + c.r[11].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    mmi::divu(c, 0, c.r[11].w[0], c.r[10].w[0]);
    set32(c.r[7], c.r[4].w[0] << 2);
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00447E58; } }
L_00447CF4:
    c.f[22] = fp::add(c.f[22], c.f[21]);
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], ld32((c.r[7].w[0] + 8u)));  if (t) { goto L_00447D14; } }
    c.f[22] = c.f[3];
    c.budget -= 1;
L_00447D14:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00447D38; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 220u)));
    c.f[1] = ld32((c.r[7].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00447D38; } }
    c.f[22] = c.f[1];
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_00447D38:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[7], ld32((c.r[5].w[0] + 16u)));  goto L_00447D90; }
    set32(c.r[7], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[7].sd[0] <= 0) { set32(c.r[9], ld32((c.r[4].w[0] + 8u)));  goto L_00447D58; }
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[9].w[0])));  if (t) { goto L_00447D64; } }
L_00447D58:
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] - 4u)));
    c.budget -= 3;
L_00447D64:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0; set32(c.r[19], c.r[19].w[0] + c.r[4].w[0]);  if (t) { goto L_00447D74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[9].w[0])));  if (t) { goto L_00447D80; } }
L_00447D74:
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] - 4u)));
    c.budget -= 3;
L_00447D80:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[4].w[0]);  if (t) { goto L_00447E20; } }
L_00447D90:
    c.budget -= 2;
    if (c.r[7].sd[0] <= 0) { set32(c.r[9], c.r[7].w[0] << 2);  goto L_00447DA4; }
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[7].w[0])));  if (t) { goto L_00447DB0; } }
L_00447DA4:
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[7].w[0] - 4u)));
    c.budget -= 3;
L_00447DB0:
    set32(c.r[7], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[7].sd[0] <= 0) { set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  goto L_00447DC8; }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_00447DD4; } }
L_00447DC8:
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] - 4u)));
    c.budget -= 3;
L_00447DD4:
    c.f[1] = fp::sub(c.f[22], c.f[3]);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] - 2u);
    set32(c.r[7], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + c.r[7].w[0]);
    c.f[1] = c.f[1] & fp::kAbs;
    set32(c.r[4], c.r[4].w[0] << 1);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[18], c.r[18].w[0] + c.r[4].w[0]);  if (t) { goto L_00447E18; } }
    c.f[1] = fp::sub(c.f[22], c.f[20]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00447E20; } }
L_00447E18:
    set32(c.r[19], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 2;
L_00447E20:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00447E58; } }
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[23].d[0];  if (t) { goto L_00447E58; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[4]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[4].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_00447E54; }
    set32(c.r[16], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00447E54:
    set32(c.r[23], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_00447E58:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00447E68; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00447E68:
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 216u)));  goto L_00447E84; }
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[20]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00447CF4u | kUnwind; return; } goto L_00447CF4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_00447E84:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[21].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 212u)));  goto L_00447ED8; }
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.r[1].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  goto L_00447EB0; }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_00447EBC; } }
L_00447EB0:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 3;
L_00447EBC:
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 7;
L_00447ED8:
    st32((c.r[30].w[0]), c.r[19].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[30].w[0])));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
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
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00447F50:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 440u), c.r[10].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[29].w[0] + 439u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 444u), c.r[7].w[0]);  if (t) { goto L_00447FD8; } }
    set32(c.r[2], c.r[23].w[0] + c.r[30].w[0]);
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], c.r[2].w[0] - 2u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00447FD0u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00102150u; return; } if (c.pc != 0x00447FD0u) [[unlikely]] return; }
L_00447FD0:
    set32(c.r[3], ld32((c.r[29].w[0] + 444u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00447FD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 440u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00D2(c, 3u, depth); } }
    set32(c.r[2], c.r[23].w[0] + c.r[30].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] - 2u);
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    [[clang::musttail]] return unit_00D2(c, 1u, depth);
}

}
