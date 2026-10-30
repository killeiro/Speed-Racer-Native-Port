#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0041[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0,
    0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0,
    245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0,
    268, 0, 0, 0, 269, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 293,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0,
    329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 359, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0,
    0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369,
    0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 384,
    0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 394,
    0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 431,
    0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437,
    0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0,
    445, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488,
};

void unit_0041(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00204000;
    case 2u: goto L_00204004;
    case 3u: goto L_00204014;
    case 4u: goto L_00204024;
    case 5u: goto L_00204048;
    case 6u: goto L_0020405C;
    case 7u: goto L_00204064;
    case 8u: goto L_002040DC;
    case 9u: goto L_002040EC;
    case 10u: goto L_00204154;
    case 11u: goto L_00204164;
    case 12u: goto L_002041A8;
    case 13u: goto L_00204288;
    case 14u: goto L_002042E0;
    case 15u: goto L_002042FC;
    case 16u: goto L_00204320;
    case 17u: goto L_00204350;
    case 18u: goto L_0020438C;
    case 19u: goto L_002043B4;
    case 20u: goto L_00204434;
    case 21u: goto L_00204454;
    case 22u: goto L_0020448C;
    case 23u: goto L_002044B0;
    case 24u: goto L_002044D8;
    case 25u: goto L_00204524;
    case 26u: goto L_0020454C;
    case 27u: goto L_00204594;
    case 28u: goto L_002045F4;
    case 29u: goto L_00204644;
    case 30u: goto L_002046D4;
    case 31u: goto L_00204730;
    case 32u: goto L_00204788;
    case 33u: goto L_002047B8;
    case 34u: goto L_002047F8;
    case 35u: goto L_00204828;
    case 36u: goto L_00204850;
    case 37u: goto L_00204854;
    case 38u: goto L_002048A0;
    case 39u: goto L_002048B0;
    case 40u: goto L_002048E0;
    case 41u: goto L_002048F0;
    case 42u: goto L_0020491C;
    case 43u: goto L_0020492C;
    case 44u: goto L_0020494C;
    case 45u: goto L_0020496C;
    case 46u: goto L_0020497C;
    case 47u: goto L_002049C0;
    case 48u: goto L_002049D0;
    case 49u: goto L_002049EC;
    case 50u: goto L_002049F8;
    case 51u: goto L_00204A0C;
    case 52u: goto L_00204A1C;
    case 53u: goto L_00204A30;
    case 54u: goto L_00204A88;
    case 55u: goto L_00204A9C;
    case 56u: goto L_00204AAC;
    case 57u: goto L_00204AC0;
    case 58u: goto L_00204AE0;
    case 59u: goto L_00204B04;
    case 60u: goto L_00204B74;
    case 61u: goto L_00204B8C;
    case 62u: goto L_00204BB4;
    case 63u: goto L_00204BCC;
    case 64u: goto L_00204C10;
    case 65u: goto L_00204C30;
    case 66u: goto L_00204C3C;
    case 67u: goto L_00204C54;
    case 68u: goto L_00204C7C;
    case 69u: goto L_00204C88;
    case 70u: goto L_00204C90;
    case 71u: goto L_00204CA4;
    case 72u: goto L_00204CCC;
    case 73u: goto L_00204D00;
    case 74u: goto L_00204D10;
    case 75u: goto L_00204D20;
    case 76u: goto L_00204D48;
    case 77u: goto L_00204D54;
    case 78u: goto L_00204D6C;
    case 79u: goto L_00204DA0;
    case 80u: goto L_00204DCC;
    case 81u: goto L_00204DFC;
    case 82u: goto L_00204E48;
    case 83u: goto L_00204E80;
    case 84u: goto L_00204EB4;
    case 85u: goto L_00204EE0;
    case 86u: goto L_00204F10;
    case 87u: goto L_00204F70;
    case 88u: goto L_00204F88;
    case 89u: goto L_00204F98;
    case 90u: goto L_00204FD0;
    case 91u: goto L_00205024;
    case 92u: goto L_00205050;
    case 93u: goto L_0020505C;
    case 94u: goto L_00205078;
    case 95u: goto L_00205090;
    case 96u: goto L_002050A0;
    case 97u: goto L_002050F0;
    case 98u: goto L_00205110;
    case 99u: goto L_00205144;
    case 100u: goto L_00205170;
    case 101u: goto L_002051B0;
    case 102u: goto L_002051CC;
    case 103u: goto L_002051F0;
    case 104u: goto L_00205200;
    case 105u: goto L_00205214;
    case 106u: goto L_00205220;
    case 107u: goto L_00205234;
    case 108u: goto L_00205250;
    case 109u: goto L_00205260;
    case 110u: goto L_00205270;
    case 111u: goto L_00205280;
    case 112u: goto L_00205290;
    case 113u: goto L_002052A0;
    case 114u: goto L_002052B8;
    case 115u: goto L_002052C8;
    case 116u: goto L_002052F0;
    case 117u: goto L_00205318;
    case 118u: goto L_00205328;
    case 119u: goto L_00205344;
    case 120u: goto L_00205360;
    case 121u: goto L_00205370;
    case 122u: goto L_00205380;
    case 123u: goto L_0020539C;
    case 124u: goto L_002053AC;
    case 125u: goto L_002053F4;
    case 126u: goto L_00205400;
    case 127u: goto L_00205440;
    case 128u: goto L_00205480;
    case 129u: goto L_0020549C;
    case 130u: goto L_002054C0;
    case 131u: goto L_002054D0;
    case 132u: goto L_002054E4;
    case 133u: goto L_002054F0;
    case 134u: goto L_00205504;
    case 135u: goto L_00205520;
    case 136u: goto L_00205530;
    case 137u: goto L_00205540;
    case 138u: goto L_00205550;
    case 139u: goto L_00205560;
    case 140u: goto L_00205570;
    case 141u: goto L_00205588;
    case 142u: goto L_00205598;
    case 143u: goto L_002055C0;
    case 144u: goto L_002055E8;
    case 145u: goto L_002055F8;
    case 146u: goto L_00205614;
    case 147u: goto L_00205630;
    case 148u: goto L_00205640;
    case 149u: goto L_00205650;
    case 150u: goto L_0020566C;
    case 151u: goto L_0020567C;
    case 152u: goto L_002056C4;
    case 153u: goto L_002056D0;
    case 154u: goto L_00205710;
    case 155u: goto L_00205750;
    case 156u: goto L_0020576C;
    case 157u: goto L_00205790;
    case 158u: goto L_002057A0;
    case 159u: goto L_002057B4;
    case 160u: goto L_002057C0;
    case 161u: goto L_002057D4;
    case 162u: goto L_002057F0;
    case 163u: goto L_00205800;
    case 164u: goto L_00205810;
    case 165u: goto L_00205820;
    case 166u: goto L_00205830;
    case 167u: goto L_00205840;
    case 168u: goto L_00205858;
    case 169u: goto L_00205868;
    case 170u: goto L_00205890;
    case 171u: goto L_002058B8;
    case 172u: goto L_002058C8;
    case 173u: goto L_002058E4;
    case 174u: goto L_00205900;
    case 175u: goto L_00205910;
    case 176u: goto L_00205920;
    case 177u: goto L_0020593C;
    case 178u: goto L_0020594C;
    case 179u: goto L_00205994;
    case 180u: goto L_002059A0;
    case 181u: goto L_002059E0;
    case 182u: goto L_00205A20;
    case 183u: goto L_00205A3C;
    case 184u: goto L_00205A60;
    case 185u: goto L_00205A70;
    case 186u: goto L_00205A84;
    case 187u: goto L_00205A90;
    case 188u: goto L_00205AA4;
    case 189u: goto L_00205AC0;
    case 190u: goto L_00205AD0;
    case 191u: goto L_00205AE0;
    case 192u: goto L_00205AF0;
    case 193u: goto L_00205B00;
    case 194u: goto L_00205B10;
    case 195u: goto L_00205B28;
    case 196u: goto L_00205B38;
    case 197u: goto L_00205B60;
    case 198u: goto L_00205B88;
    case 199u: goto L_00205B98;
    case 200u: goto L_00205BB4;
    case 201u: goto L_00205BD0;
    case 202u: goto L_00205BE0;
    case 203u: goto L_00205BF0;
    case 204u: goto L_00205C0C;
    case 205u: goto L_00205C1C;
    case 206u: goto L_00205C64;
    case 207u: goto L_00205C70;
    case 208u: goto L_00205CB0;
    case 209u: goto L_00205CF0;
    case 210u: goto L_00205D0C;
    case 211u: goto L_00205D30;
    case 212u: goto L_00205D40;
    case 213u: goto L_00205D54;
    case 214u: goto L_00205D60;
    case 215u: goto L_00205D74;
    case 216u: goto L_00205D90;
    case 217u: goto L_00205DA0;
    case 218u: goto L_00205DB0;
    case 219u: goto L_00205DC0;
    case 220u: goto L_00205DD0;
    case 221u: goto L_00205DE0;
    case 222u: goto L_00205DF8;
    case 223u: goto L_00205E08;
    case 224u: goto L_00205E30;
    case 225u: goto L_00205E58;
    case 226u: goto L_00205E68;
    case 227u: goto L_00205E84;
    case 228u: goto L_00205EA0;
    case 229u: goto L_00205EB0;
    case 230u: goto L_00205EC0;
    case 231u: goto L_00205EDC;
    case 232u: goto L_00205EEC;
    case 233u: goto L_00205F34;
    case 234u: goto L_00205F40;
    case 235u: goto L_00205F80;
    case 236u: goto L_00205FC0;
    case 237u: goto L_00205FDC;
    case 238u: goto L_00206000;
    case 239u: goto L_00206010;
    case 240u: goto L_00206024;
    case 241u: goto L_00206030;
    case 242u: goto L_00206044;
    case 243u: goto L_00206060;
    case 244u: goto L_00206070;
    case 245u: goto L_00206080;
    case 246u: goto L_00206090;
    case 247u: goto L_002060A0;
    case 248u: goto L_002060B0;
    case 249u: goto L_002060C8;
    case 250u: goto L_002060D8;
    case 251u: goto L_00206100;
    case 252u: goto L_00206128;
    case 253u: goto L_00206138;
    case 254u: goto L_00206154;
    case 255u: goto L_00206170;
    case 256u: goto L_00206180;
    case 257u: goto L_00206190;
    case 258u: goto L_002061AC;
    case 259u: goto L_002061BC;
    case 260u: goto L_00206204;
    case 261u: goto L_00206210;
    case 262u: goto L_00206250;
    case 263u: goto L_00206290;
    case 264u: goto L_002062AC;
    case 265u: goto L_002062D0;
    case 266u: goto L_002062E0;
    case 267u: goto L_002062F4;
    case 268u: goto L_00206300;
    case 269u: goto L_00206310;
    case 270u: goto L_00206314;
    case 271u: goto L_00206330;
    case 272u: goto L_00206340;
    case 273u: goto L_00206350;
    case 274u: goto L_00206360;
    case 275u: goto L_00206370;
    case 276u: goto L_00206380;
    case 277u: goto L_00206398;
    case 278u: goto L_002063A8;
    case 279u: goto L_002063D0;
    case 280u: goto L_002063F8;
    case 281u: goto L_00206408;
    case 282u: goto L_00206424;
    case 283u: goto L_00206440;
    case 284u: goto L_00206450;
    case 285u: goto L_00206460;
    case 286u: goto L_0020647C;
    case 287u: goto L_0020648C;
    case 288u: goto L_002064D4;
    case 289u: goto L_002064E0;
    case 290u: goto L_00206520;
    case 291u: goto L_00206560;
    case 292u: goto L_00206570;
    case 293u: goto L_0020657C;
    case 294u: goto L_002065A0;
    case 295u: goto L_002065B0;
    case 296u: goto L_002065C4;
    case 297u: goto L_002065D0;
    case 298u: goto L_002065E4;
    case 299u: goto L_00206600;
    case 300u: goto L_00206610;
    case 301u: goto L_00206620;
    case 302u: goto L_00206630;
    case 303u: goto L_00206640;
    case 304u: goto L_00206650;
    case 305u: goto L_00206668;
    case 306u: goto L_00206678;
    case 307u: goto L_002066A0;
    case 308u: goto L_002066C8;
    case 309u: goto L_002066D8;
    case 310u: goto L_002066F4;
    case 311u: goto L_00206710;
    case 312u: goto L_00206720;
    case 313u: goto L_00206730;
    case 314u: goto L_0020674C;
    case 315u: goto L_0020675C;
    case 316u: goto L_002067A4;
    case 317u: goto L_002067B0;
    case 318u: goto L_002067F0;
    case 319u: goto L_00206830;
    case 320u: goto L_0020684C;
    case 321u: goto L_00206870;
    case 322u: goto L_00206880;
    case 323u: goto L_00206894;
    case 324u: goto L_002068A0;
    case 325u: goto L_002068B4;
    case 326u: goto L_002068D0;
    case 327u: goto L_002068E0;
    case 328u: goto L_002068F0;
    case 329u: goto L_00206900;
    case 330u: goto L_00206910;
    case 331u: goto L_00206920;
    case 332u: goto L_00206938;
    case 333u: goto L_00206948;
    case 334u: goto L_00206970;
    case 335u: goto L_00206998;
    case 336u: goto L_002069A8;
    case 337u: goto L_002069C4;
    case 338u: goto L_002069E0;
    case 339u: goto L_002069F0;
    case 340u: goto L_00206A00;
    case 341u: goto L_00206A1C;
    case 342u: goto L_00206A2C;
    case 343u: goto L_00206A74;
    case 344u: goto L_00206A80;
    case 345u: goto L_00206AC0;
    case 346u: goto L_00206B00;
    case 347u: goto L_00206B1C;
    case 348u: goto L_00206B40;
    case 349u: goto L_00206B50;
    case 350u: goto L_00206B64;
    case 351u: goto L_00206B70;
    case 352u: goto L_00206B84;
    case 353u: goto L_00206BA0;
    case 354u: goto L_00206BB0;
    case 355u: goto L_00206BC0;
    case 356u: goto L_00206BD0;
    case 357u: goto L_00206BE0;
    case 358u: goto L_00206BF0;
    case 359u: goto L_00206C08;
    case 360u: goto L_00206C0C;
    case 361u: goto L_00206C18;
    case 362u: goto L_00206C40;
    case 363u: goto L_00206C68;
    case 364u: goto L_00206C78;
    case 365u: goto L_00206C94;
    case 366u: goto L_00206CB0;
    case 367u: goto L_00206CD0;
    case 368u: goto L_00206CE0;
    case 369u: goto L_00206CFC;
    case 370u: goto L_00206D0C;
    case 371u: goto L_00206D54;
    case 372u: goto L_00206D60;
    case 373u: goto L_00206DA0;
    case 374u: goto L_00206DB0;
    case 375u: goto L_00206DCC;
    case 376u: goto L_00206DD8;
    case 377u: goto L_00206DEC;
    case 378u: goto L_00206E10;
    case 379u: goto L_00206E24;
    case 380u: goto L_00206E34;
    case 381u: goto L_00206E48;
    case 382u: goto L_00206E58;
    case 383u: goto L_00206E6C;
    case 384u: goto L_00206E7C;
    case 385u: goto L_00206E90;
    case 386u: goto L_00206EA0;
    case 387u: goto L_00206EB4;
    case 388u: goto L_00206ED0;
    case 389u: goto L_00206EEC;
    case 390u: goto L_00206F48;
    case 391u: goto L_00206FC0;
    case 392u: goto L_00206FDC;
    case 393u: goto L_00206FF0;
    case 394u: goto L_00206FFC;
    case 395u: goto L_00207008;
    case 396u: goto L_0020701C;
    case 397u: goto L_00207028;
    case 398u: goto L_00207040;
    case 399u: goto L_00207050;
    case 400u: goto L_0020706C;
    case 401u: goto L_00207074;
    case 402u: goto L_00207090;
    case 403u: goto L_002070AC;
    case 404u: goto L_002070B4;
    case 405u: goto L_002070C0;
    case 406u: goto L_002070CC;
    case 407u: goto L_002070D8;
    case 408u: goto L_002070F0;
    case 409u: goto L_00207110;
    case 410u: goto L_0020712C;
    case 411u: goto L_0020715C;
    case 412u: goto L_002071A0;
    case 413u: goto L_002071E0;
    case 414u: goto L_002071FC;
    case 415u: goto L_00207240;
    case 416u: goto L_00207254;
    case 417u: goto L_00207290;
    case 418u: goto L_002072E8;
    case 419u: goto L_002072FC;
    case 420u: goto L_00207328;
    case 421u: goto L_00207338;
    case 422u: goto L_00207358;
    case 423u: goto L_002073B0;
    case 424u: goto L_002073F0;
    case 425u: goto L_0020740C;
    case 426u: goto L_00207430;
    case 427u: goto L_00207440;
    case 428u: goto L_0020745C;
    case 429u: goto L_00207468;
    case 430u: goto L_00207478;
    case 431u: goto L_0020747C;
    case 432u: goto L_0020748C;
    case 433u: goto L_002074A0;
    case 434u: goto L_002074C0;
    case 435u: goto L_002074DC;
    case 436u: goto L_00207560;
    case 437u: goto L_0020757C;
    case 438u: goto L_00207588;
    case 439u: goto L_002075A0;
    case 440u: goto L_002075B0;
    case 441u: goto L_002075C0;
    case 442u: goto L_002075DC;
    case 443u: goto L_002075E8;
    case 444u: goto L_002075F4;
    case 445u: goto L_00207600;
    case 446u: goto L_00207608;
    case 447u: goto L_00207618;
    case 448u: goto L_00207630;
    case 449u: goto L_0020763C;
    case 450u: goto L_00207650;
    case 451u: goto L_00207680;
    case 452u: goto L_00207694;
    case 453u: goto L_002076A4;
    case 454u: goto L_002076B0;
    case 455u: goto L_002076CC;
    case 456u: goto L_002076FC;
    case 457u: goto L_00207740;
    case 458u: goto L_00207780;
    case 459u: goto L_0020779C;
    case 460u: goto L_002077A8;
    case 461u: goto L_002077B4;
    case 462u: goto L_002077BC;
    case 463u: goto L_002077CC;
    case 464u: goto L_002077E4;
    case 465u: goto L_002077F0;
    case 466u: goto L_00207810;
    case 467u: goto L_00207838;
    case 468u: goto L_0020784C;
    case 469u: goto L_00207860;
    case 470u: goto L_00207880;
    case 471u: goto L_002079B0;
    case 472u: goto L_002079E4;
    case 473u: goto L_002079EC;
    case 474u: goto L_00207A6C;
    case 475u: goto L_00207A7C;
    case 476u: goto L_00207AE0;
    case 477u: goto L_00207B80;
    case 478u: goto L_00207C10;
    case 479u: goto L_00207D24;
    case 480u: goto L_00207D58;
    case 481u: goto L_00207D60;
    case 482u: goto L_00207DE0;
    case 483u: goto L_00207E0C;
    case 484u: goto L_00207E18;
    case 485u: goto L_00207EF0;
    case 486u: goto L_00207FA0;
    case 487u: goto L_00207FB4;
    case 488u: goto L_00207FFC;
    default: bad_entry(c, 0x00204000u); return;
    }
