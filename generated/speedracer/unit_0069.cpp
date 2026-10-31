#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0069[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0,
    0, 70, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0,
    0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0,
    0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0,
    0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0,
    0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0,
    335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0,
    356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    361, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 407, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0,
    0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444,
    445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0,
    0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0,
    0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0,
    0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0,
};

void unit_0069(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A4000;
    case 2u: goto L_002A4010;
    case 3u: goto L_002A401C;
    case 4u: goto L_002A402C;
    case 5u: goto L_002A4030;
    case 6u: goto L_002A404C;
    case 7u: goto L_002A4060;
    case 8u: goto L_002A4080;
    case 9u: goto L_002A40A4;
    case 10u: goto L_002A40C4;
    case 11u: goto L_002A40E0;
    case 12u: goto L_002A40EC;
    case 13u: goto L_002A4114;
    case 14u: goto L_002A4150;
    case 15u: goto L_002A4174;
    case 16u: goto L_002A417C;
    case 17u: goto L_002A419C;
    case 18u: goto L_002A41AC;
    case 19u: goto L_002A41C8;
    case 20u: goto L_002A41DC;
    case 21u: goto L_002A41EC;
    case 22u: goto L_002A41F8;
    case 23u: goto L_002A4218;
    case 24u: goto L_002A4228;
    case 25u: goto L_002A4244;
    case 26u: goto L_002A4258;
    case 27u: goto L_002A4268;
    case 28u: goto L_002A4290;
    case 29u: goto L_002A42BC;
    case 30u: goto L_002A42C4;
    case 31u: goto L_002A42CC;
    case 32u: goto L_002A42F4;
    case 33u: goto L_002A4304;
    case 34u: goto L_002A4310;
    case 35u: goto L_002A431C;
    case 36u: goto L_002A4374;
    case 37u: goto L_002A439C;
    case 38u: goto L_002A43AC;
    case 39u: goto L_002A43C8;
    case 40u: goto L_002A43EC;
    case 41u: goto L_002A43FC;
    case 42u: goto L_002A441C;
    case 43u: goto L_002A443C;
    case 44u: goto L_002A4460;
    case 45u: goto L_002A449C;
    case 46u: goto L_002A44AC;
    case 47u: goto L_002A44B8;
    case 48u: goto L_002A44C4;
    case 49u: goto L_002A44D4;
    case 50u: goto L_002A44F8;
    case 51u: goto L_002A4508;
    case 52u: goto L_002A4528;
    case 53u: goto L_002A4550;
    case 54u: goto L_002A4590;
    case 55u: goto L_002A45C0;
    case 56u: goto L_002A45D0;
    case 57u: goto L_002A45F8;
    case 58u: goto L_002A4628;
    case 59u: goto L_002A466C;
    case 60u: goto L_002A46B0;
    case 61u: goto L_002A46C0;
    case 62u: goto L_002A46DC;
    case 63u: goto L_002A46F0;
    case 64u: goto L_002A4700;
    case 65u: goto L_002A4714;
    case 66u: goto L_002A4734;
    case 67u: goto L_002A4744;
    case 68u: goto L_002A4760;
    case 69u: goto L_002A4774;
    case 70u: goto L_002A4784;
    case 71u: goto L_002A4798;
    case 72u: goto L_002A47A4;
    case 73u: goto L_002A47B4;
    case 74u: goto L_002A47C4;
    case 75u: goto L_002A4808;
    case 76u: goto L_002A4860;
    case 77u: goto L_002A489C;
    case 78u: goto L_002A48B0;
    case 79u: goto L_002A48C0;
    case 80u: goto L_002A48E0;
    case 81u: goto L_002A490C;
    case 82u: goto L_002A4920;
    case 83u: goto L_002A492C;
    case 84u: goto L_002A4950;
    case 85u: goto L_002A4960;
    case 86u: goto L_002A497C;
    case 87u: goto L_002A4994;
    case 88u: goto L_002A49A4;
    case 89u: goto L_002A49D0;
    case 90u: goto L_002A49E8;
    case 91u: goto L_002A4A10;
    case 92u: goto L_002A4A3C;
    case 93u: goto L_002A4A48;
    case 94u: goto L_002A4AAC;
    case 95u: goto L_002A4B00;
    case 96u: goto L_002A4B24;
    case 97u: goto L_002A4B90;
    case 98u: goto L_002A4BF4;
    case 99u: goto L_002A4C04;
    case 100u: goto L_002A4C18;
    case 101u: goto L_002A4C70;
    case 102u: goto L_002A4CA8;
    case 103u: goto L_002A4CC8;
    case 104u: goto L_002A4D24;
    case 105u: goto L_002A4D30;
    case 106u: goto L_002A4D50;
    case 107u: goto L_002A4D9C;
    case 108u: goto L_002A4DBC;
    case 109u: goto L_002A4E24;
    case 110u: goto L_002A4E30;
    case 111u: goto L_002A4E50;
    case 112u: goto L_002A4E94;
    case 113u: goto L_002A4ED0;
    case 114u: goto L_002A4F0C;
    case 115u: goto L_002A4F1C;
    case 116u: goto L_002A4F38;
    case 117u: goto L_002A4F4C;
    case 118u: goto L_002A4F5C;
    case 119u: goto L_002A4F80;
    case 120u: goto L_002A4F90;
    case 121u: goto L_002A4FAC;
    case 122u: goto L_002A4FC0;
    case 123u: goto L_002A4FD0;
    case 124u: goto L_002A4FE4;
    case 125u: goto L_002A5000;
    case 126u: goto L_002A5028;
    case 127u: goto L_002A5048;
    case 128u: goto L_002A5058;
    case 129u: goto L_002A5074;
    case 130u: goto L_002A5088;
    case 131u: goto L_002A5098;
    case 132u: goto L_002A50AC;
    case 133u: goto L_002A50C0;
    case 134u: goto L_002A50E0;
    case 135u: goto L_002A50F4;
    case 136u: goto L_002A5110;
    case 137u: goto L_002A5134;
    case 138u: goto L_002A5144;
    case 139u: goto L_002A515C;
    case 140u: goto L_002A5170;
    case 141u: goto L_002A5190;
    case 142u: goto L_002A51CC;
    case 143u: goto L_002A51E0;
    case 144u: goto L_002A51FC;
    case 145u: goto L_002A520C;
    case 146u: goto L_002A5228;
    case 147u: goto L_002A523C;
    case 148u: goto L_002A524C;
    case 149u: goto L_002A5270;
    case 150u: goto L_002A5280;
    case 151u: goto L_002A5290;
    case 152u: goto L_002A52D0;
    case 153u: goto L_002A5300;
    case 154u: goto L_002A5354;
    case 155u: goto L_002A5364;
    case 156u: goto L_002A5374;
    case 157u: goto L_002A5384;
    case 158u: goto L_002A53C0;
    case 159u: goto L_002A53E0;
    case 160u: goto L_002A53F4;
    case 161u: goto L_002A5404;
    case 162u: goto L_002A5420;
    case 163u: goto L_002A5434;
    case 164u: goto L_002A5444;
    case 165u: goto L_002A5460;
    case 166u: goto L_002A5480;
    case 167u: goto L_002A54C0;
    case 168u: goto L_002A54D0;
    case 169u: goto L_002A54EC;
    case 170u: goto L_002A5508;
    case 171u: goto L_002A5518;
    case 172u: goto L_002A5534;
    case 173u: goto L_002A5550;
    case 174u: goto L_002A5570;
    case 175u: goto L_002A55A8;
    case 176u: goto L_002A55B8;
    case 177u: goto L_002A55D4;
    case 178u: goto L_002A55E8;
    case 179u: goto L_002A55F8;
    case 180u: goto L_002A5618;
    case 181u: goto L_002A5628;
    case 182u: goto L_002A5644;
    case 183u: goto L_002A5658;
    case 184u: goto L_002A5668;
    case 185u: goto L_002A56A0;
    case 186u: goto L_002A56F0;
    case 187u: goto L_002A5710;
    case 188u: goto L_002A571C;
    case 189u: goto L_002A5748;
    case 190u: goto L_002A5758;
    case 191u: goto L_002A5774;
    case 192u: goto L_002A578C;
    case 193u: goto L_002A579C;
    case 194u: goto L_002A57BC;
    case 195u: goto L_002A57CC;
    case 196u: goto L_002A57E8;
    case 197u: goto L_002A5800;
    case 198u: goto L_002A5810;
    case 199u: goto L_002A5854;
    case 200u: goto L_002A5890;
    case 201u: goto L_002A58B8;
    case 202u: goto L_002A58C8;
    case 203u: goto L_002A58DC;
    case 204u: goto L_002A58EC;
    case 205u: goto L_002A5920;
    case 206u: goto L_002A5950;
    case 207u: goto L_002A5998;
    case 208u: goto L_002A59A8;
    case 209u: goto L_002A59B8;
    case 210u: goto L_002A59C8;
    case 211u: goto L_002A59FC;
    case 212u: goto L_002A5A1C;
    case 213u: goto L_002A5A30;
    case 214u: goto L_002A5A40;
    case 215u: goto L_002A5A5C;
    case 216u: goto L_002A5A70;
    case 217u: goto L_002A5A80;
    case 218u: goto L_002A5A9C;
    case 219u: goto L_002A5AC0;
    case 220u: goto L_002A5AE4;
    case 221u: goto L_002A5AF4;
    case 222u: goto L_002A5B10;
    case 223u: goto L_002A5B40;
    case 224u: goto L_002A5B6C;
    case 225u: goto L_002A5BA0;
    case 226u: goto L_002A5BE4;
    case 227u: goto L_002A5C08;
    case 228u: goto L_002A5C18;
    case 229u: goto L_002A5C34;
    case 230u: goto L_002A5C48;
    case 231u: goto L_002A5C58;
    case 232u: goto L_002A5C74;
    case 233u: goto L_002A5C84;
    case 234u: goto L_002A5CA0;
    case 235u: goto L_002A5CB4;
    case 236u: goto L_002A5CC4;
    case 237u: goto L_002A5CFC;
    case 238u: goto L_002A5D0C;
    case 239u: goto L_002A5D28;
    case 240u: goto L_002A5D3C;
    case 241u: goto L_002A5D4C;
    case 242u: goto L_002A5D6C;
    case 243u: goto L_002A5D7C;
    case 244u: goto L_002A5D98;
    case 245u: goto L_002A5DC8;
    case 246u: goto L_002A5DE8;
    case 247u: goto L_002A5DF8;
    case 248u: goto L_002A5E14;
    case 249u: goto L_002A5E34;
    case 250u: goto L_002A5E44;
    case 251u: goto L_002A5E60;
    case 252u: goto L_002A5E80;
    case 253u: goto L_002A5E90;
    case 254u: goto L_002A5EAC;
    case 255u: goto L_002A5ECC;
    case 256u: goto L_002A5EDC;
    case 257u: goto L_002A5EF8;
    case 258u: goto L_002A5F04;
    case 259u: goto L_002A5F20;
    case 260u: goto L_002A5F50;
    case 261u: goto L_002A5F68;
    case 262u: goto L_002A5F8C;
    case 263u: goto L_002A5F9C;
    case 264u: goto L_002A5FB0;
    case 265u: goto L_002A5FC0;
    case 266u: goto L_002A5FD4;
    case 267u: goto L_002A5FE4;
    case 268u: goto L_002A5FF8;
    case 269u: goto L_002A6008;
    case 270u: goto L_002A6030;
    case 271u: goto L_002A6040;
    case 272u: goto L_002A6060;
    case 273u: goto L_002A6080;
    case 274u: goto L_002A60A4;
    case 275u: goto L_002A60B4;
    case 276u: goto L_002A60C8;
    case 277u: goto L_002A60D8;
    case 278u: goto L_002A60E8;
    case 279u: goto L_002A60F8;
    case 280u: goto L_002A610C;
    case 281u: goto L_002A611C;
    case 282u: goto L_002A6144;
    case 283u: goto L_002A6154;
    case 284u: goto L_002A6180;
    case 285u: goto L_002A6190;
    case 286u: goto L_002A61A0;
    case 287u: goto L_002A61B0;
    case 288u: goto L_002A61C0;
    case 289u: goto L_002A6264;
    case 290u: goto L_002A6280;
    case 291u: goto L_002A629C;
    case 292u: goto L_002A62A8;
    case 293u: goto L_002A62BC;
    case 294u: goto L_002A62CC;
    case 295u: goto L_002A62E0;
    case 296u: goto L_002A62F0;
    case 297u: goto L_002A6304;
    case 298u: goto L_002A6314;
    case 299u: goto L_002A6328;
    case 300u: goto L_002A6338;
    case 301u: goto L_002A634C;
    case 302u: goto L_002A6360;
    case 303u: goto L_002A6374;
    case 304u: goto L_002A6384;
    case 305u: goto L_002A6398;
    case 306u: goto L_002A63A8;
    case 307u: goto L_002A63BC;
    case 308u: goto L_002A63D0;
    case 309u: goto L_002A63E4;
    case 310u: goto L_002A63F4;
    case 311u: goto L_002A6408;
    case 312u: goto L_002A6418;
    case 313u: goto L_002A642C;
    case 314u: goto L_002A643C;
    case 315u: goto L_002A6450;
    case 316u: goto L_002A6460;
    case 317u: goto L_002A6474;
    case 318u: goto L_002A6490;
    case 319u: goto L_002A64A4;
    case 320u: goto L_002A64B8;
    case 321u: goto L_002A64D0;
    case 322u: goto L_002A64EC;
    case 323u: goto L_002A6598;
    case 324u: goto L_002A66A4;
    case 325u: goto L_002A673C;
    case 326u: goto L_002A67A4;
    case 327u: goto L_002A68B4;
    case 328u: goto L_002A6974;
    case 329u: goto L_002A69A0;
    case 330u: goto L_002A69C0;
    case 331u: goto L_002A69CC;
    case 332u: goto L_002A69DC;
    case 333u: goto L_002A69E8;
    case 334u: goto L_002A69F4;
    case 335u: goto L_002A6A00;
    case 336u: goto L_002A6A18;
    case 337u: goto L_002A6A3C;
    case 338u: goto L_002A6A64;
    case 339u: goto L_002A6A94;
    case 340u: goto L_002A6AB4;
    case 341u: goto L_002A6AC0;
    case 342u: goto L_002A6AD8;
    case 343u: goto L_002A6AF8;
    case 344u: goto L_002A6B28;
    case 345u: goto L_002A6B40;
    case 346u: goto L_002A6B54;
    case 347u: goto L_002A6B70;
    case 348u: goto L_002A6B8C;
    case 349u: goto L_002A6BB4;
    case 350u: goto L_002A6BE0;
    case 351u: goto L_002A6C00;
    case 352u: goto L_002A6C20;
    case 353u: goto L_002A6C40;
    case 354u: goto L_002A6C50;
    case 355u: goto L_002A6C6C;
    case 356u: goto L_002A6C80;
    case 357u: goto L_002A6C90;
    case 358u: goto L_002A6CB0;
    case 359u: goto L_002A6CD0;
    case 360u: goto L_002A6CF4;
    case 361u: goto L_002A6D00;
    case 362u: goto L_002A6D10;
    case 363u: goto L_002A6D24;
    case 364u: goto L_002A6D30;
    case 365u: goto L_002A6D3C;
    case 366u: goto L_002A6D58;
    case 367u: goto L_002A6D80;
    case 368u: goto L_002A6DB8;
    case 369u: goto L_002A6DD4;
    case 370u: goto L_002A6DF0;
    case 371u: goto L_002A6E00;
    case 372u: goto L_002A6E24;
    case 373u: goto L_002A6E40;
    case 374u: goto L_002A6E58;
    case 375u: goto L_002A6E98;
    case 376u: goto L_002A6EB4;
    case 377u: goto L_002A6ECC;
    case 378u: goto L_002A6ED8;
    case 379u: goto L_002A6EE4;
    case 380u: goto L_002A6F00;
    case 381u: goto L_002A6F20;
    case 382u: goto L_002A6F50;
    case 383u: goto L_002A6F6C;
    case 384u: goto L_002A6F84;
    case 385u: goto L_002A6FAC;
    case 386u: goto L_002A6FC4;
    case 387u: goto L_002A6FF4;
    case 388u: goto L_002A7010;
    case 389u: goto L_002A7024;
    case 390u: goto L_002A7030;
    case 391u: goto L_002A7050;
    case 392u: goto L_002A7070;
    case 393u: goto L_002A7080;
    case 394u: goto L_002A70C0;
    case 395u: goto L_002A7160;
    case 396u: goto L_002A71F0;
    case 397u: goto L_002A7298;
    case 398u: goto L_002A72AC;
    case 399u: goto L_002A7330;
    case 400u: goto L_002A7388;
    case 401u: goto L_002A73AC;
    case 402u: goto L_002A73CC;
    case 403u: goto L_002A73F8;
    case 404u: goto L_002A7418;
    case 405u: goto L_002A7450;
    case 406u: goto L_002A74A4;
    case 407u: goto L_002A74A8;
    case 408u: goto L_002A74AC;
    case 409u: goto L_002A74CC;
    case 410u: goto L_002A74D8;
    case 411u: goto L_002A74F8;
    case 412u: goto L_002A7540;
    case 413u: goto L_002A755C;
    case 414u: goto L_002A7574;
    case 415u: goto L_002A75B0;
    case 416u: goto L_002A75F4;
    case 417u: goto L_002A7604;
    case 418u: goto L_002A7610;
    case 419u: goto L_002A7650;
    case 420u: goto L_002A7658;
    case 421u: goto L_002A76C0;
    case 422u: goto L_002A76F0;
    case 423u: goto L_002A7728;
    case 424u: goto L_002A7734;
    case 425u: goto L_002A7740;
    case 426u: goto L_002A774C;
    case 427u: goto L_002A7774;
    case 428u: goto L_002A779C;
    case 429u: goto L_002A77C4;
    case 430u: goto L_002A77EC;
    case 431u: goto L_002A7814;
    case 432u: goto L_002A783C;
    case 433u: goto L_002A7864;
    case 434u: goto L_002A788C;
    case 435u: goto L_002A78B0;
    case 436u: goto L_002A78D0;
    case 437u: goto L_002A791C;
    case 438u: goto L_002A7948;
    case 439u: goto L_002A79B0;
    case 440u: goto L_002A7A04;
    case 441u: goto L_002A7A28;
    case 442u: goto L_002A7A44;
    case 443u: goto L_002A7A60;
    case 444u: goto L_002A7A7C;
    case 445u: goto L_002A7A80;
    case 446u: goto L_002A7A98;
    case 447u: goto L_002A7AB4;
    case 448u: goto L_002A7AD0;
    case 449u: goto L_002A7AEC;
    case 450u: goto L_002A7B10;
    case 451u: goto L_002A7B30;
    case 452u: goto L_002A7B50;
    case 453u: goto L_002A7B70;
    case 454u: goto L_002A7B84;
    case 455u: goto L_002A7BB0;
    case 456u: goto L_002A7C20;
    case 457u: goto L_002A7C70;
    case 458u: goto L_002A7CD0;
    case 459u: goto L_002A7CEC;
    case 460u: goto L_002A7D18;
    case 461u: goto L_002A7D40;
    case 462u: goto L_002A7D70;
    case 463u: goto L_002A7D8C;
    case 464u: goto L_002A7D9C;
    case 465u: goto L_002A7DB8;
    case 466u: goto L_002A7DCC;
    case 467u: goto L_002A7DDC;
    case 468u: goto L_002A7DEC;
    case 469u: goto L_002A7E10;
    case 470u: goto L_002A7E2C;
    case 471u: goto L_002A7E48;
    case 472u: goto L_002A7E64;
    case 473u: goto L_002A7E80;
    case 474u: goto L_002A7E9C;
    case 475u: goto L_002A7EB8;
    case 476u: goto L_002A7ED4;
    case 477u: goto L_002A7EF0;
    case 478u: goto L_002A7F08;
    case 479u: goto L_002A7F20;
    case 480u: goto L_002A7F38;
    case 481u: goto L_002A7F58;
    case 482u: goto L_002A7F68;
    case 483u: goto L_002A7F84;
    case 484u: goto L_002A7F90;
    case 485u: goto L_002A7FAC;
    case 486u: goto L_002A7FD0;
    case 487u: goto L_002A7FE8;
    default: bad_entry(c, 0x002A4000u); return;
    }
