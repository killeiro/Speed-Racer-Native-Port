#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00F2[4096] = {
    1, 2, 0, 0, 0, 3, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72,
    0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0,
    83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136,
    0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0,
    0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179,
    0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 236, 0,
    0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0,
    0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0,
    0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 320,
    0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 366, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    0, 375, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0,
    0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0,
    0, 421, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0,
    0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0,
    0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0,
    441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0,
    450, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0,
    0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0,
    0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0,
    0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0,
    0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 491, 0, 0, 492, 0,
    0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494,
    0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0,
    505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0,
    0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0,
    518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0,
    0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539,
};

void unit_00F2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004C8000;
    case 2u: goto L_004C8004;
    case 3u: goto L_004C8014;
    case 4u: goto L_004C8018;
    case 5u: goto L_004C8020;
    case 6u: goto L_004C8040;
    case 7u: goto L_004C8068;
    case 8u: goto L_004C8078;
    case 9u: goto L_004C808C;
    case 10u: goto L_004C80A0;
    case 11u: goto L_004C80B8;
    case 12u: goto L_004C80D8;
    case 13u: goto L_004C80E8;
    case 14u: goto L_004C8104;
    case 15u: goto L_004C8118;
    case 16u: goto L_004C8128;
    case 17u: goto L_004C814C;
    case 18u: goto L_004C815C;
    case 19u: goto L_004C8188;
    case 20u: goto L_004C8198;
    case 21u: goto L_004C81B8;
    case 22u: goto L_004C81E8;
    case 23u: goto L_004C81F8;
    case 24u: goto L_004C8248;
    case 25u: goto L_004C8258;
    case 26u: goto L_004C8274;
    case 27u: goto L_004C8280;
    case 28u: goto L_004C828C;
    case 29u: goto L_004C8298;
    case 30u: goto L_004C82A4;
    case 31u: goto L_004C82B0;
    case 32u: goto L_004C82C8;
    case 33u: goto L_004C82D8;
    case 34u: goto L_004C8344;
    case 35u: goto L_004C8354;
    case 36u: goto L_004C83AC;
    case 37u: goto L_004C83BC;
    case 38u: goto L_004C83E4;
    case 39u: goto L_004C83F4;
    case 40u: goto L_004C8444;
    case 41u: goto L_004C8454;
    case 42u: goto L_004C8484;
    case 43u: goto L_004C8498;
    case 44u: goto L_004C84B8;
    case 45u: goto L_004C84C8;
    case 46u: goto L_004C84E4;
    case 47u: goto L_004C84F8;
    case 48u: goto L_004C8508;
    case 49u: goto L_004C8534;
    case 50u: goto L_004C8544;
    case 51u: goto L_004C854C;
    case 52u: goto L_004C8560;
    case 53u: goto L_004C8570;
    case 54u: goto L_004C857C;
    case 55u: goto L_004C8590;
    case 56u: goto L_004C85B0;
    case 57u: goto L_004C85C0;
    case 58u: goto L_004C85DC;
    case 59u: goto L_004C85F0;
    case 60u: goto L_004C8600;
    case 61u: goto L_004C8620;
    case 62u: goto L_004C8630;
    case 63u: goto L_004C86BC;
    case 64u: goto L_004C86CC;
    case 65u: goto L_004C86E8;
    case 66u: goto L_004C86FC;
    case 67u: goto L_004C870C;
    case 68u: goto L_004C8734;
    case 69u: goto L_004C8744;
    case 70u: goto L_004C8768;
    case 71u: goto L_004C87F0;
    case 72u: goto L_004C87FC;
    case 73u: goto L_004C8808;
    case 74u: goto L_004C8814;
    case 75u: goto L_004C8820;
    case 76u: goto L_004C882C;
    case 77u: goto L_004C8838;
    case 78u: goto L_004C8844;
    case 79u: goto L_004C8850;
    case 80u: goto L_004C885C;
    case 81u: goto L_004C8868;
    case 82u: goto L_004C8874;
    case 83u: goto L_004C8880;
    case 84u: goto L_004C888C;
    case 85u: goto L_004C8898;
    case 86u: goto L_004C88AC;
    case 87u: goto L_004C88B8;
    case 88u: goto L_004C88CC;
    case 89u: goto L_004C8938;
    case 90u: goto L_004C8944;
    case 91u: goto L_004C895C;
    case 92u: goto L_004C8978;
    case 93u: goto L_004C8994;
    case 94u: goto L_004C89D0;
    case 95u: goto L_004C8A1C;
    case 96u: goto L_004C8A2C;
    case 97u: goto L_004C8A40;
    case 98u: goto L_004C8A54;
    case 99u: goto L_004C8A64;
    case 100u: goto L_004C8A80;
    case 101u: goto L_004C8A94;
    case 102u: goto L_004C8AA4;
    case 103u: goto L_004C8AC0;
    case 104u: goto L_004C8AD4;
    case 105u: goto L_004C8AE4;
    case 106u: goto L_004C8B00;
    case 107u: goto L_004C8B14;
    case 108u: goto L_004C8B24;
    case 109u: goto L_004C8B40;
    case 110u: goto L_004C8B4C;
    case 111u: goto L_004C8B70;
    case 112u: goto L_004C8BA0;
    case 113u: goto L_004C8BAC;
    case 114u: goto L_004C8BC0;
    case 115u: goto L_004C8BD4;
    case 116u: goto L_004C8BEC;
    case 117u: goto L_004C8C0C;
    case 118u: goto L_004C8C1C;
    case 119u: goto L_004C8C38;
    case 120u: goto L_004C8C4C;
    case 121u: goto L_004C8C5C;
    case 122u: goto L_004C8C6C;
    case 123u: goto L_004C8C80;
    case 124u: goto L_004C8CB0;
    case 125u: goto L_004C8CC0;
    case 126u: goto L_004C8CEC;
    case 127u: goto L_004C8CFC;
    case 128u: goto L_004C8D1C;
    case 129u: goto L_004C8D28;
    case 130u: goto L_004C8D34;
    case 131u: goto L_004C8D64;
    case 132u: goto L_004C8D74;
    case 133u: goto L_004C8DC4;
    case 134u: goto L_004C8DD4;
    case 135u: goto L_004C8DF0;
    case 136u: goto L_004C8DFC;
    case 137u: goto L_004C8E08;
    case 138u: goto L_004C8E14;
    case 139u: goto L_004C8E20;
    case 140u: goto L_004C8E2C;
    case 141u: goto L_004C8E9C;
    case 142u: goto L_004C8EAC;
    case 143u: goto L_004C8F18;
    case 144u: goto L_004C8F28;
    case 145u: goto L_004C8F94;
    case 146u: goto L_004C8FA8;
    case 147u: goto L_004C8FC8;
    case 148u: goto L_004C8FD8;
    case 149u: goto L_004C8FF4;
    case 150u: goto L_004C9008;
    case 151u: goto L_004C9018;
    case 152u: goto L_004C9050;
    case 153u: goto L_004C905C;
    case 154u: goto L_004C906C;
    case 155u: goto L_004C9074;
    case 156u: goto L_004C9088;
    case 157u: goto L_004C9098;
    case 158u: goto L_004C90A4;
    case 159u: goto L_004C90B8;
    case 160u: goto L_004C90D8;
    case 161u: goto L_004C90E8;
    case 162u: goto L_004C9174;
    case 163u: goto L_004C9184;
    case 164u: goto L_004C91A0;
    case 165u: goto L_004C91B4;
    case 166u: goto L_004C91C4;
    case 167u: goto L_004C91E8;
    case 168u: goto L_004C91F8;
    case 169u: goto L_004C9214;
    case 170u: goto L_004C9220;
    case 171u: goto L_004C9278;
    case 172u: goto L_004C92A8;
    case 173u: goto L_004C92B4;
    case 174u: goto L_004C92C0;
    case 175u: goto L_004C92CC;
    case 176u: goto L_004C92D8;
    case 177u: goto L_004C92E4;
    case 178u: goto L_004C92F0;
    case 179u: goto L_004C92FC;
    case 180u: goto L_004C9308;
    case 181u: goto L_004C9314;
    case 182u: goto L_004C9320;
    case 183u: goto L_004C932C;
    case 184u: goto L_004C9338;
    case 185u: goto L_004C9344;
    case 186u: goto L_004C9350;
    case 187u: goto L_004C9358;
    case 188u: goto L_004C9370;
    case 189u: goto L_004C93B0;
    case 190u: goto L_004C93C0;
    case 191u: goto L_004C93D4;
    case 192u: goto L_004C93DC;
    case 193u: goto L_004C9410;
    case 194u: goto L_004C943C;
    case 195u: goto L_004C9448;
    case 196u: goto L_004C9458;
    case 197u: goto L_004C9474;
    case 198u: goto L_004C9504;
    case 199u: goto L_004C9520;
    case 200u: goto L_004C9554;
    case 201u: goto L_004C959C;
    case 202u: goto L_004C95B8;
    case 203u: goto L_004C963C;
    case 204u: goto L_004C9674;
    case 205u: goto L_004C968C;
    case 206u: goto L_004C96C0;
    case 207u: goto L_004C9700;
    case 208u: goto L_004C9714;
    case 209u: goto L_004C9728;
    case 210u: goto L_004C9748;
    case 211u: goto L_004C9764;
    case 212u: goto L_004C9774;
    case 213u: goto L_004C9790;
    case 214u: goto L_004C97A4;
    case 215u: goto L_004C97B4;
    case 216u: goto L_004C97CC;
    case 217u: goto L_004C97E0;
    case 218u: goto L_004C97F4;
    case 219u: goto L_004C9814;
    case 220u: goto L_004C9830;
    case 221u: goto L_004C9840;
    case 222u: goto L_004C985C;
    case 223u: goto L_004C9870;
    case 224u: goto L_004C9880;
    case 225u: goto L_004C9898;
    case 226u: goto L_004C98AC;
    case 227u: goto L_004C98C0;
    case 228u: goto L_004C98E0;
    case 229u: goto L_004C98FC;
    case 230u: goto L_004C990C;
    case 231u: goto L_004C9928;
    case 232u: goto L_004C993C;
    case 233u: goto L_004C994C;
    case 234u: goto L_004C9958;
    case 235u: goto L_004C996C;
    case 236u: goto L_004C9978;
    case 237u: goto L_004C9990;
    case 238u: goto L_004C999C;
    case 239u: goto L_004C99C8;
    case 240u: goto L_004C99EC;
    case 241u: goto L_004C99F4;
    case 242u: goto L_004C9A50;
    case 243u: goto L_004C9A88;
    case 244u: goto L_004C9AA4;
    case 245u: goto L_004C9AC0;
    case 246u: goto L_004C9AF0;
    case 247u: goto L_004C9B0C;
    case 248u: goto L_004C9B4C;
    case 249u: goto L_004C9B6C;
    case 250u: goto L_004C9B7C;
    case 251u: goto L_004C9B98;
    case 252u: goto L_004C9BB8;
    case 253u: goto L_004C9BC8;
    case 254u: goto L_004C9BE4;
    case 255u: goto L_004C9C04;
    case 256u: goto L_004C9C14;
    case 257u: goto L_004C9C30;
    case 258u: goto L_004C9C50;
    case 259u: goto L_004C9C60;
    case 260u: goto L_004C9C7C;
    case 261u: goto L_004C9C9C;
    case 262u: goto L_004C9CAC;
    case 263u: goto L_004C9CC8;
    case 264u: goto L_004C9CE8;
    case 265u: goto L_004C9CF8;
    case 266u: goto L_004C9D14;
    case 267u: goto L_004C9D34;
    case 268u: goto L_004C9D44;
    case 269u: goto L_004C9D60;
    case 270u: goto L_004C9D80;
    case 271u: goto L_004C9D90;
    case 272u: goto L_004C9DAC;
    case 273u: goto L_004C9DCC;
    case 274u: goto L_004C9DDC;
    case 275u: goto L_004C9DF8;
    case 276u: goto L_004C9E18;
    case 277u: goto L_004C9E28;
    case 278u: goto L_004C9E44;
    case 279u: goto L_004C9E64;
    case 280u: goto L_004C9E74;
    case 281u: goto L_004C9E90;
    case 282u: goto L_004C9EB0;
    case 283u: goto L_004C9EC0;
    case 284u: goto L_004C9EDC;
    case 285u: goto L_004C9EFC;
    case 286u: goto L_004C9F0C;
    case 287u: goto L_004C9F28;
    case 288u: goto L_004C9F48;
    case 289u: goto L_004C9F58;
    case 290u: goto L_004C9F74;
    case 291u: goto L_004C9F8C;
    case 292u: goto L_004C9FB0;
    case 293u: goto L_004CA004;
    case 294u: goto L_004CA014;
    case 295u: goto L_004CA028;
    case 296u: goto L_004CA038;
    case 297u: goto L_004CA04C;
    case 298u: goto L_004CA05C;
    case 299u: goto L_004CA070;
    case 300u: goto L_004CA080;
    case 301u: goto L_004CA09C;
    case 302u: goto L_004CA0AC;
    case 303u: goto L_004CA0C0;
    case 304u: goto L_004CA0D0;
    case 305u: goto L_004CA0E4;
    case 306u: goto L_004CA0F4;
    case 307u: goto L_004CA108;
    case 308u: goto L_004CA118;
    case 309u: goto L_004CA12C;
    case 310u: goto L_004CA13C;
    case 311u: goto L_004CA150;
    case 312u: goto L_004CA160;
    case 313u: goto L_004CA178;
    case 314u: goto L_004CA188;
    case 315u: goto L_004CA19C;
    case 316u: goto L_004CA1AC;
    case 317u: goto L_004CA1C8;
    case 318u: goto L_004CA1D8;
    case 319u: goto L_004CA1EC;
    case 320u: goto L_004CA1FC;
    case 321u: goto L_004CA208;
    case 322u: goto L_004CA21C;
    case 323u: goto L_004CA230;
    case 324u: goto L_004CA270;
    case 325u: goto L_004CA2A0;
    case 326u: goto L_004CA31C;
    case 327u: goto L_004CA3B8;
    case 328u: goto L_004CA3D4;
    case 329u: goto L_004CA3DC;
    case 330u: goto L_004CA4BC;
    case 331u: goto L_004CA4D4;
    case 332u: goto L_004CA4F4;
    case 333u: goto L_004CA500;
    case 334u: goto L_004CA558;
    case 335u: goto L_004CA568;
    case 336u: goto L_004CA588;
    case 337u: goto L_004CA5CC;
    case 338u: goto L_004CA608;
    case 339u: goto L_004CA644;
    case 340u: goto L_004CA680;
    case 341u: goto L_004CA6A4;
    case 342u: goto L_004CA6BC;
    case 343u: goto L_004CA6DC;
    case 344u: goto L_004CA6EC;
    case 345u: goto L_004CA744;
    case 346u: goto L_004CA754;
    case 347u: goto L_004CA774;
    case 348u: goto L_004CA7BC;
    case 349u: goto L_004CA7E8;
    case 350u: goto L_004CA808;
    case 351u: goto L_004CA830;
    case 352u: goto L_004CA8BC;
    case 353u: goto L_004CA8E8;
    case 354u: goto L_004CA934;
    case 355u: goto L_004CA9B4;
    case 356u: goto L_004CA9BC;
    case 357u: goto L_004CA9C4;
    case 358u: goto L_004CA9CC;
    case 359u: goto L_004CAA18;
    case 360u: goto L_004CAA24;
    case 361u: goto L_004CAA2C;
    case 362u: goto L_004CAA44;
    case 363u: goto L_004CAA4C;
    case 364u: goto L_004CAA64;
    case 365u: goto L_004CAA70;
    case 366u: goto L_004CAA78;
    case 367u: goto L_004CAAC0;
    case 368u: goto L_004CAB1C;
    case 369u: goto L_004CAB9C;
    case 370u: goto L_004CABA8;
    case 371u: goto L_004CABB4;
    case 372u: goto L_004CABCC;
    case 373u: goto L_004CABD8;
    case 374u: goto L_004CABE0;
    case 375u: goto L_004CAC04;
    case 376u: goto L_004CAC0C;
    case 377u: goto L_004CAC24;
    case 378u: goto L_004CAC30;
    case 379u: goto L_004CAC38;
    case 380u: goto L_004CACBC;
    case 381u: goto L_004CAD30;
    case 382u: goto L_004CADE0;
    case 383u: goto L_004CAE0C;
    case 384u: goto L_004CAE18;
    case 385u: goto L_004CAE28;
    case 386u: goto L_004CAE3C;
    case 387u: goto L_004CAE54;
    case 388u: goto L_004CAE64;
    case 389u: goto L_004CAE98;
    case 390u: goto L_004CAEA8;
    case 391u: goto L_004CAF48;
    case 392u: goto L_004CAF58;
    case 393u: goto L_004CAFE8;
    case 394u: goto L_004CAFF8;
    case 395u: goto L_004CB068;
    case 396u: goto L_004CB078;
    case 397u: goto L_004CB0F8;
    case 398u: goto L_004CB108;
    case 399u: goto L_004CB124;
    case 400u: goto L_004CB130;
    case 401u: goto L_004CB13C;
    case 402u: goto L_004CB148;
    case 403u: goto L_004CB154;
    case 404u: goto L_004CB160;
    case 405u: goto L_004CB1CC;
    case 406u: goto L_004CB1E0;
    case 407u: goto L_004CB200;
    case 408u: goto L_004CB210;
    case 409u: goto L_004CB22C;
    case 410u: goto L_004CB240;
    case 411u: goto L_004CB250;
    case 412u: goto L_004CB25C;
    case 413u: goto L_004CB26C;
    case 414u: goto L_004CB274;
    case 415u: goto L_004CB298;
    case 416u: goto L_004CB2A8;
    case 417u: goto L_004CB334;
    case 418u: goto L_004CB344;
    case 419u: goto L_004CB360;
    case 420u: goto L_004CB374;
    case 421u: goto L_004CB384;
    case 422u: goto L_004CB390;
    case 423u: goto L_004CB3A4;
    case 424u: goto L_004CB3F4;
    case 425u: goto L_004CB404;
    case 426u: goto L_004CB420;
    case 427u: goto L_004CB434;
    case 428u: goto L_004CB444;
    case 429u: goto L_004CB4A8;
    case 430u: goto L_004CB4B4;
    case 431u: goto L_004CB4C0;
    case 432u: goto L_004CB4D8;
    case 433u: goto L_004CB4F8;
    case 434u: goto L_004CB508;
    case 435u: goto L_004CB524;
    case 436u: goto L_004CB538;
    case 437u: goto L_004CB548;
    case 438u: goto L_004CB558;
    case 439u: goto L_004CB564;
    case 440u: goto L_004CB570;
    case 441u: goto L_004CB580;
    case 442u: goto L_004CB58C;
    case 443u: goto L_004CB598;
    case 444u: goto L_004CB5A8;
    case 445u: goto L_004CB5B4;
    case 446u: goto L_004CB5C0;
    case 447u: goto L_004CB5D0;
    case 448u: goto L_004CB5DC;
    case 449u: goto L_004CB5E8;
    case 450u: goto L_004CB600;
    case 451u: goto L_004CB608;
    case 452u: goto L_004CB61C;
    case 453u: goto L_004CB62C;
    case 454u: goto L_004CB648;
    case 455u: goto L_004CB654;
    case 456u: goto L_004CB680;
    case 457u: goto L_004CB6A8;
    case 458u: goto L_004CB6B4;
    case 459u: goto L_004CB6C4;
    case 460u: goto L_004CB6E0;
    case 461u: goto L_004CB770;
    case 462u: goto L_004CB78C;
    case 463u: goto L_004CB7C0;
    case 464u: goto L_004CB7F4;
    case 465u: goto L_004CB830;
    case 466u: goto L_004CB870;
    case 467u: goto L_004CB8A0;
    case 468u: goto L_004CB8BC;
    case 469u: goto L_004CB8C8;
    case 470u: goto L_004CB8D8;
    case 471u: goto L_004CB8F8;
    case 472u: goto L_004CB904;
    case 473u: goto L_004CB910;
    case 474u: goto L_004CB92C;
    case 475u: goto L_004CB938;
    case 476u: goto L_004CB944;
    case 477u: goto L_004CB95C;
    case 478u: goto L_004CB968;
    case 479u: goto L_004CB974;
    case 480u: goto L_004CB984;
    case 481u: goto L_004CB9F4;
    case 482u: goto L_004CBA04;
    case 483u: goto L_004CBA84;
    case 484u: goto L_004CBA94;
    case 485u: goto L_004CBAA4;
    case 486u: goto L_004CBAB0;
    case 487u: goto L_004CBABC;
    case 488u: goto L_004CBACC;
    case 489u: goto L_004CBAD8;
    case 490u: goto L_004CBAE4;
    case 491u: goto L_004CBAEC;
    case 492u: goto L_004CBAF8;
    case 493u: goto L_004CBB18;
    case 494u: goto L_004CBB7C;
    case 495u: goto L_004CBB8C;
    case 496u: goto L_004CBBB8;
    case 497u: goto L_004CBBC4;
    case 498u: goto L_004CBBE0;
    case 499u: goto L_004CBBEC;
    case 500u: goto L_004CBBF8;
    case 501u: goto L_004CBC34;
    case 502u: goto L_004CBC40;
    case 503u: goto L_004CBC4C;
    case 504u: goto L_004CBC74;
    case 505u: goto L_004CBC80;
    case 506u: goto L_004CBC88;
    case 507u: goto L_004CBCB0;
    case 508u: goto L_004CBCD4;
    case 509u: goto L_004CBCE0;
    case 510u: goto L_004CBCF0;
    case 511u: goto L_004CBD10;
    case 512u: goto L_004CBD1C;
    case 513u: goto L_004CBD28;
    case 514u: goto L_004CBD44;
    case 515u: goto L_004CBD50;
    case 516u: goto L_004CBD5C;
    case 517u: goto L_004CBD74;
    case 518u: goto L_004CBD80;
    case 519u: goto L_004CBD8C;
    case 520u: goto L_004CBDB8;
    case 521u: goto L_004CBDC4;
    case 522u: goto L_004CBDD0;
    case 523u: goto L_004CBE0C;
    case 524u: goto L_004CBE18;
    case 525u: goto L_004CBE24;
    case 526u: goto L_004CBE34;
    case 527u: goto L_004CBEA4;
    case 528u: goto L_004CBEB8;
    case 529u: goto L_004CBED8;
    case 530u: goto L_004CBEE8;
    case 531u: goto L_004CBF04;
    case 532u: goto L_004CBF18;
    case 533u: goto L_004CBF28;
    case 534u: goto L_004CBF34;
    case 535u: goto L_004CBF44;
    case 536u: goto L_004CBFC4;
    case 537u: goto L_004CBFD4;
    case 538u: goto L_004CBFF0;
    case 539u: goto L_004CBFFC;
    default: bad_entry(c, 0x004C8000u); return;
    }