L_00204000:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00204004:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204014u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204014u) [[unlikely]] return; }
L_00204014:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 10008u);  if (t) { goto L_00204038; } }
L_00204024:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00204038; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00204044; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00204038:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204024u | kUnwind; return; } goto L_00204024; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00204044:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00204048:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[20], ld32((c.r[17].w[0] + 52u)));  goto L_002040BC; }
    set32(c.r[19], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020405Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 234u, depth + 1u); else { c.pc = 0x00242390u; return; } if (c.pc != 0x0020405Cu) [[unlikely]] return; }
L_0020405C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204064u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 251u, depth + 1u); else { c.pc = 0x00242910u; return; } if (c.pc != 0x00204064u) [[unlikely]] return; }
L_00204064:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10064u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002040B8; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 14u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[6].d[0] & 255ull;  goto L_002040A0; }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 15u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0020409C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[19].w[0] + 32u));  if (t) { goto L_002040B8; } }
L_0020409C:
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_002040A0:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[20] = ld32((c.r[3].w[0] + 20u));
    c.budget -= 6;
L_002040B8:
    set32(c.r[20], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_002040BC:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002040D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00204120; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002040D0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002040DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002040DCu) [[unlikely]] return; }
L_002040DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 13224u);  if (t) { goto L_00204100; } }
L_002040EC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00204100; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020410C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00204100:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002040ECu | kUnwind; return; } goto L_002040EC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020410C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00204120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204120; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00204120:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 52u)));  goto L_00204134; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 32644u));  if (t) { goto L_0020420C; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_00204134:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_00204148; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00204198; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_00204148:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204154u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204154u) [[unlikely]] return; }
L_00204154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 10008u);  if (t) { goto L_00204178; } }
L_00204164:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00204178; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00204184; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00204178:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204164u | kUnwind; return; } goto L_00204164; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00204184:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_00204198; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204198; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00204198:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00204208; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002041A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 251u, depth + 1u); else { c.pc = 0x00242910u; return; } if (c.pc != 0x002041A8u) [[unlikely]] return; }
L_002041A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10064u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00204204; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 14u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[5].d[0] & 255ull;  goto L_002041E4; }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 15u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002041E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 24u)));  if (t) { goto L_002041FC; } }
L_002041E0:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_002041E4:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0])));
    c.budget -= 6;