L_002A4000:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4010u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x002A4010u) [[unlikely]] return; }
L_002A4010:
    set32(c.r[2], ld32((c.r[19].w[0] + 228u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A401Cu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_006C(c, 398u, depth + 1u); else { c.pc = 0x002B2FB0u; return; } if (c.pc != 0x002A401Cu) [[unlikely]] return; }
L_002A401C:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A402Cu); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002A402Cu) [[unlikely]] return; }
L_002A402C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A4030:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3FF8u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 447u, depth); }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A404Cu); set32(c.r[5], c.r[19].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002A404Cu) [[unlikely]] return; }
L_002A404C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 248u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 95u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4060u); st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002A4060u) [[unlikely]] return; }
L_002A4060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A4080:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A40A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 401u, depth + 1u); else { c.pc = 0x00282890u; return; } if (c.pc != 0x002A40A4u) [[unlikely]] return; }
L_002A40A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 220u)));  goto L_002A40B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A4128; } }
L_002A40B4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A40C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A40C4u) [[unlikely]] return; }
L_002A40C4:
    set32(c.r[4], ld32((c.r[19].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 236u)));  goto L_002A40E4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A40E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A40E0u) [[unlikely]] return; }
L_002A40E0:
    set32(c.r[16], ld32((c.r[19].w[0] + 236u)));
    c.budget -= 1;
L_002A40E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A4118; } }
L_002A40EC:
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002A4118; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[2].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4114u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4114u) [[unlikely]] return; }
L_002A4114:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A4118:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A40ECu | kUnwind; return; } goto L_002A40EC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A4128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A4150:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4174u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 406u, depth + 1u); else { c.pc = 0x00282920u; return; } if (c.pc != 0x002A4174u) [[unlikely]] return; }
L_002A4174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A417Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002A417Cu) [[unlikely]] return; }
L_002A417C:
    set32(c.r[19], ld32((c.r[18].w[0] + 220u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002A41F0; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[18].w[0] + 220u), c.r[16].w[0]);  goto L_002A41CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A419Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A419Cu) [[unlikely]] return; }
L_002A419C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A41ACu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A41ACu) [[unlikely]] return; }
L_002A41AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A41C8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A41C8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A41C8u) [[unlikely]] return; }
L_002A41C8:
    st32((c.r[18].w[0] + 220u), c.r[16].w[0]);
    c.budget -= 1;
L_002A41CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A41EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A41DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A41DCu) [[unlikely]] return; }
L_002A41DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A41ECu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A41ECu) [[unlikely]] return; }
L_002A41EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A41F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A41F8u);  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002A41F8u) [[unlikely]] return; }
L_002A41F8:
    set32(c.r[17], ld32((c.r[18].w[0] + 224u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002A426C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 224u), c.r[16].w[0]);  goto L_002A4248; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4218u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A4218u) [[unlikely]] return; }
