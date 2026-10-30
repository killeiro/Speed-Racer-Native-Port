#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0006[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72,
    0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0,
    0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94,
    0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 99, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0,
    0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0,
    120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0,
    0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0,
    0, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0,
    205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0,
    221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    267, 268, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0,
    0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0,
    335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0,
    340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0,
    0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0,
    0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 407, 408, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414,
    0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0,
    0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0,
    0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0,
    454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0,
    0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0,
    480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0,
    483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 486, 0, 487, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0,
    499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0,
    0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    511, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 529, 0,
    0, 0, 0, 530, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0,
    0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0,
    0, 543, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 0, 553, 0, 0,
};

void unit_0006(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00118000;
    case 2u: goto L_00118010;
    case 3u: goto L_00118020;
    case 4u: goto L_0011803C;
    case 5u: goto L_00118040;
    case 6u: goto L_00118050;
    case 7u: goto L_00118080;
    case 8u: goto L_0011809C;
    case 9u: goto L_001180C0;
    case 10u: goto L_001180C8;
    case 11u: goto L_001180E0;
    case 12u: goto L_00118100;
    case 13u: goto L_00118138;
    case 14u: goto L_00118140;
    case 15u: goto L_0011814C;
    case 16u: goto L_001181AC;
    case 17u: goto L_001181E0;
    case 18u: goto L_0011821C;
    case 19u: goto L_00118230;
    case 20u: goto L_0011824C;
    case 21u: goto L_001182D4;
    case 22u: goto L_00118310;
    case 23u: goto L_00118344;
    case 24u: goto L_00118368;
    case 25u: goto L_0011839C;
    case 26u: goto L_001183E0;
    case 27u: goto L_00118424;
    case 28u: goto L_00118480;
    case 29u: goto L_001184E0;
    case 30u: goto L_001184E8;
    case 31u: goto L_00118534;
    case 32u: goto L_00118584;
    case 33u: goto L_001185E0;
    case 34u: goto L_0011865C;
    case 35u: goto L_00118694;
    case 36u: goto L_001186F8;
    case 37u: goto L_00118724;
    case 38u: goto L_00118744;
    case 39u: goto L_00118794;
    case 40u: goto L_001187E0;
    case 41u: goto L_0011883C;
    case 42u: goto L_00118840;
    case 43u: goto L_00118880;
    case 44u: goto L_00118890;
    case 45u: goto L_001188B0;
    case 46u: goto L_001188C0;
    case 47u: goto L_001188F0;
    case 48u: goto L_00118900;
    case 49u: goto L_00118914;
    case 50u: goto L_00118A00;
    case 51u: goto L_00118A84;
    case 52u: goto L_00118ACC;
    case 53u: goto L_00118B80;
    case 54u: goto L_00118BE0;
    case 55u: goto L_00118BF4;
    case 56u: goto L_00118C24;
    case 57u: goto L_00118CD8;
    case 58u: goto L_00118D38;
    case 59u: goto L_00118D3C;
    case 60u: goto L_00118D90;
    case 61u: goto L_00118DC0;
    case 62u: goto L_00118DD4;
    case 63u: goto L_00118DE4;
    case 64u: goto L_00118DF0;
    case 65u: goto L_00118E00;
    case 66u: goto L_00118E10;
    case 67u: goto L_00118E20;
    case 68u: goto L_00118E40;
    case 69u: goto L_00118E50;
    case 70u: goto L_00118E58;
    case 71u: goto L_00118E6C;
    case 72u: goto L_00118E7C;
    case 73u: goto L_00118E84;
    case 74u: goto L_00118E90;
    case 75u: goto L_00118E9C;
    case 76u: goto L_00118EA8;
    case 77u: goto L_00118EC0;
    case 78u: goto L_00118EE0;
    case 79u: goto L_00118EF0;
    case 80u: goto L_00118EF8;
    case 81u: goto L_00118F0C;
    case 82u: goto L_00118F1C;
    case 83u: goto L_00118F24;
    case 84u: goto L_00118F30;
    case 85u: goto L_00118F3C;
    case 86u: goto L_00118F48;
    case 87u: goto L_00118F60;
    case 88u: goto L_00118F90;
    case 89u: goto L_00118FA0;
    case 90u: goto L_00118FA8;
    case 91u: goto L_00118FC4;
    case 92u: goto L_00118FDC;
    case 93u: goto L_00118FE4;
    case 94u: goto L_00118FFC;
    case 95u: goto L_00119008;
    case 96u: goto L_0011901C;
    case 97u: goto L_0011902C;
    case 98u: goto L_00119034;
    case 99u: goto L_0011903C;
    case 100u: goto L_00119040;
    case 101u: goto L_0011904C;
    case 102u: goto L_00119070;
    case 103u: goto L_00119080;
    case 104u: goto L_00119094;
    case 105u: goto L_001190A8;
    case 106u: goto L_001190C0;
    case 107u: goto L_001190D4;
    case 108u: goto L_001190EC;
    case 109u: goto L_001190F8;
    case 110u: goto L_0011910C;
    case 111u: goto L_00119118;
    case 112u: goto L_00119130;
    case 113u: goto L_00119150;
    case 114u: goto L_0011916C;
    case 115u: goto L_0011917C;
    case 116u: goto L_00119194;
    case 117u: goto L_001191B0;
    case 118u: goto L_001191DC;
    case 119u: goto L_001191F0;
    case 120u: goto L_00119200;
    case 121u: goto L_00119214;
    case 122u: goto L_00119228;
    case 123u: goto L_00119230;
    case 124u: goto L_0011923C;
    case 125u: goto L_00119244;
    case 126u: goto L_00119250;
    case 127u: goto L_00119264;
    case 128u: goto L_00119274;
    case 129u: goto L_00119294;
    case 130u: goto L_001192B4;
    case 131u: goto L_001192BC;
    case 132u: goto L_001192D4;
    case 133u: goto L_001192F0;
    case 134u: goto L_00119300;
    case 135u: goto L_00119314;
    case 136u: goto L_00119340;
    case 137u: goto L_00119368;
    case 138u: goto L_00119380;
    case 139u: goto L_001193B8;
    case 140u: goto L_001193C8;
    case 141u: goto L_001193D8;
    case 142u: goto L_001193E8;
    case 143u: goto L_00119418;
    case 144u: goto L_00119420;
    case 145u: goto L_0011942C;
    case 146u: goto L_00119440;
    case 147u: goto L_00119450;
    case 148u: goto L_00119470;
    case 149u: goto L_00119478;
    case 150u: goto L_00119484;
    case 151u: goto L_00119498;
    case 152u: goto L_001194A8;
    case 153u: goto L_001194C8;
    case 154u: goto L_001194F0;
    case 155u: goto L_00119500;
    case 156u: goto L_00119520;
    case 157u: goto L_00119530;
    case 158u: goto L_00119540;
    case 159u: goto L_00119560;
    case 160u: goto L_00119584;
    case 161u: goto L_00119590;
    case 162u: goto L_001195A0;
    case 163u: goto L_001195A8;
    case 164u: goto L_001195BC;
    case 165u: goto L_001195D0;
    case 166u: goto L_001195D8;
    case 167u: goto L_001195E4;
    case 168u: goto L_001195FC;
    case 169u: goto L_00119610;
    case 170u: goto L_0011961C;
    case 171u: goto L_00119628;
    case 172u: goto L_00119650;
    case 173u: goto L_00119670;
    case 174u: goto L_00119688;
    case 175u: goto L_00119698;
    case 176u: goto L_001196A0;
    case 177u: goto L_001196B4;
    case 178u: goto L_001196C0;
    case 179u: goto L_001196CC;
    case 180u: goto L_001196E0;
    case 181u: goto L_001196F0;
    case 182u: goto L_00119714;
    case 183u: goto L_00119730;
    case 184u: goto L_00119748;
    case 185u: goto L_0011975C;
    case 186u: goto L_00119764;
    case 187u: goto L_00119774;
    case 188u: goto L_00119788;
    case 189u: goto L_00119798;
    case 190u: goto L_001197A0;
    case 191u: goto L_001197B4;
    case 192u: goto L_001197C0;
    case 193u: goto L_001197D4;
    case 194u: goto L_001197E0;
    case 195u: goto L_00119800;
    case 196u: goto L_0011981C;
    case 197u: goto L_0011982C;
    case 198u: goto L_0011983C;
    case 199u: goto L_0011984C;
    case 200u: goto L_00119860;
    case 201u: goto L_001198B4;
    case 202u: goto L_001198D0;
    case 203u: goto L_001198E8;
    case 204u: goto L_001198F0;
    case 205u: goto L_00119900;
    case 206u: goto L_00119914;
    case 207u: goto L_00119924;
    case 208u: goto L_0011992C;
    case 209u: goto L_00119940;
    case 210u: goto L_00119954;
    case 211u: goto L_00119960;
    case 212u: goto L_0011996C;
    case 213u: goto L_00119978;
    case 214u: goto L_00119990;
    case 215u: goto L_001199A4;
    case 216u: goto L_001199BC;
    case 217u: goto L_001199C4;
    case 218u: goto L_001199D4;
    case 219u: goto L_001199E8;
    case 220u: goto L_001199F8;
    case 221u: goto L_00119A00;
    case 222u: goto L_00119A14;
    case 223u: goto L_00119A28;
    case 224u: goto L_00119A40;
    case 225u: goto L_00119A7C;
    case 226u: goto L_00119AA8;
    case 227u: goto L_00119AD4;
    case 228u: goto L_00119B00;
    case 229u: goto L_00119B28;
    case 230u: goto L_00119B54;
    case 231u: goto L_00119B80;
    case 232u: goto L_00119BAC;
    case 233u: goto L_00119BD8;
    case 234u: goto L_00119C04;
    case 235u: goto L_00119C30;
    case 236u: goto L_00119C5C;
    case 237u: goto L_00119C88;
    case 238u: goto L_00119CB4;
    case 239u: goto L_00119CE0;
    case 240u: goto L_00119CE8;
    case 241u: goto L_00119CF0;
    case 242u: goto L_00119CF8;
    case 243u: goto L_00119D08;
    case 244u: goto L_00119D28;
    case 245u: goto L_00119D74;
    case 246u: goto L_00119D98;
    case 247u: goto L_00119DB4;
    case 248u: goto L_00119DD4;
    case 249u: goto L_00119E20;
    case 250u: goto L_00119E44;
    case 251u: goto L_00119E60;
    case 252u: goto L_00119E80;
    case 253u: goto L_00119ECC;
    case 254u: goto L_00119EF0;
    case 255u: goto L_00119F08;
    case 256u: goto L_00119F20;
    case 257u: goto L_00119F54;
    case 258u: goto L_00119F9C;
    case 259u: goto L_00119FF0;
    case 260u: goto L_0011A004;
    case 261u: goto L_0011A020;
    case 262u: goto L_0011A030;
    case 263u: goto L_0011A038;
    case 264u: goto L_0011A03C;
    case 265u: goto L_0011A050;
    case 266u: goto L_0011A078;
    case 267u: goto L_0011A080;
    case 268u: goto L_0011A084;
    case 269u: goto L_0011A090;
    case 270u: goto L_0011A0A0;
    case 271u: goto L_0011A0B0;
    case 272u: goto L_0011A0BC;
    case 273u: goto L_0011A0F0;
    case 274u: goto L_0011A0FC;
    case 275u: goto L_0011A130;
    case 276u: goto L_0011A13C;
    case 277u: goto L_0011A170;
    case 278u: goto L_0011A17C;
    case 279u: goto L_0011A1B0;
    case 280u: goto L_0011A1BC;
    case 281u: goto L_0011A1F0;
    case 282u: goto L_0011A1FC;
    case 283u: goto L_0011A230;
    case 284u: goto L_0011A23C;
    case 285u: goto L_0011A270;
    case 286u: goto L_0011A27C;
    case 287u: goto L_0011A290;
    case 288u: goto L_0011A2A4;
    case 289u: goto L_0011A2B0;
    case 290u: goto L_0011A2E4;
    case 291u: goto L_0011A2F0;
    case 292u: goto L_0011A324;
    case 293u: goto L_0011A330;
    case 294u: goto L_0011A364;
    case 295u: goto L_0011A370;
    case 296u: goto L_0011A3A4;
    case 297u: goto L_0011A3B0;
    case 298u: goto L_0011A3C0;
    case 299u: goto L_0011A3D4;
    case 300u: goto L_0011A3E0;
    case 301u: goto L_0011A414;
    case 302u: goto L_0011A420;
    case 303u: goto L_0011A454;
    case 304u: goto L_0011A460;
    case 305u: goto L_0011A470;
    case 306u: goto L_0011A484;
    case 307u: goto L_0011A490;
    case 308u: goto L_0011A4C0;
    case 309u: goto L_0011A4CC;
    case 310u: goto L_0011A4F0;
    case 311u: goto L_0011A528;
    case 312u: goto L_0011A540;
    case 313u: goto L_0011A58C;
    case 314u: goto L_0011A5A0;
    case 315u: goto L_0011A5C0;
    case 316u: goto L_0011A5E0;
    case 317u: goto L_0011A5FC;
    case 318u: goto L_0011A610;
    case 319u: goto L_0011A620;
    case 320u: goto L_0011A630;
    case 321u: goto L_0011A67C;
    case 322u: goto L_0011A690;
    case 323u: goto L_0011A6B0;
    case 324u: goto L_0011A6D0;
    case 325u: goto L_0011A6EC;
    case 326u: goto L_0011A700;
    case 327u: goto L_0011A710;
    case 328u: goto L_0011A720;
    case 329u: goto L_0011A76C;
    case 330u: goto L_0011A780;
    case 331u: goto L_0011A7A0;
    case 332u: goto L_0011A7C0;
    case 333u: goto L_0011A7DC;
    case 334u: goto L_0011A7F0;
    case 335u: goto L_0011A800;
    case 336u: goto L_0011A810;
    case 337u: goto L_0011A83C;
    case 338u: goto L_0011A85C;
    case 339u: goto L_0011A870;
    case 340u: goto L_0011A880;
    case 341u: goto L_0011A890;
    case 342u: goto L_0011A8B0;
    case 343u: goto L_0011A8CC;
    case 344u: goto L_0011A8E0;
    case 345u: goto L_0011A8F0;
    case 346u: goto L_0011A900;
    case 347u: goto L_0011A94C;
    case 348u: goto L_0011A960;
    case 349u: goto L_0011A980;
    case 350u: goto L_0011A9A0;
    case 351u: goto L_0011A9BC;
    case 352u: goto L_0011A9D0;
    case 353u: goto L_0011A9E0;
    case 354u: goto L_0011A9F0;
    case 355u: goto L_0011AA3C;
    case 356u: goto L_0011AA50;
    case 357u: goto L_0011AA70;
    case 358u: goto L_0011AA90;
    case 359u: goto L_0011AAAC;
    case 360u: goto L_0011AAC0;
    case 361u: goto L_0011AAD0;
    case 362u: goto L_0011AAE0;
    case 363u: goto L_0011AB2C;
    case 364u: goto L_0011AB40;
    case 365u: goto L_0011AB68;
    case 366u: goto L_0011AB84;
    case 367u: goto L_0011ABB4;
    case 368u: goto L_0011ABF0;
    case 369u: goto L_0011AC1C;
    case 370u: goto L_0011AC40;
    case 371u: goto L_0011AC4C;
    case 372u: goto L_0011AC58;
    case 373u: goto L_0011AC64;
    case 374u: goto L_0011AC84;
    case 375u: goto L_0011AC8C;
    case 376u: goto L_0011ACA4;
    case 377u: goto L_0011ACB0;
    case 378u: goto L_0011ACE0;
    case 379u: goto L_0011AD00;
    case 380u: goto L_0011AD10;
    case 381u: goto L_0011AD5C;
    case 382u: goto L_0011AD70;
    case 383u: goto L_0011AD98;
    case 384u: goto L_0011ADB4;
    case 385u: goto L_0011ADDC;
    case 386u: goto L_0011AE10;
    case 387u: goto L_0011AE38;
    case 388u: goto L_0011AE5C;
    case 389u: goto L_0011AE68;
    case 390u: goto L_0011AE74;
    case 391u: goto L_0011AE90;
    case 392u: goto L_0011AE98;
    case 393u: goto L_0011AEB0;
    case 394u: goto L_0011AEBC;
    case 395u: goto L_0011AEE0;
    case 396u: goto L_0011AF00;
    case 397u: goto L_0011AF10;
    case 398u: goto L_0011AF4C;
    case 399u: goto L_0011AF5C;
    case 400u: goto L_0011AF70;
    case 401u: goto L_0011AF98;
    case 402u: goto L_0011AFB4;
    case 403u: goto L_0011AFC0;
    case 404u: goto L_0011AFE0;
    case 405u: goto L_0011AFFC;
    case 406u: goto L_0011B03C;
    case 407u: goto L_0011B040;
    case 408u: goto L_0011B044;
    case 409u: goto L_0011B05C;
    case 410u: goto L_0011B068;
    case 411u: goto L_0011B080;
    case 412u: goto L_0011B0A0;
    case 413u: goto L_0011B0B0;
    case 414u: goto L_0011B0FC;
    case 415u: goto L_0011B110;
    case 416u: goto L_0011B138;
    case 417u: goto L_0011B154;
    case 418u: goto L_0011B16C;
    case 419u: goto L_0011B190;
    case 420u: goto L_0011B1AC;
    case 421u: goto L_0011B1D0;
    case 422u: goto L_0011B1E4;
    case 423u: goto L_0011B1EC;
    case 424u: goto L_0011B204;
    case 425u: goto L_0011B210;
    case 426u: goto L_0011B230;
    case 427u: goto L_0011B250;
    case 428u: goto L_0011B260;
    case 429u: goto L_0011B2AC;
    case 430u: goto L_0011B2C0;
    case 431u: goto L_0011B2DC;
    case 432u: goto L_0011B30C;
    case 433u: goto L_0011B314;
    case 434u: goto L_0011B32C;
    case 435u: goto L_0011B338;
    case 436u: goto L_0011B350;
    case 437u: goto L_0011B370;
    case 438u: goto L_0011B380;
    case 439u: goto L_0011B3CC;
    case 440u: goto L_0011B3E0;
    case 441u: goto L_0011B408;
    case 442u: goto L_0011B424;
    case 443u: goto L_0011B43C;
    case 444u: goto L_0011B460;
    case 445u: goto L_0011B47C;
    case 446u: goto L_0011B4AC;
    case 447u: goto L_0011B4B4;
    case 448u: goto L_0011B4CC;
    case 449u: goto L_0011B4D8;
    case 450u: goto L_0011B4F0;
    case 451u: goto L_0011B510;
    case 452u: goto L_0011B520;
    case 453u: goto L_0011B56C;
    case 454u: goto L_0011B580;
    case 455u: goto L_0011B5A8;
    case 456u: goto L_0011B5C4;
    case 457u: goto L_0011B5CC;
    case 458u: goto L_0011B5F0;
    case 459u: goto L_0011B60C;
    case 460u: goto L_0011B648;
    case 461u: goto L_0011B660;
    case 462u: goto L_0011B66C;
    case 463u: goto L_0011B690;
    case 464u: goto L_0011B6B0;
    case 465u: goto L_0011B6C0;
    case 466u: goto L_0011B6F0;
    case 467u: goto L_0011B710;
    case 468u: goto L_0011B72C;
    case 469u: goto L_0011B740;
    case 470u: goto L_0011B784;
    case 471u: goto L_0011B78C;
    case 472u: goto L_0011B7D0;
    case 473u: goto L_0011B7EC;
    case 474u: goto L_0011B810;
    case 475u: goto L_0011B82C;
    case 476u: goto L_0011B83C;
    case 477u: goto L_0011B844;
    case 478u: goto L_0011B860;
    case 479u: goto L_0011B870;
    case 480u: goto L_0011B880;
    case 481u: goto L_0011B8CC;
    case 482u: goto L_0011B8E0;
    case 483u: goto L_0011B900;
    case 484u: goto L_0011B938;
    case 485u: goto L_0011B950;
    case 486u: goto L_0011B994;
    case 487u: goto L_0011B99C;
    case 488u: goto L_0011B9A4;
    case 489u: goto L_0011B9B0;
    case 490u: goto L_0011B9BC;
    case 491u: goto L_0011B9D0;
    case 492u: goto L_0011B9DC;
    case 493u: goto L_0011B9F0;
    case 494u: goto L_0011BA30;
    case 495u: goto L_0011BA4C;
    case 496u: goto L_0011BA94;
    case 497u: goto L_0011BAE0;
    case 498u: goto L_0011BAF0;
    case 499u: goto L_0011BB00;
    case 500u: goto L_0011BB20;
    case 501u: goto L_0011BB30;
    case 502u: goto L_0011BB40;
    case 503u: goto L_0011BB60;
    case 504u: goto L_0011BB78;
    case 505u: goto L_0011BB90;
    case 506u: goto L_0011BBC0;
    case 507u: goto L_0011BBE0;
    case 508u: goto L_0011BBF8;
    case 509u: goto L_0011BC10;
    case 510u: goto L_0011BC40;
    case 511u: goto L_0011BC80;
    case 512u: goto L_0011BC88;
    case 513u: goto L_0011BCA0;
    case 514u: goto L_0011BCAC;
    case 515u: goto L_0011BCBC;
    case 516u: goto L_0011BCC4;
    case 517u: goto L_0011BD04;
    case 518u: goto L_0011BD14;
    case 519u: goto L_0011BD30;
    case 520u: goto L_0011BD3C;
    case 521u: goto L_0011BD48;
    case 522u: goto L_0011BD58;
    case 523u: goto L_0011BD9C;
    case 524u: goto L_0011BDA4;
    case 525u: goto L_0011BDBC;
    case 526u: goto L_0011BDC8;
    case 527u: goto L_0011BDD8;
    case 528u: goto L_0011BDE0;
    case 529u: goto L_0011BDF8;
    case 530u: goto L_0011BE0C;
    case 531u: goto L_0011BE18;
    case 532u: goto L_0011BE20;
    case 533u: goto L_0011BE38;
    case 534u: goto L_0011BE50;
    case 535u: goto L_0011BE58;
    case 536u: goto L_0011BE70;
    case 537u: goto L_0011BE8C;
    case 538u: goto L_0011BE94;
    case 539u: goto L_0011BEAC;
    case 540u: goto L_0011BEC8;
    case 541u: goto L_0011BED0;
    case 542u: goto L_0011BEE8;
    case 543u: goto L_0011BF04;
    case 544u: goto L_0011BF0C;
    case 545u: goto L_0011BF24;
    case 546u: goto L_0011BF34;
    case 547u: goto L_0011BF3C;
    case 548u: goto L_0011BF54;
    case 549u: goto L_0011BFB8;
    case 550u: goto L_0011BFC0;
    case 551u: goto L_0011BFD8;
    case 552u: goto L_0011BFE4;
    case 553u: goto L_0011BFF4;
    default: bad_entry(c, 0x00118000u); return;
    }