L_002041FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204208; } }
L_00204204:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00204208:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 1;
L_0020420C:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0020421C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020421C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00204850; } }
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.f[25] = ld32((c.r[17].w[0] + 40u));  goto L_00204238; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204850; } }
    c.f[25] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 1;
L_00204238:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.f[25] = c.f[20];  goto L_0020424C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));  goto L_00204250; }
    c.f[25] = c.f[20];
    c.budget -= 1;
L_0020424C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    c.budget -= 1;
L_00204250:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 68u), c.r[20].w[0]);  goto L_00204294; }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00204290; } }
    st32((c.r[17].w[0] + 72u), c.f[25]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.f[12] = c.f[25];
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204288u); set32(c.r[6], c.r[17].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204288u) [[unlikely]] return; }
L_00204288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[20].w[0]);  if (t) { goto L_00204850; } }
L_00204290:
    st32((c.r[17].w[0] + 68u), c.r[20].w[0]);
    c.budget -= 1;
L_00204294:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002042B8; }
    set32(c.r[30], ld32((c.r[2].w[0] + 16u)));
    c.r[22].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[19], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_002042C4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002042B8:
    c.r[30].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002042C4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_002042EC; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002042E0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002042E0u) [[unlikely]] return; }
L_002042E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00204850; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002042EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002042FCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002042FCu) [[unlikely]] return; }
L_002042FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = c.f[25];  goto L_002044BC; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204320u); set32(c.r[6], c.r[29].w[0] + 255u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204320u) [[unlikely]] return; }
L_00204320:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 255u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00204850; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.f[24] = ld32((c.r[17].w[0] + 72u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[22] = ld32((c.r[2].w[0] + 276u));
    st32((c.r[17].w[0] + 72u), c.f[25]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204350u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204350u) [[unlikely]] return; }
L_00204350:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 16u)));  goto L_002043C0; }
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[25]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = fp::sub(c.f[25], c.f[24]);  if (t) { goto L_00204370; } }
    c.f[24] = 0u;
    c.f[20] = c.f[25];
    c.budget -= 3;
L_00204370:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020438Cu); set32(c.r[6], c.r[29].w[0] + 248u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020438Cu) [[unlikely]] return; }
L_0020438C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00204850; } }
    c.f[12] = fp::add(c.f[22], c.f[20]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[17] = ld32((c.r[29].w[0] + 248u));
    c.f[14] = c.f[24];
    c.f[13] = c.f[25];
    c.f[15] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002043B4u); c.f[16] = c.f[25];  if (depth < kMaxDepth) unit_0040(c, 385u, depth + 1u); else { c.pc = 0x002039A0u; return; } if (c.pc != 0x002043B4u) [[unlikely]] return; }
L_002043B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204850; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 1;
L_002043C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002043DC; }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_002043E4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002043DC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002043E4:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[25]));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    c.f[23] = 0u;
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = ld32((c.r[16].w[0]));  if (t) { goto L_00204458; } }
    c.facc = fp::add(c.f[23], c.f[24]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.f[23] = fp::sub(c.f[20], c.f[24]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    set32(c.r[6], c.r[29].w[0] + 248u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204434u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[23]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204434u) [[unlikely]] return; }
L_00204434:
    c.f[12] = fp::add(c.f[22], c.f[23]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[17] = ld32((c.r[29].w[0] + 248u));
    c.f[14] = c.f[24];
    c.f[13] = c.f[20];
    c.f[16] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204454u); c.f[15] = c.f[21];  if (depth < kMaxDepth) unit_0040(c, 385u, depth + 1u); else { c.pc = 0x002039A0u; return; } if (c.pc != 0x00204454u) [[unlikely]] return; }
L_00204454:
    c.f[24] = ld32((c.r[16].w[0]));
    c.budget -= 1;
L_00204458:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = fp::sub(c.f[25], c.f[24]);
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 248u);
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[24]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020448Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[20]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020448Cu) [[unlikely]] return; }
L_0020448C:
    c.f[0] = fp::add(c.f[22], c.f[20]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = fp::add(c.f[23], c.f[0]);
    c.f[17] = ld32((c.r[29].w[0] + 248u));
    c.f[14] = c.f[24];
    c.f[15] = c.f[21];
    c.f[13] = c.f[25];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002044B0u); c.f[16] = c.f[25];  if (depth < kMaxDepth) unit_0040(c, 385u, depth + 1u); else { c.pc = 0x002039A0u; return; } if (c.pc != 0x002044B0u) [[unlikely]] return; }
L_002044B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204850; } }
    c.f[12] = c.f[25];
    c.budget -= 1;
L_002044BC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 244u);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002044D8u); st32((c.r[29].w[0] + 244u), 0u);  if (depth < kMaxDepth) unit_0052(c, 65u, depth + 1u); else { c.pc = 0x00248800u; return; } if (c.pc != 0x002044D8u) [[unlikely]] return; }
L_002044D8:
    c.f[24] = ld32((c.r[17].w[0] + 72u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[24]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_002044F8; } }
    st32((c.r[17].w[0] + 72u), c.f[25]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00204850; } }
L_002044F8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 76u));
    c.r[18].d[0] = c.r[22].d[0] & 255ull;
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 72u), c.f[25]);
    set32(c.r[3], c.r[16].w[0] - 1u);
    st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);  if (t) { goto L_0020483C; } }
L_00204524:
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[25]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00204534; } }
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00204534:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 224u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_002045CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00204574; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0020454C:
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[24]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00204574; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[3].d[0] + 0ull;  goto L_00204658; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00204574:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020454Cu | kUnwind; return; } goto L_0020454C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204634; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002045CC; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00204594:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[24]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_002045CC; }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[4].w[0] + 4u));  goto L_002045C0; }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[25]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002045C8; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 1;
L_002045C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002045D8; } }
L_002045C8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002045CC:
    c.r[4].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]); c.r[4].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00204594u | kUnwind; return; } goto L_00204594; }
L_002045D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_00204634; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00204850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00204618; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002045F4:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[25]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00204618; }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00204624; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00204618:
    c.r[4].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]); c.r[4].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x002045F4u | kUnwind; return; } goto L_002045F4; }
L_00204624:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_00204634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204850; } }
L_00204634:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204658; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00204644:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00204664; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00204658:
    c.r[2].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { mmi::mult(c, 0, c.r[4].w[0], c.r[18].w[0]); c.r[2].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00204644u | kUnwind; return; } goto L_00204644; }