L_002A4218:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4228u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A4228u) [[unlikely]] return; }
L_002A4228:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A4244; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4244u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4244u) [[unlikely]] return; }
L_002A4244:
    st32((c.r[18].w[0] + 224u), c.r[16].w[0]);
    c.budget -= 1;
L_002A4248:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A4268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4258u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A4258u) [[unlikely]] return; }
L_002A4258:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4268u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A4268u) [[unlikely]] return; }
L_002A4268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002A426C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A4290:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A42BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 429u, depth + 1u); else { c.pc = 0x00282B50u; return; } if (c.pc != 0x002A42BCu) [[unlikely]] return; }
L_002A42BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A42C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002A42C4u) [[unlikely]] return; }
L_002A42C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A42CCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002A42CCu) [[unlikely]] return; }
L_002A42CC:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14020000u);
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002A4454; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A42F4u); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002A42F4u) [[unlikely]] return; }
L_002A42F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A4420; } }
L_002A4304:
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4310u); st32((c.r[29].w[0] + 132u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x002A4310u) [[unlikely]] return; }
L_002A4310:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A431Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002A431Cu) [[unlikely]] return; }
L_002A431C:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[16], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_002A4330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A4334; } }
L_002A4330:
    c.r[2].d[0] = ld16((c.r[2].w[0] - 4u));
    c.budget -= 1;
L_002A4334:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 27664u)));  goto L_002A4344; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A438C; } }
L_002A4344:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_002A435C; } }
    breakpoint(c, 0x002A4358u);
    c.budget -= 1;
L_002A435C:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002A4384; } }
L_002A4374:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_002A4384; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_002A438C; } }
L_002A4384:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4374u | kUnwind; return; } goto L_002A4374; }
L_002A438C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_002A43A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A439Cu); set32(c.r[4], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_006C(c, 399u, depth + 1u); else { c.pc = 0x002B2FC0u; return; } if (c.pc != 0x002A439Cu) [[unlikely]] return; }
L_002A439C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A43A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A43ACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 205u, depth + 1u); else { c.pc = 0x002A5920u; return; } if (c.pc != 0x002A43ACu) [[unlikely]] return; }
L_002A43AC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 132u)));  goto L_002A43CC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A43C8u); set32(c.r[4], c.r[4].w[0] + 19968u);  if (depth < kMaxDepth) unit_0047(c, 142u, depth + 1u); else { c.pc = 0x0021D6A0u; return; } if (c.pc != 0x002A43C8u) [[unlikely]] return; }
L_002A43C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_002A43CC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002A4420; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A43ECu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A43ECu) [[unlikely]] return; }
L_002A43EC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A43FCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A43FCu) [[unlikely]] return; }
L_002A43FC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A441C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A441Cu); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A441Cu) [[unlikely]] return; }
L_002A441C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A4420:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4304u | kUnwind; return; } goto L_002A4304; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A443Cu); set32(c.r[5], c.r[20].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002A443Cu) [[unlikely]] return; }
L_002A443C:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_002A452C; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 240u), c.r[3].w[0]);  if (t) { goto L_002A4528; } }
L_002A4454:
    set32(c.r[5], c.r[29].w[0] + 143u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4460u); st8((c.r[29].w[0] + 143u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002A4460u) [[unlikely]] return; }
L_002A4460:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 143u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A4528; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14010000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    st32((c.r[29].w[0] + 124u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002A44A4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A449Cu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x002A449Cu) [[unlikely]] return; }
L_002A449C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002A44B0; } }
L_002A44A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44ACu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x002A44ACu) [[unlikely]] return; }
L_002A44AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002A44B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44B8u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002A44B8u) [[unlikely]] return; }
L_002A44B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 163u, depth + 1u); else { c.pc = 0x002D9280u; return; } if (c.pc != 0x002A44C4u) [[unlikely]] return; }
L_002A44C4:
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 152u, depth + 1u); else { c.pc = 0x002A52D0u; return; } if (c.pc != 0x002A44D4u) [[unlikely]] return; }
L_002A44D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002A4528; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44F8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A44F8u) [[unlikely]] return; }
L_002A44F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4508u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A4508u) [[unlikely]] return; }
L_002A4508:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A4528; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4528u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002A4528u) [[unlikely]] return; }
L_002A4528:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_002A452C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x14020000u);
    c.r[3].d[0] = c.r[3].d[0] | 7ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[28].w[0] - 30648u));  goto L_002A4560; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 142u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4550u); st8((c.r[29].w[0] + 142u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002A4550u) [[unlikely]] return; }
L_002A4550:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 142u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[20].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30648u));
    c.budget -= 4;
L_002A4560:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002A459C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A4598; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A4598; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4590u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4590u) [[unlikely]] return; }
L_002A4590:
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002A4598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002A459C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A45C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006F(c, 7u, depth); }
L_002A45D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A45F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 437u, depth + 1u); else { c.pc = 0x00282BF0u; return; } if (c.pc != 0x002A45F8u) [[unlikely]] return; }
L_002A45F8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_002A4614; } }
    breakpoint(c, 0x002A4610u);
    c.budget -= 1;
L_002A4614:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002A4638; } }
L_002A4628:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_002A4638; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_002A4640; } }
L_002A4638:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4628u | kUnwind; return; } goto L_002A4628; }
L_002A4640:
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002A4798; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_002A4658; } }
    breakpoint(c, 0x002A4654u);
    c.budget -= 1;
L_002A4658:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_002A4680; } }
L_002A466C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_002A4680; }
    set32(c.r[18], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A468C; } }
L_002A4680:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A466Cu | kUnwind; return; } goto L_002A466C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A468C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002A4708; }
    set32(c.r[17], ld32((c.r[19].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[18].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_002A47C8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 224u), c.r[18].w[0]);  goto L_002A46E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A46B0u) [[unlikely]] return; }
L_002A46B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46C0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A46C0u) [[unlikely]] return; }
L_002A46C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A46DC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A46DCu) [[unlikely]] return; }
L_002A46DC:
    st32((c.r[19].w[0] + 224u), c.r[18].w[0]);
    c.budget -= 1;
L_002A46E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002A4798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A46F0u) [[unlikely]] return; }
L_002A46F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4700u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A4700u) [[unlikely]] return; }
L_002A4700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4798; } }
L_002A4708:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4714u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4714u) [[unlikely]] return; }
L_002A4714:
    set32(c.r[18], ld32((c.r[19].w[0] + 224u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 224u)));  goto L_002A4788; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[19].w[0] + 224u), c.r[17].w[0]);  goto L_002A4764; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4734u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A4734u) [[unlikely]] return; }
L_002A4734:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4744u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A4744u) [[unlikely]] return; }
L_002A4744:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4760; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4760u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4760u) [[unlikely]] return; }
L_002A4760:
    st32((c.r[19].w[0] + 224u), c.r[17].w[0]);
    c.budget -= 1;
L_002A4764:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A4784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4774u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A4774u) [[unlikely]] return; }
L_002A4774:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4784u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A4784u) [[unlikely]] return; }
L_002A4784:
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 1;
L_002A4788:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4798u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4798u) [[unlikely]] return; }
L_002A4798:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A47C8; } }
L_002A47A4:
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A47B4u); set32(c.r[18], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_006C(c, 398u, depth + 1u); else { c.pc = 0x002B2FB0u; return; } if (c.pc != 0x002A47B4u) [[unlikely]] return; }
L_002A47B4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A47C4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 205u, depth + 1u); else { c.pc = 0x002A5920u; return; } if (c.pc != 0x002A47C4u) [[unlikely]] return; }
L_002A47C4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A47C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 236u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A47A4u | kUnwind; return; } goto L_002A47A4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 228u)));  goto L_002A47F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002A47FC; } }
L_002A47F0:
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
L_002A47FC:
    set32(c.r[5], ld32((c.r[19].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002A4824; } }
L_002A4808:
    set32(c.r[4], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002A4824; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 240u), c.r[7].w[0]);  if (t) { goto L_002A4838; } }
L_002A4824:
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4808u | kUnwind; return; } goto L_002A4808; }
    set32(c.r[3], 0u - 1u);
    st32((c.r[19].w[0] + 240u), c.r[3].w[0]);
    c.budget -= 2;
L_002A4838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A4860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 208u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[5].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A489Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A489Cu) [[unlikely]] return; }
L_002A489C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 248u));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A48B0u) [[unlikely]] return; }
L_002A48B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48C0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 443u, depth + 1u); else { c.pc = 0x00282CD0u; return; } if (c.pc != 0x002A48C0u) [[unlikely]] return; }
L_002A48C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A48E0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A490Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 461u, depth + 1u); else { c.pc = 0x00282EC0u; return; } if (c.pc != 0x002A490Cu) [[unlikely]] return; }
L_002A490C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[21].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4920u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4920u) [[unlikely]] return; }
L_002A4920:
    set32(c.r[17], ld32((c.r[21].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002A49A8; } }
L_002A492C:
    set32(c.r[4], c.r[19].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002A49A8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_002A4980; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4950u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A4950u) [[unlikely]] return; }
L_002A4950:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4960u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A4960u) [[unlikely]] return; }
L_002A4960:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A497C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A497Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A497Cu) [[unlikely]] return; }
L_002A497C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_002A4980:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A49A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4994u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A4994u) [[unlikely]] return; }
L_002A4994:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A49A4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A49A4u) [[unlikely]] return; }
L_002A49A4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002A49A8:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A492Cu | kUnwind; return; } goto L_002A492C; }
    set32(c.r[5], ld32((c.r[21].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002A49EC; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 212u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A49D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A49D0u) [[unlikely]] return; }
L_002A49D0:
    set32(c.r[2], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 208u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A49E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A49E8u) [[unlikely]] return; }
L_002A49E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002A49EC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A4A10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 16384u);  if (t) { goto L_002A4A58; } }
L_002A4A3C:
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4A48u) [[unlikely]] return; }
L_002A4A48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 48u)));  goto L_002A4A58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull | 32768ull;  if (t) { goto L_002A4A60; } }
L_002A4A58:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4A3Cu | kUnwind; return; } goto L_002A4A3C; }
L_002A4A60:
    set32(c.r[3], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 220u)));  goto L_002A4AC0; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  goto L_002A4A88; }
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A4ABC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull | 32768ull;  if (t) { goto L_002A4ABC; } }
L_002A4A88:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull | 32768ull;  goto L_002A4ABC; }
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A4ABC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4AACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4AACu) [[unlikely]] return; }
L_002A4AAC:
    c.r[3].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A4ABC; } }
    c.r[16].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002A4ABC:
    set32(c.r[5], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 1;
L_002A4AC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 4095ull;
    c.r[4].d[0] = ld16((c.r[5].w[0] + 52u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[16].d[0];
    st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A4B00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4B24u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 525u, depth + 1u); else { c.pc = 0x00283560u; return; } if (c.pc != 0x002A4B24u) [[unlikely]] return; }
L_002A4B24:
    set32(c.r[3], ld32((c.r[18].w[0] + 224u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002A4B70; }
    c.r[4].d[0] = ld16((c.r[18].w[0] + 196u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 4ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 196u));  goto L_002A4B60; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002A4B68; } }
L_002A4B60:
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002A4B68:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_002A4B70:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A4B90:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 220u)));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 48u));
    set32(c.r[19], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 22;
    { const bool t = c.r[7].d[0] == 0ull; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A4D88; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4BF4u); set32(c.r[6], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x002A4BF4u) [[unlikely]] return; }