L_004C8000:
    c.budget -= 1;
L_004C8004:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8014u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8014u) [[unlikely]] return; }
L_004C8014:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 1;
L_004C8018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8020u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C8020u) [[unlikely]] return; }
L_004C8020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004C8040:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8068u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004C8068u) [[unlikely]] return; }
L_004C8068:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8078u); st32((c.r[29].w[0] + 124u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C8078u) [[unlikely]] return; }
L_004C8078:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_004C8094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C808Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C808Cu) [[unlikely]] return; }
L_004C808C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_004C8B50; } }
L_004C8094:
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C80A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C80A0u) [[unlikely]] return; }
L_004C80A0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 56u)));  goto L_004C80C0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C80B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004C80B8u) [[unlikely]] return; }
L_004C80B8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 2;
L_004C80C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[18].d[0];  if (t) { goto L_004C8128; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 56u), c.r[18].w[0]);  goto L_004C8108; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C80D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C80D8u) [[unlikely]] return; }
L_004C80D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C80E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C80E8u) [[unlikely]] return; }
L_004C80E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C8104; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8104u) [[unlikely]] return; }
L_004C8104:
    st32((c.r[19].w[0] + 56u), c.r[18].w[0]);
    c.budget -= 1;
L_004C8108:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004C8128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8118u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8118u) [[unlikely]] return; }
L_004C8118:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8128u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8128u) [[unlikely]] return; }
L_004C8128:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 2777u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004C8144; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004C814C; } }
L_004C8144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C814Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004C814Cu) [[unlikely]] return; }
L_004C814C:
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C815Cu); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x004C815Cu) [[unlikely]] return; }
L_004C815C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  goto L_004C81BC; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8188u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8188u) [[unlikely]] return; }
L_004C8188:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8198u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8198u) [[unlikely]] return; }
L_004C8198:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004C81B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C81B8u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004C81B8u) [[unlikely]] return; }
L_004C81B8:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_004C81BC:
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C81E8u); set32(c.r[16], c.r[2].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C81E8u) [[unlikely]] return; }
L_004C81E8:
    set32(c.r[6], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] + 48u);
    c.budget -= 4;