L_00204664:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[16].d[0]) { mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]); c.r[3].d[0] = c.lo.d[0];  goto L_00204674; }
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 2;
L_00204674:
    mmi::mult(c, 1, c.r[4].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[23], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_00204738; } }
    c.f[20] = ld32((c.r[23].w[0]));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[24]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[21] = ld32((c.r[2].w[0]));  goto L_002046E0; }
    c.f[21] = ld32((c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.f[0] = 0u;
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.f[2] = fp::sub(c.f[20], c.f[21]);
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.f[23] = ld32((c.r[2].w[0]));
    c.facc = fp::add(c.f[0], c.f[21]);
    c.f[22] = c.f[24];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002046D4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002046D4u) [[unlikely]] return; }
L_002046D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_002047BC; } }
    c.f[21] = ld32((c.r[2].w[0]));
    c.budget -= 1;
L_002046E0:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[25]));
    c.f[22] = ld32((c.r[19].w[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[23] = c.f[25];  if (t) { goto L_002046F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[20].w[0])));  if (t) { goto L_00204700; } }
L_002046F8:
    c.f[20] = c.f[25];
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 2;
L_00204700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = fp::sub(c.f[20], c.f[21]);
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[21]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204730u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204730u) [[unlikely]] return; }
L_00204730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002047B8; } }
L_00204738:
    c.f[20] = ld32((c.r[23].w[0]));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[25]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_00204794; }
    c.f[21] = ld32((c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.f[0] = 0u;
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.f[2] = fp::sub(c.f[20], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[21]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));
    c.f[23] = c.f[20];
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204788u); c.f[22] = c.f[24];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204788u) [[unlikely]] return; }
L_00204788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002047B8; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_00204794:
    c.f[21] = ld32((c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.f[25];
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.f[23] = c.f[25];
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002047B8u); c.f[22] = c.f[24];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002047B8u) [[unlikely]] return; }
L_002047B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_002047BC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.f[2] = ld32((c.r[2].w[0] + 276u));  if (t) { goto L_002047D4; } }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 4;
L_002047D4:
    c.f[0] = fp::add(c.f[2], c.f[25]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = fp::sub(c.f[0], c.f[24]);
    c.f[17] = ld32((c.r[29].w[0] + 240u));
    c.f[14] = c.f[22];
    c.f[15] = c.f[21];
    c.f[16] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002047F8u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_0040(c, 385u, depth + 1u); else { c.pc = 0x002039A0u; return; } if (c.pc != 0x002047F8u) [[unlikely]] return; }
L_002047F8:
    c.f[0] = ld32((c.r[23].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[25]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00204838; }
    c.f[12] = c.f[23];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 244u);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204828u); c.f[24] = c.f[23];  if (depth < kMaxDepth) unit_0052(c, 65u, depth + 1u); else { c.pc = 0x00248800u; return; } if (c.pc != 0x00204828u) [[unlikely]] return; }
L_00204828:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020483C; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00204838:
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020483C:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 208u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204524u | kUnwind; return; } goto L_00204524; } }
L_00204850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_00204854:
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002048A0:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 3;
    { st32((c.r[4].w[0] + 72u), c.f[0]);  [[clang::musttail]] return unit_0087(c, 241u, depth); }
L_002048B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002048D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002048E0; } }
L_002048D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002048E0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002048E0u) [[unlikely]] return; }
L_002048E0:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002048F0u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0044(c, 330u, depth + 1u); else { c.pc = 0x002125F0u; return; } if (c.pc != 0x002048F0u) [[unlikely]] return; }
L_002048F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020494C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020491Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020491Cu) [[unlikely]] return; }
L_0020491C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020492Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020492Cu) [[unlikely]] return; }
L_0020492C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020494C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020494Cu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0020494Cu) [[unlikely]] return; }
L_0020494C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 12800u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 64u), 0u);  if (t) { goto L_0020497C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020496Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020496Cu) [[unlikely]] return; }
L_0020496C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020497Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020497Cu) [[unlikely]] return; }
L_0020497C:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[18].w[0] + 68u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 72u), c.f[0]);
    st8((c.r[18].w[0] + 76u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    st32((c.r[18].w[0] + 88u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002049C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11968u);  c.pc = t; return; }
L_002049D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002049ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x002049ECu) [[unlikely]] return; }
L_002049EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002049F8u); set32(c.r[4], ld32((c.r[2].w[0] - 11968u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002049F8u) [[unlikely]] return; }
L_002049F8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204A0Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00204A0Cu) [[unlikely]] return; }
L_00204A0C:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204A1Cu); set32(c.r[4], c.r[4].w[0] - 11952u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x00204A1Cu) [[unlikely]] return; }
L_00204A1C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204A30u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00204A30u) [[unlikely]] return; }
L_00204A30:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00204A70; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00204A68; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00204A60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_00204A78; } }
L_00204A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 11932u);  if (t) { goto L_00204A7C; } }
L_00204A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 11925u);  if (t) { goto L_00204A7C; } }
L_00204A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 11918u);  if (t) { goto L_00204A7C; } }
L_00204A78:
    set32(c.r[5], c.r[5].w[0] - 11911u);
    c.budget -= 1;
L_00204A7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204A88u); set32(c.r[4], c.r[4].w[0] - 11903u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x00204A88u) [[unlikely]] return; }
L_00204A88:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204A9Cu); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00204A9Cu) [[unlikely]] return; }
L_00204A9C:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204AACu); set32(c.r[4], c.r[4].w[0] - 11883u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x00204AACu) [[unlikely]] return; }
L_00204AAC:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204AC0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00204AC0u) [[unlikely]] return; }
L_00204AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00204AE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204B04u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x00204B04u) [[unlikely]] return; }
L_00204B04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_00204B14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204BF0; } }
L_00204B14:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00204BF0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00204B50; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00204B50; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 20u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 20u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_00204B5C; }
L_00204B50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00204BF0; } }
L_00204B5C:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13952u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00204B9C; } }
L_00204B74:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204B8Cu); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204B8Cu) [[unlikely]] return; }
L_00204B8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00204B9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204BF0; } }
L_00204B9C:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[19].w[0] + 20u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00204B74u | kUnwind; return; } goto L_00204B74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00204BDC; } }
L_00204BB4:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204BCCu); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204BCCu) [[unlikely]] return; }
L_00204BCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00204BDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00204BF0; } }
L_00204BDC:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[19].w[0] + 36u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00204BB4u | kUnwind; return; } goto L_00204BB4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00204BF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00204C10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204C30u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x00204C30u) [[unlikely]] return; }
L_00204C30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204C3Cu); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00204C3Cu) [[unlikely]] return; }
L_00204C3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00204C80; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204C54u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0041(c, 95u, depth + 1u); else { c.pc = 0x00205090u; return; } if (c.pc != 0x00204C54u) [[unlikely]] return; }
L_00204C54:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14096u);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204C7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204C7Cu) [[unlikely]] return; }
L_00204C7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00204C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204C88u); set32(c.r[5], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00204C88u) [[unlikely]] return; }
L_00204C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00204CD0; } }
L_00204C90:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00204CD0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204CA4u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0041(c, 95u, depth + 1u); else { c.pc = 0x00205090u; return; } if (c.pc != 0x00204CA4u) [[unlikely]] return; }
L_00204CA4:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14096u);
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204CCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204CCCu) [[unlikely]] return; }
L_00204CCC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00204CD0:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00204C90u | kUnwind; return; } goto L_00204C90; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00204D00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_00204D10:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_00204D20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204D48u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x00204D48u) [[unlikely]] return; }
L_00204D48:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204D54u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00204D54u) [[unlikely]] return; }
L_00204D54:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00204E40; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204D6Cu); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0041(c, 96u, depth + 1u); else { c.pc = 0x002050A0u; return; } if (c.pc != 0x00204D6Cu) [[unlikely]] return; }
L_00204D6C:
    set32(c.r[7], ld32((c.r[29].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14960u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13232u);
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[17].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204DA0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204DA0u) [[unlikely]] return; }
L_00204DA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + 14816u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204DCCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204DCCu) [[unlikely]] return; }
L_00204DCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 104u)));  if (t) { goto L_00204DFC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204DFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204DFCu) [[unlikely]] return; }
L_00204DFC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_00204E10; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_00204E20; }
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_00204E10:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00204E3C; } }
L_00204E20:
    set32(c.r[2], c.r[2].w[0] + 14960u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 7;
L_00204E3C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00204E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204E48u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00204E48u) [[unlikely]] return; }
L_00204E48:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00204F50; }
    set32(c.r[3], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 104ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 96u)));  goto L_00204E84; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204E80u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0041(c, 96u, depth + 1u); else { c.pc = 0x002050A0u; return; } if (c.pc != 0x00204E80u) [[unlikely]] return; }