L_002A4BF4:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C04u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_005F(c, 62u, depth + 1u); else { c.pc = 0x0027CD20u; return; } if (c.pc != 0x002A4C04u) [[unlikely]] return; }
L_002A4C04:
    c.f[20] = ld32((c.r[21].w[0] + 108u));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C18u); set32(c.r[6], c.r[21].w[0] + 96u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x002A4C18u) [[unlikely]] return; }
L_002A4C18:
    c.f[5] = ld32((c.r[29].w[0] + 440u));
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.f[4] = ld32((c.r[20].w[0] + 8u));
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.f[3] = ld32((c.r[29].w[0] + 436u));
    set32(c.r[6], c.r[21].w[0] + 48u);
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[5] = fp::add(c.f[5], c.f[4]);
    c.f[4] = fp::add(c.f[3], c.f[2]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 432u));
    c.f[2] = ld32((c.r[21].w[0] + 104u));
    c.f[3] = fp::add(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 100u));
    c.f[0] = ld32((c.r[21].w[0] + 96u));
    c.f[2] = fp::sub(c.f[5], c.f[2]);
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 456u), c.f[2]);
    st32((c.r[29].w[0] + 452u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4C70u); st32((c.r[29].w[0] + 448u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 71u, depth + 1u); else { c.pc = 0x0027D100u; return; } if (c.pc != 0x002A4C70u) [[unlikely]] return; }
L_002A4C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 464u));
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    c.f[20] = fp::mul(c.f[3], c.f[2]);
    c.f[21] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[19].d[0] == 0ull; c.f[22] = fp::mul(c.f[3], c.f[0]);  if (t) { goto L_002A4D04; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_002A4CF4; } }
L_002A4CA8:
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CC8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x002A4CC8u) [[unlikely]] return; }
L_002A4CC8:
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 420u));
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.f[2] = ld32((c.r[29].w[0] + 424u));
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[1] = fp::add(c.f[21], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[2] = fp::add(c.f[22], c.f[2]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[2]);
    c.budget -= 11;
L_002A4CF4:
    c.r[2].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[20].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4CA8u | kUnwind; return; } goto L_002A4CA8; }
L_002A4D04:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 220u)));  goto L_002A4E84; }
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 284u), 0u);
    st32((c.r[29].w[0] + 300u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D24u); st32((c.r[29].w[0] + 316u), 0u);  if (depth < kMaxDepth) unit_005F(c, 67u, depth + 1u); else { c.pc = 0x0027CEC0u; return; } if (c.pc != 0x002A4D24u) [[unlikely]] return; }
L_002A4D24:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_002A4D70; } }
L_002A4D30:
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D50u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 71u, depth + 1u); else { c.pc = 0x0027D100u; return; } if (c.pc != 0x002A4D50u) [[unlikely]] return; }
L_002A4D50:
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    set32(c.r[2], c.r[22].w[0] + 1u);
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_002A4D70:
    c.r[2].d[0] = c.r[22].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[22].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4D30u | kUnwind; return; } goto L_002A4D30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4E80; } }
L_002A4D88:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002A4E04; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_002A4DF4; } }
L_002A4D9C:
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[22], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DBCu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x002A4DBCu) [[unlikely]] return; }
L_002A4DBC:
    c.f[1] = ld32((c.r[20].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.f[3] = ld32((c.r[20].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 388u));
    c.f[5] = ld32((c.r[20].w[0] + 8u));
    c.f[4] = ld32((c.r[29].w[0] + 392u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[4] = fp::add(c.f[5], c.f[4]);
    st32((c.r[22].w[0] + 4u), c.f[2]);
    st32((c.r[22].w[0] + 8u), c.f[4]);
    c.budget -= 14;
L_002A4DF4:
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[18].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4D9Cu | kUnwind; return; } goto L_002A4D9C; }
L_002A4E04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A4E80; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 236u), 0u);
    st32((c.r[29].w[0] + 252u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E24u); st32((c.r[29].w[0] + 268u), 0u);  if (depth < kMaxDepth) unit_005F(c, 67u, depth + 1u); else { c.pc = 0x0027CEC0u; return; } if (c.pc != 0x002A4E24u) [[unlikely]] return; }
L_002A4E24:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_002A4E70; } }
L_002A4E30:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E50u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 71u, depth + 1u); else { c.pc = 0x0027D100u; return; } if (c.pc != 0x002A4E50u) [[unlikely]] return; }
L_002A4E50:
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[2], c.r[22].w[0] + 1u);
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_002A4E70:
    c.r[2].d[0] = c.r[22].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[22].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4E30u | kUnwind; return; } goto L_002A4E30; }
L_002A4E80:
    set32(c.r[2], ld32((c.r[21].w[0] + 220u)));
    c.budget -= 1;
L_002A4E84:
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E94u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_005F(c, 25u, depth + 1u); else { c.pc = 0x0027C650u; return; } if (c.pc != 0x002A4E94u) [[unlikely]] return; }
L_002A4E94:
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_002A4ED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A4F64; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_002A4FD4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 216u), c.r[16].w[0]);  goto L_002A4F3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A4F0Cu) [[unlikely]] return; }
L_002A4F0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F1Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A4F1Cu) [[unlikely]] return; }
L_002A4F1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4F38; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4F38u) [[unlikely]] return; }
L_002A4F38:
    st32((c.r[17].w[0] + 216u), c.r[16].w[0]);
    c.budget -= 1;
L_002A4F3C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A4FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A4F4Cu) [[unlikely]] return; }
L_002A4F4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F5Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A4F5Cu) [[unlikely]] return; }
L_002A4F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4FD0; } }
L_002A4F64:
    set32(c.r[16], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A4FD0; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002A4FB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A4F80u) [[unlikely]] return; }
L_002A4F80:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F90u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A4F90u) [[unlikely]] return; }
L_002A4F90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A4FAC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4FACu) [[unlikely]] return; }
L_002A4FAC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A4FB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 216u), 0u);  if (t) { goto L_002A4FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A4FC0u) [[unlikely]] return; }
L_002A4FC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FD0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A4FD0u) [[unlikely]] return; }
L_002A4FD0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002A4FD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FE4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4FE4u) [[unlikely]] return; }
L_002A4FE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A5000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5028u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 490u, depth + 1u); else { c.pc = 0x00283200u; return; } if (c.pc != 0x002A5028u) [[unlikely]] return; }
L_002A5028:
    set32(c.r[17], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_002A509C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 60u)));  goto L_002A5078; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5048u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5048u) [[unlikely]] return; }
L_002A5048:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5058u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5058u) [[unlikely]] return; }
L_002A5058:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5074; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5074u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5074u) [[unlikely]] return; }
L_002A5074:
    set32(c.r[17], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_002A5078:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 212u), c.r[17].w[0]);  if (t) { goto L_002A5098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5088u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5088u) [[unlikely]] return; }
L_002A5088:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5098u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5098u) [[unlikely]] return; }
L_002A5098:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_002A509C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002A50E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A50ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A50ACu) [[unlikely]] return; }
L_002A50AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A50C0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A50C0u) [[unlikely]] return; }
L_002A50C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A50E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A50E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A50E0u) [[unlikely]] return; }
L_002A50E0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002A50E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A50F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A50F4u) [[unlikely]] return; }
L_002A50F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A5110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 220u)));  goto L_002A514C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5134u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0076(c, 423u, depth + 1u); else { c.pc = 0x002DAF80u; return; } if (c.pc != 0x002A5134u) [[unlikely]] return; }
L_002A5134:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5144u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005F(c, 23u, depth + 1u); else { c.pc = 0x0027C400u; return; } if (c.pc != 0x002A5144u) [[unlikely]] return; }
L_002A5144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002A5160; } }
L_002A514C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A515Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_005F(c, 23u, depth + 1u); else { c.pc = 0x0027C400u; return; } if (c.pc != 0x002A515Cu) [[unlikely]] return; }
L_002A515C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A5160:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5170:
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A5190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002A524C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 220u)));  goto L_002A51E4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A51CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A51CCu) [[unlikely]] return; }
L_002A51CC:
    set32(c.r[4], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A51E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A51E0u) [[unlikely]] return; }
L_002A51E0:
    set32(c.r[16], ld32((c.r[18].w[0] + 220u)));
    c.budget -= 1;
L_002A51E4:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002A5250; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 220u), c.r[17].w[0]);  goto L_002A522C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A51FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A51FCu) [[unlikely]] return; }
L_002A51FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A520Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A520Cu) [[unlikely]] return; }
L_002A520C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5228; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5228u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5228u) [[unlikely]] return; }
L_002A5228:
    st32((c.r[18].w[0] + 220u), c.r[17].w[0]);
    c.budget -= 1;
L_002A522C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A524C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A523Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A523Cu) [[unlikely]] return; }
L_002A523C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A524Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A524Cu) [[unlikely]] return; }
L_002A524C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002A5250:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A5270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 248u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002A5280:
    set32(c.r[8], ld32((c.r[4].w[0] + 236u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002A52B0; } }
L_002A5290:
    set32(c.r[7], c.r[9].w[0] << 4);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);  if (t) { goto L_002A52A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A52A8; } }
L_002A52A4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A52A8:
    st32((c.r[7].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_002A52B0:
    c.r[3].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5290u | kUnwind; return; } goto L_002A5290; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A52D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 236u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A5320; } }
L_002A5300:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002A5320; }
    st32((c.r[18].w[0] + 240u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A5464; } }
L_002A5320:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5300u | kUnwind; return; } goto L_002A5300; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A5344; }
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 240u), c.r[3].w[0]);  if (t) { goto L_002A5464; } }
L_002A5344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002A5364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5354u); set32(c.r[19], ld32((c.r[29].w[0] + 80u)));  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5354u) [[unlikely]] return; }
L_002A5354:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5364u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5364u) [[unlikely]] return; }
L_002A5364:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 84u), c.r[17].w[0]);  if (t) { goto L_002A5384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5374u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5374u) [[unlikely]] return; }
L_002A5374:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5384u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5384u) [[unlikely]] return; }
L_002A5384:
    st32((c.r[29].w[0] + 88u), c.r[16].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 236u)));
    st32((c.r[18].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 236u)));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 236u)));  goto L_002A53C4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A53B8; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002A53B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A53C0u); set32(c.r[4], c.r[18].w[0] + 228u);  if (depth < kMaxDepth) unit_0069(c, 185u, depth + 1u); else { c.pc = 0x002A56A0u; return; } if (c.pc != 0x002A53C0u) [[unlikely]] return; }
L_002A53C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 236u)));
    c.budget -= 1;
L_002A53C4:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A53E0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0069(c, 174u, depth + 1u); else { c.pc = 0x002A5570u; return; } if (c.pc != 0x002A53E0u) [[unlikely]] return; }
L_002A53E0:
    set32(c.r[16], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 80u)));  goto L_002A5424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A53F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A53F4u) [[unlikely]] return; }
L_002A53F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5404u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5404u) [[unlikely]] return; }
L_002A5404:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5420; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5420u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5420u) [[unlikely]] return; }
L_002A5420:
    set32(c.r[16], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_002A5424:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002A5464; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5434u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5434u) [[unlikely]] return; }
