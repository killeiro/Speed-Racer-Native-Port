#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BC[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0,
    51, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0,
    0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0,
    0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0,
    0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0,
    287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310,
    0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0,
    0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0,
    0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0,
    0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0,
    431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0,
    445, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456,
    0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0,
    0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0,
    0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0,
    0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 494,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0,
    496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501,
    0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0,
    515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 523,
    0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 534,
    0, 0, 0, 535, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0,
    540, 541, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BC(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F0000;
    case 2u: goto L_003F0004;
    case 3u: goto L_003F0014;
    case 4u: goto L_003F0028;
    case 5u: goto L_003F0038;
    case 6u: goto L_003F0054;
    case 7u: goto L_003F0080;
    case 8u: goto L_003F00A8;
    case 9u: goto L_003F00B8;
    case 10u: goto L_003F00D0;
    case 11u: goto L_003F0118;
    case 12u: goto L_003F0130;
    case 13u: goto L_003F0158;
    case 14u: goto L_003F0168;
    case 15u: goto L_003F0194;
    case 16u: goto L_003F01A4;
    case 17u: goto L_003F01C4;
    case 18u: goto L_003F01DC;
    case 19u: goto L_003F0208;
    case 20u: goto L_003F0214;
    case 21u: goto L_003F0240;
    case 22u: goto L_003F0274;
    case 23u: goto L_003F0328;
    case 24u: goto L_003F03A8;
    case 25u: goto L_003F0470;
    case 26u: goto L_003F0504;
    case 27u: goto L_003F058C;
    case 28u: goto L_003F05D0;
    case 29u: goto L_003F05F8;
    case 30u: goto L_003F0608;
    case 31u: goto L_003F061C;
    case 32u: goto L_003F0628;
    case 33u: goto L_003F0634;
    case 34u: goto L_003F0644;
    case 35u: goto L_003F0654;
    case 36u: goto L_003F0660;
    case 37u: goto L_003F0674;
    case 38u: goto L_003F0684;
    case 39u: goto L_003F069C;
    case 40u: goto L_003F06C8;
    case 41u: goto L_003F06E0;
    case 42u: goto L_003F06F4;
    case 43u: goto L_003F0714;
    case 44u: goto L_003F0740;
    case 45u: goto L_003F07A4;
    case 46u: goto L_003F07AC;
    case 47u: goto L_003F07C4;
    case 48u: goto L_003F07D4;
    case 49u: goto L_003F07E8;
    case 50u: goto L_003F07F8;
    case 51u: goto L_003F0800;
    case 52u: goto L_003F0804;
    case 53u: goto L_003F0844;
    case 54u: goto L_003F0850;
    case 55u: goto L_003F0864;
    case 56u: goto L_003F0888;
    case 57u: goto L_003F0890;
    case 58u: goto L_003F08A8;
    case 59u: goto L_003F08B4;
    case 60u: goto L_003F08E8;
    case 61u: goto L_003F090C;
    case 62u: goto L_003F0918;
    case 63u: goto L_003F0928;
    case 64u: goto L_003F0948;
    case 65u: goto L_003F0954;
    case 66u: goto L_003F0964;
    case 67u: goto L_003F0978;
    case 68u: goto L_003F098C;
    case 69u: goto L_003F099C;
    case 70u: goto L_003F09BC;
    case 71u: goto L_003F09D0;
    case 72u: goto L_003F09E0;
    case 73u: goto L_003F0A08;
    case 74u: goto L_003F0A40;
    case 75u: goto L_003F0A60;
    case 76u: goto L_003F0A80;
    case 77u: goto L_003F0AA0;
    case 78u: goto L_003F0AB0;
    case 79u: goto L_003F0AD8;
    case 80u: goto L_003F0AE8;
    case 81u: goto L_003F0B00;
    case 82u: goto L_003F0B20;
    case 83u: goto L_003F0B58;
    case 84u: goto L_003F0B68;
    case 85u: goto L_003F0B84;
    case 86u: goto L_003F0B98;
    case 87u: goto L_003F0BA8;
    case 88u: goto L_003F0BD0;
    case 89u: goto L_003F0BF0;
    case 90u: goto L_003F0C18;
    case 91u: goto L_003F0C28;
    case 92u: goto L_003F0C40;
    case 93u: goto L_003F0C74;
    case 94u: goto L_003F0C80;
    case 95u: goto L_003F0CDC;
    case 96u: goto L_003F0CE8;
    case 97u: goto L_003F0CF0;
    case 98u: goto L_003F0D10;
    case 99u: goto L_003F0D18;
    case 100u: goto L_003F0D30;
    case 101u: goto L_003F0D3C;
    case 102u: goto L_003F0D44;
    case 103u: goto L_003F0D50;
    case 104u: goto L_003F0D5C;
    case 105u: goto L_003F0D74;
    case 106u: goto L_003F0DF4;
    case 107u: goto L_003F0E04;
    case 108u: goto L_003F0E30;
    case 109u: goto L_003F0E44;
    case 110u: goto L_003F0E50;
    case 111u: goto L_003F0E60;
    case 112u: goto L_003F0E80;
    case 113u: goto L_003F0E8C;
    case 114u: goto L_003F0E98;
    case 115u: goto L_003F0EB0;
    case 116u: goto L_003F0EBC;
    case 117u: goto L_003F0EC8;
    case 118u: goto L_003F0EE4;
    case 119u: goto L_003F0EF0;
    case 120u: goto L_003F0EFC;
    case 121u: goto L_003F0F28;
    case 122u: goto L_003F0F34;
    case 123u: goto L_003F0F40;
    case 124u: goto L_003F0F80;
    case 125u: goto L_003F0F8C;
    case 126u: goto L_003F0F98;
    case 127u: goto L_003F1004;
    case 128u: goto L_003F1010;
    case 129u: goto L_003F101C;
    case 130u: goto L_003F1058;
    case 131u: goto L_003F1064;
    case 132u: goto L_003F106C;
    case 133u: goto L_003F1080;
    case 134u: goto L_003F109C;
    case 135u: goto L_003F10A8;
    case 136u: goto L_003F10B8;
    case 137u: goto L_003F10DC;
    case 138u: goto L_003F10FC;
    case 139u: goto L_003F110C;
    case 140u: goto L_003F1128;
    case 141u: goto L_003F113C;
    case 142u: goto L_003F114C;
    case 143u: goto L_003F1164;
    case 144u: goto L_003F1170;
    case 145u: goto L_003F1184;
    case 146u: goto L_003F11A4;
    case 147u: goto L_003F11B4;
    case 148u: goto L_003F11D0;
    case 149u: goto L_003F11E4;
    case 150u: goto L_003F11F4;
    case 151u: goto L_003F1208;
    case 152u: goto L_003F1210;
    case 153u: goto L_003F1230;
    case 154u: goto L_003F1260;
    case 155u: goto L_003F1288;
    case 156u: goto L_003F1298;
    case 157u: goto L_003F12C0;
    case 158u: goto L_003F12D0;
    case 159u: goto L_003F12EC;
    case 160u: goto L_003F1300;
    case 161u: goto L_003F1310;
    case 162u: goto L_003F131C;
    case 163u: goto L_003F1334;
    case 164u: goto L_003F1354;
    case 165u: goto L_003F1364;
    case 166u: goto L_003F1380;
    case 167u: goto L_003F1394;
    case 168u: goto L_003F13A4;
    case 169u: goto L_003F13C8;
    case 170u: goto L_003F13D8;
    case 171u: goto L_003F1404;
    case 172u: goto L_003F1414;
    case 173u: goto L_003F1434;
    case 174u: goto L_003F144C;
    case 175u: goto L_003F1458;
    case 176u: goto L_003F1468;
    case 177u: goto L_003F14D8;
    case 178u: goto L_003F14E8;
    case 179u: goto L_003F1568;
    case 180u: goto L_003F1578;
    case 181u: goto L_003F1594;
    case 182u: goto L_003F15A0;
    case 183u: goto L_003F15AC;
    case 184u: goto L_003F15B8;
    case 185u: goto L_003F15C4;
    case 186u: goto L_003F15D0;
    case 187u: goto L_003F1644;
    case 188u: goto L_003F1650;
    case 189u: goto L_003F165C;
    case 190u: goto L_003F166C;
    case 191u: goto L_003F1678;
    case 192u: goto L_003F1684;
    case 193u: goto L_003F1694;
    case 194u: goto L_003F16A0;
    case 195u: goto L_003F16AC;
    case 196u: goto L_003F16B4;
    case 197u: goto L_003F16D0;
    case 198u: goto L_003F16E0;
    case 199u: goto L_003F16FC;
    case 200u: goto L_003F1710;
    case 201u: goto L_003F1720;
    case 202u: goto L_003F173C;
    case 203u: goto L_003F174C;
    case 204u: goto L_003F1768;
    case 205u: goto L_003F177C;
    case 206u: goto L_003F178C;
    case 207u: goto L_003F17C4;
    case 208u: goto L_003F17F8;
    case 209u: goto L_003F1810;
    case 210u: goto L_003F1818;
    case 211u: goto L_003F1820;
    case 212u: goto L_003F1828;
    case 213u: goto L_003F1850;
    case 214u: goto L_003F1868;
    case 215u: goto L_003F1880;
    case 216u: goto L_003F1894;
    case 217u: goto L_003F18A8;
    case 218u: goto L_003F18C8;
    case 219u: goto L_003F18D4;
    case 220u: goto L_003F18F0;
    case 221u: goto L_003F1920;
    case 222u: goto L_003F1940;
    case 223u: goto L_003F1950;
    case 224u: goto L_003F196C;
    case 225u: goto L_003F198C;
    case 226u: goto L_003F199C;
    case 227u: goto L_003F19B8;
    case 228u: goto L_003F19CC;
    case 229u: goto L_003F19EC;
    case 230u: goto L_003F19FC;
    case 231u: goto L_003F1A18;
    case 232u: goto L_003F1A5C;
    case 233u: goto L_003F1A7C;
    case 234u: goto L_003F1A8C;
    case 235u: goto L_003F1AA8;
    case 236u: goto L_003F1AD4;
    case 237u: goto L_003F1AF0;
    case 238u: goto L_003F1B44;
    case 239u: goto L_003F1B54;
    case 240u: goto L_003F1B90;
    case 241u: goto L_003F1BB0;
    case 242u: goto L_003F1BDC;
    case 243u: goto L_003F1BEC;
    case 244u: goto L_003F1BF4;
    case 245u: goto L_003F1C08;
    case 246u: goto L_003F1C18;
    case 247u: goto L_003F1C2C;
    case 248u: goto L_003F1C3C;
    case 249u: goto L_003F1C4C;
    case 250u: goto L_003F1C68;
    case 251u: goto L_003F1C90;
    case 252u: goto L_003F1CE4;
    case 253u: goto L_003F1D00;
    case 254u: goto L_003F1D20;
    case 255u: goto L_003F1D64;
    case 256u: goto L_003F1D80;
    case 257u: goto L_003F1DA0;
    case 258u: goto L_003F1DB0;
    case 259u: goto L_003F1DC0;
    case 260u: goto L_003F1DD0;
    case 261u: goto L_003F1DE0;
    case 262u: goto L_003F1E00;
    case 263u: goto L_003F1E10;
    case 264u: goto L_003F1E20;
    case 265u: goto L_003F1E30;
    case 266u: goto L_003F1E40;
    case 267u: goto L_003F1E68;
    case 268u: goto L_003F1E80;
    case 269u: goto L_003F1EA0;
    case 270u: goto L_003F1EC0;
    case 271u: goto L_003F1EDC;
    case 272u: goto L_003F1F00;
    case 273u: goto L_003F1F18;
    case 274u: goto L_003F1F40;
    case 275u: goto L_003F1F5C;
    case 276u: goto L_003F1F64;
    case 277u: goto L_003F1F80;
    case 278u: goto L_003F1FC4;
    case 279u: goto L_003F1FF4;
    case 280u: goto L_003F2010;
    case 281u: goto L_003F2050;
    case 282u: goto L_003F2068;
    case 283u: goto L_003F2090;
    case 284u: goto L_003F20C8;
    case 285u: goto L_003F20E0;
    case 286u: goto L_003F20F0;
    case 287u: goto L_003F2100;
    case 288u: goto L_003F2110;
    case 289u: goto L_003F2120;
    case 290u: goto L_003F2180;
    case 291u: goto L_003F2190;
    case 292u: goto L_003F21A0;
    case 293u: goto L_003F21BC;
    case 294u: goto L_003F21D0;
    case 295u: goto L_003F21F0;
    case 296u: goto L_003F21FC;
    case 297u: goto L_003F221C;
    case 298u: goto L_003F2224;
    case 299u: goto L_003F222C;
    case 300u: goto L_003F2254;
    case 301u: goto L_003F2264;
    case 302u: goto L_003F2290;
    case 303u: goto L_003F22BC;
    case 304u: goto L_003F22C8;
    case 305u: goto L_003F2300;
    case 306u: goto L_003F230C;
    case 307u: goto L_003F2324;
    case 308u: goto L_003F2340;
    case 309u: goto L_003F2350;
    case 310u: goto L_003F237C;
    case 311u: goto L_003F238C;
    case 312u: goto L_003F23A8;
    case 313u: goto L_003F23CC;
    case 314u: goto L_003F23F0;
    case 315u: goto L_003F2424;
    case 316u: goto L_003F2434;
    case 317u: goto L_003F2450;
    case 318u: goto L_003F246C;
    case 319u: goto L_003F2490;
    case 320u: goto L_003F24E4;
    case 321u: goto L_003F26FC;
    case 322u: goto L_003F2710;
    case 323u: goto L_003F27B8;
    case 324u: goto L_003F27CC;
    case 325u: goto L_003F27EC;
    case 326u: goto L_003F2850;
    case 327u: goto L_003F2878;
    case 328u: goto L_003F2884;
    case 329u: goto L_003F28A0;
    case 330u: goto L_003F28B0;
    case 331u: goto L_003F28CC;
    case 332u: goto L_003F28E0;
    case 333u: goto L_003F28F0;
    case 334u: goto L_003F28FC;
    case 335u: goto L_003F2914;
    case 336u: goto L_003F2934;
    case 337u: goto L_003F2944;
    case 338u: goto L_003F2960;
    case 339u: goto L_003F2974;
    case 340u: goto L_003F2984;
    case 341u: goto L_003F29A8;
    case 342u: goto L_003F29B8;
    case 343u: goto L_003F29E4;
    case 344u: goto L_003F29F4;
    case 345u: goto L_003F2A14;
    case 346u: goto L_003F2A2C;
    case 347u: goto L_003F2A68;
    case 348u: goto L_003F2A94;
    case 349u: goto L_003F2AAC;
    case 350u: goto L_003F2ACC;
    case 351u: goto L_003F2ADC;
    case 352u: goto L_003F2AF8;
    case 353u: goto L_003F2B0C;
    case 354u: goto L_003F2B1C;
    case 355u: goto L_003F2B28;
    case 356u: goto L_003F2B40;
    case 357u: goto L_003F2B90;
    case 358u: goto L_003F2BAC;
    case 359u: goto L_003F2BBC;
    case 360u: goto L_003F2BD0;
    case 361u: goto L_003F2BE4;
    case 362u: goto L_003F2C00;
    case 363u: goto L_003F2C14;
    case 364u: goto L_003F2C34;
    case 365u: goto L_003F2C4C;
    case 366u: goto L_003F2C60;
    case 367u: goto L_003F2C70;
    case 368u: goto L_003F2C8C;
    case 369u: goto L_003F2CC0;
    case 370u: goto L_003F2D18;
    case 371u: goto L_003F2D28;
    case 372u: goto L_003F2D40;
    case 373u: goto L_003F2D50;
    case 374u: goto L_003F2D68;
    case 375u: goto L_003F2D7C;
    case 376u: goto L_003F2D90;
    case 377u: goto L_003F2DB0;
    case 378u: goto L_003F2DC0;
    case 379u: goto L_003F2DD4;
    case 380u: goto L_003F2DE8;
    case 381u: goto L_003F2E08;
    case 382u: goto L_003F2E1C;
    case 383u: goto L_003F2E2C;
    case 384u: goto L_003F2E48;
    case 385u: goto L_003F2E5C;
    case 386u: goto L_003F2E6C;
    case 387u: goto L_003F2E88;
    case 388u: goto L_003F2EA0;
    case 389u: goto L_003F2EE8;
    case 390u: goto L_003F2EF8;
    case 391u: goto L_003F2F20;
    case 392u: goto L_003F2F30;
    case 393u: goto L_003F2F44;
    case 394u: goto L_003F2F58;
    case 395u: goto L_003F2F80;
    case 396u: goto L_003F2F90;
    case 397u: goto L_003F2FAC;
    case 398u: goto L_003F2FC0;
    case 399u: goto L_003F2FD0;
    case 400u: goto L_003F2FE4;
    case 401u: goto L_003F2FF8;
    case 402u: goto L_003F3018;
    case 403u: goto L_003F302C;
    case 404u: goto L_003F3040;
    case 405u: goto L_003F305C;
    case 406u: goto L_003F3070;
    case 407u: goto L_003F3090;
    case 408u: goto L_003F30D0;
    case 409u: goto L_003F30E0;
    case 410u: goto L_003F30F4;
    case 411u: goto L_003F3104;
    case 412u: goto L_003F3120;
    case 413u: goto L_003F3150;
    case 414u: goto L_003F3180;
    case 415u: goto L_003F318C;
    case 416u: goto L_003F3198;
    case 417u: goto L_003F31AC;
    case 418u: goto L_003F31BC;
    case 419u: goto L_003F31D4;
    case 420u: goto L_003F321C;
    case 421u: goto L_003F3228;
    case 422u: goto L_003F3238;
    case 423u: goto L_003F3248;
    case 424u: goto L_003F3254;
    case 425u: goto L_003F3268;
    case 426u: goto L_003F3278;
    case 427u: goto L_003F3290;
    case 428u: goto L_003F32BC;
    case 429u: goto L_003F32D4;
    case 430u: goto L_003F32E4;
    case 431u: goto L_003F3300;
    case 432u: goto L_003F330C;
    case 433u: goto L_003F3330;
    case 434u: goto L_003F3394;
    case 435u: goto L_003F339C;
    case 436u: goto L_003F33B4;
    case 437u: goto L_003F33C4;
    case 438u: goto L_003F33D8;
    case 439u: goto L_003F33E8;
    case 440u: goto L_003F33F4;
    case 441u: goto L_003F3434;
    case 442u: goto L_003F3440;
    case 443u: goto L_003F3454;
    case 444u: goto L_003F3478;
    case 445u: goto L_003F3480;
    case 446u: goto L_003F3498;
    case 447u: goto L_003F34A4;
    case 448u: goto L_003F34D8;
    case 449u: goto L_003F34FC;
    case 450u: goto L_003F3508;
    case 451u: goto L_003F3518;
    case 452u: goto L_003F3538;
    case 453u: goto L_003F3544;
    case 454u: goto L_003F3554;
    case 455u: goto L_003F3568;
    case 456u: goto L_003F357C;
    case 457u: goto L_003F358C;
    case 458u: goto L_003F35AC;
    case 459u: goto L_003F35C0;
    case 460u: goto L_003F35D0;
    case 461u: goto L_003F35F8;
    case 462u: goto L_003F3630;
    case 463u: goto L_003F3650;
    case 464u: goto L_003F3670;
    case 465u: goto L_003F3690;
    case 466u: goto L_003F36A0;
    case 467u: goto L_003F36C8;
    case 468u: goto L_003F36D8;
    case 469u: goto L_003F36F0;
    case 470u: goto L_003F3710;
    case 471u: goto L_003F3748;
    case 472u: goto L_003F3758;
    case 473u: goto L_003F3774;
    case 474u: goto L_003F3788;
    case 475u: goto L_003F3798;
    case 476u: goto L_003F37C0;
    case 477u: goto L_003F37E0;
    case 478u: goto L_003F3808;
    case 479u: goto L_003F3818;
    case 480u: goto L_003F3830;
    case 481u: goto L_003F3868;
    case 482u: goto L_003F3874;
    case 483u: goto L_003F3884;
    case 484u: goto L_003F3894;
    case 485u: goto L_003F3904;
    case 486u: goto L_003F3914;
    case 487u: goto L_003F3994;
    case 488u: goto L_003F39A4;
    case 489u: goto L_003F39C0;
    case 490u: goto L_003F39CC;
    case 491u: goto L_003F39D8;
    case 492u: goto L_003F39E4;
    case 493u: goto L_003F39F0;
    case 494u: goto L_003F39FC;
    case 495u: goto L_003F3A6C;
    case 496u: goto L_003F3A80;
    case 497u: goto L_003F3AB0;
    case 498u: goto L_003F3AC0;
    case 499u: goto L_003F3B5C;
    case 500u: goto L_003F3B6C;
    case 501u: goto L_003F3BFC;
    case 502u: goto L_003F3C0C;
    case 503u: goto L_003F3C34;
    case 504u: goto L_003F3C40;
    case 505u: goto L_003F3C4C;
    case 506u: goto L_003F3C58;
    case 507u: goto L_003F3C64;
    case 508u: goto L_003F3C70;
    case 509u: goto L_003F3C9C;
    case 510u: goto L_003F3CAC;
    case 511u: goto L_003F3CB4;
    case 512u: goto L_003F3CD4;
    case 513u: goto L_003F3CE4;
    case 514u: goto L_003F3D70;
    case 515u: goto L_003F3D80;
    case 516u: goto L_003F3D9C;
    case 517u: goto L_003F3DB0;
    case 518u: goto L_003F3DC0;
    case 519u: goto L_003F3DCC;
    case 520u: goto L_003F3DD8;
    case 521u: goto L_003F3DE4;
    case 522u: goto L_003F3DF0;
    case 523u: goto L_003F3DFC;
    case 524u: goto L_003F3E08;
    case 525u: goto L_003F3E14;
    case 526u: goto L_003F3E20;
    case 527u: goto L_003F3E2C;
    case 528u: goto L_003F3E38;
    case 529u: goto L_003F3E44;
    case 530u: goto L_003F3E50;
    case 531u: goto L_003F3E5C;
    case 532u: goto L_003F3E68;
    case 533u: goto L_003F3E74;
    case 534u: goto L_003F3E7C;
    case 535u: goto L_003F3E8C;
    case 536u: goto L_003F3E9C;
    case 537u: goto L_003F3EA4;
    case 538u: goto L_003F3EE0;
    case 539u: goto L_003F3EF8;
    case 540u: goto L_003F3F00;
    case 541u: goto L_003F3F04;
    case 542u: goto L_003F3F14;
    case 543u: goto L_003F3F28;
    case 544u: goto L_003F3F84;
    case 545u: goto L_003F3F98;
    case 546u: goto L_003F3FBC;
    case 547u: goto L_003F3FC4;
    case 548u: goto L_003F3FE0;
    default: bad_entry(c, 0x003F0000u); return;
    }