L_00204E80:
    set32(c.r[7], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_00204E84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14990u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13352u);
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[17].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204EB4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204EB4u) [[unlikely]] return; }
L_00204EB4:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + 14936u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204EE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204EE0u) [[unlikely]] return; }
L_00204EE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_00204F10; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00204F10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00204F10u) [[unlikely]] return; }
L_00204F10:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), 0u);  goto L_00204F24; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_00204F30; }
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_00204F24:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00204F4C; } }
L_00204F30:
    set32(c.r[3], c.r[3].w[0] + 14990u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    c.budget -= 7;
L_00204F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00204F50:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00204F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 40u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204F88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00204F88u) [[unlikely]] return; }
L_00204F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00204FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00204F98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x00204F98u) [[unlikely]] return; }
L_00204F98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12608u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 9;
L_00204FBC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00204FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00205078; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12608u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_00205028; }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00205024u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00205024u) [[unlikely]] return; }
L_00205024:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00205028:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00205054; }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00205050u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00205050u) [[unlikely]] return; }
L_00205050:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00205054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020505Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0020505Cu) [[unlikely]] return; }
L_0020505C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020507C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205078u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00205078u) [[unlikely]] return; }
L_00205078:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020507C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205090:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_002050B0; }
L_002050A0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_00205110; }
L_002050B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002050F0u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002050F0u) [[unlikely]] return; }
L_002050F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00205144u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00205144u) [[unlikely]] return; }
L_00205144:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00205170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002051CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12528u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002051B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002051B0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x002051B0u) [[unlikely]] return; }
L_002051B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002051D0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002051CCu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002051CCu) [[unlikely]] return; }
L_002051CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002051D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002051F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11832u);  c.pc = t; return; }
L_00205200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205214u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x00205214u) [[unlikely]] return; }
L_00205214:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205220u); set32(c.r[4], ld32((c.r[2].w[0] - 11832u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00205220u) [[unlikely]] return; }
L_00205220:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205234u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00205234u) [[unlikely]] return; }
L_00205234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205250:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_00205260:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_00205270:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00205280:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_00205290:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_002052A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002052B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002052B8u) [[unlikely]] return; }
L_002052B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002052D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002052C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x002052C8u) [[unlikely]] return; }
L_002052C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12528u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002052D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002052F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205318u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00205318u) [[unlikely]] return; }
L_00205318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00205334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205328u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00205328u) [[unlikely]] return; }
L_00205328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12528u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00205334:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205344u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x00205344u) [[unlikely]] return; }
L_00205344:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00205360:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 32u), c.f[12]);  c.pc = t; return; }
L_00205370:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00205380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020539Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x0020539Cu) [[unlikely]] return; }
L_0020539C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_002053CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00205420; } }
L_002053AC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_002053CC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002053CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002053D8; } }
L_002053CC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002053ACu | kUnwind; return; } goto L_002053AC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002053D8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002053E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00205420; } }
L_002053E8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002053F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002053F4u) [[unlikely]] return; }
L_002053F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 12224u);  if (t) { goto L_00205410; } }
L_00205400:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00205410; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020541C; } }
L_00205410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205400u | kUnwind; return; } goto L_00205400; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020541C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00205420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020549C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12336u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00205480; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205480u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00205480u) [[unlikely]] return; }
L_00205480:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002054A0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020549Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020549Cu) [[unlikely]] return; }
L_0020549C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002054A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002054C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11792u);  c.pc = t; return; }
L_002054D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002054E4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x002054E4u) [[unlikely]] return; }
L_002054E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002054F0u); set32(c.r[4], ld32((c.r[2].w[0] - 11792u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002054F0u) [[unlikely]] return; }
L_002054F0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205504u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00205504u) [[unlikely]] return; }
L_00205504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205520:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_00205530:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_00205540:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00205550:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_00205560:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_00205570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205588u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00205588u) [[unlikely]] return; }
L_00205588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002055A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205598u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00205598u) [[unlikely]] return; }
L_00205598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12336u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002055A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002055C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002055E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002055E8u) [[unlikely]] return; }
L_002055E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00205604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002055F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x002055F8u) [[unlikely]] return; }
L_002055F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12336u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00205604:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205614u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x00205614u) [[unlikely]] return; }
L_00205614:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00205630:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 36u), c.f[12]);  c.pc = t; return; }
L_00205640:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00205650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020566Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x0020566Cu) [[unlikely]] return; }
L_0020566C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_0020569C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002056F0; } }
L_0020567C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_0020569C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020569C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002056A8; } }
L_0020569C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020567Cu | kUnwind; return; } goto L_0020567C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002056A8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002056B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002056F0; } }
L_002056B8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002056C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002056C4u) [[unlikely]] return; }
L_002056C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 12224u);  if (t) { goto L_002056E0; } }
L_002056D0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002056E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002056EC; } }
L_002056E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002056D0u | kUnwind; return; } goto L_002056D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002056EC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002056F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020576C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12144u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00205750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205750u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00205750u) [[unlikely]] return; }
L_00205750:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00205770; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020576Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020576Cu) [[unlikely]] return; }
L_0020576C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00205770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11744u);  c.pc = t; return; }
L_002057A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002057B4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x002057B4u) [[unlikely]] return; }
L_002057B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002057C0u); set32(c.r[4], ld32((c.r[2].w[0] - 11744u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002057C0u) [[unlikely]] return; }
L_002057C0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002057D4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002057D4u) [[unlikely]] return; }
L_002057D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002057F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_00205800:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_00205810:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00205820:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_00205830:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_00205840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205858u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00205858u) [[unlikely]] return; }
L_00205858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00205874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205868u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00205868u) [[unlikely]] return; }
L_00205868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12144u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00205874:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00205890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002058B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002058B8u) [[unlikely]] return; }
L_002058B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002058D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002058C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x002058C8u) [[unlikely]] return; }
L_002058C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12144u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002058D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002058E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x002058E4u) [[unlikely]] return; }
L_002058E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00205900:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 64u), c.f[12]);  c.pc = t; return; }
L_00205910:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00205920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020593Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x0020593Cu) [[unlikely]] return; }
L_0020593C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_0020596C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002059C0; } }
L_0020594C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_0020596C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020596C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00205978; } }
L_0020596C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020594Cu | kUnwind; return; } goto L_0020594C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205978:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00205988; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002059C0; } }
L_00205988:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00205994u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00205994u) [[unlikely]] return; }
L_00205994:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 12224u);  if (t) { goto L_002059B0; } }
L_002059A0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002059B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002059BC; } }
L_002059B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002059A0u | kUnwind; return; } goto L_002059A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002059BC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002059C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002059E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00205A3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11952u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00205A20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205A20u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00205A20u) [[unlikely]] return; }
L_00205A20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00205A40; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205A3Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00205A3Cu) [[unlikely]] return; }
L_00205A3C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00205A40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11696u);  c.pc = t; return; }
L_00205A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205A84u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x00205A84u) [[unlikely]] return; }
L_00205A84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205A90u); set32(c.r[4], ld32((c.r[2].w[0] - 11696u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00205A90u) [[unlikely]] return; }
L_00205A90:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205AA4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00205AA4u) [[unlikely]] return; }
L_00205AA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205AC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_00205AD0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_00205AE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00205AF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_00205B00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_00205B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205B28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00205B28u) [[unlikely]] return; }
L_00205B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00205B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205B38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00205B38u) [[unlikely]] return; }
L_00205B38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11952u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00205B44:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00205B60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205B88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00205B88u) [[unlikely]] return; }
L_00205B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00205BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205B98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00205B98u) [[unlikely]] return; }
L_00205B98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11952u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00205BA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205BB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x00205BB4u) [[unlikely]] return; }
L_00205BB4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00205BD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 72u), c.f[12]);  c.pc = t; return; }
L_00205BE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00205BF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205C0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x00205C0Cu) [[unlikely]] return; }
L_00205C0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_00205C3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00205C90; } }
L_00205C1C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_00205C3C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00205C3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00205C48; } }
L_00205C3C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00205C1Cu | kUnwind; return; } goto L_00205C1C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205C48:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00205C58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00205C90; } }
L_00205C58:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00205C64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00205C64u) [[unlikely]] return; }
L_00205C64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 12224u);  if (t) { goto L_00205C80; } }
L_00205C70:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00205C80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00205C8C; } }
L_00205C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205C70u | kUnwind; return; } goto L_00205C70; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205C8C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00205C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00205D0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11760u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00205CF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205CF0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00205CF0u) [[unlikely]] return; }
L_00205CF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00205D10; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205D0Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00205D0Cu) [[unlikely]] return; }
L_00205D0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00205D10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11648u);  c.pc = t; return; }
L_00205D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205D54u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x00205D54u) [[unlikely]] return; }
L_00205D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205D60u); set32(c.r[4], ld32((c.r[2].w[0] - 11648u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00205D60u) [[unlikely]] return; }
L_00205D60:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205D74u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00205D74u) [[unlikely]] return; }
L_00205D74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205D90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_00205DA0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_00205DB0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00205DC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_00205DD0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_00205DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205DF8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00205DF8u) [[unlikely]] return; }
L_00205DF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00205E14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205E08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00205E08u) [[unlikely]] return; }
L_00205E08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11760u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00205E14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00205E30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205E58u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00205E58u) [[unlikely]] return; }
L_00205E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00205E74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205E68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00205E68u) [[unlikely]] return; }
L_00205E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11760u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00205E74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205E84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x00205E84u) [[unlikely]] return; }
L_00205E84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00205EA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 40u), c.f[12]);  c.pc = t; return; }
L_00205EB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00205EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205EDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x00205EDCu) [[unlikely]] return; }
L_00205EDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_00205F0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00205F60; } }
L_00205EEC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_00205F0C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00205F0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00205F18; } }
L_00205F0C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00205EECu | kUnwind; return; } goto L_00205EEC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205F18:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00205F28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00205F60; } }
L_00205F28:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00205F34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00205F34u) [[unlikely]] return; }
L_00205F34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 12224u);  if (t) { goto L_00205F50; } }
L_00205F40:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00205F50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00205F5C; } }
L_00205F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00205F40u | kUnwind; return; } goto L_00205F40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00205F5C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00205F60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00205F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00205FDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11568u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00205FC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205FC0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00205FC0u) [[unlikely]] return; }
L_00205FC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00205FE0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00205FDCu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00205FDCu) [[unlikely]] return; }
L_00205FDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00205FE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11600u);  c.pc = t; return; }
L_00206010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206024u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x00206024u) [[unlikely]] return; }
L_00206024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206030u); set32(c.r[4], ld32((c.r[2].w[0] - 11600u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00206030u) [[unlikely]] return; }
L_00206030:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206044u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00206044u) [[unlikely]] return; }
L_00206044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206060:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_00206070:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_00206080:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00206090:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_002060A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_002060B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002060C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002060C8u) [[unlikely]] return; }
L_002060C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002060E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002060D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x002060D8u) [[unlikely]] return; }
L_002060D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11568u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002060E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00206100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206128u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00206128u) [[unlikely]] return; }
L_00206128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00206144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206138u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00206138u) [[unlikely]] return; }
L_00206138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11568u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00206144:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206154u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x00206154u) [[unlikely]] return; }
L_00206154:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00206170:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 44u), c.f[12]);  c.pc = t; return; }
L_00206180:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00206190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002061ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x002061ACu) [[unlikely]] return; }
L_002061AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_002061DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00206230; } }
L_002061BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_002061DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002061DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002061E8; } }
L_002061DC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002061BCu | kUnwind; return; } goto L_002061BC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002061E8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002061F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00206230; } }
L_002061F8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00206204u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00206204u) [[unlikely]] return; }
L_00206204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 12224u);  if (t) { goto L_00206220; } }
L_00206210:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00206220; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020622C; } }
L_00206220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206210u | kUnwind; return; } goto L_00206210; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020622C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00206230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002062AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11376u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00206290; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206290u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00206290u) [[unlikely]] return; }
L_00206290:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002062B0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002062ACu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002062ACu) [[unlikely]] return; }
L_002062AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002062B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002062D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11552u);  c.pc = t; return; }
L_002062E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002062F4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x002062F4u) [[unlikely]] return; }
L_002062F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206300u); set32(c.r[4], ld32((c.r[2].w[0] - 11552u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00206300u) [[unlikely]] return; }
L_00206300:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206314u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00206314u) [[unlikely]] return; }
    goto L_00206314;