L_004C81F8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C81F8u | kUnwind; return; } goto L_004C81F8; } }
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[6].w[0] + 96u), c.f[2]);
    st32((c.r[6].w[0] + 100u), c.f[1]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[6].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    set32(c.r[4], 0u + 48u);
    st32((c.r[6].w[0] + 108u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C8248u) [[unlikely]] return; }
L_004C8248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C82B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8258u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004C8258u) [[unlikely]] return; }
L_004C8258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8274u); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004C8274u) [[unlikely]] return; }
L_004C8274:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8280u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004C8280u) [[unlikely]] return; }
L_004C8280:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C828Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004C828Cu) [[unlikely]] return; }
L_004C828C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x004C8298u) [[unlikely]] return; }
L_004C8298:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C82A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x004C82A4u) [[unlikely]] return; }
L_004C82A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C82B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x004C82B0u) [[unlikely]] return; }
L_004C82B0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004C82B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[16].w[0]);  if (t) { goto L_004C82D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C82C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C82C8u) [[unlikely]] return; }
L_004C82C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C82D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C82D8u) [[unlikely]] return; }
L_004C82D8:
    set32(c.r[9], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[6], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 32u);
    c.r[8].d[0] = ld16((c.r[9].w[0] + 28u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[8].d[0] | 512ull;
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[9].w[0] + 28u));
    c.r[8].d[0] = c.r[8].d[0] | 1ull;
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[9].w[0] + 28u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[9].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[9].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[9].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8344u); st8((c.r[9].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C8344u) [[unlikely]] return; }
L_004C8344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C839C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8354u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004C8354u) [[unlikely]] return; }
L_004C8354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004C839C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 168u), c.r[16].w[0]);  if (t) { goto L_004C83BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C83ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C83ACu) [[unlikely]] return; }
L_004C83AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C83BCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C83BCu) [[unlikely]] return; }
L_004C83BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C83E4u); st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C83E4u) [[unlikely]] return; }
L_004C83E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C83F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004C83F4u) [[unlikely]] return; }
L_004C83F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_004C8434:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 164u), c.r[16].w[0]);  if (t) { goto L_004C8454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8444u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8444u) [[unlikely]] return; }
L_004C8444:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8454u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8454u) [[unlikely]] return; }
L_004C8454:
    set32(c.r[7], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], 0u - 49u);
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], 0u + 92u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld16((c.r[7].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[7].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8484u); st16((c.r[7].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C8484u) [[unlikely]] return; }
L_004C8484:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 64u)));  goto L_004C84A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8498u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 173u, depth + 1u); else { c.pc = 0x002B5490u; return; } if (c.pc != 0x004C8498u) [[unlikely]] return; }
L_004C8498:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 2;
L_004C84A0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[18].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 64u)));  goto L_004C850C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 64u), c.r[18].w[0]);  goto L_004C84E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C84B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C84B8u) [[unlikely]] return; }
L_004C84B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C84C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C84C8u) [[unlikely]] return; }
L_004C84C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C84E4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C84E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C84E4u) [[unlikely]] return; }
L_004C84E4:
    st32((c.r[19].w[0] + 64u), c.r[18].w[0]);
    c.budget -= 1;
L_004C84E8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004C8508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C84F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C84F8u) [[unlikely]] return; }
L_004C84F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8508u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8508u) [[unlikely]] return; }
L_004C8508:
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 1;
L_004C850C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 2797u);
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8534u); st32((c.r[3].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004C8534u) [[unlikely]] return; }
L_004C8534:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8544u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004C8544u) [[unlikely]] return; }
L_004C8544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C854Cu); set32(c.r[4], ld32((c.r[19].w[0] + 60u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004C854Cu) [[unlikely]] return; }
L_004C854C:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[16].w[0]);  if (t) { goto L_004C8570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8560u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8560u) [[unlikely]] return; }
L_004C8560:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8570u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8570u) [[unlikely]] return; }
L_004C8570:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C857Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C857Cu) [[unlikely]] return; }
L_004C857C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 68u)));  goto L_004C8598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8590u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004C8590u) [[unlikely]] return; }
L_004C8590:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 2;
L_004C8598:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[18].d[0]) { set32(c.r[18], ld32((c.r[19].w[0] + 68u)));  goto L_004C8604; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 68u), c.r[18].w[0]);  goto L_004C85E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C85B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C85B0u) [[unlikely]] return; }
L_004C85B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C85C0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C85C0u) [[unlikely]] return; }
L_004C85C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C85DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C85DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C85DCu) [[unlikely]] return; }
L_004C85DC:
    st32((c.r[19].w[0] + 68u), c.r[18].w[0]);
    c.budget -= 1;
L_004C85E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004C8600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C85F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C85F0u) [[unlikely]] return; }
L_004C85F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8600u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8600u) [[unlikely]] return; }
L_004C8600:
    set32(c.r[18], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 1;
L_004C8604:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[20], ld32((c.r[29].w[0] + 160u)));  if (t) { goto L_004C86A0; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8620u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C8620u) [[unlikely]] return; }
L_004C8620:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));  goto L_004C8634; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8630u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004C8630u) [[unlikely]] return; }
L_004C8630:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));
    c.budget -= 1;
L_004C8634:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8658; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C8698; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C8698; } }
L_004C8658:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_004C8680; }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_004C869C; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C8698; } }
L_004C8680:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C8698; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004C8698:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_004C869C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004C86A0:
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[20].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 68u)));  goto L_004C8710; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[20].w[0]);  goto L_004C86EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C86BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C86BCu) [[unlikely]] return; }
L_004C86BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C86CCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C86CCu) [[unlikely]] return; }
L_004C86CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C86E8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C86E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C86E8u) [[unlikely]] return; }
L_004C86E8:
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    c.budget -= 1;
L_004C86EC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004C870C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C86FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C86FCu) [[unlikely]] return; }
L_004C86FC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C870Cu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C870Cu) [[unlikely]] return; }
L_004C870C:
    set32(c.r[5], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 1;
L_004C8710:
    set32(c.r[2], 0u - 15u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[5].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[5].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8734u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 152u, depth + 1u); else { c.pc = 0x00102350u; return; } if (c.pc != 0x004C8734u) [[unlikely]] return; }
L_004C8734:
    st32((c.r[19].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004C89E0; } }
L_004C8744:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 31024u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8768u); set32(c.r[21], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00F2(c, 193u, depth + 1u); else { c.pc = 0x004C9410u; return; } if (c.pc != 0x004C8768u) [[unlikely]] return; }
L_004C8768:
    set32(c.r[5], ld32((c.r[19].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[6], c.r[18].w[0] << 2);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C87F0u); set32(c.r[4], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C87F0u) [[unlikely]] return; }
L_004C87F0:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C87FCu); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C87FCu) [[unlikely]] return; }
L_004C87FC:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8808u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C8808u) [[unlikely]] return; }
L_004C8808:
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8814u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C8814u) [[unlikely]] return; }
L_004C8814:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8820u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C8820u) [[unlikely]] return; }
L_004C8820:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C882Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C882Cu) [[unlikely]] return; }
L_004C882C:
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8838u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C8838u) [[unlikely]] return; }
L_004C8838:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8844u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C8844u) [[unlikely]] return; }
L_004C8844:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8850u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C8850u) [[unlikely]] return; }
L_004C8850:
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C885Cu); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C885Cu) [[unlikely]] return; }
L_004C885C:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8868u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C8868u) [[unlikely]] return; }
L_004C8868:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8874u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C8874u) [[unlikely]] return; }
L_004C8874:
    set32(c.r[5], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8880u); set32(c.r[4], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C8880u) [[unlikely]] return; }
L_004C8880:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C888Cu); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C888Cu) [[unlikely]] return; }
L_004C888C:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8898u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C8898u) [[unlikely]] return; }
L_004C8898:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 196u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C88ACu); st16((c.r[17].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004C88ACu) [[unlikely]] return; }
L_004C88AC:
    set32(c.r[4], 0u + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C88B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C88B8u) [[unlikely]] return; }
L_004C88B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8900; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C88CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004C88CCu) [[unlikely]] return; }
L_004C88CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u - 8u);
    set32(c.r[3], c.r[3].w[0] + 7424u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 260u), 0u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 256u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_004C8900:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 256u));
    set32(c.r[2], 0u - 8u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8938u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8938u) [[unlikely]] return; }
L_004C8938:
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8944u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C8944u) [[unlikely]] return; }
L_004C8944:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_004C8964; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C895Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004C895Cu) [[unlikely]] return; }
L_004C895C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_004C8964:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8978u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8978u) [[unlikely]] return; }
L_004C8978:
    c.f[12] = ld32((c.r[28].w[0] - 31824u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = 0u;
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8994u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_005F(c, 80u, depth + 1u); else { c.pc = 0x0027D8C0u; return; } if (c.pc != 0x004C8994u) [[unlikely]] return; }
L_004C8994:
    c.f[0] = ld32((c.r[21].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[17].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C89D0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C89D0u) [[unlikely]] return; }
L_004C89D0:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], c.r[2].w[0] + 4u);
    c.budget -= 4;
L_004C89E0:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    set32(c.r[3], ld32((c.r[19].w[0] + 104u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8744u | kUnwind; return; } goto L_004C8744; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A1Cu); set32(c.r[4], ld32((c.r[19].w[0] + 56u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004C8A1Cu) [[unlikely]] return; }
L_004C8A1C:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A2Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004C8A2Cu) [[unlikely]] return; }
L_004C8A2C:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8A40u) [[unlikely]] return; }
L_004C8A40:
    set32(c.r[16], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 164u)));  goto L_004C8A84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8A54u) [[unlikely]] return; }
L_004C8A54:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A64u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8A64u) [[unlikely]] return; }
L_004C8A64:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C8A80; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8A80u) [[unlikely]] return; }
L_004C8A80:
    set32(c.r[16], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 1;
L_004C8A84:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 168u)));  goto L_004C8AC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8A94u) [[unlikely]] return; }
L_004C8A94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8AA4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8AA4u) [[unlikely]] return; }
L_004C8AA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C8AC0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8AC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8AC0u) [[unlikely]] return; }
L_004C8AC0:
    set32(c.r[16], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004C8AC4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 172u)));  goto L_004C8B04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8AD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8AD4u) [[unlikely]] return; }
L_004C8AD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8AE4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8AE4u) [[unlikely]] return; }
L_004C8AE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C8B00; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8B00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8B00u) [[unlikely]] return; }
L_004C8B00:
    set32(c.r[16], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_004C8B04:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 120u)));  goto L_004C8B44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8B14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8B14u) [[unlikely]] return; }
L_004C8B14:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8B24u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8B24u) [[unlikely]] return; }
L_004C8B24:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C8B40; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8B40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8B40u) [[unlikely]] return; }
L_004C8B40:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004C8B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8B4Cu);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C8B4Cu) [[unlikely]] return; }
L_004C8B4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_004C8B50:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004C8B70:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8BA0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004C8BA0u) [[unlikely]] return; }
L_004C8BA0:
    st32((c.r[29].w[0] + 452u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8BACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C8BACu) [[unlikely]] return; }
L_004C8BAC:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 108u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 448u), c.r[2].w[0]);  if (t) { goto L_004C8BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8BC0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C8BC0u) [[unlikely]] return; }
L_004C8BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_004C93E0; } }
L_004C8BC8:
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8BD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C8BD4u) [[unlikely]] return; }
L_004C8BD4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 80u)));  goto L_004C8BF4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8BECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004C8BECu) [[unlikely]] return; }
L_004C8BEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 2;
L_004C8BF4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_004C8C5C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 80u), c.r[17].w[0]);  goto L_004C8C3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8C0Cu) [[unlikely]] return; }
L_004C8C0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C1Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8C1Cu) [[unlikely]] return; }
L_004C8C1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C8C38; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8C38u) [[unlikely]] return; }
L_004C8C38:
    st32((c.r[20].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 1;
L_004C8C3C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004C8C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8C4Cu) [[unlikely]] return; }
L_004C8C4C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C5Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8C5Cu) [[unlikely]] return; }
L_004C8C5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C6Cu); set32(c.r[5], c.r[5].w[0] + 2833u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004C8C6Cu) [[unlikely]] return; }
L_004C8C6C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C80u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004C8C80u) [[unlikely]] return; }
L_004C8C80:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_004C8C94; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004C8C94:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004C8CA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004C8CB0; } }
L_004C8CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8CB0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004C8CB0u) [[unlikely]] return; }
L_004C8CB0:
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8CC0u); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x004C8CC0u) [[unlikely]] return; }
L_004C8CC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_004C8D20; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8CECu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8CECu) [[unlikely]] return; }
L_004C8CEC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8CFCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8CFCu) [[unlikely]] return; }
L_004C8CFC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004C8D1C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8D1Cu); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004C8D1Cu) [[unlikely]] return; }
L_004C8D1C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_004C8D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8D28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C8D28u) [[unlikely]] return; }
L_004C8D28:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8D34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004C8D34u) [[unlikely]] return; }
L_004C8D34:
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8D64u); set32(c.r[16], c.r[2].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8D64u) [[unlikely]] return; }
L_004C8D64:
    set32(c.r[6], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] + 48u);
    c.budget -= 4;