L_00118000:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0]), c.r[8].w[0]);  goto L_00118014; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 1;
L_00118010:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00118014:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118020:
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 7;
L_0011803C:
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 1;
L_00118040:
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_00118050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_001180A4; }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[29].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 6;
L_00118080:
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011809Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 28u, depth + 1u); else { c.pc = 0x00118480u; return; } if (c.pc != 0x0011809Cu) [[unlikely]] return; }
L_0011809C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001180CC; } }
L_001180A4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001180C8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_001180C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001180C8u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 26u, depth + 1u); else { c.pc = 0x001183E0u; return; } if (c.pc != 0x001180C8u) [[unlikely]] return; }
L_001180C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001180CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001180E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 8;
L_00118100:
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00118140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118138u); set32(c.r[5], c.r[5].w[0] - 12237u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00118138u) [[unlikely]] return; }
L_00118138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118140u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00118140u) [[unlikely]] return; }
L_00118140:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011814Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 17u, depth + 1u); else { c.pc = 0x001181E0u; return; } if (c.pc != 0x0011814Cu) [[unlikely]] return; }
L_0011814C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_00118170; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 5;
L_00118170:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00118190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_00118194; } }
L_00118190:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00118194:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001181ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x001181ACu) [[unlikely]] return; }
L_001181AC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001181BC; }
    st32((c.r[21].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001181BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001181E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001182E0; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 28u)));  goto L_00118214; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001182F8; } }