L_002A5434:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5444u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5444u) [[unlikely]] return; }
L_002A5444:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5460; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5460u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5460u) [[unlikely]] return; }
L_002A5460:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A5464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A5480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A5550; } }
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A54EC; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002A54EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A54C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A54C0u) [[unlikely]] return; }
L_002A54C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A54D0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A54D0u) [[unlikely]] return; }
L_002A54D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A54EC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A54ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A54ECu) [[unlikely]] return; }
L_002A54EC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002A5538; }
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002A5534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5508u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5508u) [[unlikely]] return; }
L_002A5508:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5518u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5518u) [[unlikely]] return; }
L_002A5518:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5534; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5534u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5534u) [[unlikely]] return; }
L_002A5534:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002A5538:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A5554; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5550u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A5550u) [[unlikely]] return; }
L_002A5550:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A5554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A5570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A55F8; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0])));  goto L_002A55D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A55A8u) [[unlikely]] return; }
L_002A55A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55B8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A55B8u) [[unlikely]] return; }
L_002A55B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A55D4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A55D4u) [[unlikely]] return; }
L_002A55D4:
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002A55D8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0]), c.r[18].w[0]);  if (t) { goto L_002A55F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A55E8u) [[unlikely]] return; }
L_002A55E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55F8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A55F8u) [[unlikely]] return; }
L_002A55F8:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_002A566C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 4u)));  goto L_002A5648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5618u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5618u) [[unlikely]] return; }
L_002A5618:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5628u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5628u) [[unlikely]] return; }
L_002A5628:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5644; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5644u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5644u) [[unlikely]] return; }
L_002A5644:
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A5648:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[18].w[0]);  if (t) { goto L_002A5668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5658u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5658u) [[unlikely]] return; }
L_002A5658:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5668u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5668u) [[unlikely]] return; }
L_002A5668:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_002A566C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A56A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[19].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A585C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002A5838; }
    set32(c.r[2], c.r[19].w[0] << 4);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A56F0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A56F0u) [[unlikely]] return; }
L_002A56F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22672u);
    set32(c.r[6], c.r[6].w[0] + 21632u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5710u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A5710u) [[unlikely]] return; }
L_002A5710:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_002A5828; } }
L_002A571C:
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[23], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[21], ld32((c.r[23].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    if (c.r[21].d[0] == c.r[2].d[0]) { set32(c.r[21], ld32((c.r[23].w[0] + 4u)));  goto L_002A57A0; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], ld32((c.r[16].w[0])));  goto L_002A5778; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5748u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5748u) [[unlikely]] return; }
L_002A5748:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5758u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5758u) [[unlikely]] return; }
L_002A5758:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5774; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5774u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5774u) [[unlikely]] return; }
L_002A5774:
    set32(c.r[21], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002A5778:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[2].w[0]), c.r[21].w[0]);  if (t) { goto L_002A579C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A578Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A578Cu) [[unlikely]] return; }
L_002A578C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A579Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A579Cu) [[unlikely]] return; }
L_002A579C:
    set32(c.r[21], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 1;
L_002A57A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[21].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_002A5814; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], ld32((c.r[16].w[0] + 4u)));  goto L_002A57EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A57BCu) [[unlikely]] return; }
L_002A57BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57CCu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A57CCu) [[unlikely]] return; }
L_002A57CC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A57E8; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57E8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A57E8u) [[unlikely]] return; }
L_002A57E8:
    set32(c.r[21], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A57EC:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[2].w[0] + 4u), c.r[21].w[0]);  if (t) { goto L_002A5810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5800u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5800u) [[unlikely]] return; }
L_002A5800:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5810u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5810u) [[unlikely]] return; }
L_002A5810:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_002A5814:
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
L_002A5828:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A571Cu | kUnwind; return; } goto L_002A571C; }
L_002A5838:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 21632u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5854u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A5854u) [[unlikely]] return; }
L_002A5854:
    st32((c.r[20].w[0]), c.r[18].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 2;
L_002A585C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A5890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A58C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A58B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A58B8u) [[unlikely]] return; }
L_002A58B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A58C8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A58C8u) [[unlikely]] return; }
L_002A58C8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_002A58EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A58DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A58DCu) [[unlikely]] return; }
L_002A58DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A58ECu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A58ECu) [[unlikely]] return; }
L_002A58EC:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5920:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 236u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A596C; } }
L_002A5950:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002A596C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A5AA0; } }
L_002A596C:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5950u | kUnwind; return; } goto L_002A5950; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A5988; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A5AA0; } }
L_002A5988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_002A59A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5998u); set32(c.r[19], ld32((c.r[29].w[0] + 80u)));  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5998u) [[unlikely]] return; }
L_002A5998:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59A8u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A59A8u) [[unlikely]] return; }
L_002A59A8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 84u), c.r[17].w[0]);  if (t) { goto L_002A59C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A59B8u) [[unlikely]] return; }
L_002A59B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59C8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A59C8u) [[unlikely]] return; }
L_002A59C8:
    st32((c.r[29].w[0] + 88u), c.r[16].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 236u)));
    c.budget -= 8;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 236u)));  goto L_002A5A00; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A59F4; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002A59F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59FCu); set32(c.r[4], c.r[18].w[0] + 228u);  if (depth < kMaxDepth) unit_0069(c, 185u, depth + 1u); else { c.pc = 0x002A56A0u; return; } if (c.pc != 0x002A59FCu) [[unlikely]] return; }
L_002A59FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 236u)));
    c.budget -= 1;
L_002A5A00:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[18].w[0] + 228u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A1Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0069(c, 174u, depth + 1u); else { c.pc = 0x002A5570u; return; } if (c.pc != 0x002A5A1Cu) [[unlikely]] return; }
L_002A5A1C:
    set32(c.r[16], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 80u)));  goto L_002A5A60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5A30u) [[unlikely]] return; }
L_002A5A30:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A40u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5A40u) [[unlikely]] return; }
L_002A5A40:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5A5C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5A5Cu) [[unlikely]] return; }
L_002A5A5C:
    set32(c.r[16], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_002A5A60:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002A5AA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5A70u) [[unlikely]] return; }
L_002A5A70:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A80u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5A80u) [[unlikely]] return; }
L_002A5A80:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5A9C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5A9Cu) [[unlikely]] return; }
L_002A5A9C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A5AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002A5AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 216u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_002A5AF8; } }
L_002A5AE4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5AF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5AF4u) [[unlikely]] return; }
L_002A5AF4:
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_002A5AF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5AE4u | kUnwind; return; } goto L_002A5AE4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A5B48; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B40u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5B40u) [[unlikely]] return; }
L_002A5B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A5B90; } }
L_002A5B48:
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_002A5B70; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B6Cu); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0088(c, 262u, depth + 1u); else { c.pc = 0x00321ED0u; return; } if (c.pc != 0x002A5B6Cu) [[unlikely]] return; }
L_002A5B6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A5B70:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
L_002A5B90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5BA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002A5F20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 9808u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[20].w[0] + 236u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A5CD0; } }
L_002A5BE4:
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], ld32((c.r[16].w[0] + 4u)));  goto L_002A5C5C; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_002A5C38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5C08u) [[unlikely]] return; }
L_002A5C08:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C18u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5C18u) [[unlikely]] return; }
L_002A5C18:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5C34; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C34u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5C34u) [[unlikely]] return; }
L_002A5C34:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A5C38:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_002A5C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5C48u) [[unlikely]] return; }
L_002A5C48:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C58u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5C58u) [[unlikely]] return; }
L_002A5C58:
    set32(c.r[21], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002A5C5C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002A5CC8; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_002A5CA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5C74u) [[unlikely]] return; }
L_002A5C74:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C84u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5C84u) [[unlikely]] return; }
L_002A5C84:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5CA0; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5CA0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5CA0u) [[unlikely]] return; }
L_002A5CA0:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A5CA4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_002A5CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5CB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5CB4u) [[unlikely]] return; }
L_002A5CB4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5CC4u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5CC4u) [[unlikely]] return; }
L_002A5CC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A5CC8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_002A5CD0:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 228u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5BE4u | kUnwind; return; } goto L_002A5BE4; }
    st32((c.r[20].w[0] + 236u), 0u);
    set32(c.r[16], ld32((c.r[20].w[0] + 220u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + 244u);  goto L_002A5D50; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002A5D2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5CFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5CFCu) [[unlikely]] return; }
L_002A5CFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D0Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5D0Cu) [[unlikely]] return; }
L_002A5D0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5D28; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5D28u) [[unlikely]] return; }
L_002A5D28:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A5D2C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 220u), 0u);  if (t) { goto L_002A5D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5D3Cu) [[unlikely]] return; }
L_002A5D3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D4Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5D4Cu) [[unlikely]] return; }
L_002A5D4C:
    set32(c.r[2], c.r[20].w[0] + 244u);
    c.budget -= 1;
L_002A5D50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + 228u);  goto L_002A5D9C; }
    set32(c.r[16], ld32((c.r[20].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A5D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5D6Cu) [[unlikely]] return; }
L_002A5D6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D7Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5D7Cu) [[unlikely]] return; }
L_002A5D7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5D98; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5D98u) [[unlikely]] return; }
L_002A5D98:
    set32(c.r[2], c.r[20].w[0] + 228u);
    c.budget -= 1;
L_002A5D9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + 224u);  goto L_002A5DCC; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5DC8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 228u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 21632u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DC8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A5DC8u) [[unlikely]] return; }
L_002A5DC8:
    set32(c.r[2], c.r[20].w[0] + 224u);
    c.budget -= 1;
L_002A5DCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + 220u);  goto L_002A5E18; }
    set32(c.r[16], ld32((c.r[20].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A5E14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5DE8u) [[unlikely]] return; }
L_002A5DE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DF8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5DF8u) [[unlikely]] return; }
L_002A5DF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5E14; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5E14u) [[unlikely]] return; }
L_002A5E14:
    set32(c.r[2], c.r[20].w[0] + 220u);
    c.budget -= 1;
L_002A5E18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + 216u);  goto L_002A5E64; }
    set32(c.r[16], ld32((c.r[20].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A5E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5E34u) [[unlikely]] return; }
L_002A5E34:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E44u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5E44u) [[unlikely]] return; }
L_002A5E44:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5E60; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5E60u) [[unlikely]] return; }
L_002A5E60:
    set32(c.r[2], c.r[20].w[0] + 216u);
    c.budget -= 1;
L_002A5E64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + 212u);  goto L_002A5EB0; }
    set32(c.r[16], ld32((c.r[20].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A5EAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5E80u) [[unlikely]] return; }
L_002A5E80:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E90u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5E90u) [[unlikely]] return; }
L_002A5E90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5EAC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5EACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5EACu) [[unlikely]] return; }
L_002A5EAC:
    set32(c.r[2], c.r[20].w[0] + 212u);
    c.budget -= 1;
L_002A5EB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_002A5EFC; }
    set32(c.r[16], ld32((c.r[20].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A5EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5ECCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5ECCu) [[unlikely]] return; }
L_002A5ECC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5EDCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5EDCu) [[unlikely]] return; }
L_002A5EDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5EF8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5EF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5EF8u) [[unlikely]] return; }
L_002A5EF8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002A5EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 46u, depth + 1u); else { c.pc = 0x002844A0u; return; } if (c.pc != 0x002A5F04u) [[unlikely]] return; }
L_002A5F04:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_002A5F24; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F20u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A5F20u) [[unlikely]] return; }
L_002A5F20:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002A5F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A5F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F68u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 61u, depth + 1u); else { c.pc = 0x00284670u; return; } if (c.pc != 0x002A5F68u) [[unlikely]] return; }
L_002A5F68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9808u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 208u), 0u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 212u), 0u);  if (t) { goto L_002A5F9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F8Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5F8Cu) [[unlikely]] return; }
L_002A5F8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F9Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5F9Cu) [[unlikely]] return; }
L_002A5F9C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 216u), 0u);  if (t) { goto L_002A5FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5FB0u) [[unlikely]] return; }
L_002A5FB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FC0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5FC0u) [[unlikely]] return; }
L_002A5FC0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 220u), 0u);  if (t) { goto L_002A5FE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5FD4u) [[unlikely]] return; }
L_002A5FD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FE4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A5FE4u) [[unlikely]] return; }
L_002A5FE4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 224u), 0u);  if (t) { goto L_002A6008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A5FF8u) [[unlikely]] return; }
L_002A5FF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6008u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A6008u) [[unlikely]] return; }
L_002A6008:
    st32((c.r[16].w[0] + 228u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 232u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 236u), 0u);
    st32((c.r[16].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 244u), 0u);  if (t) { goto L_002A6040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6030u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A6030u) [[unlikely]] return; }