L_003F0000:
    c.budget -= 1;
L_003F0004:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0014u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F0014u) [[unlikely]] return; }
L_003F0014:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003F0058; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0028u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F0028u) [[unlikely]] return; }
L_003F0028:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0038u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F0038u) [[unlikely]] return; }
L_003F0038:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F0054; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0054u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0054u) [[unlikely]] return; }
L_003F0054:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003F0058:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F0080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003F00B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F00A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F00A8u) [[unlikely]] return; }
L_003F00A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F00B8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F00B8u) [[unlikely]] return; }
L_003F00B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F00D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 256u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0118u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F0118u) [[unlikely]] return; }
L_003F0118:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F0134; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x003F0130u) [[unlikely]] return; }
L_003F0130:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F0134:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 7632u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F0150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003F0158; } }
L_003F0150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0158u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003F0158u) [[unlikely]] return; }
L_003F0158:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0168u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x003F0168u) [[unlikely]] return; }
L_003F0168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_003F01C8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0194u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F0194u) [[unlikely]] return; }
L_003F0194:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F01A4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F01A4u) [[unlikely]] return; }
L_003F01A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F01C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F01C4u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003F01C4u) [[unlikely]] return; }
L_003F01C4:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003F01C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F01DCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F01DCu) [[unlikely]] return; }
L_003F01DC:
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0208u); st32((c.r[17].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_00BC(c, 92u, depth + 1u); else { c.pc = 0x003F0C40u; return; } if (c.pc != 0x003F0208u) [[unlikely]] return; }
L_003F0208:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0214u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 28u, depth + 1u); else { c.pc = 0x003F05D0u; return; } if (c.pc != 0x003F0214u) [[unlikely]] return; }
L_003F0214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003F0240:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0274u); set32(c.r[4], c.r[2].w[0] + 104u);  if (depth < kMaxDepth) unit_00FE(c, 378u, depth + 1u); else { c.pc = 0x004FAF80u; return; } if (c.pc != 0x003F0274u) [[unlikely]] return; }
L_003F0274:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003F05AC; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26572u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26568u)));  goto L_003F02BC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[3].w[0] - 2028u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32296u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[3].w[0] - 2024u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] - 2032u), c.f[0]);
    st8((c.r[28].w[0] - 26572u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26568u)));
    c.budget -= 12;