L_004C8D74:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8D74u | kUnwind; return; } goto L_004C8D74; } }
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[6].w[0] + 96u), c.f[2]);
    st32((c.r[6].w[0] + 100u), c.f[1]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[6].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    set32(c.r[4], 0u + 48u);
    st32((c.r[6].w[0] + 108u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8DC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C8DC4u) [[unlikely]] return; }
L_004C8DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8DD4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004C8DD4u) [[unlikely]] return; }
L_004C8DD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8DF0u); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004C8DF0u) [[unlikely]] return; }
L_004C8DF0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8DFCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004C8DFCu) [[unlikely]] return; }
L_004C8DFC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E08u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004C8E08u) [[unlikely]] return; }
L_004C8E08:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x004C8E14u) [[unlikely]] return; }
L_004C8E14:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x004C8E20u) [[unlikely]] return; }
L_004C8E20:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x004C8E2Cu) [[unlikely]] return; }
L_004C8E2C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004C8E34:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[6], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 32u);
    c.r[8].d[0] = c.r[5].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[8].d[0] = c.r[8].d[0] | 512ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E9Cu); st8((c.r[19].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C8E9Cu) [[unlikely]] return; }
L_004C8E9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8EF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8EACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004C8EACu) [[unlikely]] return; }
L_004C8EAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004C8EF4:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8F18u); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C8F18u) [[unlikely]] return; }
L_004C8F18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8F28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004C8F28u) [[unlikely]] return; }
L_004C8F28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_004C8F68:
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[3], 0u - 49u);
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], 0u + 92u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8F94u); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C8F94u) [[unlikely]] return; }
L_004C8F94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[21], ld32((c.r[20].w[0] + 88u)));  goto L_004C8FB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8FA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 173u, depth + 1u); else { c.pc = 0x002B5490u; return; } if (c.pc != 0x004C8FA8u) [[unlikely]] return; }
L_004C8FA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 2;
L_004C8FB0:
    c.budget -= 2;
    if (c.r[21].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 88u)));  goto L_004C901C; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[20].w[0] + 88u), c.r[16].w[0]);  goto L_004C8FF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8FC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C8FC8u) [[unlikely]] return; }
L_004C8FC8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8FD8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C8FD8u) [[unlikely]] return; }
L_004C8FD8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C8FF4; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8FF4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8FF4u) [[unlikely]] return; }
L_004C8FF4:
    st32((c.r[20].w[0] + 88u), c.r[16].w[0]);
    c.budget -= 1;
L_004C8FF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9008u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9008u) [[unlikely]] return; }
L_004C9008:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9018u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9018u) [[unlikely]] return; }
L_004C9018:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 1;
L_004C901C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], c.r[6].w[0] + 2847u);
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9050u); st32((c.r[3].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 120u, depth + 1u); else { c.pc = 0x003B9478u; return; } if (c.pc != 0x004C9050u) [[unlikely]] return; }
L_004C9050:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C905Cu); set32(c.r[16], c.r[20].w[0] + 84u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004C905Cu) [[unlikely]] return; }
L_004C905C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C906Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004C906Cu) [[unlikely]] return; }
L_004C906C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9074u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004C9074u) [[unlikely]] return; }
L_004C9074:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 488u), c.r[16].w[0]);  if (t) { goto L_004C9098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9088u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9088u) [[unlikely]] return; }
L_004C9088:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9098u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9098u) [[unlikely]] return; }
L_004C9098:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C90A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C90A4u) [[unlikely]] return; }
L_004C90A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_004C90C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C90B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004C90B8u) [[unlikely]] return; }
L_004C90B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 2;
L_004C90C0:
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_004C9158; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C90D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C90D8u) [[unlikely]] return; }
L_004C90D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_004C90EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C90E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004C90E8u) [[unlikely]] return; }
L_004C90E8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_004C90EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9110; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C9150; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C9150; } }
L_004C9110:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004C9138; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004C9154; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004C9150; } }
L_004C9138:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C9150; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004C9150:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_004C9154:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004C9158:
    set32(c.r[21], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[21].d[0] == c.r[22].d[0]) { c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));  goto L_004C91C8; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[23].w[0] + 8u), c.r[22].w[0]);  goto L_004C91A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9174u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9174u) [[unlikely]] return; }
L_004C9174:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9184u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9184u) [[unlikely]] return; }
L_004C9184:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C91A0; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C91A0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C91A0u) [[unlikely]] return; }
L_004C91A0:
    st32((c.r[23].w[0] + 8u), c.r[22].w[0]);
    c.budget -= 1;
L_004C91A4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_004C91C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C91B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C91B4u) [[unlikely]] return; }
L_004C91B4:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C91C4u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C91C4u) [[unlikely]] return; }
L_004C91C4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.budget -= 1;
L_004C91C8:
    set32(c.r[2], 0u - 15u);
    set32(c.r[21], ld32((c.r[29].w[0] + 488u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == 0ull; st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004C9214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C91E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C91E8u) [[unlikely]] return; }
L_004C91E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C91F8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C91F8u) [[unlikely]] return; }
L_004C91F8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[22], ld32((c.r[20].w[0] + 104u)));  goto L_004C937C; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9214u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9214u) [[unlikely]] return; }
L_004C9214:
    set32(c.r[22], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004C937C; } }
L_004C9220:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[4] = ld32((c.r[28].w[0] - 31684u));
    c.f[3] = 0u;
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[5] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[4] = fp::add(c.f[5], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    st32((c.r[29].w[0] + 440u), c.f[4]);
    st32((c.r[29].w[0] + 436u), c.f[2]);
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9278u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));  if (depth < kMaxDepth) unit_00F2(c, 193u, depth + 1u); else { c.pc = 0x004C9410u; return; } if (c.pc != 0x004C9278u) [[unlikely]] return; }
L_004C9278:
    set32(c.r[6], ld32((c.r[2].w[0] + 220u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 476u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C92A8u); st16((c.r[6].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C92A8u) [[unlikely]] return; }
L_004C92A8:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C92B4u); set32(c.r[5], c.r[29].w[0] + 476u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C92B4u) [[unlikely]] return; }
L_004C92B4:
    set32(c.r[4], c.r[29].w[0] + 476u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C92C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C92C0u) [[unlikely]] return; }
L_004C92C0:
    set32(c.r[4], c.r[29].w[0] + 472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C92CCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C92CCu) [[unlikely]] return; }
L_004C92CC:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C92D8u); set32(c.r[5], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C92D8u) [[unlikely]] return; }
L_004C92D8:
    set32(c.r[4], c.r[29].w[0] + 472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C92E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C92E4u) [[unlikely]] return; }
L_004C92E4:
    set32(c.r[4], c.r[29].w[0] + 468u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C92F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C92F0u) [[unlikely]] return; }
L_004C92F0:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C92FCu); set32(c.r[5], c.r[29].w[0] + 468u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C92FCu) [[unlikely]] return; }
L_004C92FC:
    set32(c.r[4], c.r[29].w[0] + 468u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9308u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C9308u) [[unlikely]] return; }
L_004C9308:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9314u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C9314u) [[unlikely]] return; }
L_004C9314:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9320u); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C9320u) [[unlikely]] return; }
L_004C9320:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C932Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C932Cu) [[unlikely]] return; }
L_004C932C:
    set32(c.r[5], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9338u); set32(c.r[4], c.r[29].w[0] + 460u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004C9338u) [[unlikely]] return; }
L_004C9338:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9344u); set32(c.r[5], c.r[29].w[0] + 460u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004C9344u) [[unlikely]] return; }
L_004C9344:
    set32(c.r[4], c.r[29].w[0] + 460u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9350u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004C9350u) [[unlikely]] return; }
L_004C9350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9358u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004C9358u) [[unlikely]] return; }
L_004C9358:
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9370u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9370u) [[unlikely]] return; }
L_004C9370:
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[22], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004C937C:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[2].d[0] = c.r[22].d[0] << 32;
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[22].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9220u | kUnwind; return; } goto L_004C9220; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C93B0u); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004C93B0u) [[unlikely]] return; }
L_004C93B0:
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C93C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004C93C0u) [[unlikely]] return; }
L_004C93C0:
    set32(c.r[4], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C93D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C93D4u) [[unlikely]] return; }
L_004C93D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C93DCu); set32(c.r[4], ld32((c.r[29].w[0] + 448u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C93DCu) [[unlikely]] return; }
L_004C93DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004C93E0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_004C9410:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C943Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004C943Cu) [[unlikely]] return; }
L_004C943C:
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9448u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C9448u) [[unlikely]] return; }
L_004C9448:
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9458u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004C9458u) [[unlikely]] return; }
L_004C9458:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9474u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004C9474u) [[unlikely]] return; }
L_004C9474:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], 0u + 48u);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.f[1]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    st32((c.r[2].w[0] + 28u), c.f[1]);
    st32((c.r[2].w[0] + 32u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9504u); st32((c.r[2].w[0] + 44u), c.f[2]);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004C9504u) [[unlikely]] return; }
L_004C9504:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9520u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004C9520u) [[unlikely]] return; }
L_004C9520:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 24u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9554u); st32((c.r[2].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x004C9554u) [[unlikely]] return; }
L_004C9554:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], 0u + 3u);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 1u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 80u);
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 18u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C959Cu); st16((c.r[2].w[0] + 22u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004C959Cu) [[unlikely]] return; }
L_004C959C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C95B8u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004C95B8u) [[unlikely]] return; }
L_004C95B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 256u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[2].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[2].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[2].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C963Cu); st32((c.r[2].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004C963Cu) [[unlikely]] return; }
L_004C963C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 196u));  goto L_004C967C; }
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[5].d[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9674u); st64((c.r[29].w[0] + 8u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0087(c, 344u, depth + 1u); else { c.pc = 0x0031F1F0u; return; } if (c.pc != 0x004C9674u) [[unlikely]] return; }
L_004C9674:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[19].w[0] + 196u));
    c.budget -= 2;
L_004C967C:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C968Cu); st16((c.r[19].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004C968Cu) [[unlikely]] return; }
L_004C968C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004C96C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 24u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004C9A24; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 108u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));  goto L_004C9A28; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9700u); set32(c.r[4], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9700u) [[unlikely]] return; }
L_004C9700:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 16u)));  goto L_004C974C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9714u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9714u) [[unlikely]] return; }
L_004C9714:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9728u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9728u) [[unlikely]] return; }
L_004C9728:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9748; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9748u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9748u) [[unlikely]] return; }
L_004C9748:
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_004C974C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  goto L_004C97B8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004C9794; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9764u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9764u) [[unlikely]] return; }
L_004C9764:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9774u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9774u) [[unlikely]] return; }
L_004C9774:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9790; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9790u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9790u) [[unlikely]] return; }
L_004C9790:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C9794:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_004C97B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C97A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C97A4u) [[unlikely]] return; }
L_004C97A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C97B4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C97B4u) [[unlikely]] return; }
L_004C97B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_004C97B8:
    set32(c.r[6], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C97CCu); set32(c.r[4], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C97CCu) [[unlikely]] return; }
L_004C97CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 80u)));  goto L_004C9818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C97E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C97E0u) [[unlikely]] return; }
L_004C97E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C97F4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C97F4u) [[unlikely]] return; }
L_004C97F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9814; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9814u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9814u) [[unlikely]] return; }
L_004C9814:
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_004C9818:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  goto L_004C9884; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004C9860; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9830u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9830u) [[unlikely]] return; }
L_004C9830:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9840u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9840u) [[unlikely]] return; }
L_004C9840:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C985C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C985Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C985Cu) [[unlikely]] return; }
L_004C985C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C9860:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 80u), 0u);  if (t) { goto L_004C9880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9870u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9870u) [[unlikely]] return; }
L_004C9870:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9880u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9880u) [[unlikely]] return; }
L_004C9880:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_004C9884:
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9898u); set32(c.r[4], c.r[29].w[0] + 68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9898u) [[unlikely]] return; }
L_004C9898:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 56u)));  goto L_004C98E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C98ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C98ACu) [[unlikely]] return; }
L_004C98AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C98C0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C98C0u) [[unlikely]] return; }
L_004C98C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C98E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C98E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C98E0u) [[unlikely]] return; }
L_004C98E0:
    set32(c.r[17], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_004C98E4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_004C9950; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004C992C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C98FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C98FCu) [[unlikely]] return; }