L_002A6030:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6040u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A6040u) [[unlikely]] return; }
L_002A6040:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6080u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 61u, depth + 1u); else { c.pc = 0x00284670u; return; } if (c.pc != 0x002A6080u) [[unlikely]] return; }
L_002A6080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9808u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 208u), 0u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 212u), 0u);  if (t) { goto L_002A60B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A60A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A60A4u) [[unlikely]] return; }
L_002A60A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A60B4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A60B4u) [[unlikely]] return; }
L_002A60B4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 216u), 0u);  if (t) { goto L_002A60D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A60C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A60C8u) [[unlikely]] return; }
L_002A60C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A60D8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A60D8u) [[unlikely]] return; }
L_002A60D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 220u), c.r[16].w[0]);  if (t) { goto L_002A60F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A60E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A60E8u) [[unlikely]] return; }
L_002A60E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A60F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A60F8u) [[unlikely]] return; }
L_002A60F8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 224u), 0u);  if (t) { goto L_002A611C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A610Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A610Cu) [[unlikely]] return; }
L_002A610C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A611Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A611Cu) [[unlikely]] return; }
L_002A611C:
    st32((c.r[17].w[0] + 228u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 232u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 236u), 0u);
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 244u), 0u);  if (t) { goto L_002A6154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6144u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A6144u) [[unlikely]] return; }
L_002A6144:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6154u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A6154u) [[unlikely]] return; }
L_002A6154:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A6180:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 20024u);  c.pc = t; return; }
L_002A6190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A61A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_002A61B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_002A61C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002A61E8; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[2].w[0] << 2);
    c.budget -= 4;
L_002A61E8:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  goto L_002A6224; }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_002A6208; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002A6208:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 7;
L_002A6224:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  goto L_002A623C; }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 4;
L_002A623C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A625C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 50u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_002A625C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6264u);  if (depth < kMaxDepth) unit_006E(c, 471u, depth + 1u); else { c.pc = 0x002BB880u; return; } if (c.pc != 0x002A6264u) [[unlikely]] return; }
L_002A6264:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A6280:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A629Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x002A629Cu) [[unlikely]] return; }
L_002A629C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62A8u); set32(c.r[4], ld32((c.r[2].w[0] + 20024u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002A62A8u) [[unlikely]] return; }
L_002A62A8:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62BCu); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A62BCu) [[unlikely]] return; }
L_002A62BC:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62CCu); set32(c.r[4], c.r[4].w[0] + 20096u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002A62CCu) [[unlikely]] return; }
L_002A62CC:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62E0u); set32(c.r[6], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A62E0u) [[unlikely]] return; }
L_002A62E0:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 48u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62F0u); set32(c.r[4], c.r[4].w[0] + 20109u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002A62F0u) [[unlikely]] return; }
L_002A62F0:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6304u); set32(c.r[6], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A6304u) [[unlikely]] return; }
L_002A6304:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6314u); set32(c.r[4], c.r[4].w[0] + 20128u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002A6314u) [[unlikely]] return; }
L_002A6314:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6328u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A6328u) [[unlikely]] return; }
L_002A6328:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6338u); set32(c.r[4], c.r[4].w[0] + 20139u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002A6338u) [[unlikely]] return; }
L_002A6338:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A634Cu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A634Cu) [[unlikely]] return; }
L_002A634C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 50u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20150u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6360u); c.r[5].d[0] = c.r[2].d[0] & 61440ull;  if (depth < kMaxDepth) unit_0088(c, 237u, depth + 1u); else { c.pc = 0x00321BC0u; return; } if (c.pc != 0x002A6360u) [[unlikely]] return; }
L_002A6360:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6374u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A6374u) [[unlikely]] return; }
L_002A6374:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6384u); set32(c.r[5], c.r[5].w[0] + 20172u);  if (depth < kMaxDepth) unit_0061(c, 376u, depth + 1u); else { c.pc = 0x00287A10u; return; } if (c.pc != 0x002A6384u) [[unlikely]] return; }
L_002A6384:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6398u); set32(c.r[6], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A6398u) [[unlikely]] return; }
L_002A6398:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63A8u); set32(c.r[4], c.r[4].w[0] + 20181u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002A63A8u) [[unlikely]] return; }
L_002A63A8:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63BCu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A63BCu) [[unlikely]] return; }
L_002A63BC:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 50u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 20191u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63D0u); c.r[5].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002A63D0u) [[unlikely]] return; }
L_002A63D0:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63E4u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A63E4u) [[unlikely]] return; }
L_002A63E4:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63F4u); set32(c.r[4], c.r[4].w[0] + 20208u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x002A63F4u) [[unlikely]] return; }
L_002A63F4:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6408u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A6408u) [[unlikely]] return; }
L_002A6408:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6418u); set32(c.r[4], c.r[4].w[0] + 20220u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x002A6418u) [[unlikely]] return; }
L_002A6418:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A642Cu); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A642Cu) [[unlikely]] return; }
L_002A642C:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 54u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A643Cu); set32(c.r[4], c.r[4].w[0] + 20235u);  if (depth < kMaxDepth) unit_0088(c, 249u, depth + 1u); else { c.pc = 0x00321D40u; return; } if (c.pc != 0x002A643Cu) [[unlikely]] return; }
L_002A643C:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6450u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A6450u) [[unlikely]] return; }
L_002A6450:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 55u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6460u); set32(c.r[4], c.r[4].w[0] + 20249u);  if (depth < kMaxDepth) unit_0088(c, 249u, depth + 1u); else { c.pc = 0x00321D40u; return; } if (c.pc != 0x002A6460u) [[unlikely]] return; }
L_002A6460:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6474u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A6474u) [[unlikely]] return; }
L_002A6474:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_002A6498; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6490u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6490u) [[unlikely]] return; }
L_002A6490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A64BC; } }
L_002A6498:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64A4u); set32(c.r[4], c.r[4].w[0] + 20267u);  if (depth < kMaxDepth) unit_0088(c, 237u, depth + 1u); else { c.pc = 0x00321BC0u; return; } if (c.pc != 0x002A64A4u) [[unlikely]] return; }
L_002A64A4:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64B8u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002A64B8u) [[unlikely]] return; }
L_002A64B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A64BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A64D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x002A64ECu) [[unlikely]] return; }
L_002A64EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  goto L_002A64FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A64FC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = ld16((c.r[17].w[0] + 48u));  goto L_002A6510; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A6510:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 48u));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[8], ld32((c.r[17].w[0] + 32u)));  goto L_002A6524; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A6524:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002A6538; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A6988; }
L_002A6538:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[17].w[0] + 54u));  goto L_002A655C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6558; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6988; } }
L_002A6558:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 54u));
    c.budget -= 1;
L_002A655C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 54u));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = ld8((c.r[17].w[0] + 55u));  goto L_002A6570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A6570:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 55u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A6584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A6584:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[8], ld32((c.r[17].w[0] + 36u)));  goto L_002A6628; }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002A6618; } }
L_002A6598:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A65C4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A65C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A65E4; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A65E4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A65E4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_002A6608; }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A6604; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6604:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_002A6608:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_002A6618; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A6618:
    c.r[3].d[0] = c.r[9].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6598u | kUnwind; return; } goto L_002A6598; }
    set32(c.r[8], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_002A6628:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002A663C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A6988; }
L_002A663C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002A665C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A665C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6988; } }
L_002A665C:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 16u);  goto L_002A6734; }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 50u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 50u));
    c.r[4].d[0] = c.r[4].d[0] & 61440ull;
    c.r[3].d[0] = c.r[3].d[0] & 61440ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A6684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A6684:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 1);  goto L_002A6694; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002A669C; } }
L_002A6694:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002A669C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002A6724; } }
L_002A66A4:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[6], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A66D0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A66D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A66F0; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A66F0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A66F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_002A6714; }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A6710; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6710:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_002A6714:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_002A6724; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A6724:
    c.r[3].d[0] = c.r[9].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A66A4u | kUnwind; return; } goto L_002A66A4; }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_002A6734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A673Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_005F(c, 28u, depth + 1u); else { c.pc = 0x0027C830u; return; } if (c.pc != 0x002A673Cu) [[unlikely]] return; }
L_002A673C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[9], ld32((c.r[17].w[0] + 40u)));  goto L_002A6754; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A6754:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_002A676C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A6988; }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_002A676C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A678C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A678C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6988; } }
L_002A678C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002A6848; } }
    c.r[8].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002A683C; } }
L_002A67A4:
    set32(c.r[7], c.r[10].w[0] << 4);
    set32(c.r[5], c.r[9].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A67C8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A67C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A67E8; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A67E8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A67E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6808; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A6808; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6808:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_002A682C; }
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A6828; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6828:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_002A682C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_002A683C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A683C:
    c.r[3].d[0] = c.r[10].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A67A4u | kUnwind; return; } goto L_002A67A4; }
L_002A6848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A685C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A6988; }
L_002A685C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A687C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A687C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6988; } }
L_002A687C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_002A691C; }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 50u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 50u));
    c.r[5].d[0] = c.r[4].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));  goto L_002A68A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A68A4:
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]); c.r[8].d[0] = c.lo.d[0];  if (t) { goto L_002A690C; } }
L_002A68B4:
    set32(c.r[7], c.r[9].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A68D8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A68D8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_002A68FC; }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A68F8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A68F8:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_002A68FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_002A690C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A690C:
    c.r[3].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A68B4u | kUnwind; return; } goto L_002A68B4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_002A691C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A6930; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A6988; }
L_002A6930:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A6950; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6950; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6988; } }
L_002A6950:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002A6988; }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A6984; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6974u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6974u) [[unlikely]] return; }
L_002A6974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A6984; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6988; } }
L_002A6984:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A6988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A69A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A69C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x002A69C0u) [[unlikely]] return; }
L_002A69C0:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A69CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 319u, depth + 1u); else { c.pc = 0x0030AC40u; return; } if (c.pc != 0x002A69CCu) [[unlikely]] return; }
L_002A69CC:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A69DCu); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002A69DCu) [[unlikely]] return; }
L_002A69DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A69E8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002A69E8u) [[unlikely]] return; }
L_002A69E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A69F4u); set32(c.r[5], c.r[18].w[0] + 54u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002A69F4u) [[unlikely]] return; }
L_002A69F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A00u); set32(c.r[5], c.r[18].w[0] + 55u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002A6A00u) [[unlikely]] return; }
L_002A6A00:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 79u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A18u); st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002A6A18u) [[unlikely]] return; }
L_002A6A18:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_002A6A40; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A3Cu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x002A6A3Cu) [[unlikely]] return; }
L_002A6A3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_002A6A40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002A6A5C; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 50u));
    set32(c.r[2], 0u - 64u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 50u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
L_002A6A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A64u); set32(c.r[5], c.r[18].w[0] + 50u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002A6A64u) [[unlikely]] return; }
L_002A6A64:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));  if (t) { goto L_002A6A7C; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_002A6A7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 78u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A94u); st8((c.r[29].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002A6A94u) [[unlikely]] return; }
L_002A6A94:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 78u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 16u);  goto L_002A6AB8; }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AB4u); set32(c.r[6], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x002A6AB4u) [[unlikely]] return; }
L_002A6AB4:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 1;
L_002A6AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AC0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 384u, depth + 1u); else { c.pc = 0x00287AD0u; return; } if (c.pc != 0x002A6AC0u) [[unlikely]] return; }
L_002A6AC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 77u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AD8u); st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002A6AD8u) [[unlikely]] return; }
L_002A6AD8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 77u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 50u));  goto L_002A6AFC; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AF8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x002A6AF8u) [[unlikely]] return; }
L_002A6AF8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 50u));
    c.budget -= 1;