L_00206310:
    set32(c.r[6], c.r[29].w[0] + 44u);
    c.budget -= 1;
L_00206314:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206330:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_00206340:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_00206350:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00206360:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_00206370:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_00206380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206398u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00206398u) [[unlikely]] return; }
L_00206398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002063B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002063A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x002063A8u) [[unlikely]] return; }
L_002063A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11376u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002063B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002063D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002063F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002063F8u) [[unlikely]] return; }
L_002063F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00206414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206408u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00206408u) [[unlikely]] return; }
L_00206408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11376u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00206414:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206424u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x00206424u) [[unlikely]] return; }
L_00206424:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00206440:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 24u), c.f[12]);  c.pc = t; return; }
L_00206450:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00206460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020647Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x0020647Cu) [[unlikely]] return; }
L_0020647C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_002064AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00206500; } }
L_0020648C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_002064AC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002064AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002064B8; } }
L_002064AC:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020648Cu | kUnwind; return; } goto L_0020648C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002064B8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002064C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00206500; } }
L_002064C8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002064D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002064D4u) [[unlikely]] return; }
L_002064D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 12224u);  if (t) { goto L_002064F0; } }
L_002064E0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002064F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002064FC; } }
L_002064F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002064E0u | kUnwind; return; } goto L_002064E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002064FC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00206500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020657C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11184u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00206560; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206560u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00206560u) [[unlikely]] return; }
L_00206560:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00206580; }
L_00206570:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020657Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020657Cu) [[unlikely]] return; }
L_0020657C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00206580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002065A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11512u);  c.pc = t; return; }
L_002065B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002065C4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x002065C4u) [[unlikely]] return; }
L_002065C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002065D0u); set32(c.r[4], ld32((c.r[2].w[0] - 11512u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002065D0u) [[unlikely]] return; }
L_002065D0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002065E4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002065E4u) [[unlikely]] return; }
L_002065E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206600:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_00206610:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_00206620:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00206630:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_00206640:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_00206650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206668u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00206668u) [[unlikely]] return; }
L_00206668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00206684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00206678u) [[unlikely]] return; }
L_00206678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11184u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00206684:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002066A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002066C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002066C8u) [[unlikely]] return; }
L_002066C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002066E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002066D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x002066D8u) [[unlikely]] return; }
L_002066D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11184u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002066E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002066F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x002066F4u) [[unlikely]] return; }
L_002066F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00206710:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 32u), c.f[12]);  c.pc = t; return; }
L_00206720:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00206730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020674Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x0020674Cu) [[unlikely]] return; }
L_0020674C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_0020677C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002067D0; } }
L_0020675C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_0020677C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020677C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00206788; } }
L_0020677C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020675Cu | kUnwind; return; } goto L_0020675C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00206788:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00206798; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002067D0; } }
L_00206798:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002067A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002067A4u) [[unlikely]] return; }
L_002067A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 11376u);  if (t) { goto L_002067C0; } }
L_002067B0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002067C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002067CC; } }
L_002067C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002067B0u | kUnwind; return; } goto L_002067B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002067CC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002067D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002067F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020684C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10992u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00206830; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206830u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00206830u) [[unlikely]] return; }
L_00206830:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00206850; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020684Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020684Cu) [[unlikely]] return; }
L_0020684C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00206850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11472u);  c.pc = t; return; }
L_00206880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206894u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x00206894u) [[unlikely]] return; }
L_00206894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002068A0u); set32(c.r[4], ld32((c.r[2].w[0] - 11472u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002068A0u) [[unlikely]] return; }
L_002068A0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002068B4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002068B4u) [[unlikely]] return; }
L_002068B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002068D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_002068E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_002068F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00206900:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_00206910:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_00206920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206938u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00206938u) [[unlikely]] return; }
L_00206938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00206954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206948u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00206948u) [[unlikely]] return; }
L_00206948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00206954:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00206970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206998u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00206998u) [[unlikely]] return; }
L_00206998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002069B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002069A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x002069A8u) [[unlikely]] return; }
L_002069A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002069B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002069C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x002069C4u) [[unlikely]] return; }
L_002069C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002069E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 28u), c.f[12]);  c.pc = t; return; }
L_002069F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00206A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206A1Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x00206A1Cu) [[unlikely]] return; }
L_00206A1C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_00206A4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00206AA0; } }
L_00206A2C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_00206A4C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00206A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00206A58; } }
L_00206A4C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00206A2Cu | kUnwind; return; } goto L_00206A2C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00206A58:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00206A68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00206AA0; } }
L_00206A68:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00206A74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00206A74u) [[unlikely]] return; }
L_00206A74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 11376u);  if (t) { goto L_00206A90; } }
L_00206A80:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00206A90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00206A9C; } }
L_00206A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206A80u | kUnwind; return; } goto L_00206A80; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00206A9C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00206AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00206B1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10800u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00206B00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206B00u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 313u, depth + 1u); else { c.pc = 0x00212380u; return; } if (c.pc != 0x00206B00u) [[unlikely]] return; }
L_00206B00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00206B20; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206B1Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00206B1Cu) [[unlikely]] return; }
L_00206B1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00206B20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11424u);  c.pc = t; return; }
L_00206B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206B64u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 338u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x00206B64u) [[unlikely]] return; }
L_00206B64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206B70u); set32(c.r[4], ld32((c.r[2].w[0] - 11424u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00206B70u) [[unlikely]] return; }
L_00206B70:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206B84u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00206B84u) [[unlikely]] return; }
L_00206B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206BA0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 342u, depth); }
L_00206BB0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 343u, depth); }
L_00206BC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 344u, depth); }
L_00206BD0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 345u, depth); }
L_00206BE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 355u, depth); }
L_00206BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206C08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00206C08u) [[unlikely]] return; }
L_00206C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00206C24; } }
    goto L_00206C10;
L_00206C0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00206C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206C18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00206C18u) [[unlikely]] return; }
L_00206C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10800u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00206C24:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00206C40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206C68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00206C68u) [[unlikely]] return; }
L_00206C68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00206C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206C78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 377u, depth + 1u); else { c.pc = 0x00212B70u; return; } if (c.pc != 0x00206C78u) [[unlikely]] return; }
L_00206C78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10800u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00206C84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206C94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 358u, depth + 1u); else { c.pc = 0x002128B0u; return; } if (c.pc != 0x00206C94u) [[unlikely]] return; }
L_00206C94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00206CB0:
    c.f[0] = fp::mul(c.f[12], c.f[12]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    st32((c.r[3].w[0] + 40u), c.f[12]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 44u), c.f[0]);  c.pc = t; return; }
L_00206CD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.f[0]);  c.pc = t; return; }
L_00206CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206CFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 304u, depth + 1u); else { c.pc = 0x00212200u; return; } if (c.pc != 0x00206CFCu) [[unlikely]] return; }
L_00206CFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 264u)));  goto L_00206D2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00206D80; } }
L_00206D0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_00206D2C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00206D2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00206D38; } }
L_00206D2C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00206D0Cu | kUnwind; return; } goto L_00206D0C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00206D38:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00206D48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00206D80; } }
L_00206D48:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00206D54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00206D54u) [[unlikely]] return; }
L_00206D54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 11376u);  if (t) { goto L_00206D70; } }
L_00206D60:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00206D70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00206D7C; } }
L_00206D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00206D60u | kUnwind; return; } goto L_00206D60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00206D7C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00206D80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11376u);  c.pc = t; return; }
L_00206DB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206DCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x00206DCCu) [[unlikely]] return; }
L_00206DCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206DD8u); set32(c.r[4], ld32((c.r[2].w[0] - 11376u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00206DD8u) [[unlikely]] return; }
L_00206DD8:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206DECu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00206DECu) [[unlikely]] return; }
L_00206DEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00206E00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00206E04; } }
L_00206E00:
    set32(c.r[5], c.r[5].w[0] - 11347u);
    c.budget -= 1;