L_004C98FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C990Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C990Cu) [[unlikely]] return; }
L_004C990C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9928; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9928u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9928u) [[unlikely]] return; }
L_004C9928:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004C992C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 56u), 0u);  if (t) { goto L_004C994C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C993Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C993Cu) [[unlikely]] return; }
L_004C993C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C994Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C994Cu) [[unlikely]] return; }
L_004C994C:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_004C9950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9958u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004C9958u) [[unlikely]] return; }
L_004C9958:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_004C9970; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C996Cu);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004C996Cu) [[unlikely]] return; }
L_004C996C:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_004C9970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9978u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004C9978u) [[unlikely]] return; }
L_004C9978:
    st32((c.r[16].w[0] + 116u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 76u));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  goto L_004C99A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9990u); set32(c.r[4], ld32((c.r[16].w[0] + 120u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004C9990u) [[unlikely]] return; }
L_004C9990:
    st32((c.r[16].w[0] + 120u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C999Cu); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004C999Cu) [[unlikely]] return; }
L_004C999C:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 1;
L_004C99A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 52u), c.f[0]);  if (t) { goto L_004C9A04; } }
L_004C99C8:
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_004C99F8; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C99ECu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x004C99ECu) [[unlikely]] return; }
L_004C99EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C99F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C99F4u) [[unlikely]] return; }
L_004C99F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_004C99F8:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 3;
L_004C9A04:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C99C8u | kUnwind; return; } goto L_004C99C8; }
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 1;
L_004C9A24:
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004C9A28:
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004C9A50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004C9F8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 23896u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_004C9AF4; } }
L_004C9A88:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9AA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x004C9AA4u) [[unlikely]] return; }
L_004C9AA4:
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9AC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x004C9AC0u) [[unlikely]] return; }
L_004C9AC0:
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[7], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9AF0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 436u, depth + 1u); else { c.pc = 0x002A78D0u; return; } if (c.pc != 0x004C9AF0u) [[unlikely]] return; }
L_004C9AF0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004C9AF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9A88u | kUnwind; return; } goto L_004C9A88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9B0Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F2(c, 206u, depth + 1u); else { c.pc = 0x004C96C0u; return; } if (c.pc != 0x004C9B0Cu) [[unlikely]] return; }
L_004C9B0C:
    set32(c.r[2], c.r[19].w[0] + 92u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 88u);  goto L_004C9B50; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C9B4C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C9B4C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C9B4C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C9B4C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004C9B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9B4Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004C9B4Cu) [[unlikely]] return; }
L_004C9B4C:
    set32(c.r[2], c.r[19].w[0] + 88u);
    c.budget -= 1;
L_004C9B50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 80u);  goto L_004C9B9C; }
    set32(c.r[16], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9B6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9B6Cu) [[unlikely]] return; }
L_004C9B6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9B7Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9B7Cu) [[unlikely]] return; }
L_004C9B7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9B98; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9B98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9B98u) [[unlikely]] return; }
L_004C9B98:
    set32(c.r[2], c.r[19].w[0] + 80u);
    c.budget -= 1;
L_004C9B9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 68u);  goto L_004C9BE8; }
    set32(c.r[16], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9BB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9BB8u) [[unlikely]] return; }
L_004C9BB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9BC8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9BC8u) [[unlikely]] return; }
L_004C9BC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9BE4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9BE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9BE4u) [[unlikely]] return; }
L_004C9BE4:
    set32(c.r[2], c.r[19].w[0] + 68u);
    c.budget -= 1;
L_004C9BE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 64u);  goto L_004C9C34; }
    set32(c.r[16], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C04u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9C04u) [[unlikely]] return; }
L_004C9C04:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C14u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9C14u) [[unlikely]] return; }
L_004C9C14:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9C30; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9C30u) [[unlikely]] return; }
L_004C9C30:
    set32(c.r[2], c.r[19].w[0] + 64u);
    c.budget -= 1;
L_004C9C34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 56u);  goto L_004C9C80; }
    set32(c.r[16], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9C50u) [[unlikely]] return; }
L_004C9C50:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C60u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9C60u) [[unlikely]] return; }
L_004C9C60:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9C7C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9C7Cu) [[unlikely]] return; }
L_004C9C7C:
    set32(c.r[2], c.r[19].w[0] + 56u);
    c.budget -= 1;
L_004C9C80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 52u);  goto L_004C9CCC; }
    set32(c.r[16], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9CC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C9Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9C9Cu) [[unlikely]] return; }
L_004C9C9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9CACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9CACu) [[unlikely]] return; }
L_004C9CAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9CC8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9CC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9CC8u) [[unlikely]] return; }
L_004C9CC8:
    set32(c.r[2], c.r[19].w[0] + 52u);
    c.budget -= 1;
L_004C9CCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 48u);  goto L_004C9D18; }
    set32(c.r[16], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9CE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9CE8u) [[unlikely]] return; }
L_004C9CE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9CF8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9CF8u) [[unlikely]] return; }
L_004C9CF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9D14; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9D14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9D14u) [[unlikely]] return; }
L_004C9D14:
    set32(c.r[2], c.r[19].w[0] + 48u);
    c.budget -= 1;
L_004C9D18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 44u);  goto L_004C9D64; }
    set32(c.r[16], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9D34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9D34u) [[unlikely]] return; }
L_004C9D34:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9D44u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9D44u) [[unlikely]] return; }
L_004C9D44:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9D60; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9D60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9D60u) [[unlikely]] return; }
L_004C9D60:
    set32(c.r[2], c.r[19].w[0] + 44u);
    c.budget -= 1;
L_004C9D64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 40u);  goto L_004C9DB0; }
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9DAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9D80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9D80u) [[unlikely]] return; }
L_004C9D80:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9D90u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9D90u) [[unlikely]] return; }
L_004C9D90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9DAC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9DACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9DACu) [[unlikely]] return; }
L_004C9DAC:
    set32(c.r[2], c.r[19].w[0] + 40u);
    c.budget -= 1;
L_004C9DB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 36u);  goto L_004C9DFC; }
    set32(c.r[16], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9DCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9DCCu) [[unlikely]] return; }
L_004C9DCC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9DDCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9DDCu) [[unlikely]] return; }
L_004C9DDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9DF8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9DF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9DF8u) [[unlikely]] return; }
L_004C9DF8:
    set32(c.r[2], c.r[19].w[0] + 36u);
    c.budget -= 1;
L_004C9DFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 16u);  goto L_004C9E48; }
    set32(c.r[16], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9E44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9E18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9E18u) [[unlikely]] return; }
L_004C9E18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9E28u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9E28u) [[unlikely]] return; }
L_004C9E28:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9E44; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9E44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9E44u) [[unlikely]] return; }
L_004C9E44:
    set32(c.r[2], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_004C9E48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_004C9E94; }
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9E64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9E64u) [[unlikely]] return; }
L_004C9E64:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9E74u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9E74u) [[unlikely]] return; }
L_004C9E74:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9E90; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9E90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9E90u) [[unlikely]] return; }
L_004C9E90:
    set32(c.r[2], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_004C9E94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 8u);  goto L_004C9EE0; }
    set32(c.r[16], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9EDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9EB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9EB0u) [[unlikely]] return; }
L_004C9EB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9EC0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9EC0u) [[unlikely]] return; }
L_004C9EC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9EDC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9EDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9EDCu) [[unlikely]] return; }
L_004C9EDC:
    set32(c.r[2], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_004C9EE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 4u);  goto L_004C9F2C; }
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9EFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9EFCu) [[unlikely]] return; }
L_004C9EFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9F0Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9F0Cu) [[unlikely]] return; }
L_004C9F0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9F28; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9F28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9F28u) [[unlikely]] return; }
L_004C9F28:
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_004C9F2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_004C9F78; }
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004C9F74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9F48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004C9F48u) [[unlikely]] return; }
L_004C9F48:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9F58u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004C9F58u) [[unlikely]] return; }
L_004C9F58:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004C9F74; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9F74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9F74u) [[unlikely]] return; }
L_004C9F74:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_004C9F78:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_004C9F90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9F8Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004C9F8Cu) [[unlikely]] return; }
L_004C9F8C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004C9F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004C9FB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 23896u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 19;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_004CA014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA004u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA004u) [[unlikely]] return; }
L_004CA004:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA014u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA014u) [[unlikely]] return; }
L_004CA014:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 8u), 0u);  if (t) { goto L_004CA038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA028u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA028u) [[unlikely]] return; }
L_004CA028:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA038u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA038u) [[unlikely]] return; }
L_004CA038:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 12u), 0u);  if (t) { goto L_004CA05C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA04Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA04Cu) [[unlikely]] return; }
L_004CA04C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA05Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA05Cu) [[unlikely]] return; }
L_004CA05C:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 16u), 0u);  if (t) { goto L_004CA080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA070u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA070u) [[unlikely]] return; }
L_004CA070:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA080u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA080u) [[unlikely]] return; }
L_004CA080:
    st8((c.r[20].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.r[21].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 32u), 0u);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 36u), 0u);  if (t) { goto L_004CA0AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA09Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA09Cu) [[unlikely]] return; }
L_004CA09C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA0ACu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA0ACu) [[unlikely]] return; }
L_004CA0AC:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 40u), 0u);  if (t) { goto L_004CA0D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA0C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA0C0u) [[unlikely]] return; }
L_004CA0C0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA0D0u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA0D0u) [[unlikely]] return; }
L_004CA0D0:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 44u), 0u);  if (t) { goto L_004CA0F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA0E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA0E4u) [[unlikely]] return; }
L_004CA0E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA0F4u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA0F4u) [[unlikely]] return; }
L_004CA0F4:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 48u), 0u);  if (t) { goto L_004CA118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA108u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA108u) [[unlikely]] return; }
L_004CA108:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA118u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA118u) [[unlikely]] return; }
L_004CA118:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 52u), 0u);  if (t) { goto L_004CA13C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA12Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA12Cu) [[unlikely]] return; }
L_004CA12C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA13Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA13Cu) [[unlikely]] return; }
L_004CA13C:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 56u), 0u);  if (t) { goto L_004CA160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA150u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA150u) [[unlikely]] return; }
L_004CA150:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA160u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA160u) [[unlikely]] return; }
L_004CA160:
    st32((c.r[20].w[0] + 60u), 0u);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 64u), 0u);  if (t) { goto L_004CA188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA178u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA178u) [[unlikely]] return; }
L_004CA178:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA188u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA188u) [[unlikely]] return; }
L_004CA188:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 68u), 0u);  if (t) { goto L_004CA1AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA19Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA19Cu) [[unlikely]] return; }
L_004CA19C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA1ACu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA1ACu) [[unlikely]] return; }
L_004CA1AC:
    st32((c.r[20].w[0] + 72u), 0u);
    c.r[21].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 80u), 0u);  if (t) { goto L_004CA1D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA1C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA1C8u) [[unlikely]] return; }
L_004CA1C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA1D8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA1D8u) [[unlikely]] return; }
L_004CA1D8:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[20].w[0] + 88u), 0u);  if (t) { goto L_004CA1FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA1ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA1ECu) [[unlikely]] return; }
L_004CA1EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA1FCu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA1FCu) [[unlikely]] return; }
L_004CA1FC:
    set32(c.r[21], c.r[20].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA208u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004CA208u) [[unlikely]] return; }
L_004CA208:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004CA220; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA21Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004CA21Cu) [[unlikely]] return; }
L_004CA21C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004CA220:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[21].w[0]), c.r[2].w[0]);  goto L_004CA234; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA230u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004CA230u) [[unlikely]] return; }
L_004CA230:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004CA234:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[21].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0] + 8u), 0u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[21].w[0] + 12u), 0u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[20].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[20].w[0] + 116u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 120u), 0u);
    st32((c.r[20].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA270u); st32((c.r[20].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_00F1(c, 271u, depth + 1u); else { c.pc = 0x004C6C90u; return; } if (c.pc != 0x004CA270u) [[unlikely]] return; }
L_004CA270:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004CA2A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 48u));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 48u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.f[2] = ld32((c.r[28].w[0] - 29052u));  if (t) { goto L_004CA808; } }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_004CA80C; }
    st32((c.r[17].w[0] + 32u), c.f[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA31Cu); set32(c.r[5], c.r[5].w[0] + 3102u);  if (depth < kMaxDepth) unit_00C0(c, 292u, depth + 1u); else { c.pc = 0x00403F10u; return; } if (c.pc != 0x004CA31Cu) [[unlikely]] return; }