L_002A6AFC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));  goto L_002A6B2C; }
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A6B28; } }
    set32(c.r[6], c.r[2].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x002A6B28u) [[unlikely]] return; }
L_002A6B28:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));
    c.budget -= 1;
L_002A6B2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 74u);
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B40u); st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002A6B40u) [[unlikely]] return; }
L_002A6B40:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6B54u) [[unlikely]] return; }
L_002A6B54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A6B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BB2E0u; return; } if (c.pc != 0x002A6B8Cu) [[unlikely]] return; }
L_002A6B8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_002A6B9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6BC8; } }
L_002A6B9C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002A6BC8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6BB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6BB4u) [[unlikely]] return; }
L_002A6BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A6BC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6BC8; } }
L_002A6BC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A6BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6BE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6C00u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 427u, depth + 1u); else { c.pc = 0x002BB310u; return; } if (c.pc != 0x002A6C00u) [[unlikely]] return; }
L_002A6C00:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0A030000u);
    c.r[3].d[0] = c.r[3].d[0] | 7ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002A6C94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6C20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002A6C20u) [[unlikely]] return; }
L_002A6C20:
    set32(c.r[18], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_002A6C90; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 56u), c.r[17].w[0]);  goto L_002A6C70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6C40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A6C40u) [[unlikely]] return; }
L_002A6C40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6C50u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A6C50u) [[unlikely]] return; }
L_002A6C50:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A6C6C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6C6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6C6Cu) [[unlikely]] return; }
L_002A6C6C:
    st32((c.r[16].w[0] + 56u), c.r[17].w[0]);
    c.budget -= 1;
L_002A6C70:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A6C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6C80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A6C80u) [[unlikely]] return; }
L_002A6C80:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6C90u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A6C90u) [[unlikely]] return; }
L_002A6C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002A6C94:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A6CB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6CD0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002A6CD0u) [[unlikely]] return; }
L_002A6CD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[2].d[0] = c.r[2].d[0] | 114ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002A6D08; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6CF4u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002A6CF4u) [[unlikely]] return; }
L_002A6CF4:
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 321u, depth + 1u); else { c.pc = 0x0030AC80u; return; } if (c.pc != 0x002A6D00u) [[unlikely]] return; }
L_002A6D00:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002A6D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D10u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002A6D10u) [[unlikely]] return; }
L_002A6D10:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 54u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D24u); st16((c.r[18].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002A6D24u) [[unlikely]] return; }
L_002A6D24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D30u); set32(c.r[5], c.r[18].w[0] + 55u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002A6D30u) [[unlikely]] return; }
L_002A6D30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D3Cu); set32(c.r[5], c.r[29].w[0] + 79u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002A6D3Cu) [[unlikely]] return; }
L_002A6D3C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));  goto L_002A6DF4; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6D58u) [[unlikely]] return; }
L_002A6D58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));  goto L_002A6DA0; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D80u); set32(c.r[16], c.r[2].w[0] << 2);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6D80u) [[unlikely]] return; }
L_002A6D80:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_002A6DD8; } }
L_002A6DA0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6DB8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A6DB8u) [[unlikely]] return; }
L_002A6DB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6DD4u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A6DD4u) [[unlikely]] return; }
L_002A6DD4:
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_002A6DD8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6DF0u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x002A6DF0u) [[unlikely]] return; }
L_002A6DF0:
    c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));
    c.budget -= 1;
L_002A6DF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E00u); set32(c.r[5], c.r[18].w[0] + 50u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002A6E00u) [[unlikely]] return; }
L_002A6E00:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002A6E1C; }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_002A6E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E24u); set32(c.r[5], c.r[29].w[0] + 78u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002A6E24u) [[unlikely]] return; }
L_002A6E24:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 78u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 16u);  goto L_002A6ED0; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6E40u) [[unlikely]] return; }
L_002A6E40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  goto L_002A6E84; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6E58u) [[unlikely]] return; }
L_002A6E58:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[4].w[0]);  if (t) { goto L_002A6EB8; } }
L_002A6E84:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E98u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A6E98u) [[unlikely]] return; }
L_002A6E98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6EB4u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A6EB4u) [[unlikely]] return; }
L_002A6EB4:
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_002A6EB8:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6ECCu); set32(c.r[6], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x002A6ECCu) [[unlikely]] return; }
L_002A6ECC:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 1;
L_002A6ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6ED8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 387u, depth + 1u); else { c.pc = 0x00287B10u; return; } if (c.pc != 0x002A6ED8u) [[unlikely]] return; }
L_002A6ED8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6EE4u); set32(c.r[5], c.r[29].w[0] + 77u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002A6EE4u) [[unlikely]] return; }
L_002A6EE4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 77u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 50u));  goto L_002A6F88; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6F00u) [[unlikely]] return; }
L_002A6F00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));  goto L_002A6F40; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F20u); set32(c.r[16], c.r[2].w[0] << 4);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6F20u) [[unlikely]] return; }
L_002A6F20:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 40u), c.r[4].w[0]);  if (t) { goto L_002A6F70; } }
L_002A6F40:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F50u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A6F50u) [[unlikely]] return; }
L_002A6F50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F6Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A6F6Cu) [[unlikely]] return; }
L_002A6F6C:
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_002A6F70:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F84u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x002A6F84u) [[unlikely]] return; }
L_002A6F84:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 50u));
    c.budget -= 1;
L_002A6F88:
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[5], c.r[18].w[0] + 52u);  goto L_002A7028; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6FACu); mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]); c.r[16].d[0] = c.lo.d[0];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6FACu) [[unlikely]] return; }
L_002A6FAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] << 3);  goto L_002A6FE8; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6FC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6FC4u) [[unlikely]] return; }
L_002A6FC4:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[4].w[0]);  if (t) { goto L_002A7014; } }
L_002A6FE8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6FF4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A6FF4u) [[unlikely]] return; }
L_002A6FF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7010u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A7010u) [[unlikely]] return; }
L_002A7010:
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 1;
L_002A7014:
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[6], c.r[16].w[0] << 1);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7024u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x002A7024u) [[unlikely]] return; }
L_002A7024:
    set32(c.r[5], c.r[18].w[0] + 52u);
    c.budget -= 1;
L_002A7028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7030u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002A7030u) [[unlikely]] return; }
L_002A7030:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0A030000u);
    c.r[3].d[0] = c.r[3].d[0] | 7ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002A7054; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7050u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002A7050u) [[unlikely]] return; }
L_002A7050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002A7054:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A7070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002A7080:
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[10], ld32((c.r[4].w[0] + 32u)));  if (t) { goto L_002A7118; } }
    c.r[8].d[0] = c.r[6].d[0] & 65535ull;
    c.r[7].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], c.r[8].w[0] << 1);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + c.r[7].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[10].w[0] + c.r[2].w[0]);  if (t) { goto L_002A70F8; } }
L_002A70C0:
    set32(c.r[7], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A70E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002A7108; } }
L_002A70E4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_002A70F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7108; } }
L_002A70F8:
    c.r[2].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[11].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A70C0u | kUnwind; return; } goto L_002A70C0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A7108:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[10], ld32((c.r[4].w[0] + 36u)));  goto L_002A711C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7324; } }
L_002A7118:
    set32(c.r[10], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 1;
L_002A711C:
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[8], ld32((c.r[4].w[0] + 40u)));  goto L_002A71BC; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A71B8; } }
    c.r[8].d[0] = c.r[6].d[0] & 65535ull;
    c.r[7].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], c.r[8].w[0] << 1);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + c.r[7].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[10].w[0] + c.r[2].w[0]);  if (t) { goto L_002A7198; } }
L_002A7160:
    set32(c.r[7], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A7184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002A71A8; } }
L_002A7184:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_002A7198; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A71A8; } }
L_002A7198:
    c.r[2].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[11].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7160u | kUnwind; return; } goto L_002A7160; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A71A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A71B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7324; } }
L_002A71B8:
    set32(c.r[8], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 1;
L_002A71BC:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 44u)));  goto L_002A724C; }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A7248; } }
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[9], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);  if (t) { goto L_002A7228; } }
L_002A71F0:
    set32(c.r[7], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A7214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002A7238; } }
L_002A7214:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_002A7228; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7238; } }
L_002A7228:
    c.r[2].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[10].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A71F0u | kUnwind; return; } goto L_002A71F0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A7238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A7248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7324; } }
L_002A7248:
    set32(c.r[7], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 1;
L_002A724C:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A7324; }
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A7320; } }
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[7].w[0] + c.r[2].w[0]);
    c.r[11].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 50u));
    set32(c.r[10], c.r[7].w[0] + c.r[3].w[0]);
    c.r[14].d[0] = 0ull + 0ull;
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[2].d[0] & 63ull;  if (t) { goto L_002A7310; } }
L_002A7298:
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[7], c.r[10].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[9].w[0] + c.r[2].w[0]);  if (t) { goto L_002A72E4; } }
L_002A72AC:
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A72D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A72F4; } }
L_002A72D0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[12], c.r[12].w[0] + 1u);  goto L_002A72E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A72F4; } }
L_002A72E4:
    c.r[2].d[0] = c.r[12].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[12].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A72ACu | kUnwind; return; } goto L_002A72AC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A72F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[14].w[0] + c.r[11].w[0]);  goto L_002A7304; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7324; } }
L_002A7304:
    set32(c.r[2], c.r[13].w[0] + 1u);
    c.r[14].d[0] = c.r[3].d[0] & 65535ull;
    c.r[13].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_002A7310:
    c.r[2].d[0] = c.r[13].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[14].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7298u | kUnwind; return; } goto L_002A7298; }
L_002A7320:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A7324:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A7330:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u - 2u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[7].w[0] << 1);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[7].w[0] + c.r[18].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[20].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7388u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 393u, depth + 1u); else { c.pc = 0x002A7080u; return; } if (c.pc != 0x002A7388u) [[unlikely]] return; }
L_002A7388:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[18].w[0] << 1);  goto L_002A73E0; }
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73ACu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 393u, depth + 1u); else { c.pc = 0x002A7080u; return; } if (c.pc != 0x002A73ACu) [[unlikely]] return; }
L_002A73AC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = ld16((c.r[16].w[0]));  goto L_002A73BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0]));  if (t) { goto L_002A7428; } }
L_002A73BC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73CCu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 393u, depth + 1u); else { c.pc = 0x002A7080u; return; } if (c.pc != 0x002A73CCu) [[unlikely]] return; }
L_002A73CC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[2].d[0] = ld16((c.r[16].w[0]));  goto L_002A73D8; }
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 1;
L_002A73D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002A742C; } }
L_002A73E0:
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73F8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 393u, depth + 1u); else { c.pc = 0x002A7080u; return; } if (c.pc != 0x002A73F8u) [[unlikely]] return; }
L_002A73F8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = ld16((c.r[17].w[0]));  goto L_002A7408; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[16].w[0]));  if (t) { goto L_002A7428; } }
L_002A7408:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7418u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 393u, depth + 1u); else { c.pc = 0x002A7080u; return; } if (c.pc != 0x002A7418u) [[unlikely]] return; }
L_002A7418:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[2].d[0] = ld16((c.r[17].w[0]));  goto L_002A7428; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[18].w[0]));  if (t) { goto L_002A7428; } }
L_002A7428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002A742C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A7450:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002A7574; } }
    set32(c.r[17], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A74A4u); set32(c.r[16], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0069(c, 399u, depth + 1u); else { c.pc = 0x002A7330u; return; } if (c.pc != 0x002A74A4u) [[unlikely]] return; }