L_00118214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011821Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011821Cu) [[unlikely]] return; }
L_0011821C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118230u); mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00118230u) [[unlikely]] return; }
L_00118230:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[6], c.r[17].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_00118290; } }
L_0011824C:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[6].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 24u)));  goto L_00118270; }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_0011828C; } }
L_00118270:
    set32(c.r[2], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[7].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_0011828C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00118290:
    c.r[2].d[0] = c.r[7].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011824Cu | kUnwind; return; } goto L_0011824C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  goto L_001182D8; }
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[9], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[8], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001182D4u); set32(c.r[6], c.r[6].w[0] - 12576u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x001182D4u) [[unlikely]] return; }
L_001182D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_001182D8:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_001182E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_001182F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00118310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00118390; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 20u);  if (t) { goto L_00118368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_0011834C; } }
L_00118344:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_0011834C:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118344u | kUnwind; return; } goto L_00118344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_00118388; } }
L_00118368:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[2].d[0]) { st32((c.r[5].w[0]), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00118368u | kUnwind; return; } goto L_00118368; }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00118388:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00118390:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011839Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001188B0u; return; } if (c.pc != 0x0011839Cu) [[unlikely]] return; }
L_0011839C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001183E0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_001183F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00118478; } }
L_001183F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_00118410; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_00118410:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);  goto L_00118458; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00118448; } }
L_00118424:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[8].w[0] + 12u));
    st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 9;
L_00118448:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00118424u | kUnwind; return; } goto L_00118424; }
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_00118458:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_00118468; } }
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_00118468:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00118478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118480:
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
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00118890; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_001184EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001184E0u); set32(c.r[5], c.r[5].w[0] - 12266u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001184E0u) [[unlikely]] return; }
L_001184E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001184E8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001184E8u) [[unlikely]] return; }
L_001184E8:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_001184EC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_001186C8; }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_00118520; } }
    set32(c.r[4], c.r[4].w[0] + 15u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.budget -= 2;
L_00118520:
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[17].w[0] << 4);  goto L_001185D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00118570; } }
L_00118534:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_00118560; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 12u));
    st8((c.r[6].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 9;
L_00118560:
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_00118570:
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118534u | kUnwind; return; } goto L_00118534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001185C0; } }
L_00118584:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_001185B0; }
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 12u));
    st8((c.r[6].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 9;
L_001185B0:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_001185C0:
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118584u | kUnwind; return; } goto L_00118584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011868C; } }
L_001185D4:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_0011861C; } }
L_001185E0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_0011860C; }
    set32(c.r[4], ld32((c.r[8].w[0])));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[7].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 8u)));
    st32((c.r[7].w[0] + 8u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 12u));
    st8((c.r[7].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 9;
L_0011860C:
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0011861C:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001185E0u | kUnwind; return; } goto L_001185E0; } }
    set32(c.r[4], c.r[5].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  goto L_00118680; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00118650; } }
    set32(c.r[16], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_00118650:
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00118680; } }
L_0011865C:
    set32(c.r[3], c.r[3].w[0] - 16u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 12u));
    st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
L_00118680:
    c.r[1].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011865Cu | kUnwind; return; } goto L_0011865C; }
L_0011868C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001186B8; } }
L_00118694:
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 9;
L_001186B8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00118694u | kUnwind; return; } goto L_00118694; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00118894; } }
L_001186C8:
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_001186E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001186F0; } }
L_001186E8:
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_001186F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00118710; } }
L_001186F8:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_0011870C; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_0011870C:
    c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00118710:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001186F8u | kUnwind; return; } goto L_001186F8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118724u); set32(c.r[4], c.r[20].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00118724u) [[unlikely]] return; }
L_00118724:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00118780; } }
L_00118744:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  goto L_00118770; }
    set32(c.r[6], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 12u));
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 9;
L_00118770:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[6].w[0]);
    c.budget -= 4;
L_00118780:
    c.r[6].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118744u | kUnwind; return; } goto L_00118744; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001187D0; } }
L_00118794:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  goto L_001187C0; }
    set32(c.r[6], ld32((c.r[16].w[0])));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 12u));
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 9;
L_001187C0:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[6].w[0]);
    c.budget -= 4;
L_001187D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118794u | kUnwind; return; } goto L_00118794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_00118820; } }
L_001187E0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  goto L_0011880C; }
    set32(c.r[6], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 12u));
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 9;
L_0011880C:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[6].w[0]);
    c.r[6].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00118820:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001187E0u | kUnwind; return; } goto L_001187E0; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_00118878; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 2;
L_0011883C:
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_00118840:
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
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 14;
L_00118878:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_00118890; } }
L_00118880:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00118890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118890u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00118890u) [[unlikely]] return; }
L_00118890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00118894:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001188B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
L_001188C0:
    st32((c.r[29].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00118934; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[6].w[0])));  goto L_00118938; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[6].w[0] + 8u)));  goto L_0011891C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[5].w[0])));  if (t) { goto L_001188F8; } }
L_001188F0:
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 2;
L_001188F8:
    c.budget -= 2;
L_00118900:
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001188F0u | kUnwind; return; } goto L_001188F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00118934; } }
L_00118914:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 2;
L_0011891C:
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118914u | kUnwind; return; } goto L_00118914; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00118934:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 1;
L_00118938:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[6].w[0] + 4u)));  goto L_00118940; }
L_00118940:
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] & c.r[3].d[0];  if (t) { goto L_00118960; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[17].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00118960:
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], 0u - 2u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 6;
    if (c.r[6].d[0] != c.r[3].d[0]) { st32((c.r[7].w[0] + 4u), c.r[5].w[0]);  goto L_00118984; }
    st32((c.r[7].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00118988; } }
L_00118984:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00118988:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00118A5C; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[9], 0u - 2u);
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[8].d[0] = c.r[7].d[0] & c.r[9].d[0];
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.budget -= 11;
    if (c.r[4].d[0] != c.r[7].d[0]) { st32((c.r[8].w[0] + 4u), c.r[6].w[0]);  goto L_001189D0; }
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_001189D0:
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; st32((c.r[6].w[0]), c.r[8].w[0]);  if (t) { goto L_001189F0; } }
    set32(c.r[7], ld32((c.r[8].w[0] + 8u)));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.r[7].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 8u), c.r[7].w[0]);  if (t) { goto L_001189F4; } }
L_001189F0:
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_001189F4:
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; st32((c.r[6].w[0] + 4u), c.r[8].w[0]);  if (t) { goto L_00118A14; } }
L_00118A00:
    set32(c.r[7], ld32((c.r[8].w[0] + 8u)));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.r[7].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 8u), c.r[7].w[0]);  if (t) { goto L_00118A18; } }
L_00118A14:
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_00118A18:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[7].d[0] == 0ull) { set32(c.r[8], ld32((c.r[6].w[0] + 8u)));  goto L_00118A3C; }
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    c.r[7].d[0] = c.r[7].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.r[7].w[0]);  if (t) { goto L_00118A48; } }
L_00118A3C:
    set32(c.r[7], 0u - 2u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 3;
L_00118A48:
    set32(c.r[7], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_00118A74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[6].w[0]);  if (t) { goto L_00118A74; } }
L_00118A5C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00118A74; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_00118A74; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00118A74:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00118D80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_00118D40; } }
L_00118A84:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_00118BE8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[6].d[0] & 1ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[4].w[0])));  goto L_00118AD4; }
    set32(c.r[2], 0u - 2u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118ACCu); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 80u, depth + 1u); else { c.pc = 0x00114A00u; return; } if (c.pc != 0x00118ACCu) [[unlikely]] return; }
L_00118ACC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_00118AD4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00118AF4; }
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_00118B40; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00118AF4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 8u)));  goto L_00118B14; }
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00118B3C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_00118B14:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = c.r[6].d[0] | 1ull;
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[17].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[5].d[0] ^ c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00118D3C; } }
L_00118B3C:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00118B40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 8u)));  goto L_00118B60; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_00118B88; }
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 1;
L_00118B60:
    set32(c.r[2], 0u - 2u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118B80u); st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 79u, depth + 1u); else { c.pc = 0x00114980u; return; } if (c.pc != 0x00118B80u) [[unlikely]] return; }
L_00118B80:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_00118B88:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_00118BA8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00118BB4; } }
L_00118BA8:
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_00118BB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], 0u - 2u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118BE0u); st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 80u, depth + 1u); else { c.pc = 0x00114A00u; return; } if (c.pc != 0x00118BE0u) [[unlikely]] return; }
L_00118BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_00118D3C; } }
L_00118BE8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 3;
L_00118BF4:
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0])));  goto L_00118C2C; }
    set32(c.r[2], 0u - 2u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118C24u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 79u, depth + 1u); else { c.pc = 0x00114980u; return; } if (c.pc != 0x00118C24u) [[unlikely]] return; }
L_00118C24:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_00118C2C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00118C4C; }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00118C94; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00118C4C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 8u)));  goto L_00118C6C; }
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00118C94; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_00118C6C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = c.r[6].d[0] | 1ull;
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[17].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[5].d[0] ^ c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00118D3C; } }
L_00118C94:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 4u)));  goto L_00118CB4; }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_00118CE0; }
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00118CB4:
    set32(c.r[2], 0u - 2u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118CD8u); st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 80u, depth + 1u); else { c.pc = 0x00114A00u; return; } if (c.pc != 0x00118CD8u) [[unlikely]] return; }