L_003F02BC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[28].w[0] - 30368u));  goto L_003F02F4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[3].w[0] - 2012u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32304u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[3].w[0] - 2008u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] - 2016u), c.f[0]);
    st8((c.r[28].w[0] - 26568u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 30368u));
    c.budget -= 12;
L_003F02F4:
    c.f[21] = 0u;
    st32((c.r[29].w[0] + 192u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 200u), 0u);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 180u), 0u);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[29].w[0] + 184u), 0u);  if (t) { goto L_003F05A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[20] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[28].w[0] - 30368u));  if (t) { goto L_003F0598; } }
L_003F0328:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_003F033C; }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F0354; } }
L_003F033C:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003F0354:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[3], c.r[4].w[0] >> 1);  goto L_003F0368; }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F0380; } }
L_003F0368:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_003F0380:
    fpu_div(c, 22u, c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F03A8u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x003F03A8u) [[unlikely]] return; }
L_003F03A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[2] = ld32((c.r[2].w[0] - 2032u));
    c.f[11] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[3].w[0] - 2028u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[10] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[2].w[0] - 2024u));
    c.f[9] = ld32((c.r[29].w[0] + 112u));
    c.f[8] = ld32((c.r[29].w[0] + 84u));
    c.f[7] = ld32((c.r[29].w[0] + 100u));
    c.f[6] = ld32((c.r[29].w[0] + 116u));
    c.f[5] = ld32((c.r[29].w[0] + 88u));
    c.f[4] = ld32((c.r[29].w[0] + 104u));
    c.f[3] = ld32((c.r[29].w[0] + 120u));
    c.facc = fp::mul(c.f[2], c.f[11]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[10]));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[0], c.f[9]));
    c.facc = fp::mul(c.f[2], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[2] = ld32((c.r[2].w[0] - 2016u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] - 2012u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[0] = ld32((c.r[2].w[0] - 2008u));
    st32((c.r[29].w[0] + 192u), c.f[13]);
    st32((c.r[29].w[0] + 196u), c.f[12]);
    c.facc = fp::mul(c.f[2], c.f[11]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[10]));
    c.f[9] = fp::add(c.facc, fp::mul(c.f[0], c.f[9]));
    c.facc = fp::mul(c.f[2], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.f[9]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 180u), c.f[6]);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.f[22];
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0470u); st32((c.r[29].w[0] + 184u), c.f[0]);  if (depth < kMaxDepth) unit_00D9(c, 111u, depth + 1u); else { c.pc = 0x004650F0u; return; } if (c.pc != 0x003F0470u) [[unlikely]] return; }
L_003F0470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.f[1] = c.r[2].w[0];
    c.f[22] = fp::add(c.f[1], c.f[0]);
    c.f[8] = ld32((c.r[29].w[0] + 128u));
    c.f[11] = ld32((c.r[29].w[0] + 80u));
    c.f[10] = ld32((c.r[29].w[0] + 96u));
    c.f[9] = ld32((c.r[29].w[0] + 112u));
    c.f[7] = ld32((c.r[29].w[0] + 84u));
    c.f[6] = ld32((c.r[29].w[0] + 100u));
    c.f[5] = ld32((c.r[29].w[0] + 116u));
    c.f[4] = ld32((c.r[29].w[0] + 132u));
    c.f[3] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.facc = fp::add(c.f[21], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[10]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::add(c.f[21], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[6]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::add(c.f[21], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[28].w[0] - 31784u));
    set32(c.r[6], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), c.f[8]);
    set32(c.r[7], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 164u), c.f[4]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0504u); st32((c.r[29].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_00BC(c, 10u, depth + 1u); else { c.pc = 0x003F00D0u; return; } if (c.pc != 0x003F0504u) [[unlikely]] return; }
L_003F0504:
    c.f[8] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.f[11] = ld32((c.r[29].w[0] + 80u));
    c.f[10] = ld32((c.r[29].w[0] + 96u));
    c.f[12] = c.f[22] ^ fp::kSign;
    c.f[9] = ld32((c.r[29].w[0] + 112u));
    c.f[7] = ld32((c.r[29].w[0] + 84u));
    c.f[6] = ld32((c.r[29].w[0] + 100u));
    c.f[5] = ld32((c.r[29].w[0] + 116u));
    c.f[4] = ld32((c.r[29].w[0] + 132u));
    c.f[3] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.facc = fp::add(c.f[21], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[12], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[10]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::add(c.f[21], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[12], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[6]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::add(c.f[21], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[12], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[28].w[0] - 31784u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 144u), c.f[8]);
    set32(c.r[7], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 148u), c.f[4]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F058Cu); st32((c.r[29].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_00BC(c, 10u, depth + 1u); else { c.pc = 0x003F00D0u; return; } if (c.pc != 0x003F058Cu) [[unlikely]] return; }
L_003F058C:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = ld16((c.r[28].w[0] - 30368u));
    c.budget -= 3;
L_003F0598:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0328u | kUnwind; return; } goto L_003F0328; } }
L_003F05A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003F05AC:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003F05D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F05F8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003F05F8u) [[unlikely]] return; }
L_003F05F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[16].w[0]);  if (t) { goto L_003F061C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0608u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F0608u) [[unlikely]] return; }
L_003F0608:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F061Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F061Cu) [[unlikely]] return; }
L_003F061C:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0628u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 89u, depth + 1u); else { c.pc = 0x003F0BF0u; return; } if (c.pc != 0x003F0628u) [[unlikely]] return; }
L_003F0628:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0634u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_00BC(c, 88u, depth + 1u); else { c.pc = 0x003F0BD0u; return; } if (c.pc != 0x003F0634u) [[unlikely]] return; }
L_003F0634:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0644u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 362u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003F0644u) [[unlikely]] return; }
L_003F0644:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld16((c.r[17].w[0] + 18u));  goto L_003F06AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_003F06CC; } }
L_003F0654:
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 89u, depth + 1u); else { c.pc = 0x003F0BF0u; return; } if (c.pc != 0x003F0660u) [[unlikely]] return; }
L_003F0660:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[19], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0674u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 88u, depth + 1u); else { c.pc = 0x003F0BD0u; return; } if (c.pc != 0x003F0674u) [[unlikely]] return; }
L_003F0674:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0684u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 362u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003F0684u) [[unlikely]] return; }
L_003F0684:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003F06B0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F069Cu); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 82u, depth + 1u); else { c.pc = 0x003F0B20u; return; } if (c.pc != 0x003F069Cu) [[unlikely]] return; }
L_003F069C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F06CC; } }
L_003F06AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F06B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0654u | kUnwind; return; } goto L_003F0654; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 18u));
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F06C8u); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00BC(c, 44u, depth + 1u); else { c.pc = 0x003F0740u; return; } if (c.pc != 0x003F06C8u) [[unlikely]] return; }
L_003F06C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F06CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003F0718; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F06E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F06E0u) [[unlikely]] return; }
L_003F06E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F06F4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F06F4u) [[unlikely]] return; }
L_003F06F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F0714; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0714u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0714u) [[unlikely]] return; }
L_003F0714:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F0718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F0740:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F08E8; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));  goto L_003F08EC; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  goto L_003F0834; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_003F0818; } }
L_003F07A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 89u, depth + 1u); else { c.pc = 0x003F0BF0u; return; } if (c.pc != 0x003F07ACu) [[unlikely]] return; }
L_003F07AC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07C4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 81u, depth + 1u); else { c.pc = 0x003F0B00u; return; } if (c.pc != 0x003F07C4u) [[unlikely]] return; }
L_003F07C4:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 362u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003F07D4u) [[unlikely]] return; }
L_003F07D4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_003F0814; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 89u, depth + 1u); else { c.pc = 0x003F0BF0u; return; } if (c.pc != 0x003F07E8u) [[unlikely]] return; }
L_003F07E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F07F8u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 82u, depth + 1u); else { c.pc = 0x003F0B20u; return; } if (c.pc != 0x003F07F8u) [[unlikely]] return; }
L_003F07F8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0804u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 362u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003F0804u) [[unlikely]] return; }
    goto L_003F0804;
L_003F0800:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_003F0804:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_003F0814:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_003F0818:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 156u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F07A4u | kUnwind; return; } goto L_003F07A4; }
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_003F0834:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_003F08D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0844u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8u));  if (depth < kMaxDepth) unit_00BC(c, 75u, depth + 1u); else { c.pc = 0x003F0A60u; return; } if (c.pc != 0x003F0844u) [[unlikely]] return; }
L_003F0844:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003F086C; } }
L_003F0850:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0864u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 82u, depth + 1u); else { c.pc = 0x003F0B20u; return; } if (c.pc != 0x003F0864u) [[unlikely]] return; }
L_003F0864:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_003F086C:
    c.r[18].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0850u | kUnwind; return; } goto L_003F0850; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));  if (t) { goto L_003F08C0; } }
L_003F0888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0890u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 89u, depth + 1u); else { c.pc = 0x003F0BF0u; return; } if (c.pc != 0x003F0890u) [[unlikely]] return; }
L_003F0890:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08A8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 82u, depth + 1u); else { c.pc = 0x003F0B20u; return; } if (c.pc != 0x003F08A8u) [[unlikely]] return; }
L_003F08A8:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 362u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003F08B4u) [[unlikely]] return; }
L_003F08B4:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));
    c.budget -= 3;
L_003F08C0:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0888u | kUnwind; return; } goto L_003F0888; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F08E0; } }
L_003F08D8:
    st32((c.r[21].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003F08E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08E8u);  if (depth < kMaxDepth) unit_00BC(c, 74u, depth + 1u); else { c.pc = 0x003F0A40u; return; } if (c.pc != 0x003F08E8u) [[unlikely]] return; }
L_003F08E8:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 1;
L_003F08EC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 140u);  goto L_003F0940; }
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F090Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 89u, depth + 1u); else { c.pc = 0x003F0BF0u; return; } if (c.pc != 0x003F090Cu) [[unlikely]] return; }
L_003F090C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0918u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00BC(c, 81u, depth + 1u); else { c.pc = 0x003F0B00u; return; } if (c.pc != 0x003F0918u) [[unlikely]] return; }
L_003F0918:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0928u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 362u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003F0928u) [[unlikely]] return; }
L_003F0928:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_003F09F8; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F09F4; } }
L_003F0940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0948u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 89u, depth + 1u); else { c.pc = 0x003F0BF0u; return; } if (c.pc != 0x003F0948u) [[unlikely]] return; }
L_003F0948:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0954u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_00BC(c, 81u, depth + 1u); else { c.pc = 0x003F0B00u; return; } if (c.pc != 0x003F0954u) [[unlikely]] return; }
L_003F0954:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0964u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 362u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003F0964u) [[unlikely]] return; }
L_003F0964:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 132u);  goto L_003F09B4; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0978u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 89u, depth + 1u); else { c.pc = 0x003F0BF0u; return; } if (c.pc != 0x003F0978u) [[unlikely]] return; }
L_003F0978:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F098Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 88u, depth + 1u); else { c.pc = 0x003F0BD0u; return; } if (c.pc != 0x003F098Cu) [[unlikely]] return; }
L_003F098C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F099Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 362u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003F099Cu) [[unlikely]] return; }
L_003F099C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F09F4; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F09F4; } }
L_003F09B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F09BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 89u, depth + 1u); else { c.pc = 0x003F0BF0u; return; } if (c.pc != 0x003F09BCu) [[unlikely]] return; }
L_003F09BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F09D0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 81u, depth + 1u); else { c.pc = 0x003F0B00u; return; } if (c.pc != 0x003F09D0u) [[unlikely]] return; }
L_003F09D0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F09E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 362u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003F09E0u) [[unlikely]] return; }
L_003F09E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F09F4; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003F09F4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_003F09F8:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0A08u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 82u, depth + 1u); else { c.pc = 0x003F0B20u; return; } if (c.pc != 0x003F0A08u) [[unlikely]] return; }
L_003F0A08:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003F0A40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 3264u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00397FD0u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_003F0A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0A80u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x003F0A80u) [[unlikely]] return; }
L_003F0A80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2736u);
    set32(c.r[6], c.r[6].w[0] - 3264u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0AA0u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x003F0AA0u) [[unlikely]] return; }