L_00206E04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206E10u); set32(c.r[4], c.r[4].w[0] - 11360u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321970u; return; } if (c.pc != 0x00206E10u) [[unlikely]] return; }
L_00206E10:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206E24u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00206E24u) [[unlikely]] return; }
L_00206E24:
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206E34u); set32(c.r[4], c.r[4].w[0] - 11342u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00206E34u) [[unlikely]] return; }
L_00206E34:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206E48u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00206E48u) [[unlikely]] return; }
L_00206E48:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206E58u); set32(c.r[4], c.r[4].w[0] - 11332u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00206E58u) [[unlikely]] return; }
L_00206E58:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206E6Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00206E6Cu) [[unlikely]] return; }
L_00206E6C:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206E7Cu); set32(c.r[4], c.r[4].w[0] - 11320u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x00206E7Cu) [[unlikely]] return; }
L_00206E7C:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206E90u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00206E90u) [[unlikely]] return; }
L_00206E90:
    c.f[12] = ld32((c.r[17].w[0] + 40u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206EA0u); set32(c.r[4], c.r[4].w[0] - 11303u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00206EA0u) [[unlikely]] return; }
L_00206EA0:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206EB4u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00206EB4u) [[unlikely]] return; }
L_00206EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00206ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206EECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x00210FC0u; return; } if (c.pc != 0x00206EECu) [[unlikely]] return; }
L_00206EEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_00206EFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00206FAC; } }
L_00206EFC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00206F10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00206FAC; }
L_00206F10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00206F24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00206F50; } }
L_00206F24:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 28u));  goto L_00206F60; }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00206F5C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00206F48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00206F48u) [[unlikely]] return; }
L_00206F48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00206F5C; } }
L_00206F50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00206FAC; } }
L_00206F5C:
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 1;
L_00206F60:
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_00206FAC; }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00206FA8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 36u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00206FA8; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_00206FAC; }
L_00206FA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00206FAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00206FC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206FDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 152u, depth + 1u); else { c.pc = 0x00211040u; return; } if (c.pc != 0x00206FDCu) [[unlikely]] return; }
L_00206FDC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00206FF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00206FF0u) [[unlikely]] return; }
L_00206FF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00206FFCu); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00206FFCu) [[unlikely]] return; }
L_00206FFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207008u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00207008u) [[unlikely]] return; }
L_00207008:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020701Cu); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x0020701Cu) [[unlikely]] return; }
L_0020701C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207028u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00207028u) [[unlikely]] return; }
L_00207028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00207040:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0044(c, 158u, depth); }
L_00207050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020706Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 161u, depth + 1u); else { c.pc = 0x00211110u; return; } if (c.pc != 0x0020706Cu) [[unlikely]] return; }
L_0020706C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207074u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x00207074u) [[unlikely]] return; }
L_00207074:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00207090:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002070ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 164u, depth + 1u); else { c.pc = 0x00211140u; return; } if (c.pc != 0x002070ACu) [[unlikely]] return; }
L_002070AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002070B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002070B4u) [[unlikely]] return; }
L_002070B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002070C0u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002070C0u) [[unlikely]] return; }
L_002070C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002070CCu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002070CCu) [[unlikely]] return; }
L_002070CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002070D8u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002070D8u) [[unlikely]] return; }
L_002070D8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 40u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002070F0u); st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002070F0u) [[unlikely]] return; }
L_002070F0:
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00207110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020712Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 171u, depth + 1u); else { c.pc = 0x002111D0u; return; } if (c.pc != 0x0020712Cu) [[unlikely]] return; }
L_0020712C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_00207148; } }
    breakpoint(c, 0x00207144u);
    c.budget -= 1;
L_00207148:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0020716C; } }
L_0020715C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0020716C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00207174; } }
L_0020716C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020715Cu | kUnwind; return; } goto L_0020715C; }
L_00207174:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002071CC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_0020718C; } }
    breakpoint(c, 0x00207188u);
    c.budget -= 1;
L_0020718C:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_002071B4; } }
L_002071A0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_002071B4; }
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002071C0; } }
L_002071B4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002071A0u | kUnwind; return; } goto L_002071A0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002071C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[7].w[0] + 24u), c.r[4].w[0]);  goto L_002071CC; }
    st32((c.r[7].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 1;
L_002071CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002071E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002071FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x002071FCu) [[unlikely]] return; }
L_002071FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00207240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207254u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x00207254u) [[unlikely]] return; }
L_00207254:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10608u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00207290:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != 0ull; c.f[20] = c.f[14];  if (t) { goto L_002072E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002072E8; } }
L_002072E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002072E8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002072E8u) [[unlikely]] return; }
L_002072E8:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002072FCu); set32(c.r[6], 0u + 4000u);  if (depth < kMaxDepth) unit_0044(c, 193u, depth + 1u); else { c.pc = 0x002114E0u; return; } if (c.pc != 0x002072FCu) [[unlikely]] return; }
L_002072FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00207358; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207328u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00207328u) [[unlikely]] return; }
L_00207328:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207338u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00207338u) [[unlikely]] return; }
L_00207338:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00207358; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207358u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00207358u) [[unlikely]] return; }
L_00207358:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10608u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.f[0] = fp::mul(c.f[20], c.f[20]);
    st32((c.r[20].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 28u), c.f[22]);
    st32((c.r[20].w[0] + 32u), c.f[21]);
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[20].w[0] + 40u), c.f[20]);
    st32((c.r[20].w[0] + 44u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002073B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020740C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 10496u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002073F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002073F0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x002073F0u) [[unlikely]] return; }
L_002073F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00207410; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020740Cu); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020740Cu) [[unlikely]] return; }
L_0020740C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00207410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00207430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 11264u);  c.pc = t; return; }
L_00207440:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020745Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00206DB0u; return; } if (c.pc != 0x0020745Cu) [[unlikely]] return; }
L_0020745C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207468u); set32(c.r[4], ld32((c.r[2].w[0] - 11264u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00207468u) [[unlikely]] return; }
L_00207468:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020747Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020747Cu) [[unlikely]] return; }
    goto L_0020747C;
L_00207478:
    set32(c.r[6], c.r[29].w[0] + 60u);
    c.budget -= 1;
L_0020747C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020748Cu); set32(c.r[5], c.r[5].w[0] - 11248u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x0020748Cu) [[unlikely]] return; }
L_0020748C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002074A0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002074A0u) [[unlikely]] return; }
L_002074A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002074C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002074DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 388u, depth + 1u); else { c.pc = 0x00206ED0u; return; } if (c.pc != 0x002074DCu) [[unlikely]] return; }
L_002074DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[16].w[0] + 48u));  goto L_002074EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00207540; } }
L_002074EC:
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00207500; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00207500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00207520; } }
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00207520; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00207520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00207540; } }
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00207540; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00207540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00207560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020757Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 391u, depth + 1u); else { c.pc = 0x00206FC0u; return; } if (c.pc != 0x0020757Cu) [[unlikely]] return; }
L_0020757C:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207588u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x00207588u) [[unlikely]] return; }
L_00207588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002075A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00207040u | kUnwind; return; } goto L_00207040; }
L_002075B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00207050u | kUnwind; return; } goto L_00207050; }
L_002075C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002075DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 402u, depth + 1u); else { c.pc = 0x00207090u; return; } if (c.pc != 0x002075DCu) [[unlikely]] return; }
L_002075DC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002075E8u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x002075E8u) [[unlikely]] return; }
L_002075E8:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002075F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x002075F4u) [[unlikely]] return; }
L_002075F4:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207600u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x00207600u) [[unlikely]] return; }
L_00207600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207608u); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x00207608u) [[unlikely]] return; }
L_00207608:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207618u); set32(c.r[5], c.r[5].w[0] + 31024u);  if (depth < kMaxDepth) unit_003E(c, 271u, depth + 1u); else { c.pc = 0x001FA0A0u; return; } if (c.pc != 0x00207618u) [[unlikely]] return; }
L_00207618:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00207640; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207630u); set32(c.r[5], c.r[5].w[0] + 31056u);  if (depth < kMaxDepth) unit_0041(c, 450u, depth + 1u); else { c.pc = 0x00207650u; return; } if (c.pc != 0x00207630u) [[unlikely]] return; }
L_00207630:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020763Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003E(c, 271u, depth + 1u); else { c.pc = 0x001FA0A0u; return; } if (c.pc != 0x0020763Cu) [[unlikely]] return; }
L_0020763C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00207640:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00207650:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[2]);  c.pc = t; return; }
L_00207680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 72u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207694u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00207694u) [[unlikely]] return; }
L_00207694:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002076A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002076A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 486u, depth + 1u); else { c.pc = 0x00207FA0u; return; } if (c.pc != 0x002076A4u) [[unlikely]] return; }
L_002076A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002076A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002076B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002076CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 171u, depth + 1u); else { c.pc = 0x002111D0u; return; } if (c.pc != 0x002076CCu) [[unlikely]] return; }
L_002076CC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[16].w[0], c.r[6].w[0]);  if (t) { goto L_002076E8; } }
    breakpoint(c, 0x002076E4u);
    c.budget -= 1;