L_00118CD8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_00118CE0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_00118D00; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00118D0C; } }
L_00118D00:
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_00118D0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], 0u - 2u);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118D38u); st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 79u, depth + 1u); else { c.pc = 0x00114980u; return; } if (c.pc != 0x00118D38u) [[unlikely]] return; }
L_00118D38:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_00118D3C:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_00118D40:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00118D64; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118A84u | kUnwind; return; } goto L_00118A84; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118A84u | kUnwind; return; } goto L_00118A84; } }
L_00118D64:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00118D7C; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00118D7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00118D80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00118D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00118DDC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_00118DBC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00118DE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00118DE4; } }
L_00118DBC:
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_00118DC0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00118DE4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118DD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0005(c, 270u, depth + 1u); else { c.pc = 0x00117980u; return; } if (c.pc != 0x00118DD4u) [[unlikely]] return; }
L_00118DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00118DE4; } }
L_00118DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118DE4u); set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_0005(c, 268u, depth + 1u); else { c.pc = 0x00117950u; return; } if (c.pc != 0x00118DE4u) [[unlikely]] return; }
L_00118DE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00118DE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00118DF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] - 12029u);  [[clang::musttail]] return unit_000F(c, 247u, depth); }
L_00118E00:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001177F0u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 258u, depth); }
L_00118E10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001178F0u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 265u, depth); }
L_00118E20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[5], 0u + 10240u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118E40u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0013D9B0u; return; } if (c.pc != 0x00118E40u) [[unlikely]] return; }
L_00118E40:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118E50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x00118E50u) [[unlikely]] return; }
L_00118E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118E58u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0005(c, 215u, depth + 1u); else { c.pc = 0x00117370u; return; } if (c.pc != 0x00118E58u) [[unlikely]] return; }
L_00118E58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] - 12025u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118E6Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013D500u; return; } if (c.pc != 0x00118E6Cu) [[unlikely]] return; }
L_00118E6C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118E7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 110u, depth + 1u); else { c.pc = 0x0013D440u; return; } if (c.pc != 0x00118E7Cu) [[unlikely]] return; }
L_00118E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118E84u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 65u, depth + 1u); else { c.pc = 0x0013CA00u; return; } if (c.pc != 0x00118E84u) [[unlikely]] return; }
L_00118E84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118E90u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00118E90u) [[unlikely]] return; }
L_00118E90:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118E9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 427u, depth + 1u); else { c.pc = 0x001234B0u; return; } if (c.pc != 0x00118E9Cu) [[unlikely]] return; }
L_00118E9C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118EA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x00118EA8u) [[unlikely]] return; }
L_00118EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00118EC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[5], 0u + 10240u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118EE0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0013D9B0u; return; } if (c.pc != 0x00118EE0u) [[unlikely]] return; }
L_00118EE0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118EF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x00118EF0u) [[unlikely]] return; }
L_00118EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118EF8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0006(c, 510u, depth + 1u); else { c.pc = 0x0011BC40u; return; } if (c.pc != 0x00118EF8u) [[unlikely]] return; }
L_00118EF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] - 12025u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013D500u; return; } if (c.pc != 0x00118F0Cu) [[unlikely]] return; }
L_00118F0C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 110u, depth + 1u); else { c.pc = 0x0013D440u; return; } if (c.pc != 0x00118F1Cu) [[unlikely]] return; }
L_00118F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F24u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 65u, depth + 1u); else { c.pc = 0x0013CA00u; return; } if (c.pc != 0x00118F24u) [[unlikely]] return; }
L_00118F24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F30u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00118F30u) [[unlikely]] return; }
L_00118F30:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 427u, depth + 1u); else { c.pc = 0x001234B0u; return; } if (c.pc != 0x00118F3Cu) [[unlikely]] return; }
L_00118F3C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x00118F48u) [[unlikely]] return; }
L_00118F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00118F60:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F90u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0013D9B0u; return; } if (c.pc != 0x00118F90u) [[unlikely]] return; }
L_00118F90:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118FA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x00118FA0u) [[unlikely]] return; }
L_00118FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118FA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 265u, depth + 1u); else { c.pc = 0x001178F0u; return; } if (c.pc != 0x00118FA8u) [[unlikely]] return; }
L_00118FA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_00118FCC; }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118FC4u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0007(c, 400u, depth + 1u); else { c.pc = 0x0011FF50u; return; } if (c.pc != 0x00118FC4u) [[unlikely]] return; }
L_00118FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_00119000; } }
L_00118FCC:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118FDCu); set32(c.r[5], c.r[5].w[0] - 12160u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x00118FDCu) [[unlikely]] return; }
L_00118FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118FE4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00118FE4u) [[unlikely]] return; }
L_00118FE4:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00118FFCu); set32(c.r[5], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00118FFCu) [[unlikely]] return; }
L_00118FFC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_00119000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119008u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 427u, depth + 1u); else { c.pc = 0x001234B0u; return; } if (c.pc != 0x00119008u) [[unlikely]] return; }
L_00119008:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[5].w[0] - 12025u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011901Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013D500u; return; } if (c.pc != 0x0011901Cu) [[unlikely]] return; }
L_0011901C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011902Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 110u, depth + 1u); else { c.pc = 0x0013D440u; return; } if (c.pc != 0x0011902Cu) [[unlikely]] return; }
L_0011902C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119034u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 65u, depth + 1u); else { c.pc = 0x0013CA00u; return; } if (c.pc != 0x00119034u) [[unlikely]] return; }
L_00119034:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119040u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00119040u) [[unlikely]] return; }
    goto L_00119040;
L_0011903C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00119040:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011904Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x0011904Cu) [[unlikely]] return; }
L_0011904C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00119070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 4;
L_00119080:
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119094u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 265u, depth + 1u); else { c.pc = 0x001178F0u; return; } if (c.pc != 0x00119094u) [[unlikely]] return; }
L_00119094:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_001190C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001190A8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001190A8u) [[unlikely]] return; }
L_001190A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001190C0u); set32(c.r[6], c.r[6].w[0] - 12023u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x001190C0u) [[unlikely]] return; }
L_001190C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0011911C; } }
L_001190C8:
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001190D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001190D4u) [[unlikely]] return; }
L_001190D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00119100; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001190ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001190ECu) [[unlikely]] return; }
L_001190EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001190F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001190F8u) [[unlikely]] return; }
L_001190F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119118; } }
L_00119100:
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011910Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011910Cu) [[unlikely]] return; }
L_0011910C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119118u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00119118u) [[unlikely]] return; }
L_00119118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0011911C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00119130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119150u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 265u, depth + 1u); else { c.pc = 0x001178F0u; return; } if (c.pc != 0x00119150u) [[unlikely]] return; }
L_00119150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119174; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011916Cu); set32(c.r[6], c.r[6].w[0] - 11995u);  if (depth < kMaxDepth) unit_0005(c, 227u, depth + 1u); else { c.pc = 0x00117480u; return; } if (c.pc != 0x0011916Cu) [[unlikely]] return; }
L_0011916C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00119198; } }
L_00119174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011917Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011917Cu) [[unlikely]] return; }
L_0011917C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119194u); set32(c.r[6], c.r[6].w[0] - 12023u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00119194u) [[unlikely]] return; }
L_00119194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00119198:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001191B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001191DCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 265u, depth + 1u); else { c.pc = 0x001178F0u; return; } if (c.pc != 0x001191DCu) [[unlikely]] return; }
L_001191DC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00119318; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001191F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001191F0u) [[unlikely]] return; }
L_001191F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_0011921C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119200u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 220u, depth + 1u); else { c.pc = 0x003B6890u; return; } if (c.pc != 0x00119200u) [[unlikely]] return; }
L_00119200:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00119214u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00119214u) [[unlikely]] return; }
L_00119214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119314; } }
L_0011921C:
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00119228u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00119228u) [[unlikely]] return; }
L_00119228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119230u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 80u, depth + 1u); else { c.pc = 0x0011C920u; return; } if (c.pc != 0x00119230u) [[unlikely]] return; }
L_00119230:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0011926C; } }
L_0011923C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119244u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 158u, depth + 1u); else { c.pc = 0x00119540u; return; } if (c.pc != 0x00119244u) [[unlikely]] return; }
L_00119244:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119250u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00119250u) [[unlikely]] return; }
L_00119250:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0011926C; }
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119264u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 158u, depth + 1u); else { c.pc = 0x00119540u; return; } if (c.pc != 0x00119264u) [[unlikely]] return; }
L_00119264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00119298; } }
L_0011926C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119274u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0006(c, 157u, depth + 1u); else { c.pc = 0x00119530u; return; } if (c.pc != 0x00119274u) [[unlikely]] return; }
L_00119274:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011923Cu | kUnwind; return; } goto L_0011923C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00119298; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119294u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 136u, depth + 1u); else { c.pc = 0x00119340u; return; } if (c.pc != 0x00119294u) [[unlikely]] return; }
L_00119294:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00119298:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + c.r[3].w[0]);  if (t) { goto L_001192CC; } }
L_001192B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001192BCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AD(c, 347u, depth + 1u); else { c.pc = 0x003B7C20u; return; } if (c.pc != 0x001192BCu) [[unlikely]] return; }
L_001192BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001192CC; }
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001192CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001192D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001192D4u) [[unlikely]] return; }
L_001192D4:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001192B4u | kUnwind; return; } goto L_001192B4; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  goto L_001192F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001192F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 220u, depth + 1u); else { c.pc = 0x003B6890u; return; } if (c.pc != 0x001192F0u) [[unlikely]] return; }
L_001192F0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 2;
L_001192F8:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00119300:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00119314u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00119314u) [[unlikely]] return; }
L_00119314:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00119318:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00119340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00119394; } }
L_00119368:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119380u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00119380u) [[unlikely]] return; }
L_00119380:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00119394; }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);  if (t) { goto L_001194C8; } }
L_00119394:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00119368u | kUnwind; return; } goto L_00119368; }
    set32(c.r[16], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001194C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001193F4; } }