L_003F0AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F0AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_003F0AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0AD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F0AD8u) [[unlikely]] return; }
L_003F0AD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0AE8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F0AE8u) [[unlikely]] return; }
L_003F0AE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F0B00:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003F0B20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F0BA8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_003F0B88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0B58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F0B58u) [[unlikely]] return; }
L_003F0B58:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0B68u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F0B68u) [[unlikely]] return; }
L_003F0B68:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F0B84; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0B84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0B84u) [[unlikely]] return; }
L_003F0B84:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003F0B88:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_003F0BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0B98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F0B98u) [[unlikely]] return; }
L_003F0B98:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0BA8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F0BA8u) [[unlikely]] return; }
L_003F0BA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F0BD0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003F0BF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003F0C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F0C18u) [[unlikely]] return; }
L_003F0C18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C28u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F0C28u) [[unlikely]] return; }
L_003F0C28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F0C40:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.f[22]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), c.f[21]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C74u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F0C74u) [[unlikely]] return; }
L_003F0C74:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F0C80u) [[unlikely]] return; }
L_003F0C80:
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 188u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[29].w[0] + 192u), c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    set32(c.r[4], c.r[29].w[0] + 152u);
    fpu_rsqrt(c, 3u, c.f[14], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    c.f[12] = 0u;
    st32((c.r[29].w[0] + 188u), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0CDCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x003F0CDCu) [[unlikely]] return; }
L_003F0CDC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0CE8u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x003F0CE8u) [[unlikely]] return; }
L_003F0CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0CF0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x003F0CF0u) [[unlikely]] return; }
L_003F0CF0:
    c.f[22] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.f[0] = ld32((c.r[28].w[0] - 32028u));
    c.f[12] = ld32((c.r[29].w[0] + 184u));
    c.f[13] = ld32((c.r[29].w[0] + 188u));
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D10u); c.f[20] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x003F0D10u) [[unlikely]] return; }
L_003F0D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D18u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x003F0D18u) [[unlikely]] return; }
L_003F0D18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D30u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x003F0D30u) [[unlikely]] return; }
L_003F0D30:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D3Cu); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x003F0D3Cu) [[unlikely]] return; }
L_003F0D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D44u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x003F0D44u) [[unlikely]] return; }
L_003F0D44:
    c.f[12] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D50u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003F0D50u) [[unlikely]] return; }
L_003F0D50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x003F0D5Cu) [[unlikely]] return; }
L_003F0D5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 112u);  goto L_003F0D6C; }
    c.f[21] = c.f[21] ^ fp::kSign;
    set32(c.r[4], 0u + 112u);
    c.budget -= 2;
L_003F0D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F0D74u) [[unlikely]] return; }
L_003F0D74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 200u)));  goto L_003F0DFC; }
    c.f[2] = ld32((c.r[28].w[0] - 32252u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = ld32((c.r[28].w[0] - 31780u));
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 29u);  goto L_003F0DB8; }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_003F0DB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[15] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 18144u);
    c.f[17] = c.f[22];
    c.f[18] = c.f[20];
    c.f[19] = c.f[21];
    c.f[16] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0DF4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_003F(c, 143u, depth + 1u); else { c.pc = 0x001FD960u; return; } if (c.pc != 0x003F0DF4u) [[unlikely]] return; }
L_003F0DF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 2;
L_003F0DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E04u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F0E04u) [[unlikely]] return; }
L_003F0E04:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 56u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 52u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003F0E30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F0E44u) [[unlikely]] return; }
L_003F0E44:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F0E50u) [[unlikely]] return; }
L_003F0E50:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F0E60u) [[unlikely]] return; }
L_003F0E60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_003F0E84; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7612u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E80u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 152u, depth + 1u); else { c.pc = 0x001F94E0u; return; } if (c.pc != 0x003F0E80u) [[unlikely]] return; }
L_003F0E80:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003F0E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E8Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003F0E8Cu) [[unlikely]] return; }
L_003F0E8C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F0E98u) [[unlikely]] return; }
L_003F0E98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_003F0EB4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EB0u); set32(c.r[5], c.r[5].w[0] - 7593u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214210u; return; } if (c.pc != 0x003F0EB0u) [[unlikely]] return; }
L_003F0EB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003F0EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003F0EBCu) [[unlikely]] return; }
L_003F0EBC:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F0EC8u) [[unlikely]] return; }
L_003F0EC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_003F0EE8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7575u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EE4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_003F(c, 82u, depth + 1u); else { c.pc = 0x001FD180u; return; } if (c.pc != 0x003F0EE4u) [[unlikely]] return; }
L_003F0EE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003F0EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003F0EF0u) [[unlikely]] return; }
L_003F0EF0:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F0EFCu) [[unlikely]] return; }
L_003F0EFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_003F0F2C; }
    c.f[12] = ld32((c.r[28].w[0] - 31792u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] - 7554u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0F28u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 177u, depth + 1u); else { c.pc = 0x00209CD0u; return; } if (c.pc != 0x003F0F28u) [[unlikely]] return; }
L_003F0F28:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003F0F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0F34u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003F0F34u) [[unlikely]] return; }
L_003F0F34:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0F40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F0F40u) [[unlikely]] return; }
L_003F0F40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_003F0F84; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[4].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[15] = ld32((c.r[28].w[0] - 31788u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] - 7535u);
    c.f[14] = 0u;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0F80u); set32(c.r[8], c.r[8].w[0] + 31040u);  if (depth < kMaxDepth) unit_0045(c, 159u, depth + 1u); else { c.pc = 0x002159D0u; return; } if (c.pc != 0x003F0F80u) [[unlikely]] return; }
L_003F0F80:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003F0F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0F8Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003F0F8Cu) [[unlikely]] return; }
L_003F0F8C:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0F98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F0F98u) [[unlikely]] return; }
L_003F0F98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_003F1008; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[3].w[0] + 31056u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[4].w[0] + 31060u));
    set32(c.r[7], c.r[29].w[0] + 40u);
    c.f[13] = c.r[5].w[0];
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[0] = ld32((c.r[3].w[0] + 31064u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 44u), c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 80u)));
    c.f[15] = ld32((c.r[28].w[0] - 32564u));
    c.f[14] = c.r[3].w[0];
    c.f[12] = 0u;
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1004u); set32(c.r[5], c.r[5].w[0] - 7517u);  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x002092F0u; return; } if (c.pc != 0x003F1004u) [[unlikely]] return; }
L_003F1004:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003F1008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1010u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003F1010u) [[unlikely]] return; }
L_003F1010:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F101Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F101Cu) [[unlikely]] return; }
L_003F101C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_003F105C; }
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] - 7500u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[14] = c.f[13];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1058u); set32(c.r[9], c.r[9].w[0] + 31040u);  if (depth < kMaxDepth) unit_0040(c, 89u, depth + 1u); else { c.pc = 0x002011C0u; return; } if (c.pc != 0x003F1058u) [[unlikely]] return; }
L_003F1058:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003F105C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1064u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x003F1064u) [[unlikely]] return; }
L_003F1064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F106Cu); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F106Cu) [[unlikely]] return; }
L_003F106C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F1080:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F109Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F109Cu) [[unlikely]] return; }
L_003F109C:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F10A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F10A8u) [[unlikely]] return; }
L_003F10A8:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F10B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F10B8u) [[unlikely]] return; }
L_003F10B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 4u)));  goto L_003F10E4; }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F10DCu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 103u, depth + 1u); else { c.pc = 0x001F8DE0u; return; } if (c.pc != 0x003F10DCu) [[unlikely]] return; }
L_003F10DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_003F10E4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  goto L_003F1150; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), c.r[16].w[0]);  goto L_003F112C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F10FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F10FCu) [[unlikely]] return; }
L_003F10FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F110Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F110Cu) [[unlikely]] return; }
L_003F110C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F1128; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1128u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1128u) [[unlikely]] return; }
L_003F1128:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_003F112C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F114C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F113Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F113Cu) [[unlikely]] return; }
L_003F113C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F114Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F114Cu) [[unlikely]] return; }
L_003F114C:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_003F1150:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1164u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1164u) [[unlikely]] return; }
L_003F1164:
    set32(c.r[4], 0u + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1170u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F1170u) [[unlikely]] return; }
L_003F1170:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 24u)));  goto L_003F118C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1184u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 72u, depth + 1u); else { c.pc = 0x00218DC0u; return; } if (c.pc != 0x003F1184u) [[unlikely]] return; }
L_003F1184:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 2;
L_003F118C:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_003F11F8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), c.r[16].w[0]);  goto L_003F11D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F11A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F11A4u) [[unlikely]] return; }
L_003F11A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F11B4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F11B4u) [[unlikely]] return; }
L_003F11B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F11D0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F11D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F11D0u) [[unlikely]] return; }
L_003F11D0:
    st32((c.r[17].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_003F11D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F11F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F11E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F11E4u) [[unlikely]] return; }
L_003F11E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F11F4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F11F4u) [[unlikely]] return; }
L_003F11F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_003F11F8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1208u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1208u) [[unlikely]] return; }
L_003F1208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1210u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F1210u) [[unlikely]] return; }
L_003F1210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F1230:
    set32(c.r[3], 0u - 9999u);
    set32(c.r[5], 0u + 1u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003F1260:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1288u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F1288u) [[unlikely]] return; }
L_003F1288:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1298u); st32((c.r[29].w[0] + 108u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F1298u) [[unlikely]] return; }
L_003F1298:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 6;
    if (c.r[18].d[0] == c.r[19].d[0]) { set32(c.r[4], 0u + 256u);  goto L_003F1314; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 76u), c.r[19].w[0]);  goto L_003F12F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F12C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F12C0u) [[unlikely]] return; }
L_003F12C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F12D0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F12D0u) [[unlikely]] return; }
L_003F12D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F12EC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F12ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F12ECu) [[unlikely]] return; }
L_003F12EC:
    st32((c.r[17].w[0] + 76u), c.r[19].w[0]);
    c.budget -= 1;
L_003F12F0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003F1310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1300u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1300u) [[unlikely]] return; }
L_003F1300:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1310u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F1310u) [[unlikely]] return; }
L_003F1310:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_003F1314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F131Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F131Cu) [[unlikely]] return; }
L_003F131C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 80u)));  goto L_003F133C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1334u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x003F1334u) [[unlikely]] return; }
L_003F1334:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 2;
L_003F133C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_003F13A4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 80u), c.r[19].w[0]);  goto L_003F1384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1354u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1354u) [[unlikely]] return; }
L_003F1354:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1364u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F1364u) [[unlikely]] return; }
L_003F1364:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F1380; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1380u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1380u) [[unlikely]] return; }
L_003F1380:
    st32((c.r[17].w[0] + 80u), c.r[19].w[0]);
    c.budget -= 1;
L_003F1384:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003F13A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1394u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1394u) [[unlikely]] return; }
L_003F1394:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F13A4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F13A4u) [[unlikely]] return; }
L_003F13A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 7486u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F13C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003F13C8; } }
L_003F13C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F13C8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003F13C8u) [[unlikely]] return; }
L_003F13C8:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F13D8u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x003F13D8u) [[unlikely]] return; }
L_003F13D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  goto L_003F1438; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1404u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1404u) [[unlikely]] return; }
L_003F1404:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1414u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F1414u) [[unlikely]] return; }
L_003F1414:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F1434; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1434u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003F1434u) [[unlikely]] return; }
L_003F1434:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 1;
L_003F1438:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F144Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F144Cu) [[unlikely]] return; }
L_003F144C:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1458u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F1458u) [[unlikely]] return; }
L_003F1458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F14A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1468u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x003F1468u) [[unlikely]] return; }
L_003F1468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_003F14A8:
    c.r[6].d[0] = ld16((c.r[20].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F14D8u); st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F14D8u) [[unlikely]] return; }