L_002A74A4:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002A74A8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002A74AC:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[23], c.r[21].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[23].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A74CCu); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 393u, depth + 1u); else { c.pc = 0x002A7080u; return; } if (c.pc != 0x002A74CCu) [[unlikely]] return; }
L_002A74CC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A74ACu | kUnwind; return; } goto L_002A74AC; }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002A74D8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[30], c.r[21].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[30].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A74F8u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 393u, depth + 1u); else { c.pc = 0x002A7080u; return; } if (c.pc != 0x002A74F8u) [[unlikely]] return; }
L_002A74F8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A74D8u | kUnwind; return; } goto L_002A74D8; }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A7520; } }
    c.r[3].d[0] = ld16((c.r[30].w[0]));
    c.r[2].d[0] = ld16((c.r[23].w[0]));
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A74A8u | kUnwind; return; } goto L_002A74A8; } }
L_002A7520:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[18].d[0]) { c.r[7].d[0] = c.r[19].d[0] + 0ull;  goto L_002A7548; }
    set32(c.r[8], c.r[16].w[0] - 1u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7540u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 405u, depth + 1u); else { c.pc = 0x002A7450u; return; } if (c.pc != 0x002A7540u) [[unlikely]] return; }
L_002A7540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_002A7578; } }
L_002A7548:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A755Cu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 405u, depth + 1u); else { c.pc = 0x002A7450u; return; } if (c.pc != 0x002A755Cu) [[unlikely]] return; }
L_002A755C:
    set32(c.r[7], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7574u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 405u, depth + 1u); else { c.pc = 0x002A7450u; return; } if (c.pc != 0x002A7574u) [[unlikely]] return; }
L_002A7574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002A7578:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002A75B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
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
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[16].w[0] << 1);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75F4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002A75F4u) [[unlikely]] return; }
L_002A75F4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7604u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002A7604u) [[unlikely]] return; }
L_002A7604:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002A7628; } }
L_002A7610:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
L_002A7628:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7610u | kUnwind; return; } goto L_002A7610; }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[16].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7650u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 405u, depth + 1u); else { c.pc = 0x002A7450u; return; } if (c.pc != 0x002A7650u) [[unlikely]] return; }
L_002A7650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002A7680; } }
L_002A7658:
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 10;
L_002A7680:
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7658u | kUnwind; return; } goto L_002A7658; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A76C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A7700; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A76F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A76F0u) [[unlikely]] return; }
L_002A76F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;  goto L_002A7704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A78B4; } }
L_002A7700:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 1;
L_002A7704:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A78B4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 20032u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A7728:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_002A78B4; } }
L_002A7734:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_002A78B4; } }
L_002A7740:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_002A78B4; } }
L_002A774C:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002A78B8; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A78B4; } }
L_002A7774:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A78B4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A78B4; } }
L_002A779C:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A78B4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A78B4; } }
L_002A77C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A78B4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A78B4; } }
L_002A77EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A78B4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A78B4; } }
L_002A7814:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A78B4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A78B4; } }
L_002A783C:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A78B4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A78B4; } }
L_002A7864:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A78B4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A78B4; } }
L_002A788C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A78B4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A78B4; } }
L_002A78B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A78B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A78B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A78D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A791Cu); c.r[16].d[0] = c.r[10].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A791Cu) [[unlikely]] return; }
L_002A791C:
    st32((c.r[21].w[0] + 32u), c.r[20].w[0]);
    st32((c.r[21].w[0] + 36u), c.r[19].w[0]);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 48u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { st32((c.r[21].w[0] + 40u), c.r[18].w[0]);  goto L_002A794C; }
    set32(c.r[6], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A7948; } }
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7948u); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_005F(c, 25u, depth + 1u); else { c.pc = 0x0027C650u; return; } if (c.pc != 0x002A7948u) [[unlikely]] return; }
L_002A7948:
    st32((c.r[21].w[0] + 40u), c.r[18].w[0]);
    c.budget -= 1;
L_002A794C:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    st32((c.r[21].w[0] + 44u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 63ull;
    c.r[6].d[0] = ld16((c.r[21].w[0] + 50u));
    set32(c.r[5], 0u - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 4095ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st16((c.r[21].w[0] + 50u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[21].w[0] + 50u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[22].d[0];
    st16((c.r[21].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A79B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A04u); c.r[16].d[0] = c.r[9].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7A04u) [[unlikely]] return; }
L_002A7A04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 32u)));  goto L_002A7AF4; }
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 36u)));  goto L_002A7A48; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A28u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7A28u) [[unlikely]] return; }
L_002A7A28:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002A7A44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A44u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 479u, depth + 1u); else { c.pc = 0x002BB970u; return; } if (c.pc != 0x002A7A44u) [[unlikely]] return; }
L_002A7A44:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 1;
L_002A7A48:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 40u)));  goto L_002A7A80; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A60u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7A60u) [[unlikely]] return; }
L_002A7A60:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002A7A7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A7Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 479u, depth + 1u); else { c.pc = 0x002BB970u; return; } if (c.pc != 0x002A7A7Cu) [[unlikely]] return; }
L_002A7A7C:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_002A7A80:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 44u)));  goto L_002A7AB8; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A98u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7A98u) [[unlikely]] return; }
L_002A7A98:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002A7AB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7AB4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 479u, depth + 1u); else { c.pc = 0x002BB970u; return; } if (c.pc != 0x002A7AB4u) [[unlikely]] return; }
L_002A7AB4:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 1;
L_002A7AB8:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_002A7B74; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7AD0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7AD0u) [[unlikely]] return; }
L_002A7AD0:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002A7B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7AECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 479u, depth + 1u); else { c.pc = 0x002BB970u; return; } if (c.pc != 0x002A7AECu) [[unlikely]] return; }
L_002A7AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7B70; } }
L_002A7AF4:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  goto L_002A7B14; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B10u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A7B10u) [[unlikely]] return; }
L_002A7B10:
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 1;
L_002A7B14:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 40u)));  goto L_002A7B34; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B30u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A7B30u) [[unlikely]] return; }
L_002A7B30:
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_002A7B34:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 44u)));  goto L_002A7B54; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B50u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A7B50u) [[unlikely]] return; }
L_002A7B50:
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 1;
L_002A7B54:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_002A7B70; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B70u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A7B70u) [[unlikely]] return; }
L_002A7B70:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_002A7B74:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B84u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7B84u) [[unlikely]] return; }
L_002A7B84:
    st32((c.r[21].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 36u), c.r[18].w[0]);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 48u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { st32((c.r[21].w[0] + 40u), c.r[17].w[0]);  goto L_002A7BB4; }
    set32(c.r[6], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A7BB0; } }
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7BB0u); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_005F(c, 25u, depth + 1u); else { c.pc = 0x0027C650u; return; } if (c.pc != 0x002A7BB0u) [[unlikely]] return; }
L_002A7BB0:
    st32((c.r[21].w[0] + 40u), c.r[17].w[0]);
    c.budget -= 1;
L_002A7BB4:
    c.r[3].d[0] = c.r[22].d[0] & 65535ull;
    st32((c.r[21].w[0] + 44u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 63ull;
    c.r[6].d[0] = ld16((c.r[21].w[0] + 50u));
    set32(c.r[5], 0u - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 4095ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st16((c.r[21].w[0] + 50u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[21].w[0] + 50u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[23].d[0];
    st16((c.r[21].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A7C20:
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002A7C5C; }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 50u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));  goto L_002A7C50; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7C5C; } }
L_002A7C50:
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_002A7C5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A7C70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 50u));
    c.r[3].d[0] = c.r[3].d[0] & 61440ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002A7CA4; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 1;
L_002A7CA4:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A7CF0; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[5], 0u + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CD0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002A7CD0u) [[unlikely]] return; }
L_002A7CD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CECu); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002A7CECu) [[unlikely]] return; }
L_002A7CEC:
    st32((c.r[19].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_002A7CF0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002A7D1C; }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D18u); mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]); c.r[6].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002A7D18u) [[unlikely]] return; }
L_002A7D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002A7D1C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A7D40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A7FAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 9968u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D70u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 379u, depth + 1u); else { c.pc = 0x002CB310u; return; } if (c.pc != 0x002A7D70u) [[unlikely]] return; }
L_002A7D70:
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_002A7DE0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002A7DBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D8Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A7D8Cu) [[unlikely]] return; }
L_002A7D8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D9Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A7D9Cu) [[unlikely]] return; }
L_002A7D9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A7DB8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7DB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7DB8u) [[unlikely]] return; }
L_002A7DB8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A7DBC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 56u), 0u);  if (t) { goto L_002A7DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7DCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A7DCCu) [[unlikely]] return; }
L_002A7DCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7DDCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A7DDCu) [[unlikely]] return; }
L_002A7DDC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002A7DE0:
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7DECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7DECu) [[unlikely]] return; }
L_002A7DEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  goto L_002A7EDC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_002A7E30; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7E10u) [[unlikely]] return; }
L_002A7E10:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002A7E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E2Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 479u, depth + 1u); else { c.pc = 0x002BB970u; return; } if (c.pc != 0x002A7E2Cu) [[unlikely]] return; }
L_002A7E2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_002A7E30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_002A7E68; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7E48u) [[unlikely]] return; }
L_002A7E48:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002A7E64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 479u, depth + 1u); else { c.pc = 0x002BB970u; return; } if (c.pc != 0x002A7E64u) [[unlikely]] return; }
L_002A7E64:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_002A7E68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_002A7EA0; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7E80u) [[unlikely]] return; }
L_002A7E80:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002A7E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7E9Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 479u, depth + 1u); else { c.pc = 0x002BB970u; return; } if (c.pc != 0x002A7E9Cu) [[unlikely]] return; }
L_002A7E9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_002A7EA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 56u);  goto L_002A7F3C; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7EB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7EB8u) [[unlikely]] return; }
L_002A7EB8:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002A7F38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7ED4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 479u, depth + 1u); else { c.pc = 0x002BB970u; return; } if (c.pc != 0x002A7ED4u) [[unlikely]] return; }
L_002A7ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7F38; } }
L_002A7EDC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7EF0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A7EF0u) [[unlikely]] return; }
L_002A7EF0:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F08u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A7F08u) [[unlikely]] return; }
L_002A7F08:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F20u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A7F20u) [[unlikely]] return; }
L_002A7F20:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F38u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002A7F38u) [[unlikely]] return; }
L_002A7F38:
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.budget -= 1;
L_002A7F3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002A7F88; }
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002A7F84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002A7F58u) [[unlikely]] return; }
L_002A7F58:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F68u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002A7F68u) [[unlikely]] return; }
L_002A7F68:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A7F84; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7F84u) [[unlikely]] return; }
L_002A7F84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A7F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002A7F90u) [[unlikely]] return; }
L_002A7F90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002A7FB0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FACu); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002A7FACu) [[unlikely]] return; }
L_002A7FAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A7FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A7FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FE8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002A7FE8u) [[unlikely]] return; }
L_002A7FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9968u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    [[clang::musttail]] return unit_006A(c, 1u, depth);
}

}