L_001193B8:
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001193C8u); set32(c.r[19], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0006(c, 156u, depth + 1u); else { c.pc = 0x00119520u; return; } if (c.pc != 0x001193C8u) [[unlikely]] return; }
L_001193C8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001193D8u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001193D8u) [[unlikely]] return; }
L_001193D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001193F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001193E8u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0006(c, 156u, depth + 1u); else { c.pc = 0x00119520u; return; } if (c.pc != 0x001193E8u) [[unlikely]] return; }
L_001193E8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);  if (t) { goto L_001194C8; } }
L_001193F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001193B8u | kUnwind; return; } goto L_001193B8; }
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001194C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00119448; } }
L_00119418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119420u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 155u, depth + 1u); else { c.pc = 0x00119500u; return; } if (c.pc != 0x00119420u) [[unlikely]] return; }
L_00119420:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011942Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0011942Cu) [[unlikely]] return; }
L_0011942C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00119448; }
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119440u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 155u, depth + 1u); else { c.pc = 0x00119500u; return; } if (c.pc != 0x00119440u) [[unlikely]] return; }
L_00119440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001194C8; } }
L_00119448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119450u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0006(c, 154u, depth + 1u); else { c.pc = 0x001194F0u; return; } if (c.pc != 0x00119450u) [[unlikely]] return; }
L_00119450:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00119418u | kUnwind; return; } goto L_00119418; }
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001194C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001194A0; } }
L_00119470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119478u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 158u, depth + 1u); else { c.pc = 0x00119540u; return; } if (c.pc != 0x00119478u) [[unlikely]] return; }
L_00119478:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119484u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00119484u) [[unlikely]] return; }
L_00119484:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001194A0; }
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119498u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 158u, depth + 1u); else { c.pc = 0x00119540u; return; } if (c.pc != 0x00119498u) [[unlikely]] return; }
L_00119498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001194C8; } }
L_001194A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001194A8u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0006(c, 157u, depth + 1u); else { c.pc = 0x00119530u; return; } if (c.pc != 0x001194A8u) [[unlikely]] return; }
L_001194A8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00119470u | kUnwind; return; } goto L_00119470; }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001194C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001194C8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 136u, depth + 1u); else { c.pc = 0x00119340u; return; } if (c.pc != 0x001194C8u) [[unlikely]] return; }
L_001194C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001194F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00119500:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00119520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 12u);  c.pc = t; return; }
L_00119530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00119540:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00119560:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119584u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0005(c, 265u, depth + 1u); else { c.pc = 0x001178F0u; return; } if (c.pc != 0x00119584u) [[unlikely]] return; }
L_00119584:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119590u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00119590u) [[unlikely]] return; }
L_00119590:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_001195C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001195A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 220u, depth + 1u); else { c.pc = 0x003B6890u; return; } if (c.pc != 0x001195A0u) [[unlikely]] return; }
L_001195A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001195A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 265u, depth + 1u); else { c.pc = 0x001178F0u; return; } if (c.pc != 0x001195A8u) [[unlikely]] return; }
L_001195A8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001195BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001195BCu) [[unlikely]] return; }
L_001195BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0011962C; } }
L_001195C4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001195D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x001195D0u) [[unlikely]] return; }
L_001195D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001195D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001195D8u) [[unlikely]] return; }
L_001195D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001195E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001195E4u) [[unlikely]] return; }
L_001195E4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001195FCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 128u, depth + 1u); else { c.pc = 0x0013D8F0u; return; } if (c.pc != 0x001195FCu) [[unlikely]] return; }
L_001195FC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119610u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0008(c, 410u, depth + 1u); else { c.pc = 0x00123290u; return; } if (c.pc != 0x00119610u) [[unlikely]] return; }
L_00119610:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011961Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x0011961Cu) [[unlikely]] return; }
L_0011961C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119628u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 427u, depth + 1u); else { c.pc = 0x001234B0u; return; } if (c.pc != 0x00119628u) [[unlikely]] return; }
L_00119628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0011962C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00119650:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119670u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00119670u) [[unlikely]] return; }
L_00119670:
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119688u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 128u, depth + 1u); else { c.pc = 0x0013D8F0u; return; } if (c.pc != 0x00119688u) [[unlikely]] return; }
L_00119688:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119698u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x00119698u) [[unlikely]] return; }
L_00119698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001196A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 265u, depth + 1u); else { c.pc = 0x001178F0u; return; } if (c.pc != 0x001196A0u) [[unlikely]] return; }
L_001196A0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001196B4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 13u, depth + 1u); else { c.pc = 0x001200F0u; return; } if (c.pc != 0x001196B4u) [[unlikely]] return; }
L_001196B4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001196C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 427u, depth + 1u); else { c.pc = 0x001234B0u; return; } if (c.pc != 0x001196C0u) [[unlikely]] return; }
L_001196C0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001196CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x001196CCu) [[unlikely]] return; }
L_001196CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001196E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001196F0u);  if (depth < kMaxDepth) unit_0005(c, 265u, depth + 1u); else { c.pc = 0x001178F0u; return; } if (c.pc != 0x001196F0u) [[unlikely]] return; }
L_001196F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00119718; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119714; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00119714u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00119714u) [[unlikely]] return; }
L_00119714:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00119718:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00119730:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119748u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x00119748u) [[unlikely]] return; }
L_00119748:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011975Cu); set32(c.r[6], c.r[6].w[0] - 11994u);  if (depth < kMaxDepth) unit_000F(c, 42u, depth + 1u); else { c.pc = 0x0013C4E0u; return; } if (c.pc != 0x0011975Cu) [[unlikely]] return; }
L_0011975C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119764u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0005(c, 252u, depth + 1u); else { c.pc = 0x00117730u; return; } if (c.pc != 0x00119764u) [[unlikely]] return; }
L_00119764:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119774u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x00119774u) [[unlikely]] return; }
L_00119774:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119788u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0008(c, 13u, depth + 1u); else { c.pc = 0x001200F0u; return; } if (c.pc != 0x00119788u) [[unlikely]] return; }
L_00119788:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119798u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 427u, depth + 1u); else { c.pc = 0x001234B0u; return; } if (c.pc != 0x00119798u) [[unlikely]] return; }
L_00119798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001197A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 252u, depth + 1u); else { c.pc = 0x00117730u; return; } if (c.pc != 0x001197A0u) [[unlikely]] return; }
L_001197A0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 4u)));  goto L_001197C8; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001197B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x001197B4u) [[unlikely]] return; }
L_001197B4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001197C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x001197C0u) [[unlikely]] return; }
L_001197C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001197E4; } }
L_001197C8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001197D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x001197D4u) [[unlikely]] return; }
L_001197D4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001197E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x001197E0u) [[unlikely]] return; }
L_001197E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001197E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00119800:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011981Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 87u, depth + 1u); else { c.pc = 0x00118F60u; return; } if (c.pc != 0x0011981Cu) [[unlikely]] return; }
L_0011981C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011982Cu); set32(c.r[5], c.r[5].w[0] - 11991u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0011982Cu) [[unlikely]] return; }
L_0011982C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011983Cu); set32(c.r[5], c.r[5].w[0] - 11979u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0011983Cu) [[unlikely]] return; }
L_0011983C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011984Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 465u, depth + 1u); else { c.pc = 0x0011B6C0u; return; } if (c.pc != 0x0011984Cu) [[unlikely]] return; }
L_0011984C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119860u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 465u, depth + 1u); else { c.pc = 0x0011B6C0u; return; } if (c.pc != 0x00119860u) [[unlikely]] return; }
L_00119860:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 160u)));  goto L_001198B8; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001198B4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 128u));  goto L_0011988C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 132u)));  if (t) { goto L_00119894; } }
L_0011988C:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 2;
L_00119894:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001198B4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x001198B4u) [[unlikely]] return; }
L_001198B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_001198B8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 161u);  goto L_001198C8; }
    set32(c.r[16], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_001198C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001198D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001198D0u) [[unlikely]] return; }
L_001198D0:
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001198E8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 128u, depth + 1u); else { c.pc = 0x0013D8F0u; return; } if (c.pc != 0x001198E8u) [[unlikely]] return; }
L_001198E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001198F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0005(c, 252u, depth + 1u); else { c.pc = 0x00117730u; return; } if (c.pc != 0x001198F0u) [[unlikely]] return; }
L_001198F0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119900u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x00119900u) [[unlikely]] return; }
L_00119900:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119914u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0008(c, 13u, depth + 1u); else { c.pc = 0x001200F0u; return; } if (c.pc != 0x00119914u) [[unlikely]] return; }
L_00119914:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119924u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 427u, depth + 1u); else { c.pc = 0x001234B0u; return; } if (c.pc != 0x00119924u) [[unlikely]] return; }
L_00119924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011992Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 252u, depth + 1u); else { c.pc = 0x00117730u; return; } if (c.pc != 0x0011992Cu) [[unlikely]] return; }
L_0011992C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 4u)));  goto L_00119948; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119940u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x00119940u) [[unlikely]] return; }
L_00119940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00119954; } }
L_00119948:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119954u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x00119954u) [[unlikely]] return; }
L_00119954:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119960u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00119960u) [[unlikely]] return; }
L_00119960:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011996Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0011996Cu) [[unlikely]] return; }
L_0011996C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119978u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00119978u) [[unlikely]] return; }
L_00119978:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00119990:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001199A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001199A4u) [[unlikely]] return; }
L_001199A4:
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001199BCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 128u, depth + 1u); else { c.pc = 0x0013D8F0u; return; } if (c.pc != 0x001199BCu) [[unlikely]] return; }
L_001199BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001199C4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0005(c, 252u, depth + 1u); else { c.pc = 0x00117730u; return; } if (c.pc != 0x001199C4u) [[unlikely]] return; }
L_001199C4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001199D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x001199D4u) [[unlikely]] return; }
L_001199D4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001199E8u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0008(c, 13u, depth + 1u); else { c.pc = 0x001200F0u; return; } if (c.pc != 0x001199E8u) [[unlikely]] return; }
L_001199E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001199F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 427u, depth + 1u); else { c.pc = 0x001234B0u; return; } if (c.pc != 0x001199F8u) [[unlikely]] return; }
L_001199F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A00u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 252u, depth + 1u); else { c.pc = 0x00117730u; return; } if (c.pc != 0x00119A00u) [[unlikely]] return; }
L_00119A00:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 4u)));  goto L_00119A1C; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x00119A14u) [[unlikely]] return; }
L_00119A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00119A2C; } }
L_00119A1C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x00119A28u) [[unlikely]] return; }
L_00119A28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00119A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00119A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 11966u);
    set32(c.r[5], c.r[5].w[0] - 11941u);
    set32(c.r[6], c.r[6].w[0] - 11937u);
    set32(c.r[7], c.r[7].w[0] - 26224u);
    set32(c.r[8], c.r[8].w[0] - 11931u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A7Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119A7Cu) [[unlikely]] return; }
L_00119A7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11891u);
    set32(c.r[5], c.r[5].w[0] - 11941u);
    set32(c.r[6], c.r[6].w[0] - 11937u);
    set32(c.r[7], c.r[7].w[0] - 26832u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119AA8u); set32(c.r[8], c.r[8].w[0] - 11858u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119AA8u) [[unlikely]] return; }
L_00119AA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11813u);
    set32(c.r[5], c.r[5].w[0] - 11790u);
    set32(c.r[6], c.r[6].w[0] - 11941u);
    set32(c.r[7], c.r[7].w[0] - 26912u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119AD4u); set32(c.r[8], c.r[8].w[0] - 11785u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119AD4u) [[unlikely]] return; }
L_00119AD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11766u);
    set32(c.r[5], c.r[5].w[0] - 11740u);
    set32(c.r[6], c.r[6].w[0] - 11733u);
    set32(c.r[7], c.r[7].w[0] - 28832u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119B00u); set32(c.r[8], c.r[8].w[0] - 11724u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119B00u) [[unlikely]] return; }
L_00119B00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] - 11941u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11692u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 26624u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119B28u); set32(c.r[8], c.r[8].w[0] - 11670u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119B28u) [[unlikely]] return; }
L_00119B28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11616u);
    set32(c.r[5], c.r[5].w[0] - 11740u);
    set32(c.r[6], c.r[6].w[0] - 11941u);
    set32(c.r[7], c.r[7].w[0] - 28368u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119B54u); set32(c.r[8], c.r[8].w[0] - 11592u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119B54u) [[unlikely]] return; }
L_00119B54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11542u);
    set32(c.r[5], c.r[5].w[0] - 11740u);
    set32(c.r[6], c.r[6].w[0] - 11941u);
    set32(c.r[7], c.r[7].w[0] - 28560u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119B80u); set32(c.r[8], c.r[8].w[0] - 11518u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119B80u) [[unlikely]] return; }
L_00119B80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11477u);
    set32(c.r[5], c.r[5].w[0] - 12084u);
    set32(c.r[6], c.r[6].w[0] - 11454u);
    set32(c.r[7], c.r[7].w[0] - 27056u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119BACu); set32(c.r[8], c.r[8].w[0] - 11443u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119BACu) [[unlikely]] return; }
L_00119BAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11415u);
    set32(c.r[5], c.r[5].w[0] - 11740u);
    set32(c.r[6], c.r[6].w[0] - 12084u);
    set32(c.r[7], c.r[7].w[0] - 28992u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119BD8u); set32(c.r[8], c.r[8].w[0] - 11391u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119BD8u) [[unlikely]] return; }
L_00119BD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11371u);
    set32(c.r[5], c.r[5].w[0] - 11740u);
    set32(c.r[6], c.r[6].w[0] - 12084u);
    set32(c.r[7], c.r[7].w[0] - 29152u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119C04u); set32(c.r[8], c.r[8].w[0] - 11345u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119C04u) [[unlikely]] return; }
L_00119C04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11298u);
    set32(c.r[5], c.r[5].w[0] - 11274u);
    set32(c.r[6], c.r[6].w[0] - 11941u);
    set32(c.r[7], c.r[7].w[0] - 29168u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119C30u); set32(c.r[8], c.r[8].w[0] - 11268u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119C30u) [[unlikely]] return; }
L_00119C30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11241u);
    set32(c.r[5], c.r[5].w[0] - 11274u);
    set32(c.r[6], c.r[6].w[0] - 11937u);
    set32(c.r[7], c.r[7].w[0] - 29184u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119C5Cu); set32(c.r[8], c.r[8].w[0] - 11215u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119C5Cu) [[unlikely]] return; }
L_00119C5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11189u);
    set32(c.r[5], c.r[5].w[0] - 11740u);
    set32(c.r[6], c.r[6].w[0] - 12084u);
    set32(c.r[7], c.r[7].w[0] - 29200u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119C88u); set32(c.r[8], c.r[8].w[0] - 11160u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119C88u) [[unlikely]] return; }