L_003F14D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F1530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F14E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x003F14E8u) [[unlikely]] return; }
L_003F14E8:
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
L_003F1530:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1568u); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F1568u) [[unlikely]] return; }
L_003F1568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F15D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1578u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x003F1578u) [[unlikely]] return; }
L_003F1578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1594u); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x003F1594u) [[unlikely]] return; }
L_003F1594:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F15A0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x003F15A0u) [[unlikely]] return; }
L_003F15A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F15ACu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x003F15ACu) [[unlikely]] return; }
L_003F15AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F15B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x003F15B8u) [[unlikely]] return; }
L_003F15B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F15C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x003F15C4u) [[unlikely]] return; }
L_003F15C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F15D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x003F15D0u) [[unlikely]] return; }
L_003F15D0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003F15D8:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[4], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 12ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 224ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] & 65023ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[20], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1644u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003F1644u) [[unlikely]] return; }
L_003F1644:
    set32(c.r[4], c.r[20].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1650u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003F1650u) [[unlikely]] return; }
L_003F1650:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F165Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003F165Cu) [[unlikely]] return; }
L_003F165C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F166Cu); set32(c.r[4], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003F166Cu) [[unlikely]] return; }
L_003F166C:
    set32(c.r[4], c.r[19].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1678u); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003F1678u) [[unlikely]] return; }
L_003F1678:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1684u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003F1684u) [[unlikely]] return; }
L_003F1684:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1694u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003F1694u) [[unlikely]] return; }
L_003F1694:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F16A0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003F16A0u) [[unlikely]] return; }
L_003F16A0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F16ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003F16ACu) [[unlikely]] return; }
L_003F16AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F16B4u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x003F16B4u) [[unlikely]] return; }
L_003F16B4:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 24u)));  goto L_003F1724; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003F1700; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F16D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F16D0u) [[unlikely]] return; }
L_003F16D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F16E0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F16E0u) [[unlikely]] return; }
L_003F16E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F16FC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F16FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F16FCu) [[unlikely]] return; }
L_003F16FC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F1700:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_003F1720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1710u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1710u) [[unlikely]] return; }
L_003F1710:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1720u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F1720u) [[unlikely]] return; }
L_003F1720:
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_003F1724:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], 0u + 1000u);  goto L_003F1790; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003F176C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F173Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F173Cu) [[unlikely]] return; }
L_003F173C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F174Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F174Cu) [[unlikely]] return; }
L_003F174C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F1768; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1768u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1768u) [[unlikely]] return; }
L_003F1768:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F176C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_003F178C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F177Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F177Cu) [[unlikely]] return; }
L_003F177C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F178Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F178Cu) [[unlikely]] return; }
L_003F178C:
    set32(c.r[3], 0u + 1000u);
    c.budget -= 1;
L_003F1790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], 0u + 70u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[28].w[0] - 32488u));
    set32(c.r[2], 0u - 9999u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - 7472u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F17C4u); st32((c.r[17].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003F17C4u) [[unlikely]] return; }
L_003F17C4:
    set32(c.r[2], 0u - 9999u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 72u), 0u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 46u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F17F8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003F17F8u) [[unlikely]] return; }
L_003F17F8:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 46u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1810u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x003F1810u) [[unlikely]] return; }
L_003F1810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1818u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F1080u; return; } if (c.pc != 0x003F1818u) [[unlikely]] return; }
L_003F1818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 108u, depth + 1u); else { c.pc = 0x003F0E30u; return; } if (c.pc != 0x003F1820u) [[unlikely]] return; }
L_003F1820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1828u); set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F1828u) [[unlikely]] return; }
L_003F1828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F1850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1868u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 375u, depth + 1u); else { c.pc = 0x003EF590u; return; } if (c.pc != 0x003F1868u) [[unlikely]] return; }
L_003F1868:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1880u); set32(c.r[4], c.r[29].w[0] + 44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1880u) [[unlikely]] return; }
L_003F1880:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  goto L_003F18CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1894u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1894u) [[unlikely]] return; }
L_003F1894:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F18A8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F18A8u) [[unlikely]] return; }
L_003F18A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F18C8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F18C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F18C8u) [[unlikely]] return; }
L_003F18C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_003F18CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F18D4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F18D4u) [[unlikely]] return; }
L_003F18D4:
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F18F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F1AD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1920u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 213u, depth + 1u); else { c.pc = 0x003F1850u; return; } if (c.pc != 0x003F1920u) [[unlikely]] return; }
L_003F1920:
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 76u);  goto L_003F1970; }
    set32(c.r[18], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F196C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1940u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1940u) [[unlikely]] return; }
L_003F1940:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1950u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F1950u) [[unlikely]] return; }
L_003F1950:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F196C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F196Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F196Cu) [[unlikely]] return; }
L_003F196C:
    set32(c.r[2], c.r[17].w[0] + 76u);
    c.budget -= 1;
L_003F1970:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 28u);  goto L_003F19BC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F19B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F198Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F198Cu) [[unlikely]] return; }
L_003F198C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F199Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F199Cu) [[unlikely]] return; }
L_003F199C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F19B8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F19B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F19B8u) [[unlikely]] return; }
L_003F19B8:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 1;
L_003F19BC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 24u);  goto L_003F19D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F19CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003F19CCu) [[unlikely]] return; }
L_003F19CC:
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_003F19D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 8u);  goto L_003F1A1C; }
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F1A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F19ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F19ECu) [[unlikely]] return; }
L_003F19EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F19FCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F19FCu) [[unlikely]] return; }
L_003F19FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F1A18; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1A18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1A18u) [[unlikely]] return; }
L_003F1A18:
    set32(c.r[3], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_003F1A1C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_003F1A60; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23184u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003F1A5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[2], c.r[2].w[0] + 23168u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 3264u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1A5Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x003F1A5Cu) [[unlikely]] return; }
L_003F1A5C:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_003F1A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F1AA8; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F1AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1A7Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1A7Cu) [[unlikely]] return; }
L_003F1A7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1A8Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F1A8Cu) [[unlikely]] return; }
L_003F1A8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F1AA8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1AA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1AA8u) [[unlikely]] return; }
L_003F1AA8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003F1AC0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_003F1AC0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F1AD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1AD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F1AD4u) [[unlikely]] return; }
L_003F1AD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F1AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F1AF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] + 22384u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] + 23136u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 19;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_003F1B54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1B44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1B44u) [[unlikely]] return; }
L_003F1B44:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1B54u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F1B54u) [[unlikely]] return; }
L_003F1B54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23168u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 18u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 20u), static_cast<std::uint16_t>(0u));
    c.r[20].d[0] = ld16((c.r[19].w[0] + 16u));
    c.budget -= 11;
    { const bool t = c.r[20].sd[0] <= 0; set32(c.r[16], c.r[19].w[0] + 8u);  if (t) { goto L_003F1BB8; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1B90u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x003F1B90u) [[unlikely]] return; }
L_003F1B90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2736u);
    set32(c.r[6], c.r[6].w[0] - 3264u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1BB0u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x003F1BB0u) [[unlikely]] return; }
L_003F1BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003F1BBC; } }
L_003F1BB8:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_003F1BBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 23184u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[19].w[0] + 24u), 0u);  if (t) { goto L_003F1BEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1BDCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1BDCu) [[unlikely]] return; }
L_003F1BDC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1BECu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F1BECu) [[unlikely]] return; }
L_003F1BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1BF4u); set32(c.r[4], c.r[19].w[0] + 28u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003F1BF4u) [[unlikely]] return; }
L_003F1BF4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 76u), 0u);  if (t) { goto L_003F1C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1C08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1C08u) [[unlikely]] return; }
L_003F1C08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1C18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F1C18u) [[unlikely]] return; }
L_003F1C18:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 80u), 0u);  if (t) { goto L_003F1C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1C2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F1C2Cu) [[unlikely]] return; }
L_003F1C2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1C3Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F1C3Cu) [[unlikely]] return; }
L_003F1C3C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1C4Cu); st8((c.r[19].w[0] + 84u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00BC(c, 154u, depth + 1u); else { c.pc = 0x003F1260u; return; } if (c.pc != 0x003F1C4Cu) [[unlikely]] return; }
L_003F1C4C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 84u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_003F1C6C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F1C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1C68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 21u, depth + 1u); else { c.pc = 0x003F0240u; return; } if (c.pc != 0x003F1C68u) [[unlikely]] return; }
L_003F1C68:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003F1C6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F1C90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F1D00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23184u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F1CE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[2], c.r[2].w[0] + 23168u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 3264u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1CE4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x003F1CE4u) [[unlikely]] return; }
L_003F1CE4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F1D04; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1D00u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x003F1D00u) [[unlikely]] return; }
L_003F1D00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F1D04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F1D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F1D80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[2], c.r[2].w[0] + 23168u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 3264u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1D64u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x003F1D64u) [[unlikely]] return; }
L_003F1D64:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F1D84; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1D80u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x003F1D80u) [[unlikely]] return; }
L_003F1D80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F1D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F1DA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F1DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F1DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_003F1DD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003F1DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1E00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1E00u) [[unlikely]] return; }
L_003F1E00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F1E10:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  [[clang::musttail]] return unit_00FF(c, 117u, depth); }
L_003F1E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1E30u); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_00FF(c, 134u, depth + 1u); else { c.pc = 0x004FD1E0u; return; } if (c.pc != 0x003F1E30u) [[unlikely]] return; }
L_003F1E30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F1E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_003F1E70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1E68u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00FF(c, 209u, depth + 1u); else { c.pc = 0x004FDBD0u; return; } if (c.pc != 0x003F1E68u) [[unlikely]] return; }
L_003F1E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_003F1E84; } }
L_003F1E70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003F1E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1E80u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00FF(c, 207u, depth + 1u); else { c.pc = 0x004FDBA0u; return; } if (c.pc != 0x003F1E80u) [[unlikely]] return; }
L_003F1E80:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_003F1E84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F1EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1EC0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1EC0u) [[unlikely]] return; }
L_003F1EC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[20] = ld32((c.r[28].w[0] - 29052u));  goto L_003F1ED4; }
    c.f[20] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_003F1ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1EDCu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00FF(c, 116u, depth + 1u); else { c.pc = 0x004FD000u; return; } if (c.pc != 0x003F1EDCu) [[unlikely]] return; }
L_003F1EDC:
    c.f[1] = fp::sub(c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 120u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1F00u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00FF(c, 214u, depth + 1u); else { c.pc = 0x004FDC60u; return; } if (c.pc != 0x003F1F00u) [[unlikely]] return; }
L_003F1F00:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1F18u); set32(c.r[6], 0u + 255u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1F18u) [[unlikely]] return; }
L_003F1F18:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F1F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1F5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1F5Cu) [[unlikely]] return; }
L_003F1F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1F64u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00FF(c, 217u, depth + 1u); else { c.pc = 0x004FDCB0u; return; } if (c.pc != 0x003F1F64u) [[unlikely]] return; }
L_003F1F64:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F1F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F1FF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23200u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_003F1FC8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1FC4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F1FC4u) [[unlikely]] return; }
L_003F1FC4:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_003F1FC8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003F1FE0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23264u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_003F1FE0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F1FF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F1FF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F1FF4u) [[unlikely]] return; }
L_003F1FF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F1FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F2010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 23264u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23200u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2050u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003F2050u) [[unlikely]] return; }
L_003F2050:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  goto L_003F206C; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2068u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 243u, depth + 1u); else { c.pc = 0x004FE060u; return; } if (c.pc != 0x003F2068u) [[unlikely]] return; }
L_003F2068:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_003F206C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F2090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003F20CC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 23264u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F20C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F20C8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F20C8u) [[unlikely]] return; }
L_003F20C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F20CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F20E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F20F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003F2100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003F2110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003F2120:
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 80u));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  goto L_003F2154; }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F2170; } }
L_003F2154:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003F2170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F2180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F2190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F21A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 80u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003F21C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F21BCu);  if (depth < kMaxDepth) unit_00BC(c, 294u, depth + 1u); else { c.pc = 0x003F21D0u; return; } if (c.pc != 0x003F21BCu) [[unlikely]] return; }
L_003F21BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F21C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F21D0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F21F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F21F0u) [[unlikely]] return; }
L_003F21F0:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F21FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F21FCu) [[unlikely]] return; }
L_003F21FC:
    st32((c.r[29].w[0] + 236u), 0u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 80u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = ld16((c.r[19].w[0] + 28u));  if (t) { goto L_003F23B4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F221Cu); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x003F221Cu) [[unlikely]] return; }