L_004CA31C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[6], 0u + 1u);
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 18104u));
    set32(c.r[8], ld32((c.r[17].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 400u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[8].w[0] + 68u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 18108u));
    st32((c.r[8].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 18112u));
    st32((c.r[8].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[8].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[8].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[3].w[0] + 96u));
    st32((c.r[2].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 100u));
    st32((c.r[2].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA3B8u); st32((c.r[2].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_00F2(c, 351u, depth + 1u); else { c.pc = 0x004CA830u; return; } if (c.pc != 0x004CA3B8u) [[unlikely]] return; }
L_004CA3B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[6], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA3D4u); set32(c.r[5], 0u + 150u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CA3D4u) [[unlikely]] return; }
L_004CA3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA3DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F3(c, 278u, depth + 1u); else { c.pc = 0x004CDD50u; return; } if (c.pc != 0x004CA3DCu) [[unlikely]] return; }
L_004CA3DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 96u));
    st32((c.r[29].w[0] + 200u), c.f[3]);
    c.f[0] = ld32((c.r[3].w[0] + 100u));
    st32((c.r[29].w[0] + 204u), c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 104u));
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[29].w[0] + 208u), c.f[1]);
    st32((c.r[29].w[0] + 204u), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[3] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 23;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[29].w[0] + 200u));  goto L_004CA448; }
    st32((c.r[29].w[0] + 204u), c.f[2]);
    st32((c.r[29].w[0] + 200u), c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 4;
L_004CA448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[29].w[0] + 204u));
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    c.f[3] = c.r[2].w[0];
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    fpu_rsqrt(c, 5u, c.f[3], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[0] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 204u), c.f[0]);
    fpu_div(c, 0u, c.f[3], c.f[5]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 208u), c.f[2]);
    c.f[20] = fp::max(c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 3121u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 24;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 20u)));  if (t) { goto L_004CA4B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004CA4BC; } }
L_004CA4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA4BCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004CA4BCu) [[unlikely]] return; }
L_004CA4BC:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA4D4u); set32(c.r[5], c.r[29].w[0] + 220u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CA4D4u) [[unlikely]] return; }
L_004CA4D4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_004CA4E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004CA52C; } }
L_004CA4E8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA4F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CA4F4u) [[unlikely]] return; }
L_004CA4F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_004CA510; } }
L_004CA500:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_004CA510; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004CA51C; } }
L_004CA510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA500u | kUnwind; return; } goto L_004CA500; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CA51C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_004CA52C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CA52C; } }
L_004CA52C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004CA588; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA558u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA558u) [[unlikely]] return; }
L_004CA558:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA568u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA568u) [[unlikely]] return; }
L_004CA568:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004CA588; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA588u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004CA588u) [[unlikely]] return; }
L_004CA588:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004CA680; } }
    c.f[14] = ld32((c.r[28].w[0] - 32620u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 200u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[13] = c.f[20];
    set32(c.r[9], c.r[29].w[0] + 184u);
    set32(c.r[10], 0u + 1u);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA5CCu); st32((c.r[29].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_00BD(c, 254u, depth + 1u); else { c.pc = 0x003F64D0u; return; } if (c.pc != 0x004CA5CCu) [[unlikely]] return; }
L_004CA5CC:
    c.f[14] = ld32((c.r[28].w[0] - 32620u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 200u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[13] = c.f[20];
    set32(c.r[9], c.r[29].w[0] + 168u);
    set32(c.r[10], 0u + 1u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA608u); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_00BD(c, 254u, depth + 1u); else { c.pc = 0x003F64D0u; return; } if (c.pc != 0x004CA608u) [[unlikely]] return; }
L_004CA608:
    c.f[14] = ld32((c.r[28].w[0] - 32620u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 200u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[13] = c.f[20];
    set32(c.r[9], c.r[29].w[0] + 152u);
    set32(c.r[10], 0u + 1u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 156u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA644u); st32((c.r[29].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_00BD(c, 254u, depth + 1u); else { c.pc = 0x003F64D0u; return; } if (c.pc != 0x004CA644u) [[unlikely]] return; }
L_004CA644:
    c.f[14] = ld32((c.r[28].w[0] - 32620u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 200u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[13] = c.f[20];
    set32(c.r[9], c.r[29].w[0] + 136u);
    set32(c.r[10], 0u + 1u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 140u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA680u); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_00BD(c, 254u, depth + 1u); else { c.pc = 0x003F64D0u; return; } if (c.pc != 0x004CA680u) [[unlikely]] return; }
L_004CA680:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 3132u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004CA69C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004CA6A4; } }
L_004CA69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA6A4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004CA6A4u) [[unlikely]] return; }
L_004CA6A4:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA6BCu); set32(c.r[5], c.r[29].w[0] + 216u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CA6BCu) [[unlikely]] return; }
L_004CA6BC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_004CA6D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004CA718; } }
L_004CA6D0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA6DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CA6DCu) [[unlikely]] return; }
L_004CA6DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_004CA6FC; } }
L_004CA6EC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_004CA6FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004CA708; } }
L_004CA6FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA6ECu | kUnwind; return; } goto L_004CA6EC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CA708:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_004CA718; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CA718; } }
L_004CA718:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004CA774; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[18], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA744u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CA744u) [[unlikely]] return; }
L_004CA744:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA754u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CA754u) [[unlikely]] return; }
L_004CA754:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004CA774; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA774u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004CA774u) [[unlikely]] return; }
L_004CA774:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_004CA7C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[13] = c.f[20];
    set32(c.r[7], c.r[29].w[0] + 200u);
    c.f[14] = c.r[2].w[0];
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 120u);
    set32(c.r[10], 0u + 1u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA7BCu); st32((c.r[29].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_00BD(c, 254u, depth + 1u); else { c.pc = 0x003F64D0u; return; } if (c.pc != 0x004CA7BCu) [[unlikely]] return; }
L_004CA7BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_004CA7C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004CA808; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA7E8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00FF(c, 253u, depth + 1u); else { c.pc = 0x004FE210u; return; } if (c.pc != 0x004CA7E8u) [[unlikely]] return; }
L_004CA7E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 32020u));  goto L_004CA7F8; }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.f[12] = ld32((c.r[28].w[0] - 32020u));
    c.budget -= 2;
L_004CA7F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[13] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA808u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 449u, depth + 1u); else { c.pc = 0x004C3800u; return; } if (c.pc != 0x004CA808u) [[unlikely]] return; }
L_004CA808:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_004CA80C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_004CA830:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[20].d[0] & 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[2].sd[0] < 401ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.f[31]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 25;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_004CA898; } }
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(400ll);
    c.budget -= 1;
L_004CA898:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[19], ld32((c.r[16].w[0] + 96u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 256u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], ld32((c.r[16].w[0] + 108u)));  if (t) { goto L_004CA8BC; } }
    st8((c.r[4].w[0] + 256u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA8BCu); c.f[12] = ld32((c.r[28].w[0] - 29052u));  if (depth < kMaxDepth) unit_0060(c, 572u, depth + 1u); else { c.pc = 0x00283B30u; return; } if (c.pc != 0x004CA8BCu) [[unlikely]] return; }
L_004CA8BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.f[2] = ld32((c.r[2].w[0] + 400u));
    c.f[1] = ld32((c.r[2].w[0] + 404u));
    c.f[0] = ld32((c.r[2].w[0] + 408u));
    c.f[20] = fp::mul(c.f[2], c.f[3]);
    c.f[21] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA8E8u); c.f[22] = fp::mul(c.f[0], c.f[3]);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004CA8E8u) [[unlikely]] return; }
L_004CA8E8:
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[5], 0u + 1u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[2] = fp::sub(c.f[2], c.f[22]);
    c.f[1] = fp::sub(c.f[1], c.f[21]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 376u), c.f[2]);
    st32((c.r[29].w[0] + 372u), c.f[1]);
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 368u));
    c.f[1] = ld32((c.r[29].w[0] + 372u));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[17].w[0] + 96u), c.f[2]);
    st32((c.r[17].w[0] + 100u), c.f[1]);
    c.f[12] = 0u;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA934u); st32((c.r[17].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004CA934u) [[unlikely]] return; }
L_004CA934:
    c.f[28] = ld32((c.r[19].w[0] + 68u));
    c.f[27] = ld32((c.r[19].w[0] + 24u));
    c.f[26] = ld32((c.r[19].w[0] + 28u));
    c.f[25] = ld32((c.r[19].w[0] + 32u));
    c.f[24] = ld32((c.r[19].w[0] + 36u));
    c.f[23] = ld32((c.r[19].w[0] + 40u));
    c.f[22] = ld32((c.r[19].w[0] + 44u));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.f[29] = ld32((c.r[19].w[0] + 64u));  if (t) { goto L_004CAB24; } }
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[2], 0u + 5u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = ld32((c.r[28].w[0] - 32620u));
    c.r[18].d[0] = 0ull + 0ull;
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::mul(c.f[1], c.f[27]);
    c.f[3] = fp::mul(c.f[4], c.f[29]);
    st32((c.r[19].w[0] + 64u), c.f[3]);
    c.f[3] = fp::mul(c.f[4], c.f[28]);
    st32((c.r[19].w[0] + 68u), c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[26]);
    st32((c.r[19].w[0] + 24u), c.f[2]);
    st32((c.r[19].w[0] + 28u), c.f[1]);
    c.f[1] = ld32((c.r[28].w[0] - 32028u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[2].w[0] + 2984u));
    c.r[17].d[0] = c.lo.d[0];
    c.f[30] = c.r[3].w[0];
    c.f[31] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 23;
L_004CA9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA9BCu);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x004CA9BCu) [[unlikely]] return; }
L_004CA9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA9C4u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x004CA9C4u) [[unlikely]] return; }
L_004CA9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA9CCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x004CA9CCu) [[unlikely]] return; }
L_004CA9CC:
    st32((c.r[29].w[0] + 400u), c.f[0]);
    st32((c.r[29].w[0] + 404u), c.f[20]);
    st32((c.r[29].w[0] + 408u), c.f[21]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_rsqrt(c, 2u, c.f[30], c.f[2]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 400u), c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[2]);
    c.f[0] = fp::mul(c.f[21], c.f[2]);
    c.f[12] = 0u;
    c.f[14] = c.r[2].w[0];
    st32((c.r[29].w[0] + 404u), c.f[1]);
    st32((c.r[29].w[0] + 408u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAA18u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CAA18u) [[unlikely]] return; }
L_004CAA18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAA24u); set32(c.r[4], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x004CAA24u) [[unlikely]] return; }
L_004CAA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAA2Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x004CAA2Cu) [[unlikely]] return; }
L_004CAA2C:
    c.f[12] = ld32((c.r[29].w[0] + 400u));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[13] = ld32((c.r[29].w[0] + 404u));
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAA44u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CAA44u) [[unlikely]] return; }
L_004CAA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAA4Cu); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x004CAA4Cu) [[unlikely]] return; }
L_004CAA4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAA64u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CAA64u) [[unlikely]] return; }
L_004CAA64:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAA70u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x004CAA70u) [[unlikely]] return; }
L_004CAA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAA78u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x004CAA78u) [[unlikely]] return; }
L_004CAA78:
    c.f[2] = ld32((c.r[29].w[0] + 356u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[19].w[0] + 32u), c.f[20]);  goto L_004CAA98; }
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 32u), c.f[20]);
    c.budget -= 2;
L_004CAA98:
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    st32((c.r[19].w[0] + 36u), c.f[31]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    st32((c.r[19].w[0] + 44u), c.f[31]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[6], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAAC0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CAAC0u) [[unlikely]] return; }
L_004CAAC0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA9B4u | kUnwind; return; } goto L_004CA9B4; } }
    st32((c.r[19].w[0] + 64u), c.f[29]);
    set32(c.r[2], c.r[17].w[0] << 1);
    st32((c.r[19].w[0] + 68u), c.f[28]);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[19].w[0] + 24u), c.f[27]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[19].w[0] + 28u), c.f[26]);
    st32((c.r[19].w[0] + 32u), c.f[25]);
    st32((c.r[19].w[0] + 36u), c.f[24]);
    st32((c.r[19].w[0] + 40u), c.f[23]);
    st32((c.r[19].w[0] + 44u), c.f[22]);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[6], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAB1Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CAB1Cu) [[unlikely]] return; }
L_004CAB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_004CACE0; } }
L_004CAB24:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[4] = ld32((c.r[3].w[0] + 96u));
    st32((c.r[29].w[0] + 384u), c.f[4]);
    c.f[3] = ld32((c.r[3].w[0] + 100u));
    st32((c.r[29].w[0] + 388u), c.f[3]);
    c.f[2] = ld32((c.r[3].w[0] + 104u));
    st32((c.r[29].w[0] + 392u), c.f[2]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = fp::sqrt(c.f[5]);
    c.f[1] = ld32((c.r[28].w[0] - 32068u));
    c.f[0] = c.r[2].w[0];
    c.f[30] = fp::mul(c.f[1], c.f[5]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    set32(c.r[4], c.r[29].w[0] + 144u);
    fpu_rsqrt(c, 5u, c.f[0], c.f[5]);
    c.f[0] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[5]);
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 388u), c.f[1]);
    st32((c.r[29].w[0] + 392u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAB9Cu); set32(c.r[17], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004CAB9Cu) [[unlikely]] return; }