L_00119C88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 11109u);
    set32(c.r[5], c.r[5].w[0] - 12084u);
    set32(c.r[6], c.r[6].w[0] - 11090u);
    set32(c.r[7], c.r[7].w[0] - 27296u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119CB4u); set32(c.r[8], c.r[8].w[0] - 11072u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119CB4u) [[unlikely]] return; }
L_00119CB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 10995u);
    set32(c.r[5], c.r[5].w[0] - 12084u);
    set32(c.r[6], c.r[6].w[0] - 11090u);
    set32(c.r[7], c.r[7].w[0] - 28240u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119CE0u); set32(c.r[8], c.r[8].w[0] - 10973u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x00119CE0u) [[unlikely]] return; }
L_00119CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119CE8u);  if (depth < kMaxDepth) unit_0005(c, 192u, depth + 1u); else { c.pc = 0x001170F0u; return; } if (c.pc != 0x00119CE8u) [[unlikely]] return; }
L_00119CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119CF0u);  if (depth < kMaxDepth) unit_0005(c, 183u, depth + 1u); else { c.pc = 0x00117030u; return; } if (c.pc != 0x00119CF0u) [[unlikely]] return; }
L_00119CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119CF8u);  if (depth < kMaxDepth) unit_0005(c, 176u, depth + 1u); else { c.pc = 0x00116F30u; return; } if (c.pc != 0x00119CF8u) [[unlikely]] return; }
L_00119CF8:
    set32(c.r[5], ld32((c.r[28].w[0] - 29220u)));
    set32(c.r[17], ld32((c.r[28].w[0] - 29076u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119D08u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00119D08u) [[unlikely]] return; }
L_00119D08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 808u)));  goto L_00119D48; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119D28u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00119D28u) [[unlikely]] return; }
L_00119D28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 27696u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25136u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 8;
L_00119D48:
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 29220u)));  goto L_00119DA8; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 10903u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119D74u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x00119D74u) [[unlikely]] return; }
L_00119D74:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119D98u); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x00119D98u) [[unlikely]] return; }
L_00119D98:
    set32(c.r[2], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 808u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 29220u)));
    c.budget -= 4;
L_00119DA8:
    set32(c.r[17], ld32((c.r[28].w[0] - 29076u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119DB4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00119DB4u) [[unlikely]] return; }
L_00119DB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 808u)));  goto L_00119DF4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119DD4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00119DD4u) [[unlikely]] return; }
L_00119DD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 27696u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25024u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 8;
L_00119DF4:
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 29220u)));  goto L_00119E54; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 10888u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119E20u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x00119E20u) [[unlikely]] return; }
L_00119E20:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119E44u); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x00119E44u) [[unlikely]] return; }
L_00119E44:
    set32(c.r[2], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 808u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 29220u)));
    c.budget -= 4;
L_00119E54:
    set32(c.r[17], ld32((c.r[28].w[0] - 29076u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119E60u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00119E60u) [[unlikely]] return; }
L_00119E60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 808u)));  goto L_00119EA0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119E80u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00119E80u) [[unlikely]] return; }
L_00119E80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 27696u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24240u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 8;
L_00119EA0:
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 29076u)));  goto L_00119F00; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 10865u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119ECCu); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x00119ECCu) [[unlikely]] return; }
L_00119ECC:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119EF0u); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x00119EF0u) [[unlikely]] return; }
L_00119EF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 808u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29076u)));
    c.budget -= 4;
L_00119F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119F08u);  if (depth < kMaxDepth) unit_0007(c, 77u, depth + 1u); else { c.pc = 0x0011C8C0u; return; } if (c.pc != 0x00119F08u) [[unlikely]] return; }
L_00119F08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00119F20:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], c.r[6].w[0] + 1u);  goto L_00119F48; }
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 1;
L_00119F48:
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_00119F74; } }
L_00119F54:
    set32(c.r[7], c.r[11].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[11], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[11].d[0] & c.r[6].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_00119F74; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[11].d[0] = c.r[11].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_00119F74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00119F54u | kUnwind; return; } goto L_00119F54; }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[9], ld32((c.r[4].w[0] + 16u)));
    mmi::divu(c, 0, c.r[11].w[0], c.r[6].w[0]);
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_00119FB0; } }
L_00119F9C:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[6].d[0];  if (t) { goto L_00119FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_00119FB0; } }
L_00119FB0:
    set32(c.r[8], c.r[12].w[0] << 3);
    set32(c.r[7], c.r[9].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[7].w[0] + 6u));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[4].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00119F9Cu | kUnwind; return; } goto L_00119F9C; }
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[10].w[0]));  c.pc = t; return; }
L_00119FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A004u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0011A004u) [[unlikely]] return; }
L_0011A004:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011A020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A030u);  if (depth < kMaxDepth) unit_0005(c, 276u, depth + 1u); else { c.pc = 0x00117AC0u; return; } if (c.pc != 0x0011A030u) [[unlikely]] return; }
L_0011A030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A038u);  if (depth < kMaxDepth) unit_0007(c, 140u, depth + 1u); else { c.pc = 0x0011D1C0u; return; } if (c.pc != 0x0011A038u) [[unlikely]] return; }
L_0011A038:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0011A03C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A078u); st32((c.r[28].w[0] - 29220u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0007(c, 160u, depth + 1u); else { c.pc = 0x0011D4B0u; return; } if (c.pc != 0x0011A078u) [[unlikely]] return; }
L_0011A078:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A084u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 277u, depth + 1u); else { c.pc = 0x00117AD0u; return; } if (c.pc != 0x0011A084u) [[unlikely]] return; }
    goto L_0011A084;
L_0011A080:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011A084:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A090u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A090u) [[unlikely]] return; }
L_0011A090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A0A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A0A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 482u, depth + 1u); else { c.pc = 0x0011B8E0u; return; } if (c.pc != 0x0011A0A0u) [[unlikely]] return; }
L_0011A0A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A0B0u); set32(c.r[4], c.r[4].w[0] - 10842u);  if (depth < kMaxDepth) unit_0005(c, 248u, depth + 1u); else { c.pc = 0x00117680u; return; } if (c.pc != 0x0011A0B0u) [[unlikely]] return; }
L_0011A0B0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A0BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A0BCu) [[unlikely]] return; }
L_0011A0BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A0DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27088u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A0DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A0F0u); set32(c.r[5], c.r[5].w[0] - 11790u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A0F0u) [[unlikely]] return; }
L_0011A0F0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A0FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A0FCu) [[unlikely]] return; }
L_0011A0FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A11C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27120u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A11C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A130u); set32(c.r[5], c.r[5].w[0] - 11941u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A130u) [[unlikely]] return; }
L_0011A130:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A13Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A13Cu) [[unlikely]] return; }
L_0011A13C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A15C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27152u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A15C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A170u); set32(c.r[5], c.r[5].w[0] - 10835u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A170u) [[unlikely]] return; }
L_0011A170:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A17Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A17Cu) [[unlikely]] return; }
L_0011A17C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A19C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27184u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A19C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A1B0u); set32(c.r[5], c.r[5].w[0] - 10830u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A1B0u) [[unlikely]] return; }
L_0011A1B0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A1BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A1BCu) [[unlikely]] return; }
L_0011A1BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A1DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27216u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A1DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A1F0u); set32(c.r[5], c.r[5].w[0] - 11740u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A1F0u) [[unlikely]] return; }
L_0011A1F0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A1FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A1FCu) [[unlikely]] return; }
L_0011A1FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A21C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27248u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A21C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A230u); set32(c.r[5], c.r[5].w[0] - 10824u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A230u) [[unlikely]] return; }
L_0011A230:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A23Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A23Cu) [[unlikely]] return; }
L_0011A23C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A25C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27280u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A25C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A270u); set32(c.r[5], c.r[5].w[0] - 10813u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A270u) [[unlikely]] return; }
L_0011A270:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A27Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A27Cu) [[unlikely]] return; }
L_0011A27C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A290; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A290u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_0007(c, 376u, depth + 1u); else { c.pc = 0x0011FB30u; return; } if (c.pc != 0x0011A290u) [[unlikely]] return; }
L_0011A290:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A2A4u); set32(c.r[5], c.r[5].w[0] - 11937u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A2A4u) [[unlikely]] return; }
L_0011A2A4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A2B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A2B0u) [[unlikely]] return; }
L_0011A2B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A2D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27312u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A2D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A2E4u); set32(c.r[5], c.r[5].w[0] - 11790u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A2E4u) [[unlikely]] return; }
L_0011A2E4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A2F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A2F0u) [[unlikely]] return; }
L_0011A2F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A310; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27344u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A310:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A324u); set32(c.r[5], c.r[5].w[0] - 11941u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A324u) [[unlikely]] return; }
L_0011A324:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A330u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A330u) [[unlikely]] return; }
L_0011A330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A350; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27376u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A350:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A364u); set32(c.r[5], c.r[5].w[0] - 10835u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A364u) [[unlikely]] return; }
L_0011A364:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A370u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A370u) [[unlikely]] return; }
L_0011A370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A390; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27408u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A390:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A3A4u); set32(c.r[5], c.r[5].w[0] - 10830u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A3A4u) [[unlikely]] return; }
L_0011A3A4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A3B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A3B0u) [[unlikely]] return; }
L_0011A3B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A3C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 364u, depth + 1u); else { c.pc = 0x0011F9B0u; return; } if (c.pc != 0x0011A3C0u) [[unlikely]] return; }
L_0011A3C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A3D4u); set32(c.r[5], c.r[5].w[0] - 11740u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A3D4u) [[unlikely]] return; }
L_0011A3D4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A3E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A3E0u) [[unlikely]] return; }
L_0011A3E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A400; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27440u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A400:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A414u); set32(c.r[5], c.r[5].w[0] - 10824u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A414u) [[unlikely]] return; }
L_0011A414:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A420u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A420u) [[unlikely]] return; }
L_0011A420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A440; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27056u);
    set32(c.r[3], c.r[3].w[0] - 27472u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A440:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A454u); set32(c.r[5], c.r[5].w[0] - 10813u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A454u) [[unlikely]] return; }