L_003F221C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_003F2224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F222Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 26u, depth + 1u); else { c.pc = 0x002C8350u; return; } if (c.pc != 0x003F222Cu) [[unlikely]] return; }
L_003F222C:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2224u | kUnwind; return; } goto L_003F2224; } }
    set32(c.r[2], 0u + 63u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2254u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 432u, depth + 1u); else { c.pc = 0x002A3E60u; return; } if (c.pc != 0x003F2254u) [[unlikely]] return; }
L_003F2254:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2264u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x003F2264u) [[unlikely]] return; }
L_003F2264:
    set32(c.r[2], ld32((c.r[2].w[0] + 412u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[19].w[0] + 56u);
    set32(c.r[6], c.r[29].w[0] + 200u);
    c.f[0] = ld32((c.r[2].w[0] + 116u));
    set32(c.r[3], ld32((c.r[2].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2290u); st32((c.r[29].w[0] + 204u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 110u, depth + 1u); else { c.pc = 0x003F51E0u; return; } if (c.pc != 0x003F2290u) [[unlikely]] return; }
L_003F2290:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], c.r[19].w[0] + 68u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 232u), c.r[3].w[0]);  if (t) { goto L_003F22BC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 232u);
    set32(c.r[6], c.r[18].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[8], c.r[29].w[0] + 236u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F22BCu); c.r[9].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 319u, depth + 1u); else { c.pc = 0x003F2490u; return; } if (c.pc != 0x003F22BCu) [[unlikely]] return; }
L_003F22BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_003F230C; } }
L_003F22C8:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 236u)));  goto L_003F23B8; }
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 232u);  goto L_003F2304; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 232u);
    set32(c.r[6], c.r[18].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[8], c.r[29].w[0] + 236u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2300u); c.r[9].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 319u, depth + 1u); else { c.pc = 0x003F2490u; return; } if (c.pc != 0x003F2300u) [[unlikely]] return; }
L_003F2300:
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 1;
L_003F2304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F230Cu);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003F230Cu) [[unlikely]] return; }
L_003F230C:
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[2], c.r[19].w[0] + 68u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 236u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F22C8u | kUnwind; return; } goto L_003F22C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F23B4; } }
L_003F2324:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 228u), c.r[16].w[0]);  if (t) { goto L_003F2350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2340u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2340u) [[unlikely]] return; }
L_003F2340:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2350u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2350u) [[unlikely]] return; }
L_003F2350:
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 228u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F23A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F237Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F237Cu) [[unlikely]] return; }
L_003F237C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F238Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F238Cu) [[unlikely]] return; }
L_003F238C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 236u)));  goto L_003F23AC; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F23A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F23A8u) [[unlikely]] return; }
L_003F23A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 1;
L_003F23AC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 2;
L_003F23B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 1;
L_003F23B8:
    c.r[2].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2324u | kUnwind; return; } goto L_003F2324; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F23CCu); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F23CCu) [[unlikely]] return; }
L_003F23CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003F23F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F246C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_003F2454; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2424u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2424u) [[unlikely]] return; }
L_003F2424:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2434u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2434u) [[unlikely]] return; }
L_003F2434:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F2450; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2450u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2450u) [[unlikely]] return; }
L_003F2450:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_003F2454:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003F2470; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F246Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x003F246Cu) [[unlikely]] return; }
L_003F246C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F2470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F2490:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[17], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 306u));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003F2828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_003F27F8; } }
L_003F24E4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[4] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[6] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[4], c.f[2]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[7] = ld32((c.r[19].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    c.f[3] = ld32((c.r[19].w[0] + 12u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[5] = 0u;
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[5]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F2530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_003F2540; } }
L_003F2530:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[5]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[5].d[0] = 0ull + 0ull;  goto L_003F2540; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_003F2540:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_003F27F0; }
    c.f[4] = ld32((c.r[19].w[0] + 52u));
    c.f[6] = ld32((c.r[19].w[0] + 48u));
    c.f[7] = ld32((c.r[19].w[0] + 56u));
    c.facc = fp::mul(c.f[4], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    c.f[3] = ld32((c.r[19].w[0] + 60u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[5] = 0u;
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[5]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F2588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F2594; } }
L_003F2588:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[5]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = 0ull + 0ull;  goto L_003F2594; }
L_003F2594:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003F27EC; } }
    c.f[4] = ld32((c.r[19].w[0] + 36u));
    c.f[6] = ld32((c.r[19].w[0] + 32u));
    c.f[7] = ld32((c.r[19].w[0] + 40u));
    c.facc = fp::mul(c.f[4], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    c.f[3] = ld32((c.r[19].w[0] + 44u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[5] = 0u;
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[5]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F25DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_003F25E8; } }
L_003F25DC:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[5]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[5].d[0] = 0ull + 0ull;  goto L_003F25E8; }
L_003F25E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003F27EC; } }
    c.f[4] = ld32((c.r[19].w[0] + 68u));
    c.f[6] = ld32((c.r[19].w[0] + 64u));
    c.f[7] = ld32((c.r[19].w[0] + 72u));
    c.facc = fp::mul(c.f[4], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    c.f[3] = ld32((c.r[19].w[0] + 76u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[5] = 0u;
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[5]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F2630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003F263C; } }
L_003F2630:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[5]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = 0ull + 0ull;  goto L_003F263C; }
L_003F263C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003F27EC; } }
    c.f[4] = ld32((c.r[19].w[0] + 84u));
    c.f[6] = ld32((c.r[19].w[0] + 80u));
    c.f[7] = ld32((c.r[19].w[0] + 88u));
    c.facc = fp::mul(c.f[4], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    c.f[3] = ld32((c.r[19].w[0] + 92u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[7], c.f[0]));
    c.f[5] = 0u;
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[5]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F2684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_003F2690; } }
L_003F2684:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[5]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[5].d[0] = 0ull + 0ull;  goto L_003F2690; }
L_003F2690:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003F27EC; } }
    c.f[5] = ld32((c.r[20].w[0]));
    c.f[3] = ld32((c.r[20].w[0] + 8u));
    c.f[4] = ld32((c.r[20].w[0] + 4u));
    c.f[5] = fp::sub(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.f[2], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.r[3].d[0] = 0ull | 62500ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F27EC; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_003F2710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F26FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F26FCu) [[unlikely]] return; }
L_003F26FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2710u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2710u) [[unlikely]] return; }
L_003F2710:
    c.r[6].d[0] = c.r[16].d[0] << 32;
    set32(c.r[7], ld32((c.r[29].w[0] + 152u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[7].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[7].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[7].w[0] + 104u), c.f[0]);
    c.r[5].d[0] = ld16((c.r[7].w[0] + 196u));
    c.r[5].d[0] = c.r[5].d[0] & 65534ull;
    st16((c.r[7].w[0] + 196u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[7].w[0] + 196u));
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    st16((c.r[7].w[0] + 196u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[7].w[0] + 196u));
    c.r[5].d[0] = c.r[5].d[0] | 4ull;
    st16((c.r[7].w[0] + 196u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[7].w[0] + 196u));
    c.r[5].d[0] = c.r[5].d[0] & 65519ull;
    st16((c.r[7].w[0] + 196u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[7].w[0] + 32u), c.f[2]);
    st32((c.r[7].w[0] + 36u), c.f[1]);
    st32((c.r[7].w[0] + 40u), c.f[0]);
    st32((c.r[7].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 40;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0]), c.r[4].w[0]);  if (t) { goto L_003F27EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F27B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F27B8u) [[unlikely]] return; }
L_003F27B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F27CCu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F27CCu) [[unlikely]] return; }
L_003F27CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F27EC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F27ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F27ECu) [[unlikely]] return; }
L_003F27EC:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003F27F0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 16u);
    c.budget -= 2;
L_003F27F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_003F282C; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[4].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F24E4u | kUnwind; return; } goto L_003F24E4; }
L_003F2828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003F282C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003F2850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2878u); st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F2878u) [[unlikely]] return; }
L_003F2878:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2884u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F2884u) [[unlikely]] return; }
L_003F2884:
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[18].d[0]; st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_003F28F0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), c.r[18].w[0]);  goto L_003F28D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F28A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F28A0u) [[unlikely]] return; }
L_003F28A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F28B0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F28B0u) [[unlikely]] return; }
L_003F28B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F28CC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F28CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F28CCu) [[unlikely]] return; }
L_003F28CC:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_003F28D0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_003F28F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F28E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F28E0u) [[unlikely]] return; }
L_003F28E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F28F0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F28F0u) [[unlikely]] return; }
L_003F28F0:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_003F28F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F28FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F28FCu) [[unlikely]] return; }
L_003F28FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 8u)));  goto L_003F291C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2914u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x003F2914u) [[unlikely]] return; }
L_003F2914:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_003F291C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[18].d[0];  if (t) { goto L_003F2984; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[18].w[0]);  goto L_003F2964; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2934u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2934u) [[unlikely]] return; }
L_003F2934:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2944u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2944u) [[unlikely]] return; }
L_003F2944:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F2960; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2960u) [[unlikely]] return; }
L_003F2960:
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 1;
L_003F2964:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F2984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2974u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2974u) [[unlikely]] return; }
L_003F2974:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2984u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2984u) [[unlikely]] return; }
L_003F2984:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 7392u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F29A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003F29A8; } }
L_003F29A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F29A8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003F29A8u) [[unlikely]] return; }
L_003F29A8:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F29B8u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x003F29B8u) [[unlikely]] return; }
L_003F29B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_003F2A18; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F29E4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F29E4u) [[unlikely]] return; }
L_003F29E4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F29F4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F29F4u) [[unlikely]] return; }
L_003F29F4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2A14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A14u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003F2A14u) [[unlikely]] return; }
L_003F2A14:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003F2A18:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A2Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2A2Cu) [[unlikely]] return; }
L_003F2A2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 79u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A68u); set32(c.r[7], c.r[29].w[0] + 78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2A68u) [[unlikely]] return; }
L_003F2A68:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65531ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65519ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 480u, depth + 1u); else { c.pc = 0x003F3830u; return; } if (c.pc != 0x003F2A94u) [[unlikely]] return; }
L_003F2A94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2AACu); set32(c.r[5], c.r[5].w[0] + 31024u);  if (depth < kMaxDepth) unit_00BC(c, 548u, depth + 1u); else { c.pc = 0x003F3FE0u; return; } if (c.pc != 0x003F2AACu) [[unlikely]] return; }
L_003F2AAC:
    set32(c.r[18], ld32((c.r[16].w[0] + 48u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 64u)));  goto L_003F2B20; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 48u), c.r[17].w[0]);  goto L_003F2AFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2ACCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2ACCu) [[unlikely]] return; }
L_003F2ACC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2ADCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2ADCu) [[unlikely]] return; }
L_003F2ADC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F2AF8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2AF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2AF8u) [[unlikely]] return; }
L_003F2AF8:
    st32((c.r[16].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 1;
L_003F2AFC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F2B1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2B0Cu) [[unlikely]] return; }
L_003F2B0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B1Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2B1Cu) [[unlikely]] return; }
L_003F2B1C:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 1;
L_003F2B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B28u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F2B28u) [[unlikely]] return; }
L_003F2B28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F2B40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003F2B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] + 16u);  if (t) { goto L_003F2B84; } }
L_003F2B74:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_003F2C90; }
    set32(c.r[17], c.r[19].w[0] + 32u);
    c.budget -= 1;