L_004CAB9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CABA8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00F2(c, 381u, depth + 1u); else { c.pc = 0x004CAD30u; return; } if (c.pc != 0x004CABA8u) [[unlikely]] return; }
L_004CABA8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CABB4u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004CABB4u) [[unlikely]] return; }
L_004CABB4:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CABCCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CABCCu) [[unlikely]] return; }
L_004CABCC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CABD8u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x004CABD8u) [[unlikely]] return; }
L_004CABD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CABE0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x004CABE0u) [[unlikely]] return; }
L_004CABE0:
    c.f[21] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.f[1] = ld32((c.r[28].w[0] - 32028u));
    c.f[0] = ld32((c.r[28].w[0] - 29460u));
    c.f[12] = ld32((c.r[29].w[0] + 384u));
    c.f[13] = ld32((c.r[29].w[0] + 388u));
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAC04u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CAC04u) [[unlikely]] return; }
L_004CAC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAC0Cu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x004CAC0Cu) [[unlikely]] return; }
L_004CAC0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAC24u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CAC24u) [[unlikely]] return; }
L_004CAC24:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAC30u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x004CAC30u) [[unlikely]] return; }
L_004CAC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAC38u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x004CAC38u) [[unlikely]] return; }
L_004CAC38:
    c.f[2] = ld32((c.r[29].w[0] + 308u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = ld32((c.r[28].w[0] - 32028u));  goto L_004CAC58; }
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[4] = ld32((c.r[28].w[0] - 32028u));
    c.budget -= 2;
L_004CAC58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[28].w[0] - 29460u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = ld32((c.r[28].w[0] - 32564u));
    c.f[3] = ld32((c.r[28].w[0] - 32620u));
    c.f[4] = fp::mul(c.f[4], c.f[2]);
    c.f[2] = fp::mul(c.f[3], c.f[29]);
    st32((c.r[19].w[0] + 64u), c.f[2]);
    c.f[2] = fp::mul(c.f[3], c.f[28]);
    st32((c.r[19].w[0] + 68u), c.f[2]);
    st32((c.r[19].w[0] + 32u), c.f[21]);
    st32((c.r[19].w[0] + 36u), c.f[20]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    st32((c.r[19].w[0] + 44u), c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[30]);
    st32((c.r[19].w[0] + 24u), c.f[30]);
    st32((c.r[19].w[0] + 28u), c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.f[12] = ld32((c.r[28].w[0] - 29052u));
    set32(c.r[6], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CACBCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CACBCu) [[unlikely]] return; }
L_004CACBC:
    st32((c.r[19].w[0] + 64u), c.f[29]);
    st32((c.r[19].w[0] + 68u), c.f[28]);
    st32((c.r[19].w[0] + 24u), c.f[27]);
    st32((c.r[19].w[0] + 28u), c.f[26]);
    st32((c.r[19].w[0] + 32u), c.f[25]);
    st32((c.r[19].w[0] + 36u), c.f[24]);
    st32((c.r[19].w[0] + 40u), c.f[23]);
    st32((c.r[19].w[0] + 44u), c.f[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 9;
L_004CACE0:
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_004CAD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[8] = ld32((c.r[4].w[0]));
    c.f[7] = ld32((c.r[4].w[0] + 4u));
    c.f[6] = ld32((c.r[4].w[0] + 8u));
    c.f[5] = ld32((c.r[4].w[0] + 16u));
    c.f[4] = ld32((c.r[4].w[0] + 20u));
    c.f[3] = ld32((c.r[4].w[0] + 24u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[29].w[0] + 32u), c.f[8]);
    st32((c.r[29].w[0] + 36u), c.f[7]);
    st32((c.r[5].w[0]), c.f[8]);
    st32((c.r[5].w[0] + 4u), c.f[7]);
    st32((c.r[5].w[0] + 8u), c.f[6]);
    st32((c.r[5].w[0]), c.f[5]);
    st32((c.r[5].w[0] + 4u), c.f[4]);
    st32((c.r[5].w[0] + 8u), c.f[3]);
    st32((c.r[5].w[0]), c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[29].w[0] + 40u), c.f[6]);
    st32((c.r[29].w[0] + 16u), c.f[5]);
    st32((c.r[5].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[29].w[0] + 20u), c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[5].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 56u), c.f[0]);
    st32((c.r[5].w[0] + 44u), 0u);
    st32((c.r[5].w[0] + 28u), 0u);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 41;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004CADE0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAE0Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CAE0Cu) [[unlikely]] return; }
L_004CAE0C:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAE18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CAE18u) [[unlikely]] return; }
L_004CAE18:
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAE28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CAE28u) [[unlikely]] return; }
L_004CAE28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 156u), c.r[16].w[0]);  goto L_004CAE44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAE3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004CAE3Cu) [[unlikely]] return; }
L_004CAE3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 156u), c.r[16].w[0]);
    c.budget -= 2;
L_004CAE44:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 156u)));  goto L_004CAE68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAE54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CAE54u) [[unlikely]] return; }
L_004CAE54:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAE64u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CAE64u) [[unlikely]] return; }
L_004CAE64:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_004CAE68:
    set32(c.r[2], 0u - 15u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_004CAF1C; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAE98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CAE98u) [[unlikely]] return; }
L_004CAE98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_004CAEAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAEA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004CAEA8u) [[unlikely]] return; }
L_004CAEA8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_004CAEAC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004CAED0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CAF10; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CAF10; } }
L_004CAED0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004CAEF8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004CAF14; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CAF10; } }
L_004CAEF8:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004CAF10; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004CAF10:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_004CAF14:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_004CAF1C:
    set32(c.r[3], 0u - 12289u);
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[2].w[0]));  goto L_004CAFCC; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAF48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CAF48u) [[unlikely]] return; }
L_004CAF48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_004CAF5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAF58u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004CAF58u) [[unlikely]] return; }
L_004CAF58:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_004CAF5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004CAF80; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CAFC0; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CAFC0; } }
L_004CAF80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004CAFA8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004CAFC4; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CAFC0; } }
L_004CAFA8:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004CAFC0; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004CAFC0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_004CAFC4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_004CAFCC:
    set32(c.r[3], 0u - 3841u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAFE8u); st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CAFE8u) [[unlikely]] return; }
L_004CAFE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CB038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAFF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004CAFF8u) [[unlikely]] return; }
L_004CAFF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_004CB038:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB068u); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CB068u) [[unlikely]] return; }
L_004CB068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CB0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB078u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004CB078u) [[unlikely]] return; }
L_004CB078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004CB0C0:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB0F8u); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CB0F8u) [[unlikely]] return; }
L_004CB0F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CB168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004CB108u) [[unlikely]] return; }
L_004CB108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB124u); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004CB124u) [[unlikely]] return; }
L_004CB124:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB130u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004CB130u) [[unlikely]] return; }
L_004CB130:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB13Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004CB13Cu) [[unlikely]] return; }
L_004CB13C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x004CB148u) [[unlikely]] return; }
L_004CB148:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x004CB154u) [[unlikely]] return; }
L_004CB154:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB160u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x004CB160u) [[unlikely]] return; }
L_004CB160:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004CB168:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 92u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] & 65023ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 3072ull;
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB1CCu); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CB1CCu) [[unlikely]] return; }
L_004CB1CC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { set32(c.r[20], ld32((c.r[19].w[0] + 68u)));  goto L_004CB1E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB1E0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 173u, depth + 1u); else { c.pc = 0x002B5490u; return; } if (c.pc != 0x004CB1E0u) [[unlikely]] return; }
L_004CB1E0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 2;
L_004CB1E8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[21].d[0];  if (t) { goto L_004CB250; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[19].w[0] + 68u), c.r[21].w[0]);  goto L_004CB230; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB200u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CB200u) [[unlikely]] return; }
L_004CB200:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB210u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CB210u) [[unlikely]] return; }
L_004CB210:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB22C; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB22Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CB22Cu) [[unlikely]] return; }
L_004CB22C:
    st32((c.r[19].w[0] + 68u), c.r[21].w[0]);
    c.budget -= 1;
L_004CB230:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_004CB250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB240u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CB240u) [[unlikely]] return; }
L_004CB240:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB250u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CB250u) [[unlikely]] return; }
L_004CB250:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB25Cu); set32(c.r[4], c.r[4].w[0] + 3148u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004CB25Cu) [[unlikely]] return; }
L_004CB25C:
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB26Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004CB26Cu) [[unlikely]] return; }
L_004CB26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB274u); set32(c.r[4], ld32((c.r[19].w[0] + 64u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004CB274u) [[unlikely]] return; }
L_004CB274:
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[20], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[22].d[0] != 0ull) { set32(c.r[20], ld32((c.r[22].w[0] + 8u)));  goto L_004CB31C; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CB298u) [[unlikely]] return; }
L_004CB298:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[20].w[0] + 42u));  goto L_004CB2AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB2A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004CB2A8u) [[unlikely]] return; }
L_004CB2A8:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 42u));
    c.budget -= 1;
L_004CB2AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CB2D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[20].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CB310; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CB310; } }
L_004CB2D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  goto L_004CB2F8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  goto L_004CB314; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CB310; } }
L_004CB2F8:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004CB310; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[20].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004CB310:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 1;
L_004CB314:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 2;
L_004CB31C:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[21].d[0]) { set32(c.r[4], 0u + 272u);  goto L_004CB388; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[22].w[0] + 8u), c.r[21].w[0]);  goto L_004CB364; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB334u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CB334u) [[unlikely]] return; }
L_004CB334:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB344u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CB344u) [[unlikely]] return; }
L_004CB344:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB360; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB360u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CB360u) [[unlikely]] return; }
L_004CB360:
    st32((c.r[22].w[0] + 8u), c.r[21].w[0]);
    c.budget -= 1;
L_004CB364:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_004CB384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB374u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CB374u) [[unlikely]] return; }
L_004CB374:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB384u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CB384u) [[unlikely]] return; }
L_004CB384:
    set32(c.r[4], 0u + 272u);
    c.budget -= 1;
L_004CB388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CB390u) [[unlikely]] return; }
L_004CB390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CB3D8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB3A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004CB3A4u) [[unlikely]] return; }
L_004CB3A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u - 8u);
    set32(c.r[3], c.r[3].w[0] + 7424u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    st16((c.r[21].w[0] + 256u), static_cast<std::uint16_t>(0u));
    st32((c.r[21].w[0] + 260u), 0u);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 256u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[21].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[21].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_004CB3D8:
    set32(c.r[20], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[21].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 56u)));  goto L_004CB448; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[19].w[0] + 56u), c.r[21].w[0]);  goto L_004CB424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB3F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CB3F4u) [[unlikely]] return; }
L_004CB3F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB404u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CB404u) [[unlikely]] return; }
L_004CB404:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB420; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB420u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CB420u) [[unlikely]] return; }
L_004CB420:
    st32((c.r[19].w[0] + 56u), c.r[21].w[0]);
    c.budget -= 1;
L_004CB424:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_004CB444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB434u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CB434u) [[unlikely]] return; }
L_004CB434:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB444u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CB444u) [[unlikely]] return; }
L_004CB444:
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 1;
L_004CB448:
    set32(c.r[2], 0u - 8u);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 256u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[5].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[20], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB4A8u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CB4A8u) [[unlikely]] return; }
L_004CB4A8:
    set32(c.r[4], c.r[20].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB4B4u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CB4B4u) [[unlikely]] return; }
L_004CB4B4:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB4C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CB4C0u) [[unlikely]] return; }
L_004CB4C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB4D8u); set32(c.r[5], c.r[5].w[0] + 31024u);  if (depth < kMaxDepth) unit_00F2(c, 456u, depth + 1u); else { c.pc = 0x004CB680u; return; } if (c.pc != 0x004CB4D8u) [[unlikely]] return; }
L_004CB4D8:
    set32(c.r[21], ld32((c.r[19].w[0] + 60u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[21].d[0] == c.r[20].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 156u)));  goto L_004CB54C; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[19].w[0] + 60u), c.r[20].w[0]);  goto L_004CB528; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB4F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CB4F8u) [[unlikely]] return; }
L_004CB4F8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB508u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CB508u) [[unlikely]] return; }
L_004CB508:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB524; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB524u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CB524u) [[unlikely]] return; }
L_004CB524:
    st32((c.r[19].w[0] + 60u), c.r[20].w[0]);
    c.budget -= 1;