L_0011A454:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A460u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A460u) [[unlikely]] return; }
L_0011A460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A470u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 348u, depth + 1u); else { c.pc = 0x0011F780u; return; } if (c.pc != 0x0011A470u) [[unlikely]] return; }
L_0011A470:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A484u); set32(c.r[5], c.r[5].w[0] - 11937u);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011C6D0u; return; } if (c.pc != 0x0011A484u) [[unlikely]] return; }
L_0011A484:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A490u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0011A490u) [[unlikely]] return; }
L_0011A490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A4B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] - 26656u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0011A4B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A4C0u); set32(c.r[4], c.r[4].w[0] - 10799u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C670u; return; } if (c.pc != 0x0011A4C0u) [[unlikely]] return; }
L_0011A4C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A4CCu); set32(c.r[4], c.r[4].w[0] - 29296u);  if (depth < kMaxDepth) unit_000D(c, 115u, depth + 1u); else { c.pc = 0x00135240u; return; } if (c.pc != 0x0011A4CCu) [[unlikely]] return; }
L_0011A4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011A4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011A52C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27056u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0011A528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A528u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011A528u) [[unlikely]] return; }
L_0011A528:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011A52C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011A540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011A590; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27472u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011A574; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011A574:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011A58C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A58Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011A58Cu) [[unlikely]] return; }
L_0011A58C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011A590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011A5A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A5C0u); set32(c.r[6], 0u + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011A5C0u) [[unlikely]] return; }
L_0011A5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 16ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A5E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A5FCu); set32(c.r[6], 0u + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011A5FCu) [[unlikely]] return; }
L_0011A5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 16ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_0011A620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_0011A630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011A680; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27440u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011A664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011A664:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011A67C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A67Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011A67Cu) [[unlikely]] return; }
L_0011A67C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011A680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011A690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A6B0u); set32(c.r[6], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011A6B0u) [[unlikely]] return; }
L_0011A6B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 12ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A6D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A6ECu); set32(c.r[6], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011A6ECu) [[unlikely]] return; }
L_0011A6EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 12ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 12u);  c.pc = t; return; }
L_0011A710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 12u);  c.pc = t; return; }
L_0011A720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011A770; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27408u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011A754; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011A754:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011A76C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A76Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011A76Cu) [[unlikely]] return; }
L_0011A76C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011A770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011A780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A7A0u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011A7A0u) [[unlikely]] return; }
L_0011A7A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A7C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A7DCu); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011A7DCu) [[unlikely]] return; }
L_0011A7DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_0011A800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_0011A810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011A860; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27376u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011A844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 1;
L_0011A83C:
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0011A844:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011A85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A85Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011A85Cu) [[unlikely]] return; }
L_0011A85C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011A860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011A870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_0011A880:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A890u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011A890u) [[unlikely]] return; }
L_0011A890:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A8B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A8CCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011A8CCu) [[unlikely]] return; }
L_0011A8CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A8E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0011A8F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0011A900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011A950; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27344u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011A934; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011A934:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011A94C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A94Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011A94Cu) [[unlikely]] return; }
L_0011A94C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011A950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011A960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A980u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011A980u) [[unlikely]] return; }
L_0011A980:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A9A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A9BCu); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011A9BCu) [[unlikely]] return; }
L_0011A9BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011A9D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_0011A9E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_0011A9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011AA40; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27312u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011AA24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011AA24:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011AA3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AA3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011AA3Cu) [[unlikely]] return; }
L_0011AA3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011AA40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011AA50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AA70u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011AA70u) [[unlikely]] return; }
L_0011AA70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011AA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AAACu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011AAACu) [[unlikely]] return; }
L_0011AAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011AAC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0011AAD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0011AAE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011AB30; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27280u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011AB14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011AB14:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011AB2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AB2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011AB2Cu) [[unlikely]] return; }
L_0011AB2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011AB30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011AB40:
    set32(c.r[29], c.r[29].w[0] - 1088u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AB68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011AB68u) [[unlikely]] return; }
L_0011AB68:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1023u);
    mmi::pminw(c.r[6], c.r[2], c.r[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AB84u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011AB84u) [[unlikely]] return; }
L_0011AB84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 12208u);
    set32(c.r[6], c.r[29].w[0] + 1084u);
    set32(c.r[7], c.r[29].w[0] + 1080u);
    set32(c.r[8], c.r[29].w[0] + 1076u);
    set32(c.r[9], c.r[29].w[0] + 1072u);
    st32((c.r[29].w[0] + 1084u), 0u);
    st32((c.r[29].w[0] + 1080u), 0u);
    st32((c.r[29].w[0] + 1076u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ABB4u); st32((c.r[29].w[0] + 1072u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x0011ABB4u) [[unlikely]] return; }
L_0011ABB4:
    c.f[0] = ld32((c.r[29].w[0] + 1084u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1080u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1076u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1072u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1088u);  c.pc = t; return; }
L_0011ABF0:
    set32(c.r[29], c.r[29].w[0] - 1104u);
    set32(c.r[2], 0u + 1024u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011AC38; } }
L_0011AC1C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AC1Cu | kUnwind; return; } goto L_0011AC1C; } }
L_0011AC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC40u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0011AC40u) [[unlikely]] return; }
L_0011AC40:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC4Cu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0011AC4Cu) [[unlikely]] return; }
L_0011AC4C:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC58u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0011AC58u) [[unlikely]] return; }
L_0011AC58:
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC64u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0011AC64u) [[unlikely]] return; }
L_0011AC64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC84u); set32(c.r[5], c.r[5].w[0] - 13480u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011AC84u) [[unlikely]] return; }
L_0011AC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC8Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011AC8Cu) [[unlikely]] return; }
L_0011AC8C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ACA4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011ACA4u) [[unlikely]] return; }
L_0011ACA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ACB0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011ACB0u) [[unlikely]] return; }
L_0011ACB0:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1104u);  c.pc = t; return; }
L_0011ACE0:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00118000u < 16384u) { entry = entries_0006[(t - 0x00118000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0011AD00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_0011AD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011AD60; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27248u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011AD44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011AD44:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011AD5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AD5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011AD5Cu) [[unlikely]] return; }
L_0011AD5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011AD60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011AD70:
    set32(c.r[29], c.r[29].w[0] - 1088u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AD98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011AD98u) [[unlikely]] return; }
L_0011AD98:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1023u);
    mmi::pminw(c.r[6], c.r[2], c.r[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ADB4u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011ADB4u) [[unlikely]] return; }
L_0011ADB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 12192u);
    set32(c.r[6], c.r[29].w[0] + 1084u);
    set32(c.r[7], c.r[29].w[0] + 1080u);
    set32(c.r[8], c.r[29].w[0] + 1076u);
    st32((c.r[29].w[0] + 1084u), 0u);
    st32((c.r[29].w[0] + 1080u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ADDCu); st32((c.r[29].w[0] + 1076u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x0011ADDCu) [[unlikely]] return; }
L_0011ADDC:
    c.f[2] = ld32((c.r[29].w[0] + 1076u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[29].w[0] + 1080u));
    c.f[0] = ld32((c.r[29].w[0] + 1084u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1088u);  c.pc = t; return; }
L_0011AE10:
    set32(c.r[29], c.r[29].w[0] - 1088u);
    set32(c.r[2], 0u + 1024u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011AE54; } }
L_0011AE38:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AE38u | kUnwind; return; } goto L_0011AE38; } }
L_0011AE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AE5Cu); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0011AE5Cu) [[unlikely]] return; }
L_0011AE5C:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AE68u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0011AE68u) [[unlikely]] return; }
L_0011AE68:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AE74u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0011AE74u) [[unlikely]] return; }
L_0011AE74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AE90u); set32(c.r[5], c.r[5].w[0] - 13464u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011AE90u) [[unlikely]] return; }
L_0011AE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AE98u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011AE98u) [[unlikely]] return; }
L_0011AE98:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AEB0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011AEB0u) [[unlikely]] return; }
L_0011AEB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AEBCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011AEBCu) [[unlikely]] return; }
L_0011AEBC:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1088u);  c.pc = t; return; }
L_0011AEE0:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00118000u < 16384u) { entry = entries_0006[(t - 0x00118000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0011AF00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 12u);  c.pc = t; return; }
L_0011AF10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011AF60; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27216u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011AF44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011AF44:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 2;
L_0011AF4C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011AF5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AF5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011AF5Cu) [[unlikely]] return; }
L_0011AF5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011AF60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011AF70:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AF98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011AF98u) [[unlikely]] return; }
L_0011AF98:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1023u);
    mmi::pminw(c.r[6], c.r[2], c.r[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AFB4u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011AFB4u) [[unlikely]] return; }
L_0011AFB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AFC0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0011AFC0u) [[unlikely]] return; }
L_0011AFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1072u);  c.pc = t; return; }
L_0011AFE0:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    set32(c.r[2], 0u + 1024u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011B018; } }
L_0011AFFC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AFFCu | kUnwind; return; } goto L_0011AFFC; } }
L_0011B018:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_0011B030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[5].w[0] + 8u)));  if (t) { goto L_0011B034; } }
L_0011B030:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0011B034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B03Cu);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0011B03Cu) [[unlikely]] return; }
L_0011B03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B044u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011B044u) [[unlikely]] return; }
    goto L_0011B044;
L_0011B040:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_0011B044:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B05Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B05Cu) [[unlikely]] return; }
L_0011B05C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B068u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011B068u) [[unlikely]] return; }
L_0011B068:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_0011B080:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00118000u < 16384u) { entry = entries_0006[(t - 0x00118000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0011B0A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_0011B0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011B100; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27184u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011B0E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011B0E4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011B0FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B0FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011B0FCu) [[unlikely]] return; }
L_0011B0FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011B100:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011B110:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B138u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B138u) [[unlikely]] return; }
L_0011B138:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1023u);
    mmi::pminw(c.r[6], c.r[2], c.r[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B154u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B154u) [[unlikely]] return; }
L_0011B154:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 12168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B16Cu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x0011B16Cu) [[unlikely]] return; }
L_0011B16C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1072u);  c.pc = t; return; }
L_0011B190:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    set32(c.r[2], 0u + 1024u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011B1C8; } }
L_0011B1AC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B1ACu | kUnwind; return; } goto L_0011B1AC; } }
L_0011B1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B1D0u); c.f[12] = ld32((c.r[5].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0011B1D0u) [[unlikely]] return; }
L_0011B1D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B1E4u); set32(c.r[5], c.r[5].w[0] - 13448u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011B1E4u) [[unlikely]] return; }
L_0011B1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B1ECu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011B1ECu) [[unlikely]] return; }
L_0011B1EC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B204u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B204u) [[unlikely]] return; }
L_0011B204:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B210u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011B210u) [[unlikely]] return; }
L_0011B210:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_0011B230:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00118000u < 16384u) { entry = entries_0006[(t - 0x00118000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0011B250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_0011B260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011B2B0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27152u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011B294; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011B294:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011B2AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B2ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011B2ACu) [[unlikely]] return; }
L_0011B2AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011B2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011B2C0:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    set32(c.r[2], 0u + 1024u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011B2F8; } }
L_0011B2DC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B2DCu | kUnwind; return; } goto L_0011B2DC; } }
L_0011B2F8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B30Cu); set32(c.r[5], c.r[5].w[0] - 12176u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011B30Cu) [[unlikely]] return; }
L_0011B30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B314u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011B314u) [[unlikely]] return; }
L_0011B314:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B32Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B32Cu) [[unlikely]] return; }
L_0011B32C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B338u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011B338u) [[unlikely]] return; }
L_0011B338:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_0011B350:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00118000u < 16384u) { entry = entries_0006[(t - 0x00118000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0011B370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0011B380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011B3D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011B3B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011B3B4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011B3CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B3CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011B3CCu) [[unlikely]] return; }
L_0011B3CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011B3D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011B3E0:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B408u) [[unlikely]] return; }
L_0011B408:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1023u);
    mmi::pminw(c.r[6], c.r[2], c.r[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B424u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B424u) [[unlikely]] return; }
L_0011B424:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 13432u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B43Cu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x0011B43Cu) [[unlikely]] return; }
L_0011B43C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1072u);  c.pc = t; return; }
L_0011B460:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    set32(c.r[2], 0u + 1024u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011B498; } }
L_0011B47C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B47Cu | kUnwind; return; } goto L_0011B47C; } }
L_0011B498:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B4ACu); set32(c.r[5], c.r[5].w[0] - 13440u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011B4ACu) [[unlikely]] return; }
L_0011B4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B4B4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011B4B4u) [[unlikely]] return; }
L_0011B4B4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B4CCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B4CCu) [[unlikely]] return; }
L_0011B4CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B4D8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011B4D8u) [[unlikely]] return; }
L_0011B4D8:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_0011B4F0:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00118000u < 16384u) { entry = entries_0006[(t - 0x00118000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0011B510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_0011B520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011B570; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27088u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011B554; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011B554:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011B56C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B56Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011B56Cu) [[unlikely]] return; }
L_0011B56C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011B570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011B580:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B5A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B5A8u) [[unlikely]] return; }
L_0011B5A8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1023u);
    mmi::pminw(c.r[6], c.r[2], c.r[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B5C4u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B5C4u) [[unlikely]] return; }
L_0011B5C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B5CCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 289u, depth + 1u); else { c.pc = 0x0013EE00u; return; } if (c.pc != 0x0011B5CCu) [[unlikely]] return; }
L_0011B5CC:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1072u);  c.pc = t; return; }
L_0011B5F0:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    set32(c.r[2], 0u + 1024u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011B628; } }
L_0011B60C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B60Cu | kUnwind; return; } goto L_0011B60C; } }
L_0011B628:
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 48u);  goto L_0011B63C; }
    set32(c.r[2], 0u + 49u);
    c.budget -= 1;