L_003F2B84:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2C90; } }
L_003F2B90:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[20].w[0]);  if (t) { goto L_003F2BBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2BACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2BACu) [[unlikely]] return; }
L_003F2BAC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2BBCu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2BBCu) [[unlikely]] return; }
L_003F2BBC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_003F2BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2BD0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2BD0u) [[unlikely]] return; }
L_003F2BD0:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2BE4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2BE4u) [[unlikely]] return; }
L_003F2BE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[20].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[20].d[0] = 0ull < c.r[20].d[0] ? 1ull : 0ull;  if (t) { goto L_003F2C34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2C00u) [[unlikely]] return; }
L_003F2C00:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C14u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2C14u) [[unlikely]] return; }
L_003F2C14:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2C34; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2C34u) [[unlikely]] return; }
L_003F2C34:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], ld32((c.r[29].w[0] + 108u)));  goto L_003F2C50; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C4Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 369u, depth + 1u); else { c.pc = 0x003F2CC0u; return; } if (c.pc != 0x003F2C4Cu) [[unlikely]] return; }
L_003F2C4C:
    set32(c.r[20], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003F2C50:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003F2C90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C60u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2C60u) [[unlikely]] return; }
L_003F2C60:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C70u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2C70u) [[unlikely]] return; }
L_003F2C70:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2C8C; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2C8Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2C8Cu) [[unlikely]] return; }
L_003F2C8C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003F2C90:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2B90u | kUnwind; return; } goto L_003F2B90; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F2CC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003F2CE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[4].w[0] + 16u);  if (t) { goto L_003F2CF4; } }
L_003F2CE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_003F2CF8; }
    set32(c.r[17], c.r[4].w[0] + 32u);
    c.budget -= 1;
L_003F2CF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003F2CF8:
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 76u), c.r[18].w[0]);  if (t) { goto L_003F2D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2D18u) [[unlikely]] return; }
L_003F2D18:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D28u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2D28u) [[unlikely]] return; }
L_003F2D28:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 72u), c.r[18].w[0]);  if (t) { goto L_003F2D50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2D40u) [[unlikely]] return; }
L_003F2D40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D50u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2D50u) [[unlikely]] return; }
L_003F2D50:
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D68u); set32(c.r[4], c.r[29].w[0] + 68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2D68u) [[unlikely]] return; }
L_003F2D68:
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_003F2DB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D7Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2D7Cu) [[unlikely]] return; }
L_003F2D7C:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D90u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2D90u) [[unlikely]] return; }
L_003F2D90:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F2DB0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2DB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2DB0u) [[unlikely]] return; }
L_003F2DB0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F2DB4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2DC0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00BC(c, 388u, depth + 1u); else { c.pc = 0x003F2EA0u; return; } if (c.pc != 0x003F2DC0u) [[unlikely]] return; }
L_003F2DC0:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 72u)));  goto L_003F2E0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2DD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2DD4u) [[unlikely]] return; }
L_003F2DD4:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2DE8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2DE8u) [[unlikely]] return; }
L_003F2DE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2E08; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2E08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2E08u) [[unlikely]] return; }
L_003F2E08:
    set32(c.r[16], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_003F2E0C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 76u)));  goto L_003F2E4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2E1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2E1Cu) [[unlikely]] return; }
L_003F2E1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2E2Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2E2Cu) [[unlikely]] return; }
L_003F2E2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2E48; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2E48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2E48u) [[unlikely]] return; }
L_003F2E48:
    set32(c.r[16], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_003F2E4C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003F2E8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2E5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2E5Cu) [[unlikely]] return; }
L_003F2E5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2E6Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2E6Cu) [[unlikely]] return; }
L_003F2E6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F2E88; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2E88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2E88u) [[unlikely]] return; }
L_003F2E88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F2E8C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F2EA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F2F00; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_003F3124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2EE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2EE8u) [[unlikely]] return; }
L_003F2EE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2EF8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2EF8u) [[unlikely]] return; }
L_003F2EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003F3128; } }
L_003F2F00:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[20], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[19].w[0]);  if (t) { goto L_003F2F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2F20u) [[unlikely]] return; }
L_003F2F20:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F30u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2F30u) [[unlikely]] return; }
L_003F2F30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_003F2F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2F44u) [[unlikely]] return; }
L_003F2F44:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F58u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2F58u) [[unlikely]] return; }
L_003F2F58:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[20], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0])));
    c.budget -= 6;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 104u)));  goto L_003F2FD4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 104u)));  goto L_003F2FB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2F80u) [[unlikely]] return; }
L_003F2F80:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F90u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2F90u) [[unlikely]] return; }
L_003F2F90:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F2FAC; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2FACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F2FACu) [[unlikely]] return; }
L_003F2FAC:
    set32(c.r[19], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_003F2FB0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_003F2FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2FC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2FC0u) [[unlikely]] return; }
L_003F2FC0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2FD0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2FD0u) [[unlikely]] return; }
L_003F2FD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_003F2FD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003F301C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2FE4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F2FE4u) [[unlikely]] return; }
L_003F2FE4:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2FF8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F2FF8u) [[unlikely]] return; }
L_003F2FF8:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F3018; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3018u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F3018u) [[unlikely]] return; }
L_003F3018:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F301C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 100u), 0u);  if (t) { goto L_003F3040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F302Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F302Cu) [[unlikely]] return; }
L_003F302C:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3040u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F3040u) [[unlikely]] return; }
L_003F3040:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[19].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { goto L_003F3090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F305Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F305Cu) [[unlikely]] return; }
L_003F305C:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3070u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F3070u) [[unlikely]] return; }
L_003F3070:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F3090; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3090u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F3090u) [[unlikely]] return; }
L_003F3090:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 10u));  goto L_003F30A8; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 4;
L_003F30A8:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 108u)));  goto L_003F30C0; }
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 2;
L_003F30C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_003F30E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F30D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F30D0u) [[unlikely]] return; }
L_003F30D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F30E0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F30E0u) [[unlikely]] return; }
L_003F30E0:
    set32(c.r[16], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003F3124; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F30F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F30F4u) [[unlikely]] return; }
L_003F30F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3104u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F3104u) [[unlikely]] return; }
L_003F3104:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F3120; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3120u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F3120u) [[unlikely]] return; }
L_003F3120:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F3124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003F3128:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F3150:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3180u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F3180u) [[unlikely]] return; }
L_003F3180:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F318Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F318Cu) [[unlikely]] return; }
L_003F318C:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3198u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 538u, depth + 1u); else { c.pc = 0x003F3EE0u; return; } if (c.pc != 0x003F3198u) [[unlikely]] return; }
L_003F3198:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_003F31BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F31ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F31ACu) [[unlikely]] return; }
L_003F31AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F31BCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F31BCu) [[unlikely]] return; }
L_003F31BC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F31D4u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F31D4u) [[unlikely]] return; }
L_003F31D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[2].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[2].w[0] + 104u), c.f[0]);  if (t) { goto L_003F3200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[20].w[0] + 16u);  if (t) { goto L_003F3210; } }
L_003F3200:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 120u);  goto L_003F3214; }
    set32(c.r[17], c.r[20].w[0] + 32u);
    c.budget -= 1;
L_003F3210:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 1;
L_003F3214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F321Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 477u, depth + 1u); else { c.pc = 0x003F37E0u; return; } if (c.pc != 0x003F321Cu) [[unlikely]] return; }
L_003F321C:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3228u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_00BC(c, 476u, depth + 1u); else { c.pc = 0x003F37C0u; return; } if (c.pc != 0x003F3228u) [[unlikely]] return; }
L_003F3228:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3238u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BC(c, 314u, depth + 1u); else { c.pc = 0x003F23F0u; return; } if (c.pc != 0x003F3238u) [[unlikely]] return; }
L_003F3238:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld16((c.r[17].w[0] + 10u));  goto L_003F32A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_003F32C0; } }
L_003F3248:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3254u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 477u, depth + 1u); else { c.pc = 0x003F37E0u; return; } if (c.pc != 0x003F3254u) [[unlikely]] return; }
L_003F3254:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[19], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3268u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 476u, depth + 1u); else { c.pc = 0x003F37C0u; return; } if (c.pc != 0x003F3268u) [[unlikely]] return; }
L_003F3268:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3278u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BC(c, 314u, depth + 1u); else { c.pc = 0x003F23F0u; return; } if (c.pc != 0x003F3278u) [[unlikely]] return; }
L_003F3278:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003F32A4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3290u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 470u, depth + 1u); else { c.pc = 0x003F3710u; return; } if (c.pc != 0x003F3290u) [[unlikely]] return; }
L_003F3290:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F32C0; } }
L_003F32A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F32A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3248u | kUnwind; return; } goto L_003F3248; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F32BCu); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_00BC(c, 433u, depth + 1u); else { c.pc = 0x003F3330u; return; } if (c.pc != 0x003F32BCu) [[unlikely]] return; }
L_003F32BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F32C0:
    set32(c.r[17], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  goto L_003F3304; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F32D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F32D4u) [[unlikely]] return; }
L_003F32D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F32E4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F32E4u) [[unlikely]] return; }
L_003F32E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F3300; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3300u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F3300u) [[unlikely]] return; }
L_003F3300:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_003F3304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F330Cu);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F330Cu) [[unlikely]] return; }
L_003F330C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F3330:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F34D8; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));  goto L_003F34DC; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  goto L_003F3424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_003F3408; } }
L_003F3394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F339Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 477u, depth + 1u); else { c.pc = 0x003F37E0u; return; } if (c.pc != 0x003F339Cu) [[unlikely]] return; }
L_003F339C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F33B4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 469u, depth + 1u); else { c.pc = 0x003F36F0u; return; } if (c.pc != 0x003F33B4u) [[unlikely]] return; }
L_003F33B4:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F33C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BC(c, 314u, depth + 1u); else { c.pc = 0x003F23F0u; return; } if (c.pc != 0x003F33C4u) [[unlikely]] return; }
L_003F33C4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_003F3404; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F33D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 477u, depth + 1u); else { c.pc = 0x003F37E0u; return; } if (c.pc != 0x003F33D8u) [[unlikely]] return; }
L_003F33D8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F33E8u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 470u, depth + 1u); else { c.pc = 0x003F3710u; return; } if (c.pc != 0x003F33E8u) [[unlikely]] return; }
L_003F33E8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F33F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BC(c, 314u, depth + 1u); else { c.pc = 0x003F23F0u; return; } if (c.pc != 0x003F33F4u) [[unlikely]] return; }
L_003F33F4:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_003F3404:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_003F3408:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 156u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3394u | kUnwind; return; } goto L_003F3394; }
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_003F3424:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_003F34C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3434u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8u));  if (depth < kMaxDepth) unit_00BC(c, 463u, depth + 1u); else { c.pc = 0x003F3650u; return; } if (c.pc != 0x003F3434u) [[unlikely]] return; }
L_003F3434:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003F345C; } }
L_003F3440:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3454u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 470u, depth + 1u); else { c.pc = 0x003F3710u; return; } if (c.pc != 0x003F3454u) [[unlikely]] return; }
L_003F3454:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_003F345C:
    c.r[18].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3440u | kUnwind; return; } goto L_003F3440; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));  if (t) { goto L_003F34B0; } }
L_003F3478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3480u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 477u, depth + 1u); else { c.pc = 0x003F37E0u; return; } if (c.pc != 0x003F3480u) [[unlikely]] return; }
L_003F3480:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3498u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 470u, depth + 1u); else { c.pc = 0x003F3710u; return; } if (c.pc != 0x003F3498u) [[unlikely]] return; }
L_003F3498:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F34A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BC(c, 314u, depth + 1u); else { c.pc = 0x003F23F0u; return; } if (c.pc != 0x003F34A4u) [[unlikely]] return; }
L_003F34A4:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));
    c.budget -= 3;
L_003F34B0:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3478u | kUnwind; return; } goto L_003F3478; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F34D0; } }
L_003F34C8:
    st32((c.r[21].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003F34D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F34D8u);  if (depth < kMaxDepth) unit_00BC(c, 462u, depth + 1u); else { c.pc = 0x003F3630u; return; } if (c.pc != 0x003F34D8u) [[unlikely]] return; }