L_004CB528:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004CB548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB538u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CB538u) [[unlikely]] return; }
L_004CB538:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB548u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CB548u) [[unlikely]] return; }
L_004CB548:
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_004CB54C:
    set32(c.r[20], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB558u); set32(c.r[4], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CB558u) [[unlikely]] return; }
L_004CB558:
    set32(c.r[4], c.r[20].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB564u); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CB564u) [[unlikely]] return; }
L_004CB564:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB570u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CB570u) [[unlikely]] return; }
L_004CB570:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB580u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CB580u) [[unlikely]] return; }
L_004CB580:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB58Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CB58Cu) [[unlikely]] return; }
L_004CB58C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB598u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CB598u) [[unlikely]] return; }
L_004CB598:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB5A8u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CB5A8u) [[unlikely]] return; }
L_004CB5A8:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB5B4u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CB5B4u) [[unlikely]] return; }
L_004CB5B4:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB5C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CB5C0u) [[unlikely]] return; }
L_004CB5C0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB5D0u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CB5D0u) [[unlikely]] return; }
L_004CB5D0:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB5DCu); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CB5DCu) [[unlikely]] return; }
L_004CB5DC:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB5E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CB5E8u) [[unlikely]] return; }
L_004CB5E8:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB600u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CB600u) [[unlikely]] return; }
L_004CB600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB608u); set32(c.r[4], ld32((c.r[19].w[0] + 56u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004CB608u) [[unlikely]] return; }
L_004CB608:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 128u)));  goto L_004CB64C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB61Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CB61Cu) [[unlikely]] return; }
L_004CB61C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB62Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CB62Cu) [[unlikely]] return; }
L_004CB62C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB648; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB648u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CB648u) [[unlikely]] return; }
L_004CB648:
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_004CB64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB654u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CB654u) [[unlikely]] return; }
L_004CB654:
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
L_004CB680:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB6A8u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CB6A8u) [[unlikely]] return; }
L_004CB6A8:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB6B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CB6B4u) [[unlikely]] return; }
L_004CB6B4:
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB6C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004CB6C4u) [[unlikely]] return; }
L_004CB6C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB6E0u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004CB6E0u) [[unlikely]] return; }
L_004CB6E0:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], 0u + 48u);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.f[1]);
    st32((c.r[2].w[0] + 20u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 24u), c.f[0]);
    st32((c.r[2].w[0] + 28u), c.f[1]);
    st32((c.r[2].w[0] + 32u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB770u); st32((c.r[2].w[0] + 44u), c.f[2]);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004CB770u) [[unlikely]] return; }
L_004CB770:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB78Cu); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004CB78Cu) [[unlikely]] return; }
L_004CB78C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 24u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB7C0u); st32((c.r[2].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x004CB7C0u) [[unlikely]] return; }
L_004CB7C0:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 3u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB7F4u); st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CB7F4u) [[unlikely]] return; }
L_004CB7F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 220u)));  goto L_004CB838; }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB830u); st64((c.r[29].w[0] + 8u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0087(c, 344u, depth + 1u); else { c.pc = 0x0031F1F0u; return; } if (c.pc != 0x004CB830u) [[unlikely]] return; }
L_004CB830:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 2;
L_004CB838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 52u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[17].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB870u); st16((c.r[17].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CB870u) [[unlikely]] return; }
L_004CB870:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004CB8A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB8BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CB8BCu) [[unlikely]] return; }
L_004CB8BC:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB8C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CB8C8u) [[unlikely]] return; }
L_004CB8C8:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB8D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CB8D8u) [[unlikely]] return; }
L_004CB8D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_004CB8FC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3166u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB8F8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 152u, depth + 1u); else { c.pc = 0x001F94E0u; return; } if (c.pc != 0x004CB8F8u) [[unlikely]] return; }
L_004CB8F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_004CB8FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB904u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CB904u) [[unlikely]] return; }
L_004CB904:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB910u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CB910u) [[unlikely]] return; }
L_004CB910:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_004CB930; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB92Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_003F(c, 82u, depth + 1u); else { c.pc = 0x001FD180u; return; } if (c.pc != 0x004CB92Cu) [[unlikely]] return; }
L_004CB92C:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_004CB930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB938u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CB938u) [[unlikely]] return; }
L_004CB938:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB944u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CB944u) [[unlikely]] return; }
L_004CB944:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_004CB960; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB95Cu); set32(c.r[5], c.r[5].w[0] + 3188u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214210u; return; } if (c.pc != 0x004CB95Cu) [[unlikely]] return; }
L_004CB95C:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_004CB960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB968u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CB968u) [[unlikely]] return; }
L_004CB968:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB974u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CB974u) [[unlikely]] return; }
L_004CB974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CB9C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB984u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004CB984u) [[unlikely]] return; }
L_004CB984:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_004CB9C4:
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB9F4u); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CB9F4u) [[unlikely]] return; }
L_004CB9F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CBA4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBA04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004CBA04u) [[unlikely]] return; }
L_004CBA04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004CBA4C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 3197u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBA84u); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004CBA84u) [[unlikely]] return; }
L_004CBA84:
    st32((c.r[18].w[0] + 160u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBA94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004CBA94u) [[unlikely]] return; }
L_004CBA94:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBAA4u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CBAA4u) [[unlikely]] return; }
L_004CBAA4:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBAB0u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CBAB0u) [[unlikely]] return; }
L_004CBAB0:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBABCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CBABCu) [[unlikely]] return; }
L_004CBABC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBACCu); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CBACCu) [[unlikely]] return; }
L_004CBACC:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBAD8u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CBAD8u) [[unlikely]] return; }
L_004CBAD8:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBAE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CBAE4u) [[unlikely]] return; }
L_004CBAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBAECu); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004CBAECu) [[unlikely]] return; }
L_004CBAEC:
    set32(c.r[4], 0u + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBAF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004CBAF8u) [[unlikely]] return; }
L_004CBAF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13328u);
    set32(c.r[6], c.r[6].w[0] + 13248u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBB18u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004CBB18u) [[unlikely]] return; }
L_004CBB18:
    c.f[0] = ld32((c.r[28].w[0] - 31732u));
    st32((c.r[2].w[0]), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[2].w[0] + 16u), c.r[6].w[0]);
    c.f[2] = ld32((c.r[28].w[0] - 32564u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[28].w[0] - 31756u));
    set32(c.r[4], 0u + 24u);
    st32((c.r[2].w[0] + 24u), c.f[2]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 28u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    st32((c.r[2].w[0] + 32u), c.f[2]);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 56u), c.f[1]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    st32((c.r[2].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 80u), 0u);
    st32((c.r[2].w[0] + 84u), 0u);
    st32((c.r[2].w[0] + 88u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBB7Cu); st32((c.r[2].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBB7Cu) [[unlikely]] return; }
L_004CBB7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CBBA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBB8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x004CBB8Cu) [[unlikely]] return; }
L_004CBB8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 432u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 6;
L_004CBBA4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBBB8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 233u, depth + 1u); else { c.pc = 0x0024E040u; return; } if (c.pc != 0x004CBBB8u) [[unlikely]] return; }
L_004CBBB8:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBBC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBBC4u) [[unlikely]] return; }
L_004CBBC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_004CBBE4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBBE0u); set32(c.r[5], c.r[5].w[0] + 3215u);  if (depth < kMaxDepth) unit_003F(c, 336u, depth + 1u); else { c.pc = 0x001FF0E0u; return; } if (c.pc != 0x004CBBE0u) [[unlikely]] return; }
L_004CBBE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_004CBBE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBBECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CBBECu) [[unlikely]] return; }
L_004CBBEC:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBBF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBBF8u) [[unlikely]] return; }
L_004CBBF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_004CBC38; }
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] + 3221u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[14] = c.f[13];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBC34u); set32(c.r[9], c.r[9].w[0] + 31040u);  if (depth < kMaxDepth) unit_0040(c, 89u, depth + 1u); else { c.pc = 0x002011C0u; return; } if (c.pc != 0x004CBC34u) [[unlikely]] return; }
L_004CBC34:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_004CBC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBC40u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CBC40u) [[unlikely]] return; }
L_004CBC40:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBC4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBC4Cu) [[unlikely]] return; }
L_004CBC4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  goto L_004CBC78; }
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3226u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBC74u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0042(c, 177u, depth + 1u); else { c.pc = 0x00209CD0u; return; } if (c.pc != 0x004CBC74u) [[unlikely]] return; }
L_004CBC74:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_004CBC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBC80u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CBC80u) [[unlikely]] return; }
L_004CBC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBC88u); set32(c.r[4], ld32((c.r[29].w[0] + 64u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CBC88u) [[unlikely]] return; }
L_004CBC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004CBCB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBCD4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CBCD4u) [[unlikely]] return; }
L_004CBCD4:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBCE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CBCE0u) [[unlikely]] return; }
L_004CBCE0:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBCF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBCF0u) [[unlikely]] return; }
L_004CBCF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_004CBD14; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3166u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBD10u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 152u, depth + 1u); else { c.pc = 0x001F94E0u; return; } if (c.pc != 0x004CBD10u) [[unlikely]] return; }
L_004CBD10:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_004CBD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBD1Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CBD1Cu) [[unlikely]] return; }
L_004CBD1C:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBD28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBD28u) [[unlikely]] return; }
L_004CBD28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_004CBD48; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBD44u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_003F(c, 82u, depth + 1u); else { c.pc = 0x001FD180u; return; } if (c.pc != 0x004CBD44u) [[unlikely]] return; }
L_004CBD44:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_004CBD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBD50u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CBD50u) [[unlikely]] return; }
L_004CBD50:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBD5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBD5Cu) [[unlikely]] return; }
L_004CBD5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_004CBD78; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBD74u); set32(c.r[5], c.r[5].w[0] + 3188u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214210u; return; } if (c.pc != 0x004CBD74u) [[unlikely]] return; }
L_004CBD74:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_004CBD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBD80u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CBD80u) [[unlikely]] return; }
L_004CBD80:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBD8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBD8Cu) [[unlikely]] return; }
L_004CBD8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_004CBDBC; }
    c.f[12] = ld32((c.r[28].w[0] - 32244u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] + 3226u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBDB8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 177u, depth + 1u); else { c.pc = 0x00209CD0u; return; } if (c.pc != 0x004CBDB8u) [[unlikely]] return; }
L_004CBDB8:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_004CBDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBDC4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CBDC4u) [[unlikely]] return; }
L_004CBDC4:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBDD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBDD0u) [[unlikely]] return; }
L_004CBDD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_004CBE10; }
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.f[14] = ld32((c.r[28].w[0] - 31832u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[15] = ld32((c.r[28].w[0] - 32272u));
    set32(c.r[5], c.r[5].w[0] + 3236u);
    c.f[12] = 0u;
    set32(c.r[7], c.r[7].w[0] + 31056u);
    c.f[13] = c.r[3].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBE0Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x002092F0u; return; } if (c.pc != 0x004CBE0Cu) [[unlikely]] return; }
L_004CBE0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_004CBE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBE18u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CBE18u) [[unlikely]] return; }
L_004CBE18:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBE24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBE24u) [[unlikely]] return; }
L_004CBE24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CBE74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBE34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004CBE34u) [[unlikely]] return; }
L_004CBE34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_004CBE74:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBEA4u); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBEA4u) [[unlikely]] return; }
L_004CBEA4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 24u)));  goto L_004CBEC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBEB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004CBEB8u) [[unlikely]] return; }
L_004CBEB8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 2;
L_004CBEC0:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[19].d[0]) { set32(c.r[4], 0u + 32u);  goto L_004CBF2C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 24u), c.r[19].w[0]);  goto L_004CBF08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBED8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CBED8u) [[unlikely]] return; }
L_004CBED8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBEE8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CBEE8u) [[unlikely]] return; }
L_004CBEE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBF04; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBF04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CBF04u) [[unlikely]] return; }
L_004CBF04:
    st32((c.r[18].w[0] + 24u), c.r[19].w[0]);
    c.budget -= 1;
L_004CBF08:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004CBF28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBF18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CBF18u) [[unlikely]] return; }
L_004CBF18:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBF28u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CBF28u) [[unlikely]] return; }
L_004CBF28:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_004CBF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBF34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBF34u) [[unlikely]] return; }
L_004CBF34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CBF8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBF44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004CBF44u) [[unlikely]] return; }
L_004CBF44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004CBF8C:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBFC4u); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CBFC4u) [[unlikely]] return; }
L_004CBFC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00F3(c, 6u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBFD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004CBFD4u) [[unlikely]] return; }
L_004CBFD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBFF0u); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004CBFF0u) [[unlikely]] return; }
L_004CBFF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBFFCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004CBFFCu) [[unlikely]] return; }
L_004CBFFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_00F3(c, 1u, depth);
}

}