L_0011B63C:
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B648u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011B648u) [[unlikely]] return; }
L_0011B648:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B660u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B660u) [[unlikely]] return; }
L_0011B660:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B66Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011B66Cu) [[unlikely]] return; }
L_0011B66C:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_0011B690:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00118000u < 16384u) { entry = entries_0006[(t - 0x00118000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0011B6B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0011B6C0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 8u)));  goto L_0011B6E4; }
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0011B6E8; } }
L_0011B6E4:
    set32(c.r[7], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_0011B6E8:
    c.budget -= 2;
    { c.r[5].d[0] = c.r[3].d[0] + 0ull;  goto L_0011B740; }
L_0011B6F0:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B710u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B710u) [[unlikely]] return; }
L_0011B710:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1023u);
    mmi::pminw(c.r[6], c.r[2], c.r[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B72Cu); set32(c.r[5], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B72Cu) [[unlikely]] return; }
L_0011B72C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_0011B740:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[11], ld32((c.r[4].w[0] + 8u)));  goto L_0011B764; }
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[11], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0011B768; } }
L_0011B764:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0011B768:
    c.r[1].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_0011B7C8; }
    set32(c.r[10], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[9], c.r[11].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);  if (t) { goto L_0011B7B8; } }
L_0011B784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011B7A0; } }
L_0011B78C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_0011B7B4; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_0011B7A0:
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B78Cu | kUnwind; return; } goto L_0011B78C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[9].w[0] - c.r[11].w[0]);  if (t) { goto L_0011B7C8; } }
L_0011B7B4:
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 1;
L_0011B7B8:
    c.r[1].d[0] = c.r[10].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[8].d[0] = c.r[9].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B784u | kUnwind; return; } goto L_0011B784; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0011B7C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B7D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00120000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B7ECu); set32(c.r[5], c.r[5].w[0] - 18416u);  if (depth < kMaxDepth) unit_0005(c, 253u, depth + 1u); else { c.pc = 0x00117740u; return; } if (c.pc != 0x0011B7ECu) [[unlikely]] return; }
L_0011B7EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0011B7F8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0011B7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011B810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B82Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B82Cu) [[unlikely]] return; }
L_0011B82C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0011B850; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011B83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B844u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0011B844u) [[unlikely]] return; }
L_0011B844:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_0011B850:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011B860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011B8D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27024u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0011B8B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0011B8B4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011B8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B8CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011B8CCu) [[unlikely]] return; }
L_0011B8CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011B8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011B8E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26992u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27024u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0011B900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011B93C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26992u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0011B938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B938u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011B938u) [[unlikely]] return; }
L_0011B938:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011B93C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011B950:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 88u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[18], c.r[2].w[0] + 60u);
    set32(c.r[17], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[5], c.r[16].w[0] << 1);
    st32((c.r[2].w[0] + 60u), c.r[17].w[0]);
    c.r[2].d[0] = ld64((c.r[28].w[0] - 31296u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B994u); st64((c.r[29].w[0] + 88u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0006(c, 501u, depth + 1u); else { c.pc = 0x0011BB30u; return; } if (c.pc != 0x0011B994u) [[unlikely]] return; }
L_0011B994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0011B9B4; } }
L_0011B99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B9A4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 500u, depth + 1u); else { c.pc = 0x0011BB20u; return; } if (c.pc != 0x0011B9A4u) [[unlikely]] return; }
L_0011B9A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B9B0u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0006(c, 499u, depth + 1u); else { c.pc = 0x0011BB00u; return; } if (c.pc != 0x0011B9B0u) [[unlikely]] return; }
L_0011B9B0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0011B9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B9BCu); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 498u, depth + 1u); else { c.pc = 0x0011BAF0u; return; } if (c.pc != 0x0011B9BCu) [[unlikely]] return; }
L_0011B9BC:
    c.r[3].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B99Cu | kUnwind; return; } goto L_0011B99C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0011B9F4; } }
L_0011B9D0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B9DCu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 497u, depth + 1u); else { c.pc = 0x0011BAE0u; return; } if (c.pc != 0x0011B9DCu) [[unlikely]] return; }
L_0011B9DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0011B9F4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B9F0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 494u, depth + 1u); else { c.pc = 0x0011BA30u; return; } if (c.pc != 0x0011B9F0u) [[unlikely]] return; }
L_0011B9F0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0011B9F4:
    c.r[3].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B9D0u | kUnwind; return; } goto L_0011B9D0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 29216u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0011BA30:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[7], c.r[5].w[0] << 2);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_0011BA6C; } }
L_0011BA4C:
    set32(c.r[7], c.r[11].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[11], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[11].d[0] & c.r[6].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_0011BA6C; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[11].d[0] = c.r[11].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_0011BA6C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011BA4Cu | kUnwind; return; } goto L_0011BA4C; }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[9], ld32((c.r[4].w[0] + 16u)));
    mmi::divu(c, 0, c.r[11].w[0], c.r[6].w[0]);
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0011BAA8; } }
L_0011BA94:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[6].d[0];  if (t) { goto L_0011BAA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0011BAA8; } }
L_0011BAA8:
    set32(c.r[8], c.r[12].w[0] << 3);
    set32(c.r[7], c.r[9].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[7].w[0] + 6u));
    c.budget -= 5;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[4].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011BA94u | kUnwind; return; } goto L_0011BA94; }
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[10].w[0]));  c.pc = t; return; }
L_0011BAE0:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0011BAF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_0011BB00:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0011BB20:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0011BB30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0007(c, 289u, depth); }
L_0011BB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011BB94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BB60u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0011BB60u) [[unlikely]] return; }
L_0011BB60:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0011BB80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BB78u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011BB78u) [[unlikely]] return; }
L_0011BB78:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0011BB80:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[5].w[0]);  goto L_0011BB98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BB90u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0011BB90u) [[unlikely]] return; }
L_0011BB90:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011BB94:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0011BB98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011BBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0011BC14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BBE0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0011BBE0u) [[unlikely]] return; }
L_0011BBE0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0011BC00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BBF8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011BBF8u) [[unlikely]] return; }
L_0011BBF8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0011BC00:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[5].w[0]);  goto L_0011BC18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BC10u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0011BC10u) [[unlikely]] return; }
L_0011BC10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011BC14:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0011BC18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011BC40:
    set32(c.r[29], c.r[29].w[0] - 1376u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 10666u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BC80u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011BC80u) [[unlikely]] return; }
L_0011BC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BC88u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011BC88u) [[unlikely]] return; }
L_0011BC88:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BCA0u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BCA0u) [[unlikely]] return; }
L_0011BCA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 52u)));  if (t) { [[clang::musttail]] return unit_0007(c, 48u, depth); } }
L_0011BCAC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BCBCu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0011BCBCu) [[unlikely]] return; }
L_0011BCBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0011BD5C; } }
L_0011BCC4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 48u)));  goto L_0011BD5C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 304u));  goto L_0011BCE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 308u)));  if (t) { goto L_0011BCEC; } }
L_0011BCE4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0011BCEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_0011BD50; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BD04u); set32(c.r[5], c.r[5].w[0] - 10647u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0011BD04u) [[unlikely]] return; }
L_0011BD04:
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BD14u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0011BD14u) [[unlikely]] return; }
L_0011BD14:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 209u);  goto L_0011BD28; }
    set32(c.r[5], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 1;
L_0011BD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BD30u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0011BD30u) [[unlikely]] return; }
L_0011BD30:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BD3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0011BD3Cu) [[unlikely]] return; }
L_0011BD3C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BD48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0011BD48u) [[unlikely]] return; }
L_0011BD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011BD58; } }
L_0011BD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BD58u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0011BD58u) [[unlikely]] return; }
L_0011BD58:
    set32(c.r[17], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 1;
L_0011BD5C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011BCC4u | kUnwind; return; } goto L_0011BCC4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[29].w[0] + 305u);  goto L_0011BD78; }
    set32(c.r[8], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 1;
L_0011BD78:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[7].d[0] = ld16((c.r[6].w[0] + 32u));
    set32(c.r[9], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BD9Cu); set32(c.r[5], c.r[5].w[0] - 10645u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011BD9Cu) [[unlikely]] return; }
L_0011BD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BDA4u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011BDA4u) [[unlikely]] return; }
L_0011BDA4:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BDBCu); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BDBCu) [[unlikely]] return; }
L_0011BDBC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BDC8u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 52u, depth + 1u); else { c.pc = 0x0011C520u; return; } if (c.pc != 0x0011BDC8u) [[unlikely]] return; }
L_0011BDC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BDD8u); set32(c.r[5], c.r[5].w[0] - 10512u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011BDD8u) [[unlikely]] return; }
L_0011BDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BDE0u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011BDE0u) [[unlikely]] return; }
L_0011BDE0:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BDF8u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BDF8u) [[unlikely]] return; }
L_0011BDF8:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 80u)));  if (t) { goto L_0011BF60; } }
L_0011BE0C:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BE18u); set32(c.r[5], c.r[5].w[0] - 10479u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011BE18u) [[unlikely]] return; }
L_0011BE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BE20u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011BE20u) [[unlikely]] return; }
L_0011BE20:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BE38u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BE38u) [[unlikely]] return; }
L_0011BE38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[17].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[5].w[0] - 10463u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BE50u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011BE50u) [[unlikely]] return; }
L_0011BE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BE58u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011BE58u) [[unlikely]] return; }
L_0011BE58:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BE70u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BE70u) [[unlikely]] return; }
L_0011BE70:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[6], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BE8Cu); set32(c.r[5], c.r[5].w[0] - 10437u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011BE8Cu) [[unlikely]] return; }
L_0011BE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BE94u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011BE94u) [[unlikely]] return; }
L_0011BE94:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BEACu); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BEACu) [[unlikely]] return; }
L_0011BEAC:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[6], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BEC8u); set32(c.r[5], c.r[5].w[0] - 10405u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011BEC8u) [[unlikely]] return; }
L_0011BEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BED0u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011BED0u) [[unlikely]] return; }
L_0011BED0:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BEE8u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BEE8u) [[unlikely]] return; }
L_0011BEE8:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[6], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF04u); set32(c.r[5], c.r[5].w[0] - 10369u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011BF04u) [[unlikely]] return; }
L_0011BF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF0Cu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011BF0Cu) [[unlikely]] return; }
L_0011BF0C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF24u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BF24u) [[unlikely]] return; }
L_0011BF24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF34u); set32(c.r[5], c.r[5].w[0] - 10325u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011BF34u) [[unlikely]] return; }
L_0011BF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF3Cu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011BF3Cu) [[unlikely]] return; }
L_0011BF3C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF54u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BF54u) [[unlikely]] return; }
L_0011BF54:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 44u);
    c.budget -= 3;
L_0011BF60:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 18;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011BE0Cu | kUnwind; return; } goto L_0011BE0C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFB8u); set32(c.r[5], c.r[5].w[0] - 10308u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011BFB8u) [[unlikely]] return; }
L_0011BFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFC0u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0011BFC0u) [[unlikely]] return; }
L_0011BFC0:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFD8u); set32(c.r[5], c.r[29].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BFD8u) [[unlikely]] return; }
L_0011BFD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29216u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[2].w[0] + 96u)));  if (t) { [[clang::musttail]] return unit_0007(c, 43u, depth); } }
L_0011BFE4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFF4u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0011BFF4u) [[unlikely]] return; }
L_0011BFF4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  [[clang::musttail]] return unit_0007(c, 3u, depth); }
    [[clang::musttail]] return unit_0007(c, 1u, depth);
}

}