L_003F34D8:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 1;
L_003F34DC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 140u);  goto L_003F3530; }
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F34FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 477u, depth + 1u); else { c.pc = 0x003F37E0u; return; } if (c.pc != 0x003F34FCu) [[unlikely]] return; }
L_003F34FC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3508u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00BC(c, 469u, depth + 1u); else { c.pc = 0x003F36F0u; return; } if (c.pc != 0x003F3508u) [[unlikely]] return; }
L_003F3508:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3518u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BC(c, 314u, depth + 1u); else { c.pc = 0x003F23F0u; return; } if (c.pc != 0x003F3518u) [[unlikely]] return; }
L_003F3518:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_003F35E8; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F35E4; } }
L_003F3530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3538u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 477u, depth + 1u); else { c.pc = 0x003F37E0u; return; } if (c.pc != 0x003F3538u) [[unlikely]] return; }
L_003F3538:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3544u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_00BC(c, 469u, depth + 1u); else { c.pc = 0x003F36F0u; return; } if (c.pc != 0x003F3544u) [[unlikely]] return; }
L_003F3544:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3554u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BC(c, 314u, depth + 1u); else { c.pc = 0x003F23F0u; return; } if (c.pc != 0x003F3554u) [[unlikely]] return; }
L_003F3554:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 132u);  goto L_003F35A4; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3568u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 477u, depth + 1u); else { c.pc = 0x003F37E0u; return; } if (c.pc != 0x003F3568u) [[unlikely]] return; }
L_003F3568:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F357Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 476u, depth + 1u); else { c.pc = 0x003F37C0u; return; } if (c.pc != 0x003F357Cu) [[unlikely]] return; }
L_003F357C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F358Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BC(c, 314u, depth + 1u); else { c.pc = 0x003F23F0u; return; } if (c.pc != 0x003F358Cu) [[unlikely]] return; }
L_003F358C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F35E4; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003F35E4; } }
L_003F35A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F35ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 477u, depth + 1u); else { c.pc = 0x003F37E0u; return; } if (c.pc != 0x003F35ACu) [[unlikely]] return; }
L_003F35AC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F35C0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 469u, depth + 1u); else { c.pc = 0x003F36F0u; return; } if (c.pc != 0x003F35C0u) [[unlikely]] return; }
L_003F35C0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F35D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BC(c, 314u, depth + 1u); else { c.pc = 0x003F23F0u; return; } if (c.pc != 0x003F35D0u) [[unlikely]] return; }
L_003F35D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F35E4; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003F35E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_003F35E8:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F35F8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 470u, depth + 1u); else { c.pc = 0x003F3710u; return; } if (c.pc != 0x003F35F8u) [[unlikely]] return; }
L_003F35F8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003F3630:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 9200u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00397FD0u | kUnwind; return; } [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_003F3650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3670u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x003F3670u) [[unlikely]] return; }
L_003F3670:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13984u);
    set32(c.r[6], c.r[6].w[0] + 9200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3690u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x003F3690u) [[unlikely]] return; }
L_003F3690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F36A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_003F36D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F36C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F36C8u) [[unlikely]] return; }
L_003F36C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F36D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F36D8u) [[unlikely]] return; }
L_003F36D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F36F0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003F3710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F3798; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_003F3778; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3748u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F3748u) [[unlikely]] return; }
L_003F3748:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3758u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F3758u) [[unlikely]] return; }
L_003F3758:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F3774; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3774u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F3774u) [[unlikely]] return; }
L_003F3774:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003F3778:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_003F3798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3788u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F3788u) [[unlikely]] return; }
L_003F3788:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3798u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F3798u) [[unlikely]] return; }
L_003F3798:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F37C0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003F37E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003F3818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3808u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F3808u) [[unlikely]] return; }
L_003F3808:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3818u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F3818u) [[unlikely]] return; }
L_003F3818:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F3830:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3868u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F3868u) [[unlikely]] return; }
L_003F3868:
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3874u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F3874u) [[unlikely]] return; }
L_003F3874:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F3884u) [[unlikely]] return; }
L_003F3884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F38D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3894u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x003F3894u) [[unlikely]] return; }
L_003F3894:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_003F38D4:
    c.r[6].d[0] = ld16((c.r[20].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3904u); st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F3904u) [[unlikely]] return; }
L_003F3904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F395C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3914u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x003F3914u) [[unlikely]] return; }
L_003F3914:
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
L_003F395C:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3994u); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F3994u) [[unlikely]] return; }
L_003F3994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F3A04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F39A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x003F39A4u) [[unlikely]] return; }
L_003F39A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F39C0u); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x003F39C0u) [[unlikely]] return; }
L_003F39C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F39CCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x003F39CCu) [[unlikely]] return; }
L_003F39CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F39D8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x003F39D8u) [[unlikely]] return; }
L_003F39D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F39E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x003F39E4u) [[unlikely]] return; }
L_003F39E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F39F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x003F39F0u) [[unlikely]] return; }
L_003F39F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F39FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x003F39FCu) [[unlikely]] return; }
L_003F39FC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003F3A04:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 56u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3A6Cu); st8((c.r[18].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F3A6Cu) [[unlikely]] return; }
L_003F3A6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));  goto L_003F3A88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3A80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x003F3A80u) [[unlikely]] return; }
L_003F3A80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.budget -= 2;
L_003F3A88:
    set32(c.r[2], 0u - 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_003F3B34; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3AB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F3AB0u) [[unlikely]] return; }
L_003F3AB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_003F3AC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3AC0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x003F3AC0u) [[unlikely]] return; }
L_003F3AC0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_003F3AC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3AE8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F3B28; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F3B28; } }
L_003F3AE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_003F3B10; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_003F3B2C; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F3B28; } }
L_003F3B10:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F3B28; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003F3B28:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003F3B2C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_003F3B34:
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[2].w[0]));  goto L_003F3BE0; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3B5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F3B5Cu) [[unlikely]] return; }
L_003F3B5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_003F3B70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3B6Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x003F3B6Cu) [[unlikely]] return; }
L_003F3B6C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_003F3B70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3B94; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F3BD4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F3BD4; } }
L_003F3B94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_003F3BBC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_003F3BD8; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F3BD4; } }
L_003F3BBC:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F3BD4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003F3BD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003F3BD8:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_003F3BE0:
    set32(c.r[3], 0u - 3841u);
    set32(c.r[4], 0u + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 1280ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3BFCu); st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F3BFCu) [[unlikely]] return; }
L_003F3BFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F3C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x003F3C0Cu) [[unlikely]] return; }
L_003F3C0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 16528u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C34u); st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 546u, depth + 1u); else { c.pc = 0x00307310u; return; } if (c.pc != 0x003F3C34u) [[unlikely]] return; }
L_003F3C34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C40u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0081(c, 545u, depth + 1u); else { c.pc = 0x003072E0u; return; } if (c.pc != 0x003F3C40u) [[unlikely]] return; }
L_003F3C40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 544u, depth + 1u); else { c.pc = 0x003072C0u; return; } if (c.pc != 0x003F3C4Cu) [[unlikely]] return; }
L_003F3C4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 543u, depth + 1u); else { c.pc = 0x003072A0u; return; } if (c.pc != 0x003F3C58u) [[unlikely]] return; }
L_003F3C58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C64u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0081(c, 542u, depth + 1u); else { c.pc = 0x00307280u; return; } if (c.pc != 0x003F3C64u) [[unlikely]] return; }
L_003F3C64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0081(c, 541u, depth + 1u); else { c.pc = 0x00307260u; return; } if (c.pc != 0x003F3C70u) [[unlikely]] return; }
L_003F3C70:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[2], 0u - 3073u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 3072ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0] + 52u)));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_003F3DC4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C9Cu); set32(c.r[4], c.r[4].w[0] - 7379u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x003F3C9Cu) [[unlikely]] return; }
L_003F3C9C:
    st32((c.r[22].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x003F3CACu) [[unlikely]] return; }
L_003F3CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CB4u); set32(c.r[4], ld32((c.r[22].w[0] + 52u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x003F3CB4u) [[unlikely]] return; }
L_003F3CB4:
    set32(c.r[23], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[30], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[30].d[0] != 0ull) { set32(c.r[22], ld32((c.r[30].w[0] + 8u)));  goto L_003F3D58; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F3CD4u) [[unlikely]] return; }
L_003F3CD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_003F3CE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x003F3CE4u) [[unlikely]] return; }
L_003F3CE4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_003F3CE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F3D0C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F3D4C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F3D4C; } }
L_003F3D0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_003F3D34; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_003F3D50; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F3D4C; } }
L_003F3D34:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F3D4C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003F3D4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003F3D50:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[30].w[0] + 8u)));
    c.budget -= 2;
L_003F3D58:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[23].d[0];  if (t) { goto L_003F3DC0; } }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { st32((c.r[30].w[0] + 8u), c.r[23].w[0]);  goto L_003F3DA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3D70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F3D70u) [[unlikely]] return; }
L_003F3D70:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3D80u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F3D80u) [[unlikely]] return; }
L_003F3D80:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F3D9C; } }
    set32(c.r[25], ld32((c.r[22].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3D9Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F3D9Cu) [[unlikely]] return; }
L_003F3D9C:
    st32((c.r[30].w[0] + 8u), c.r[23].w[0]);
    c.budget -= 1;
L_003F3DA0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_003F3DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3DB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003F3DB0u) [[unlikely]] return; }
L_003F3DB0:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3DC0u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003F3DC0u) [[unlikely]] return; }
L_003F3DC0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003F3DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3DCCu); set32(c.r[4], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003F3DCCu) [[unlikely]] return; }
L_003F3DCC:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3DD8u); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003F3DD8u) [[unlikely]] return; }
L_003F3DD8:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3DE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003F3DE4u) [[unlikely]] return; }
L_003F3DE4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3DF0u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003F3DF0u) [[unlikely]] return; }
L_003F3DF0:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3DFCu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003F3DFCu) [[unlikely]] return; }
L_003F3DFC:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003F3E08u) [[unlikely]] return; }
L_003F3E08:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E14u); set32(c.r[4], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003F3E14u) [[unlikely]] return; }
L_003F3E14:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E20u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003F3E20u) [[unlikely]] return; }
L_003F3E20:
    set32(c.r[4], c.r[29].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003F3E2Cu) [[unlikely]] return; }
L_003F3E2C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E38u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003F3E38u) [[unlikely]] return; }
L_003F3E38:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E44u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003F3E44u) [[unlikely]] return; }
L_003F3E44:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003F3E50u) [[unlikely]] return; }
L_003F3E50:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E5Cu); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x003F3E5Cu) [[unlikely]] return; }
L_003F3E5C:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E68u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x003F3E68u) [[unlikely]] return; }
L_003F3E68:
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x003F3E74u) [[unlikely]] return; }
L_003F3E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E7Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x003F3E7Cu) [[unlikely]] return; }
L_003F3E7C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E8Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x003F3E8Cu) [[unlikely]] return; }
L_003F3E8C:
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3E9Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F3E9Cu) [[unlikely]] return; }
L_003F3E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3EA4u); set32(c.r[4], ld32((c.r[29].w[0] + 160u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F3EA4u) [[unlikely]] return; }
L_003F3EA4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003F3EE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3EF8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003F3EF8u) [[unlikely]] return; }
L_003F3EF8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3F04u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F3F04u) [[unlikely]] return; }
    goto L_003F3F04;
L_003F3F00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003F3F04:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], 0u + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3F14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F3F14u) [[unlikely]] return; }
L_003F3F14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F3F5C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3F28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x003F3F28u) [[unlikely]] return; }
L_003F3F28:
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
L_003F3F5C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 256u));
    set32(c.r[2], 0u - 8u);
    set32(c.r[4], 0u + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3F84u); st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x003F3F84u) [[unlikely]] return; }
L_003F3F84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[2].w[0] + 196u));  goto L_003F3F9C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3F98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 22u, depth + 1u); else { c.pc = 0x00320240u; return; } if (c.pc != 0x003F3F98u) [[unlikely]] return; }
L_003F3F98:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 196u));
    c.budget -= 1;
L_003F3F9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[2].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3FBCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F3FBCu) [[unlikely]] return; }
L_003F3FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3FC4u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003F3FC4u) [[unlikely]] return; }
L_003F3FC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F3FE0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 8;
    [[clang::musttail]] return unit_00BD(c, 1u, depth);
}

}