L_002076E8:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0020770C; } }
L_002076FC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0020770C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00207714; } }
L_0020770C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002076FCu | kUnwind; return; } goto L_002076FC; }
L_00207714:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0020776C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_0020772C; } }
    breakpoint(c, 0x00207728u);
    c.budget -= 1;
L_0020772C:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00207754; } }
L_00207740:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_00207754; }
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00207760; } }
L_00207754:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00207740u | kUnwind; return; } goto L_00207740; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00207760:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[7].w[0] + 24u), c.r[4].w[0]);  goto L_0020776C; }
    st32((c.r[7].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 1;
L_0020776C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00207780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020779Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 413u, depth + 1u); else { c.pc = 0x002071E0u; return; } if (c.pc != 0x0020779Cu) [[unlikely]] return; }
L_0020779C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002077A8u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x002077A8u) [[unlikely]] return; }
L_002077A8:
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002077B4u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x002077B4u) [[unlikely]] return; }
L_002077B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002077BCu); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x002077BCu) [[unlikely]] return; }
L_002077BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002077CCu); set32(c.r[5], c.r[5].w[0] + 31024u);  if (depth < kMaxDepth) unit_003E(c, 271u, depth + 1u); else { c.pc = 0x001FA0A0u; return; } if (c.pc != 0x002077CCu) [[unlikely]] return; }
L_002077CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002077F4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002077E4u); set32(c.r[5], c.r[5].w[0] + 31056u);  if (depth < kMaxDepth) unit_0041(c, 450u, depth + 1u); else { c.pc = 0x00207650u; return; } if (c.pc != 0x002077E4u) [[unlikely]] return; }
L_002077E4:
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002077F0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003E(c, 271u, depth + 1u); else { c.pc = 0x001FA0A0u; return; } if (c.pc != 0x002077F0u) [[unlikely]] return; }
L_002077F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002077F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00207810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 72u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207838u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00207838u) [[unlikely]] return; }
L_00207838:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00207854; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020784Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 486u, depth + 1u); else { c.pc = 0x00207FA0u; return; } if (c.pc != 0x0020784Cu) [[unlikely]] return; }
L_0020784C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00207854:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207860u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 458u, depth + 1u); else { c.pc = 0x00207780u; return; } if (c.pc != 0x00207860u) [[unlikely]] return; }
L_00207860:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00207880:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.f[20] = c.f[12];
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 140u));
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0] + 148u));
    st32((c.r[29].w[0] + 348u), c.f[2]);
    st32((c.r[29].w[0] + 352u), c.f[1]);
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 152u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[29].w[0] + 360u), c.f[2]);
    st32((c.r[29].w[0] + 364u), c.f[1]);
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = ld32((c.r[3].w[0] + 172u));
    st32((c.r[29].w[0] + 372u), c.f[2]);
    st32((c.r[29].w[0] + 376u), c.f[1]);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 256u), c.f[3]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 272u), c.f[3]);
    st32((c.r[29].w[0] + 276u), c.f[2]);
    st32((c.r[29].w[0] + 280u), c.f[1]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 288u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 296u), c.f[1]);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 316u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.budget -= 76;
L_002079B0:
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002079B0u | kUnwind; return; } goto L_002079B0; } }
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 220u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002079E4u); st32((c.r[29].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x002079E4u) [[unlikely]] return; }
L_002079E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002079ECu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x002079ECu) [[unlikely]] return; }
L_002079EC:
    set32(c.r[3], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207A6Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x00207A6Cu) [[unlikely]] return; }
L_00207A6C:
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207A7Cu); set32(c.r[6], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00207A7Cu) [[unlikely]] return; }
L_00207A7C:
    c.f[3] = ld32((c.r[29].w[0] + 384u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 388u));
    c.f[2] = ld32((c.r[29].w[0] + 392u));
    c.f[0] = c.r[3].w[0];
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[3], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[3] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    st32((c.r[29].w[0] + 388u), c.f[1]);
    st32((c.r[29].w[0] + 392u), c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 28u));
    c.f[4] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 388u), c.f[1]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 392u), c.f[0]);  if (t) { goto L_00207B4C; } }
L_00207AE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[5] = fp::sub(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[5]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[6].w[0] + 1u);  goto L_00207B48; }
    c.f[1] = ld32((c.r[29].w[0] + 384u));
    c.f[2] = ld32((c.r[29].w[0] + 388u));
    c.f[3] = ld32((c.r[29].w[0] + 392u));
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = fp::mul(c.f[5], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 16;
L_00207B48:
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00207B4C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 48u));
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00207AE0u | kUnwind; return; } goto L_00207AE0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_00207B80:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[25] = c.f[12];  if (t) { goto L_00207F64; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 48u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00207F68; }
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0] + 36u));  goto L_00207BF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00207F64; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 36u));
    c.budget -= 1;
L_00207BF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[3].w[0] + 112u));  goto L_00207C1C; }
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00207C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207C10u);  if (depth < kMaxDepth) unit_0041(c, 470u, depth + 1u); else { c.pc = 0x00207880u; return; } if (c.pc != 0x00207C10u) [[unlikely]] return; }
L_00207C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00207F64; } }
L_00207C18:
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    c.budget -= 1;
L_00207C1C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.f[2] = ld32((c.r[3].w[0] + 116u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 372u), c.f[2]);
    st32((c.r[29].w[0] + 376u), c.f[1]);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    st32((c.r[29].w[0] + 384u), c.f[2]);
    st32((c.r[29].w[0] + 388u), c.f[1]);
    st32((c.r[29].w[0] + 392u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 140u));
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    c.f[0] = ld32((c.r[3].w[0] + 148u));
    st32((c.r[29].w[0] + 396u), c.f[2]);
    st32((c.r[29].w[0] + 400u), c.f[1]);
    st32((c.r[29].w[0] + 404u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 152u));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[29].w[0] + 408u), c.f[2]);
    st32((c.r[29].w[0] + 412u), c.f[1]);
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 164u));
    c.f[1] = ld32((c.r[3].w[0] + 168u));
    c.f[0] = ld32((c.r[3].w[0] + 172u));
    st32((c.r[29].w[0] + 420u), c.f[2]);
    st32((c.r[29].w[0] + 424u), c.f[1]);
    st32((c.r[29].w[0] + 428u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 288u);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 304u), c.f[3]);
    st32((c.r[29].w[0] + 308u), c.f[2]);
    st32((c.r[29].w[0] + 312u), c.f[1]);
    st32((c.r[29].w[0] + 316u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 320u), c.f[3]);
    st32((c.r[29].w[0] + 324u), c.f[2]);
    st32((c.r[29].w[0] + 328u), c.f[1]);
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 336u), c.f[3]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 364u), c.f[0]);
    c.budget -= 66;
L_00207D24:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00207D24u | kUnwind; return; } goto L_00207D24; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 252u), 0u);
    st32((c.r[29].w[0] + 268u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207D58u); st32((c.r[29].w[0] + 284u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x00207D58u) [[unlikely]] return; }
L_00207D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207D60u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x00207D60u) [[unlikely]] return; }
L_00207D60:
    set32(c.r[3], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207DE0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x00207DE0u) [[unlikely]] return; }
L_00207DE0:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[24] = fp::mul(c.f[1], c.f[0]);
    c.f[21] = ld32((c.r[29].w[0] + 228u));
    c.f[22] = ld32((c.r[29].w[0] + 232u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207E0Cu); set32(c.r[6], c.r[19].w[0] + 60u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00207E0Cu) [[unlikely]] return; }
L_00207E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00207F50; } }
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 1;
L_00207E18:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = 0u;
    c.f[23] = fp::sub(c.f[25], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[23]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[17].w[0] + 1u);  goto L_00207F4C; }
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = fp::sub(c.f[2], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[21]);
    c.f[0] = fp::sub(c.f[0], c.f[22]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 36u));
    c.budget -= 17;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[19].w[0] + 32u));  goto L_00207EA0; }
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00207F48; } }
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 1;
L_00207EA0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[19].w[0] + 28u));  goto L_00207EC4; }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[13] = c.f[24];  goto L_00207EE8; }
    c.f[3] = ld32((c.r[19].w[0] + 28u));
    c.budget -= 1;
L_00207EC4:
    c.f[2] = ld32((c.r[29].w[0] + 432u));
    c.f[1] = ld32((c.r[29].w[0] + 436u));
    c.f[3] = fp::mul(c.f[3], c.f[23]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[3] = fp::mul(c.f[3], c.f[0]);  if (t) { goto L_00207F24; } }
    c.f[13] = c.f[24];
    c.budget -= 1;
L_00207EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207EF0u);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x00207EF0u) [[unlikely]] return; }
L_00207EF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[4] = fp::max(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 28u));
    c.f[2] = ld32((c.r[29].w[0] + 432u));
    c.f[1] = ld32((c.r[29].w[0] + 436u));
    c.f[3] = fp::mul(c.f[3], c.f[23]);
    fpu_div(c, 3u, c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 13;
L_00207F24:
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 9;
L_00207F48:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00207F4C:
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00207F50:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 48u));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00207E18u | kUnwind; return; } goto L_00207E18; }
L_00207F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00207F68:
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_00207FA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207FB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 415u, depth + 1u); else { c.pc = 0x00207240u; return; } if (c.pc != 0x00207FB4u) [[unlikely]] return; }
L_00207FB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 10496u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[2].w[0] + 31056u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[3].w[0] + 31060u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31064u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00207FFCu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x00207FFCu) [[unlikely]] return; }
L_00207FFC:
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0042(c, 1u, depth);
}

}
