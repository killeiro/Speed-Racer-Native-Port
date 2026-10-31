#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AB[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13,
    0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0,
    0, 21, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112,
    0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128,
    0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0,
    144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156,
    0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0,
    0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173,
    0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0,
    0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0,
    206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255,
    0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 0,
    0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0,
    0, 0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 299, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 313,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 318, 0, 0,
    319, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 326, 327, 0, 0, 0, 0, 0, 0,
    0, 0, 328, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 345, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0,
    389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 393, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0,
    0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411,
    0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416,
    0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0,
    422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0,
    0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441,
    0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445,
    0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0,
    0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 456, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0,
    459, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 475, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0,
    479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003AC000;
    case 2u: goto L_003AC004;
    case 3u: goto L_003AC010;
    case 4u: goto L_003AC028;
    case 5u: goto L_003AC07C;
    case 6u: goto L_003AC094;
    case 7u: goto L_003AC0A8;
    case 8u: goto L_003AC0B8;
    case 9u: goto L_003AC0C4;
    case 10u: goto L_003AC0D4;
    case 11u: goto L_003AC0E0;
    case 12u: goto L_003AC0F0;
    case 13u: goto L_003AC0FC;
    case 14u: goto L_003AC10C;
    case 15u: goto L_003AC118;
    case 16u: goto L_003AC128;
    case 17u: goto L_003AC134;
    case 18u: goto L_003AC158;
    case 19u: goto L_003AC168;
    case 20u: goto L_003AC178;
    case 21u: goto L_003AC184;
    case 22u: goto L_003AC190;
    case 23u: goto L_003AC19C;
    case 24u: goto L_003AC1A4;
    case 25u: goto L_003AC21C;
    case 26u: goto L_003AC228;
    case 27u: goto L_003AC23C;
    case 28u: goto L_003AC24C;
    case 29u: goto L_003AC25C;
    case 30u: goto L_003AC268;
    case 31u: goto L_003AC274;
    case 32u: goto L_003AC280;
    case 33u: goto L_003AC330;
    case 34u: goto L_003AC340;
    case 35u: goto L_003AC384;
    case 36u: goto L_003AC3A4;
    case 37u: goto L_003AC3B8;
    case 38u: goto L_003AC3C8;
    case 39u: goto L_003AC3F4;
    case 40u: goto L_003AC410;
    case 41u: goto L_003AC424;
    case 42u: goto L_003AC42C;
    case 43u: goto L_003AC434;
    case 44u: goto L_003AC448;
    case 45u: goto L_003AC454;
    case 46u: goto L_003AC45C;
    case 47u: goto L_003AC470;
    case 48u: goto L_003AC488;
    case 49u: goto L_003AC49C;
    case 50u: goto L_003AC4A4;
    case 51u: goto L_003AC4B4;
    case 52u: goto L_003AC4C0;
    case 53u: goto L_003AC4CC;
    case 54u: goto L_003AC4D8;
    case 55u: goto L_003AC4E4;
    case 56u: goto L_003AC530;
    case 57u: goto L_003AC564;
    case 58u: goto L_003AC5A8;
    case 59u: goto L_003AC5CC;
    case 60u: goto L_003AC5E0;
    case 61u: goto L_003AC5EC;
    case 62u: goto L_003AC5FC;
    case 63u: goto L_003AC624;
    case 64u: goto L_003AC678;
    case 65u: goto L_003AC6F4;
    case 66u: goto L_003AC700;
    case 67u: goto L_003AC724;
    case 68u: goto L_003AC738;
    case 69u: goto L_003AC748;
    case 70u: goto L_003AC788;
    case 71u: goto L_003AC7B8;
    case 72u: goto L_003AC7D4;
    case 73u: goto L_003AC7E8;
    case 74u: goto L_003AC804;
    case 75u: goto L_003AC810;
    case 76u: goto L_003AC820;
    case 77u: goto L_003AC834;
    case 78u: goto L_003AC850;
    case 79u: goto L_003AC87C;
    case 80u: goto L_003AC88C;
    case 81u: goto L_003AC89C;
    case 82u: goto L_003AC8B8;
    case 83u: goto L_003AC8F0;
    case 84u: goto L_003AC8F4;
    case 85u: goto L_003AC93C;
    case 86u: goto L_003AC94C;
    case 87u: goto L_003AC970;
    case 88u: goto L_003AC990;
    case 89u: goto L_003AC9A0;
    case 90u: goto L_003AC9C4;
    case 91u: goto L_003AC9D8;
    case 92u: goto L_003AC9EC;
    case 93u: goto L_003AC9FC;
    case 94u: goto L_003ACA24;
    case 95u: goto L_003ACA4C;
    case 96u: goto L_003ACA64;
    case 97u: goto L_003ACA74;
    case 98u: goto L_003ACA80;
    case 99u: goto L_003ACAA4;
    case 100u: goto L_003ACABC;
    case 101u: goto L_003ACACC;
    case 102u: goto L_003ACAD8;
    case 103u: goto L_003ACB08;
    case 104u: goto L_003ACB18;
    case 105u: goto L_003ACB5C;
    case 106u: goto L_003ACB70;
    case 107u: goto L_003ACB84;
    case 108u: goto L_003ACBAC;
    case 109u: goto L_003ACBBC;
    case 110u: goto L_003ACBEC;
    case 111u: goto L_003ACBF4;
    case 112u: goto L_003ACBFC;
    case 113u: goto L_003ACC10;
    case 114u: goto L_003ACC20;
    case 115u: goto L_003ACC28;
    case 116u: goto L_003ACC30;
    case 117u: goto L_003ACC38;
    case 118u: goto L_003ACC50;
    case 119u: goto L_003ACCA8;
    case 120u: goto L_003ACCB8;
    case 121u: goto L_003ACD0C;
    case 122u: goto L_003ACD20;
    case 123u: goto L_003ACD30;
    case 124u: goto L_003ACD44;
    case 125u: goto L_003ACD54;
    case 126u: goto L_003ACD60;
    case 127u: goto L_003ACD70;
    case 128u: goto L_003ACD7C;
    case 129u: goto L_003ACD8C;
    case 130u: goto L_003ACD98;
    case 131u: goto L_003ACDA8;
    case 132u: goto L_003ACDBC;
    case 133u: goto L_003ACDCC;
    case 134u: goto L_003ACDD8;
    case 135u: goto L_003ACDE4;
    case 136u: goto L_003ACDE8;
    case 137u: goto L_003ACE20;
    case 138u: goto L_003ACE30;
    case 139u: goto L_003ACE3C;
    case 140u: goto L_003ACE48;
    case 141u: goto L_003ACE54;
    case 142u: goto L_003ACE68;
    case 143u: goto L_003ACE74;
    case 144u: goto L_003ACE80;
    case 145u: goto L_003ACE88;
    case 146u: goto L_003ACEE8;
    case 147u: goto L_003ACF18;
    case 148u: goto L_003ACF20;
    case 149u: goto L_003ACF28;
    case 150u: goto L_003ACF2C;
    case 151u: goto L_003ACFA4;
    case 152u: goto L_003ACFB4;
    case 153u: goto L_003ACFC8;
    case 154u: goto L_003ACFE0;
    case 155u: goto L_003ACFEC;
    case 156u: goto L_003ACFFC;
    case 157u: goto L_003AD00C;
    case 158u: goto L_003AD020;
    case 159u: goto L_003AD030;
    case 160u: goto L_003AD03C;
    case 161u: goto L_003AD04C;
    case 162u: goto L_003AD058;
    case 163u: goto L_003AD068;
    case 164u: goto L_003AD074;
    case 165u: goto L_003AD084;
    case 166u: goto L_003AD090;
    case 167u: goto L_003AD0A0;
    case 168u: goto L_003AD0B4;
    case 169u: goto L_003AD0C4;
    case 170u: goto L_003AD0D0;
    case 171u: goto L_003AD0E0;
    case 172u: goto L_003AD0EC;
    case 173u: goto L_003AD0FC;
    case 174u: goto L_003AD108;
    case 175u: goto L_003AD118;
    case 176u: goto L_003AD124;
    case 177u: goto L_003AD134;
    case 178u: goto L_003AD140;
    case 179u: goto L_003AD150;
    case 180u: goto L_003AD160;
    case 181u: goto L_003AD16C;
    case 182u: goto L_003AD178;
    case 183u: goto L_003AD184;
    case 184u: goto L_003AD190;
    case 185u: goto L_003AD1A4;
    case 186u: goto L_003AD1B0;
    case 187u: goto L_003AD1C0;
    case 188u: goto L_003AD1DC;
    case 189u: goto L_003AD1F4;
    case 190u: goto L_003AD204;
    case 191u: goto L_003AD214;
    case 192u: goto L_003AD220;
    case 193u: goto L_003AD22C;
    case 194u: goto L_003AD238;
    case 195u: goto L_003AD244;
    case 196u: goto L_003AD250;
    case 197u: goto L_003AD25C;
    case 198u: goto L_003AD288;
    case 199u: goto L_003AD294;
    case 200u: goto L_003AD2A8;
    case 201u: goto L_003AD2BC;
    case 202u: goto L_003AD2CC;
    case 203u: goto L_003AD2DC;
    case 204u: goto L_003AD2E8;
    case 205u: goto L_003AD2F4;
    case 206u: goto L_003AD300;
    case 207u: goto L_003AD308;
    case 208u: goto L_003AD458;
    case 209u: goto L_003AD4F8;
    case 210u: goto L_003AD540;
    case 211u: goto L_003AD554;
    case 212u: goto L_003AD590;
    case 213u: goto L_003AD5C4;
    case 214u: goto L_003AD614;
    case 215u: goto L_003AD62C;
    case 216u: goto L_003AD688;
    case 217u: goto L_003AD6AC;
    case 218u: goto L_003AD6F0;
    case 219u: goto L_003AD718;
    case 220u: goto L_003AD744;
    case 221u: goto L_003AD790;
    case 222u: goto L_003AD7FC;
    case 223u: goto L_003AD81C;
    case 224u: goto L_003AD88C;
    case 225u: goto L_003AD8A8;
    case 226u: goto L_003AD8BC;
    case 227u: goto L_003AD8DC;
    case 228u: goto L_003AD914;
    case 229u: goto L_003AD93C;
    case 230u: goto L_003AD968;
    case 231u: goto L_003AD9A0;
    case 232u: goto L_003AD9A4;
    case 233u: goto L_003AD9EC;
    case 234u: goto L_003ADA2C;
    case 235u: goto L_003ADA68;
    case 236u: goto L_003ADA8C;
    case 237u: goto L_003ADAAC;
    case 238u: goto L_003ADAE8;
    case 239u: goto L_003ADB30;
    case 240u: goto L_003ADBA4;
    case 241u: goto L_003ADC30;
    case 242u: goto L_003ADC78;
    case 243u: goto L_003ADD70;
    case 244u: goto L_003ADDC4;
    case 245u: goto L_003ADDE0;
    case 246u: goto L_003ADDE4;
    case 247u: goto L_003AE068;
    case 248u: goto L_003AE0D4;
    case 249u: goto L_003AE0D8;
    case 250u: goto L_003AE114;
    case 251u: goto L_003AE11C;
    case 252u: goto L_003AE154;
    case 253u: goto L_003AE164;
    case 254u: goto L_003AE170;
    case 255u: goto L_003AE17C;
    case 256u: goto L_003AE18C;
    case 257u: goto L_003AE1A0;
    case 258u: goto L_003AE1B0;
    case 259u: goto L_003AE1BC;
    case 260u: goto L_003AE1CC;
    case 261u: goto L_003AE1D8;
    case 262u: goto L_003AE1E8;
    case 263u: goto L_003AE1F4;
    case 264u: goto L_003AE204;
    case 265u: goto L_003AE210;
    case 266u: goto L_003AE220;
    case 267u: goto L_003AE22C;
    case 268u: goto L_003AE240;
    case 269u: goto L_003AE250;
    case 270u: goto L_003AE25C;
    case 271u: goto L_003AE26C;
    case 272u: goto L_003AE278;
    case 273u: goto L_003AE288;
    case 274u: goto L_003AE294;
    case 275u: goto L_003AE2A4;
    case 276u: goto L_003AE2B0;
    case 277u: goto L_003AE2C0;
    case 278u: goto L_003AE2CC;
    case 279u: goto L_003AE2E0;
    case 280u: goto L_003AE2F0;
    case 281u: goto L_003AE314;
    case 282u: goto L_003AE320;
    case 283u: goto L_003AE32C;
    case 284u: goto L_003AE344;
    case 285u: goto L_003AE378;
    case 286u: goto L_003AE38C;
    case 287u: goto L_003AE3A0;
    case 288u: goto L_003AE3A8;
    case 289u: goto L_003AE3B0;
    case 290u: goto L_003AE3CC;
    case 291u: goto L_003AE3D8;
    case 292u: goto L_003AE3E0;
    case 293u: goto L_003AE418;
    case 294u: goto L_003AE428;
    case 295u: goto L_003AE448;
    case 296u: goto L_003AE49C;
    case 297u: goto L_003AE4A8;
    case 298u: goto L_003AE4BC;
    case 299u: goto L_003AE4C0;
    case 300u: goto L_003AE4C4;
    case 301u: goto L_003AE4E8;
    case 302u: goto L_003AE4EC;
    case 303u: goto L_003AE538;
    case 304u: goto L_003AE544;
    case 305u: goto L_003AE590;
    case 306u: goto L_003AE5B4;
    case 307u: goto L_003AE5C0;
    case 308u: goto L_003AE5DC;
    case 309u: goto L_003AE608;
    case 310u: goto L_003AE640;
    case 311u: goto L_003AE670;
    case 312u: goto L_003AE678;
    case 313u: goto L_003AE67C;
    case 314u: goto L_003AE6A0;
    case 315u: goto L_003AE6C0;
    case 316u: goto L_003AE6CC;
    case 317u: goto L_003AE6F0;
    case 318u: goto L_003AE6F4;
    case 319u: goto L_003AE700;
    case 320u: goto L_003AE718;
    case 321u: goto L_003AE720;
    case 322u: goto L_003AE748;
    case 323u: goto L_003AE768;
    case 324u: goto L_003AE7BC;
    case 325u: goto L_003AE7C8;
    case 326u: goto L_003AE7E0;
    case 327u: goto L_003AE7E4;
    case 328u: goto L_003AE808;
    case 329u: goto L_003AE80C;
    case 330u: goto L_003AE868;
    case 331u: goto L_003AE874;
    case 332u: goto L_003AE8C0;
    case 333u: goto L_003AE8E4;
    case 334u: goto L_003AE8F0;
    case 335u: goto L_003AE910;
    case 336u: goto L_003AE940;
    case 337u: goto L_003AE9B0;
    case 338u: goto L_003AEA10;
    case 339u: goto L_003AEA58;
    case 340u: goto L_003AEA90;
    case 341u: goto L_003AEAB0;
    case 342u: goto L_003AEAC4;
    case 343u: goto L_003AEAD8;
    case 344u: goto L_003AEAE4;
    case 345u: goto L_003AEAF8;
    case 346u: goto L_003AEB08;
    case 347u: goto L_003AEB30;
    case 348u: goto L_003AEB84;
    case 349u: goto L_003AEBB0;
    case 350u: goto L_003AEBB8;
    case 351u: goto L_003AEBBC;
    case 352u: goto L_003AEBE4;
    case 353u: goto L_003AEC44;
    case 354u: goto L_003AEC4C;
    case 355u: goto L_003AECA0;
    case 356u: goto L_003AECD4;
    case 357u: goto L_003AECDC;
    case 358u: goto L_003AECE0;
    case 359u: goto L_003AED04;
    case 360u: goto L_003AED24;
    case 361u: goto L_003AED2C;
    case 362u: goto L_003AED30;
    case 363u: goto L_003AED3C;
    case 364u: goto L_003AED64;
    case 365u: goto L_003AED78;
    case 366u: goto L_003AED80;
    case 367u: goto L_003AEDB4;
    case 368u: goto L_003AEDBC;
    case 369u: goto L_003AEDC0;
    case 370u: goto L_003AEDE4;
    case 371u: goto L_003AEDF4;
    case 372u: goto L_003AEE10;
    case 373u: goto L_003AEE60;
    case 374u: goto L_003AEEC8;
    case 375u: goto L_003AEECC;
    case 376u: goto L_003AF008;
    case 377u: goto L_003AF058;
    case 378u: goto L_003AF0E0;
    case 379u: goto L_003AF13C;
    case 380u: goto L_003AF140;
    case 381u: goto L_003AF1B0;
    case 382u: goto L_003AF1D8;
    case 383u: goto L_003AF20C;
    case 384u: goto L_003AF22C;
    case 385u: goto L_003AF238;
    case 386u: goto L_003AF23C;
    case 387u: goto L_003AF250;
    case 388u: goto L_003AF268;
    case 389u: goto L_003AF280;
    case 390u: goto L_003AF288;
    case 391u: goto L_003AF2A0;
    case 392u: goto L_003AF2A8;
    case 393u: goto L_003AF304;
    case 394u: goto L_003AF308;
    case 395u: goto L_003AF380;
    case 396u: goto L_003AF3D0;
    case 397u: goto L_003AF3D8;
    case 398u: goto L_003AF3F8;
    case 399u: goto L_003AF418;
    case 400u: goto L_003AF424;
    case 401u: goto L_003AF43C;
    case 402u: goto L_003AF460;
    case 403u: goto L_003AF4BC;
    case 404u: goto L_003AF4E8;
    case 405u: goto L_003AF4F8;
    case 406u: goto L_003AF510;
    case 407u: goto L_003AF540;
    case 408u: goto L_003AF548;
    case 409u: goto L_003AF54C;
    case 410u: goto L_003AF55C;
    case 411u: goto L_003AF57C;
    case 412u: goto L_003AF584;
    case 413u: goto L_003AF5AC;
    case 414u: goto L_003AF5C0;
    case 415u: goto L_003AF5C8;
    case 416u: goto L_003AF5FC;
    case 417u: goto L_003AF604;
    case 418u: goto L_003AF618;
    case 419u: goto L_003AF638;
    case 420u: goto L_003AF650;
    case 421u: goto L_003AF668;
    case 422u: goto L_003AF680;
    case 423u: goto L_003AF698;
    case 424u: goto L_003AF6B0;
    case 425u: goto L_003AF6C8;
    case 426u: goto L_003AF6E0;
    case 427u: goto L_003AF6F8;
    case 428u: goto L_003AF710;
    case 429u: goto L_003AF728;
    case 430u: goto L_003AF740;
    case 431u: goto L_003AF758;
    case 432u: goto L_003AF770;
    case 433u: goto L_003AF788;
    case 434u: goto L_003AF7A0;
    case 435u: goto L_003AF7B8;
    case 436u: goto L_003AF808;
    case 437u: goto L_003AF830;
    case 438u: goto L_003AF840;
    case 439u: goto L_003AF854;
    case 440u: goto L_003AF864;
    case 441u: goto L_003AF87C;
    case 442u: goto L_003AF888;
    case 443u: goto L_003AF8A0;
    case 444u: goto L_003AF8F0;
    case 445u: goto L_003AF8FC;
    case 446u: goto L_003AF90C;
    case 447u: goto L_003AF924;
    case 448u: goto L_003AF93C;
    case 449u: goto L_003AF948;
    case 450u: goto L_003AF950;
    case 451u: goto L_003AF968;
    case 452u: goto L_003AF988;
    case 453u: goto L_003AF9A4;
    case 454u: goto L_003AF9AC;
    case 455u: goto L_003AF9CC;
    case 456u: goto L_003AF9D0;
    case 457u: goto L_003AF9D8;
    case 458u: goto L_003AF9EC;
    case 459u: goto L_003AFA00;
    case 460u: goto L_003AFA08;
    case 461u: goto L_003AFA14;
    case 462u: goto L_003AFA3C;
    case 463u: goto L_003AFA54;
    case 464u: goto L_003AFA60;
    case 465u: goto L_003AFA68;
    case 466u: goto L_003AFA88;
    case 467u: goto L_003AFAB4;
    case 468u: goto L_003AFABC;
    case 469u: goto L_003AFAD8;
    case 470u: goto L_003AFAF0;
    case 471u: goto L_003AFB00;
    case 472u: goto L_003AFB1C;
    case 473u: goto L_003AFB24;
    case 474u: goto L_003AFB44;
    case 475u: goto L_003AFB48;
    case 476u: goto L_003AFB50;
    case 477u: goto L_003AFB64;
    case 478u: goto L_003AFB78;
    case 479u: goto L_003AFB80;
    case 480u: goto L_003AFB8C;
    case 481u: goto L_003AFBB4;
    case 482u: goto L_003AFBCC;
    case 483u: goto L_003AFBD8;
    case 484u: goto L_003AFBE0;
    case 485u: goto L_003AFC0C;
    case 486u: goto L_003AFC20;
    case 487u: goto L_003AFCE4;
    case 488u: goto L_003AFD48;
    case 489u: goto L_003AFDA0;
    case 490u: goto L_003AFEA8;
    case 491u: goto L_003AFED0;
    case 492u: goto L_003AFED4;
    case 493u: goto L_003AFF68;
    case 494u: goto L_003AFFA0;
    default: bad_entry(c, 0x003AC000u); return;
    }
L_003AC000:
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 1));
    c.budget -= 1;
L_003AC004:
    c.r[15].d[0] = c.r[10].d[0] & 1ull;
    set32(c.r[10], c.r[10].w[0] + c.r[15].w[0]);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 1));
    c.budget -= 3;
L_003AC010:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[14], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[9].w[0] << 23);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[14].w[0] + c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABF88u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 414u, depth); } }
    c.budget -= 1;
L_003AC028:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3E3F0000u);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[17].d[0] = c.r[17].d[0] & c.r[15].d[0];
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[14].d[0] = c.r[14].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[14].d[0] != 0ull; c.r[22].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AC088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC07Cu);  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003AC07Cu) [[unlikely]] return; }
L_003AC07C:
    set32(c.r[15], 0u + 1023u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[15].d[0] = c.r[15].d[0] << 52;  if (t) { goto L_003AC1A8; } }
L_003AC088:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC094u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC094u) [[unlikely]] return; }
L_003AC094:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 31400u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC0A8u) [[unlikely]] return; }
L_003AC0A8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0B8u); c.r[5].d[0] = ld64((c.r[15].w[0] + 31408u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC0B8u) [[unlikely]] return; }
L_003AC0B8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC0C4u) [[unlikely]] return; }
L_003AC0C4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0D4u); c.r[5].d[0] = ld64((c.r[15].w[0] + 31416u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC0D4u) [[unlikely]] return; }
L_003AC0D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC0E0u) [[unlikely]] return; }
L_003AC0E0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0F0u); c.r[5].d[0] = ld64((c.r[15].w[0] + 31424u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC0F0u) [[unlikely]] return; }
L_003AC0F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC0FCu) [[unlikely]] return; }
L_003AC0FC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC10Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 31432u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC10Cu) [[unlikely]] return; }
L_003AC10C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC118u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC118u) [[unlikely]] return; }
L_003AC118:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC128u); c.r[5].d[0] = ld64((c.r[15].w[0] + 31440u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC128u) [[unlikely]] return; }
L_003AC128:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC134u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC134u) [[unlikely]] return; }
L_003AC134:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FD30000u);
    c.r[15].d[0] = c.r[15].d[0] | 13106ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AC1D4; } }
    set32(c.r[5], 0u + 511u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC158u); c.r[5].d[0] = c.r[5].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC158u) [[unlikely]] return; }
L_003AC158:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC168u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC168u) [[unlikely]] return; }
L_003AC168:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC178u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC178u) [[unlikely]] return; }
L_003AC178:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC184u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC184u) [[unlikely]] return; }
L_003AC184:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC190u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC190u) [[unlikely]] return; }
L_003AC190:
    set32(c.r[4], 0u + 1023u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 52;
    c.budget -= 3;
L_003AC19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC1A4u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC1A4u) [[unlikely]] return; }
L_003AC1A4:
    c.r[15].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003AC1A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[15].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AC1D4:
    set32(c.r[18], 0u + 8169u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FE90000u);
    c.r[15].d[0] = c.r[15].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[18].d[0] = c.r[18].d[0] << 49;  if (t) { goto L_003AC20C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0xFFE00000u);
    c.r[21].d[0] = c.r[21].d[0] << 32;
    set32(c.r[15], c.r[17].w[0] + c.r[15].w[0]);
    c.r[21].d[0] = c.r[21].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    set32(c.r[14], 0u - 1u);
    c.r[21].d[0] = c.r[21].d[0] | c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] << 32;
    c.r[18].d[0] = c.r[21].d[0] & c.r[14].d[0];
    c.budget -= 9;
L_003AC20C:
    set32(c.r[5], 0u + 511u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC21Cu); c.r[5].d[0] = c.r[5].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC21Cu) [[unlikely]] return; }
L_003AC21C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC228u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC228u) [[unlikely]] return; }
L_003AC228:
    set32(c.r[4], 0u + 1023u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC23Cu); c.r[4].d[0] = c.r[4].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC23Cu) [[unlikely]] return; }
L_003AC23C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC24Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC24Cu) [[unlikely]] return; }
L_003AC24C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC25Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC25Cu) [[unlikely]] return; }
L_003AC25C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC268u) [[unlikely]] return; }
L_003AC268:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC274u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC274u) [[unlikely]] return; }
L_003AC274:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC19Cu | kUnwind; return; } goto L_003AC19C; } }
L_003AC280:
    set32(c.r[13], 0u + 24u);
    set32(c.r[12], c.r[6].w[0] - 3u);
    mmi::div(c, 0, c.r[12].w[0], c.r[13].w[0]);
    set32(c.r[29], c.r[29].w[0] - 704u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 624u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 632u), c.r[17].d[0]);
    set32(c.r[15], c.r[15].w[0] + 31448u);
    st64((c.r[29].w[0] + 640u), c.r[18].d[0]);
    set32(c.r[14], c.r[8].w[0] << 2);
    st64((c.r[29].w[0] + 648u), c.r[19].d[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    st64((c.r[29].w[0] + 656u), c.r[20].d[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    st64((c.r[29].w[0] + 664u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 672u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 680u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 688u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 696u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 568u), c.r[8].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0])));
    st32((c.r[29].w[0] + 576u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 584u), c.r[14].w[0]);
    set32(c.r[11], c.r[7].w[0] + c.r[14].w[0]);
    st32((c.r[29].w[0] + 560u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 564u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 572u), c.r[9].w[0]);
    c.budget -= 29;
    if (c.r[13].d[0] == 0ull) { breakpoint(c, 0x003AC2F0u);  goto L_003AC2F4; }
L_003AC2F4:
    c.r[12].d[0] = c.lo.d[0];
    c.r[15].d[0] = c.r[12].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[15].d[0] != 0) c.r[12].d[0] = 0ull;
    mmi::mult(c, 0, c.r[12].w[0], c.r[13].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 580u), c.r[12].w[0]);
    set32(c.r[14], c.r[12].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[13].w[0]);
    set32(c.r[6], c.r[6].w[0] - 24u);
    c.budget -= 10;
    { const bool t = c.r[11].sd[0] < 0; st32((c.r[29].w[0] + 592u), c.r[6].w[0]);  if (t) { goto L_003AC358; } }
    set32(c.r[15], c.r[14].w[0] << 2);
    c.r[19].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[18], c.r[11].w[0] + 1u);
    set32(c.r[16], c.r[15].w[0] + c.r[9].w[0]);
    set32(c.r[17], c.r[29].w[0] + 80u);
    c.budget -= 5;
L_003AC330:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AC340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC340u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003AC340u) [[unlikely]] return; }
L_003AC340:
    st64((c.r[17].w[0]), c.r[2].d[0]);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC330u | kUnwind; return; } goto L_003AC330; } }
L_003AC358:
    set32(c.r[13], ld32((c.r[29].w[0] + 584u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.r[13].d[0] = c.r[13].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[13].d[0] != 0ull; st32((c.r[29].w[0] + 600u), c.r[13].w[0]);  if (t) { goto L_003AC3F0; } }
    set32(c.r[14], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[22], c.r[29].w[0] + 400u);
    c.r[11].d[0] = c.r[14].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[15], c.r[14].w[0] << 3);
    st32((c.r[29].w[0] + 608u), c.r[11].w[0]);
    set32(c.r[21], c.r[15].w[0] + c.r[29].w[0]);
    c.budget -= 6;
L_003AC384:
    set32(c.r[12], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003AC3D4; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 576u)));
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[17], c.r[21].w[0] + 80u);
    set32(c.r[18], c.r[13].w[0] + 1u);
    c.budget -= 5;
L_003AC3A4:
    c.r[4].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.r[5].d[0] = ld64((c.r[17].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC3B8u); set32(c.r[16], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC3B8u) [[unlikely]] return; }
L_003AC3B8:
    set32(c.r[17], c.r[17].w[0] - 8u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC3C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC3C8u) [[unlikely]] return; }
L_003AC3C8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC3A4u | kUnwind; return; } goto L_003AC3A4; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003AC3D4:
    st64((c.r[22].w[0]), c.r[18].d[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[14], ld32((c.r[29].w[0] + 584u)));
    set32(c.r[21], c.r[21].w[0] + 8u);
    c.r[15].d[0] = c.r[14].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC384u | kUnwind; return; } goto L_003AC384; } }
L_003AC3F0:
    set32(c.r[22], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 1;
L_003AC3F4:
    set32(c.r[15], c.r[22].w[0] << 3);
    set32(c.r[4], c.r[15].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = c.r[22].sd[0] <= 0; c.r[19].d[0] = ld64((c.r[4].w[0] + 400u));  if (t) { goto L_003AC47C; } }
    c.r[20].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], c.r[4].w[0] + 392u);
    c.r[18].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
L_003AC410:
    set32(c.r[5], 0u + 999u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 52;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC424u); set32(c.r[20], c.r[20].w[0] - 1u);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC424u) [[unlikely]] return; }
L_003AC424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC42Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003AC42Cu) [[unlikely]] return; }
L_003AC42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC434u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003AC434u) [[unlikely]] return; }
L_003AC434:
    set32(c.r[5], 0u + 1047u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC448u); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC448u) [[unlikely]] return; }
L_003AC448:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC454u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC454u) [[unlikely]] return; }
L_003AC454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC45Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003AC45Cu) [[unlikely]] return; }
L_003AC45C:
    c.r[4].d[0] = ld64((c.r[17].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC470u); set32(c.r[17], c.r[17].w[0] - 8u);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC470u) [[unlikely]] return; }
L_003AC470:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] > 0; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC410u | kUnwind; return; } goto L_003AC410; } }
L_003AC47C:
    set32(c.r[5], ld32((c.r[29].w[0] + 592u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC488u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 347u, depth + 1u); else { c.pc = 0x003AEB30u; return; } if (c.pc != 0x003AC488u) [[unlikely]] return; }
L_003AC488:
    set32(c.r[5], 0u + 255u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 54;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC49Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC49Cu) [[unlikely]] return; }
L_003AC49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 323u, depth + 1u); else { c.pc = 0x003AE768u; return; } if (c.pc != 0x003AC4A4u) [[unlikely]] return; }
L_003AC4A4:
    set32(c.r[5], 0u + 513u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4B4u); c.r[5].d[0] = c.r[5].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC4B4u) [[unlikely]] return; }
L_003AC4B4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC4C0u) [[unlikely]] return; }
L_003AC4C0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003AC4CCu) [[unlikely]] return; }
L_003AC4CC:
    st32((c.r[29].w[0] + 588u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4D8u); set32(c.r[4], ld32((c.r[29].w[0] + 588u)));  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003AC4D8u) [[unlikely]] return; }
L_003AC4D8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC4E4u) [[unlikely]] return; }
L_003AC4E4:
    set32(c.r[15], ld32((c.r[29].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[15].sd[0] <= 0; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ACC74; } }
    set32(c.r[12], c.r[22].w[0] << 2);
    set32(c.r[11], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[12], c.r[12].w[0] + c.r[29].w[0]);
    set32(c.r[15], 0u + 24u);
    set32(c.r[14], ld32((c.r[12].w[0] - 4u)));
    set32(c.r[15], c.r[15].w[0] - c.r[11].w[0]);
    set32(c.r[13], 0u + 23u);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> (c.r[15].w[0] & 31u)));
    set32(c.r[13], c.r[13].w[0] - c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[29].w[0] + 588u)));
    set32(c.r[15], c.r[20].w[0] << (c.r[15].w[0] & 31u));
    set32(c.r[14], c.r[14].w[0] - c.r[15].w[0]);
    set32(c.r[11], c.r[11].w[0] + c.r[20].w[0]);
    st32((c.r[12].w[0] - 4u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 588u), c.r[11].w[0]);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> (c.r[13].w[0] & 31u)));
    c.budget -= 16;
L_003AC530:
    st32((c.r[29].w[0] + 596u), c.r[14].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 596u)));
    c.budget -= 4;
    { const bool t = c.r[15].sd[0] <= 0; set32(c.r[11], ld32((c.r[29].w[0] + 588u)));  if (t) { goto L_003AC5F0; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[22].sd[0] <= 0; st32((c.r[29].w[0] + 588u), c.r[11].w[0]);  if (t) { goto L_003AC58C; } }
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[11].d[0] = c.r[11].d[0] | 65535ull;
    c.r[13].d[0] = c.r[29].d[0] + 0ull;
    c.r[12].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
L_003AC564:
    set32(c.r[14], ld32((c.r[13].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[15], c.r[11].w[0] - c.r[14].w[0]);  if (t) { goto L_003AC57C; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[15], c.r[10].w[0] - c.r[14].w[0]);  if (t) { goto L_003AC580; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_003AC57C:
    st32((c.r[13].w[0]), c.r[15].w[0]);
    c.budget -= 1;
L_003AC580:
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC564u | kUnwind; return; } goto L_003AC564; } }
L_003AC58C:
    set32(c.r[12], ld32((c.r[29].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[12].sd[0] <= 0; set32(c.r[15], 0u + 1u);  if (t) { goto L_003AC5A8; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[15].d[0]; set32(c.r[15], 0u + 2u);  if (t) { goto L_003ACC68; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[15].d[0]; set32(c.r[13], c.r[22].w[0] << 2);  if (t) { goto L_003ACC4C; } }
L_003AC5A8:
    set32(c.r[13], ld32((c.r[29].w[0] + 596u)));
    set32(c.r[15], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[13].d[0] != c.r[15].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003AC5F4; } }
    set32(c.r[17], 0u + 1023u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[17].d[0] << 52;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC5CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC5CCu) [[unlikely]] return; }
L_003AC5CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AC5F0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 592u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC5E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 347u, depth + 1u); else { c.pc = 0x003AEB30u; return; } if (c.pc != 0x003AC5E0u) [[unlikely]] return; }
L_003AC5E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC5ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC5ECu) [[unlikely]] return; }
L_003AC5EC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003AC5F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003AC5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC5FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AC5FCu) [[unlikely]] return; }
L_003AC5FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003AC780; } }
    set32(c.r[11], ld32((c.r[29].w[0] + 584u)));
    set32(c.r[20], c.r[22].w[0] - 1u);
    c.r[15].d[0] = c.r[20].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_003AC648; } }
    set32(c.r[15], c.r[20].w[0] << 2);
    c.r[12].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[13], c.r[15].w[0] + c.r[29].w[0]);
    c.budget -= 3;
L_003AC624:
    set32(c.r[15], ld32((c.r[13].w[0])));
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[14].d[0] = c.r[20].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.r[12].d[0] = c.r[12].d[0] | c.r[15].d[0];
    c.budget -= 7;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[13], c.r[13].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC624u | kUnwind; return; } goto L_003AC624; } }
    st32((c.r[29].w[0] + 584u), c.r[11].w[0]);
    c.r[14].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 2;
L_003AC648:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003AC780; } }
    set32(c.r[12], ld32((c.r[29].w[0] + 584u)));
    set32(c.r[15], c.r[12].w[0] - 1u);
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[14], ld32((c.r[15].w[0])));
    c.budget -= 7;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003AC694; } }
    set32(c.r[15], c.r[12].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[14], c.r[15].w[0] - 4u);
    c.budget -= 3;
L_003AC678:
    set32(c.r[14], c.r[14].w[0] - 4u);
    set32(c.r[15], ld32((c.r[14].w[0])));
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC678u | kUnwind; return; } goto L_003AC678; } }
L_003AC694:
    set32(c.r[16], c.r[22].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[22].w[0] + 1u);
    c.r[15].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 604u), c.r[16].w[0]);  if (t) { goto L_003AC778; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[14], c.r[20].w[0] << 3);
    set32(c.r[11], ld32((c.r[29].w[0] + 580u)));
    set32(c.r[15], c.r[13].w[0] << 3);
    set32(c.r[15], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[13], c.r[11].w[0] + c.r[20].w[0]);
    set32(c.r[11], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[29].w[0]);
    set32(c.r[23], c.r[15].w[0] + 80u);
    set32(c.r[22], c.r[14].w[0] + 400u);
    set32(c.r[12], c.r[11].w[0] + c.r[20].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 572u)));
    c.r[15].d[0] = c.r[11].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[13], c.r[13].w[0] << 2);
    st32((c.r[29].w[0] + 608u), c.r[15].w[0]);
    set32(c.r[12], c.r[12].w[0] << 3);
    set32(c.r[21], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[30], c.r[12].w[0] + c.r[29].w[0]);
    c.budget -= 19;
L_003AC6F4:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC700u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003AC700u) [[unlikely]] return; }
L_003AC700:
    st64((c.r[23].w[0]), c.r[2].d[0]);
    set32(c.r[11], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 4;
    if (c.r[11].d[0] != 0ull) { st64((c.r[22].w[0]), c.r[18].d[0]);  goto L_003AC758; }
    set32(c.r[12], ld32((c.r[29].w[0] + 576u)));
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[17], c.r[30].w[0] + 80u);
    set32(c.r[18], c.r[12].w[0] + 1u);
    c.budget -= 5;
L_003AC724:
    c.r[4].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.r[5].d[0] = ld64((c.r[17].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC738u); set32(c.r[16], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC738u) [[unlikely]] return; }
L_003AC738:
    set32(c.r[17], c.r[17].w[0] - 8u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC748u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC748u) [[unlikely]] return; }
L_003AC748:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC724u | kUnwind; return; } goto L_003AC724; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[22].w[0]), c.r[18].d[0]);
    c.budget -= 2;
L_003AC758:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[13], ld32((c.r[29].w[0] + 604u)));
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.r[15].d[0] = c.r[13].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC6F4u | kUnwind; return; } goto L_003AC6F4; } }
L_003AC778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 604u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC3F4u | kUnwind; return; } goto L_003AC3F4; } }
L_003AC780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC788u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AC788u) [[unlikely]] return; }
L_003AC788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[12], ld32((c.r[29].w[0] + 592u)));  if (t) { goto L_003ACB98; } }
    set32(c.r[14], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[22], c.r[22].w[0] - 1u);
    set32(c.r[15], c.r[22].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] - 24u);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    st32((c.r[29].w[0] + 592u), c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[15].w[0])));
    c.budget -= 9;
    if (c.r[14].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 592u)));  goto L_003AC7D8; }
    c.r[14].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 1;
L_003AC7B8:
    set32(c.r[11], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[14], c.r[14].w[0] - 4u);
    set32(c.r[15], ld32((c.r[14].w[0])));
    set32(c.r[22], c.r[22].w[0] - 1u);
    set32(c.r[11], c.r[11].w[0] - 24u);
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; st32((c.r[29].w[0] + 592u), c.r[11].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC7B8u | kUnwind; return; } goto L_003AC7B8; } }
L_003AC7D4:
    set32(c.r[5], ld32((c.r[29].w[0] + 592u)));
    c.budget -= 1;
L_003AC7D8:
    set32(c.r[4], 0u + 1023u);
    c.r[4].d[0] = c.r[4].d[0] << 52;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC7E8u); c.r[20].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 347u, depth + 1u); else { c.pc = 0x003AEB30u; return; } if (c.pc != 0x003AC7E8u) [[unlikely]] return; }
L_003AC7E8:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] < 0; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AC8D0; } }
    set32(c.r[15], c.r[22].w[0] << 3);
    set32(c.r[14], c.r[22].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[14].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[15].w[0] + 400u);
    c.budget -= 5;
L_003AC804:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC810u); set32(c.r[20], c.r[20].w[0] - 1u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003AC810u) [[unlikely]] return; }
L_003AC810:
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC820u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC820u) [[unlikely]] return; }
L_003AC820:
    st64((c.r[16].w[0]), c.r[2].d[0]);
    set32(c.r[5], 0u + 999u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC834u); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC834u) [[unlikely]] return; }
L_003AC834:
    set32(c.r[16], c.r[16].w[0] - 8u);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC804u | kUnwind; return; } goto L_003AC804; } }
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] < 0; c.r[20].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003AC8D0; } }
    set32(c.r[15], c.r[22].w[0] << 3);
    set32(c.r[30], c.r[15].w[0] + c.r[29].w[0]);
    c.budget -= 2;
L_003AC850:
    set32(c.r[14], ld32((c.r[29].w[0] + 600u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003ACB90; } }
    set32(c.r[21], c.r[22].w[0] - c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = c.r[21].sd[0] < 0; c.r[23].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003AC8B8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[30].w[0] + 400u);
    set32(c.r[17], c.r[15].w[0] + 31464u);
    c.r[4].d[0] = ld64((c.r[17].w[0]));
    c.budget -= 4;
L_003AC87C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[5].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC88Cu); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AC88Cu) [[unlikely]] return; }
L_003AC88C:
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC89Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC89Cu) [[unlikely]] return; }
L_003AC89C:
    set32(c.r[11], ld32((c.r[29].w[0] + 584u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[15].d[0] = c.r[11].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[14].d[0] = c.r[23].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003AC8B8; } }
    c.budget -= 2;
    if (c.r[14].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[17].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC87Cu | kUnwind; return; } goto L_003AC87C; }
L_003AC8B8:
    set32(c.r[15], c.r[21].w[0] << 3);
    set32(c.r[30], c.r[30].w[0] - 8u);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[20].sd[0] >= 0; st64((c.r[15].w[0] + 240u), c.r[18].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC850u | kUnwind; return; } goto L_003AC850; } }
L_003AC8D0:
    set32(c.r[12], ld32((c.r[29].w[0] + 568u)));
    c.r[15].d[0] = c.r[12].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 568u)));  if (t) { goto L_003ACA30; } }
    c.budget -= 2;
    if (c.r[12].sd[0] > 0) { c.r[18].d[0] = 0ull + 0ull;  goto L_003AC97C; }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull; c.r[20].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003AC928; } }
L_003AC8F0:
    set32(c.r[15], ld32((c.r[29].w[0] + 588u)));
    c.budget -= 1;
L_003AC8F4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 632u));
    c.r[2].d[0] = c.r[15].d[0] & 7ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 648u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 656u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 664u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 672u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 680u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 688u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 696u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 704u);  c.pc = t; return; }
L_003AC928:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] < 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003AC958; } }
    set32(c.r[15], c.r[22].w[0] << 3);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[15].w[0] + 240u);
    c.budget -= 3;
L_003AC93C:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC94Cu); set32(c.r[20], c.r[20].w[0] - 1u);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC94Cu) [[unlikely]] return; }
L_003AC94C:
    set32(c.r[16], c.r[16].w[0] - 8u);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC93Cu | kUnwind; return; } goto L_003AC93C; } }
L_003AC958:
    set32(c.r[14], ld32((c.r[29].w[0] + 596u)));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AC970; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC970u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC970u) [[unlikely]] return; }
L_003AC970:
    set32(c.r[15], ld32((c.r[29].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[15].w[0]), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC8F0u | kUnwind; return; } goto L_003AC8F0; } }
L_003AC97C:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] < 0; c.r[20].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003AC9AC; } }
    set32(c.r[15], c.r[22].w[0] << 3);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[15].w[0] + 240u);
    c.budget -= 3;
L_003AC990:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC9A0u); set32(c.r[20], c.r[20].w[0] - 1u);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC9A0u) [[unlikely]] return; }
L_003AC9A0:
    set32(c.r[16], c.r[16].w[0] - 8u);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC990u | kUnwind; return; } goto L_003AC990; } }
L_003AC9AC:
    set32(c.r[11], ld32((c.r[29].w[0] + 596u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AC9C4; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC9C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC9C4u) [[unlikely]] return; }
L_003AC9C4:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 240u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[12], ld32((c.r[29].w[0] + 564u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC9D8u); st64((c.r[12].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AC9D8u) [[unlikely]] return; }
L_003AC9D8:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ACA0C; } }
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 248u);
    c.budget -= 3;
L_003AC9EC:
    c.r[5].d[0] = ld64((c.r[18].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC9FCu); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AC9FCu) [[unlikely]] return; }
L_003AC9FC:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC9ECu | kUnwind; return; } goto L_003AC9EC; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003ACA0C:
    set32(c.r[13], ld32((c.r[29].w[0] + 596u)));
    c.budget -= 3;
    { const bool t = c.r[13].d[0] == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003ACA24; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACA24u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACA24u) [[unlikely]] return; }
L_003ACA24:
    set32(c.r[14], ld32((c.r[29].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[14].w[0] + 8u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC8F0u | kUnwind; return; } goto L_003AC8F0; } }
L_003ACA30:
    set32(c.r[15], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[13].d[0] != c.r[15].d[0]; set32(c.r[15], ld32((c.r[29].w[0] + 588u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC8F4u | kUnwind; return; } goto L_003AC8F4; } }
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0; c.r[20].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003ACA90; } }
    set32(c.r[15], c.r[22].w[0] << 3);
    set32(c.r[19], c.r[15].w[0] + c.r[29].w[0]);
    c.budget -= 2;
L_003ACA4C:
    c.r[16].d[0] = ld64((c.r[19].w[0] + 232u));
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[17].d[0] = ld64((c.r[19].w[0] + 240u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACA64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACA64u) [[unlikely]] return; }
L_003ACA64:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACA74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACA74u) [[unlikely]] return; }
L_003ACA74:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACA80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACA80u) [[unlikely]] return; }
L_003ACA80:
    st64((c.r[19].w[0] + 240u), c.r[2].d[0]);
    st64((c.r[19].w[0] + 232u), c.r[18].d[0]);
    c.budget -= 4;
    { const bool t = c.r[20].sd[0] > 0; set32(c.r[19], c.r[19].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACA4Cu | kUnwind; return; } goto L_003ACA4C; } }
L_003ACA90:
    c.r[15].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.r[20].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003ACAEC; } }
    set32(c.r[15], c.r[22].w[0] << 3);
    set32(c.r[19], c.r[15].w[0] + c.r[29].w[0]);
    c.budget -= 2;
L_003ACAA4:
    c.r[16].d[0] = ld64((c.r[19].w[0] + 232u));
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.r[17].d[0] = ld64((c.r[19].w[0] + 240u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACABCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACABCu) [[unlikely]] return; }
L_003ACABC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACACCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACACCu) [[unlikely]] return; }
L_003ACACC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACAD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACAD8u) [[unlikely]] return; }
L_003ACAD8:
    st64((c.r[19].w[0] + 240u), c.r[2].d[0]);
    c.r[15].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    st64((c.r[19].w[0] + 232u), c.r[18].d[0]);
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACAA4u | kUnwind; return; } goto L_003ACAA4; } }
L_003ACAEC:
    c.r[20].d[0] = c.r[22].d[0] + 0ull;
    c.r[15].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003ACB28; } }
    set32(c.r[15], c.r[22].w[0] << 3);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[15].w[0] + 240u);
    c.budget -= 3;
L_003ACB08:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB18u); set32(c.r[20], c.r[20].w[0] - 1u);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACB18u) [[unlikely]] return; }
L_003ACB18:
    set32(c.r[16], c.r[16].w[0] - 8u);
    c.r[15].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACB08u | kUnwind; return; } goto L_003ACB08; } }
L_003ACB28:
    set32(c.r[15], ld32((c.r[29].w[0] + 596u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { c.r[5].d[0] = ld64((c.r[29].w[0] + 240u));  goto L_003ACB50; }
    c.r[15].d[0] = ld64((c.r[29].w[0] + 240u));
    c.r[14].d[0] = ld64((c.r[29].w[0] + 248u));
    set32(c.r[11], ld32((c.r[29].w[0] + 564u)));
    st64((c.r[11].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[11].w[0]), c.r[15].d[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st64((c.r[11].w[0] + 8u), c.r[14].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC8F0u | kUnwind; return; } goto L_003AC8F0; } }
L_003ACB50:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACB5Cu) [[unlikely]] return; }
L_003ACB5C:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 248u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[12], ld32((c.r[29].w[0] + 564u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB70u); st64((c.r[12].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACB70u) [[unlikely]] return; }
L_003ACB70:
    set32(c.r[13], ld32((c.r[29].w[0] + 564u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACB84u); st64((c.r[13].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACB84u) [[unlikely]] return; }
L_003ACB84:
    set32(c.r[14], ld32((c.r[29].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[14].w[0] + 16u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC8F0u | kUnwind; return; } goto L_003AC8F0; } }
L_003ACB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[22].w[0] - c.r[20].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC8B8u | kUnwind; return; } goto L_003AC8B8; } }
L_003ACB98:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], 0u + 1047u);
    set32(c.r[5], 0u - c.r[12].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBACu); c.r[16].d[0] = c.r[16].d[0] << 52;  if (depth < kMaxDepth) unit_00AB(c, 347u, depth + 1u); else { c.pc = 0x003AEB30u; return; } if (c.pc != 0x003ACBACu) [[unlikely]] return; }
L_003ACBAC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003ACBBCu) [[unlikely]] return; }
L_003ACBBC:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[16], c.r[22].w[0] << 2);  goto L_003ACC40; }
    set32(c.r[13], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[5], 0u + 999u);
    c.r[5].d[0] = c.r[5].d[0] << 52;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[13], c.r[13].w[0] + 24u);
    set32(c.r[17], c.r[22].w[0] << 2);
    st32((c.r[29].w[0] + 592u), c.r[13].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[29].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBECu); set32(c.r[22], c.r[22].w[0] + 1u);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACBECu) [[unlikely]] return; }
L_003ACBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003ACBF4u) [[unlikely]] return; }
L_003ACBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBFCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003ACBFCu) [[unlikely]] return; }
L_003ACBFC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC10u); set32(c.r[16], c.r[22].w[0] << 2);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACC10u) [[unlikely]] return; }
L_003ACC10:
    set32(c.r[16], c.r[16].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC20u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACC20u) [[unlikely]] return; }
L_003ACC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003ACC28u) [[unlikely]] return; }
L_003ACC28:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003ACC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACC38u);  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003ACC38u) [[unlikely]] return; }
L_003ACC38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC7D4u | kUnwind; return; } goto L_003AC7D4; } }
L_003ACC40:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACC30u | kUnwind; return; } goto L_003ACC30; } }
L_003ACC4C:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 1;
L_003ACC50:
    set32(c.r[13], c.r[13].w[0] + c.r[29].w[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    set32(c.r[15], ld32((c.r[13].w[0] - 4u)));
    c.r[15].d[0] = c.r[15].d[0] & c.r[14].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0] - 4u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC5A8u | kUnwind; return; } goto L_003AC5A8; } }
L_003ACC68:
    set32(c.r[13], c.r[22].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[14].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACC50u | kUnwind; return; } goto L_003ACC50; } }
L_003ACC74:
    set32(c.r[12], ld32((c.r[29].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[13], 0u + 2u);  if (t) { goto L_003ACC94; } }
    set32(c.r[15], c.r[22].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[14], ld32((c.r[15].w[0] - 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 23));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC530u | kUnwind; return; } goto L_003AC530; } }
L_003ACC94:
    set32(c.r[4], 0u + 511u);
    st32((c.r[29].w[0] + 596u), c.r[13].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACCA8u); c.r[4].d[0] = c.r[4].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003ACCA8u) [[unlikely]] return; }
L_003ACCA8:
    set32(c.r[14], ld32((c.r[29].w[0] + 596u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[14].d[0] = 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC530u | kUnwind; return; } goto L_003AC530; } }
L_003ACCB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x3E3F0000u);
    c.r[14].d[0] = c.r[14].d[0] & c.r[15].d[0];
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[13].d[0] = c.r[13].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 19;
    { const bool t = c.r[13].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003ACD14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD0Cu);  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003ACD0Cu) [[unlikely]] return; }
L_003ACD0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[15].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003ACDE8; } }
L_003ACD14:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD20u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACD20u) [[unlikely]] return; }
L_003ACD20:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD30u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACD30u) [[unlikely]] return; }
L_003ACD30:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 31616u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD44u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACD44u) [[unlikely]] return; }
L_003ACD44:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD54u); c.r[5].d[0] = ld64((c.r[15].w[0] + 31624u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACD54u) [[unlikely]] return; }
L_003ACD54:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACD60u) [[unlikely]] return; }
L_003ACD60:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD70u); c.r[5].d[0] = ld64((c.r[15].w[0] + 31632u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACD70u) [[unlikely]] return; }
L_003ACD70:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACD7Cu) [[unlikely]] return; }
L_003ACD7C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD8Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 31640u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACD8Cu) [[unlikely]] return; }
L_003ACD8C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACD98u) [[unlikely]] return; }
L_003ACD98:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDA8u); c.r[5].d[0] = ld64((c.r[15].w[0] + 31648u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACDA8u) [[unlikely]] return; }
L_003ACDA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ACE10; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACDBCu) [[unlikely]] return; }
L_003ACDBC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDCCu); c.r[5].d[0] = ld64((c.r[15].w[0] + 31656u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACDCCu) [[unlikely]] return; }
L_003ACDCC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDD8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACDD8u) [[unlikely]] return; }
L_003ACDD8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACDE4u) [[unlikely]] return; }
L_003ACDE4:
    c.r[15].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003ACDE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[15].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003ACE10:
    set32(c.r[5], 0u + 511u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE20u); c.r[5].d[0] = c.r[5].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACE20u) [[unlikely]] return; }
L_003ACE20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE30u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACE30u) [[unlikely]] return; }
L_003ACE30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE3Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACE3Cu) [[unlikely]] return; }
L_003ACE3C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACE48u) [[unlikely]] return; }
L_003ACE48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE54u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACE54u) [[unlikely]] return; }
L_003ACE54:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 31656u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE68u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACE68u) [[unlikely]] return; }
L_003ACE68:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACE74u) [[unlikely]] return; }
L_003ACE74:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACE80u) [[unlikely]] return; }
L_003ACE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACDE8u | kUnwind; return; } goto L_003ACDE8; } }
L_003ACE88:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3E2F0000u);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[23].d[0] = c.r[30].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[14].d[0] = c.r[14].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.budget -= 22;
    { const bool t = c.r[14].d[0] != 0ull; st32((c.r[29].w[0]), c.r[6].w[0]);  if (t) { goto L_003ACF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACEE8u);  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003ACEE8u) [[unlikely]] return; }
L_003ACEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3FE50000u);  if (t) { goto L_003ACF7C; } }
    set32(c.r[13], ld32((c.r[29].w[0])));
    c.r[15].d[0] = c.r[20].d[0] << 32;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    set32(c.r[14], c.r[13].w[0] + 1u);
    c.r[15].d[0] = c.r[23].d[0] | c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 8;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[14], ld32((c.r[29].w[0])));  if (t) { goto L_003ACF58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF18u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x003ACF18u) [[unlikely]] return; }
L_003ACF18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1023u);
    c.budget -= 2;
L_003ACF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF28u); c.r[4].d[0] = c.r[4].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003ACF28u) [[unlikely]] return; }
L_003ACF28:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003ACF2C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003ACF58:
    set32(c.r[15], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == c.r[15].d[0]; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003ACF6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1025u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACF20u | kUnwind; return; } goto L_003ACF20; } }
L_003ACF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACF28u | kUnwind; return; } goto L_003ACF28; } }
    c.budget -= 1;
L_003ACF78:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FE50000u);
    c.budget -= 1;
L_003ACF7C:
    c.r[15].d[0] = c.r[15].d[0] | 37927ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003ACFF4; } }
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] >= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ACFBC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACFA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACFA4u) [[unlikely]] return; }
L_003ACFA4:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACFB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACFB4u) [[unlikely]] return; }
L_003ACFB4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_003ACFBC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACFC8u); c.r[4].d[0] = ld64((c.r[15].w[0] + 31792u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACFC8u) [[unlikely]] return; }
L_003ACFC8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = ld64((c.r[15].w[0] + 31800u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACFE0u); c.r[22].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003ACFE0u) [[unlikely]] return; }
L_003ACFE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACFECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003ACFECu) [[unlikely]] return; }
L_003ACFEC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_003ACFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACFFCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003ACFFCu) [[unlikely]] return; }
L_003ACFFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD00Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD00Cu) [[unlikely]] return; }
L_003AD00C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 31808u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD020u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD020u) [[unlikely]] return; }
L_003AD020:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD030u); c.r[4].d[0] = ld64((c.r[15].w[0] + 31816u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD030u) [[unlikely]] return; }
L_003AD030:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD03Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD03Cu) [[unlikely]] return; }
L_003AD03C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD04Cu); c.r[4].d[0] = ld64((c.r[15].w[0] + 31824u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD04Cu) [[unlikely]] return; }
L_003AD04C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD058u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD058u) [[unlikely]] return; }
L_003AD058:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD068u); c.r[4].d[0] = ld64((c.r[15].w[0] + 31832u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD068u) [[unlikely]] return; }
L_003AD068:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD074u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD074u) [[unlikely]] return; }
L_003AD074:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD084u); c.r[4].d[0] = ld64((c.r[15].w[0] + 31840u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD084u) [[unlikely]] return; }
L_003AD084:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD090u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD090u) [[unlikely]] return; }
L_003AD090:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD0A0u); c.r[4].d[0] = ld64((c.r[15].w[0] + 31848u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD0A0u) [[unlikely]] return; }
L_003AD0A0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 31856u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD0B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD0B4u) [[unlikely]] return; }
L_003AD0B4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD0C4u); c.r[4].d[0] = ld64((c.r[15].w[0] + 31864u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD0C4u) [[unlikely]] return; }
L_003AD0C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD0D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD0D0u) [[unlikely]] return; }
L_003AD0D0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD0E0u); c.r[4].d[0] = ld64((c.r[15].w[0] + 31872u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD0E0u) [[unlikely]] return; }
L_003AD0E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD0ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD0ECu) [[unlikely]] return; }
L_003AD0EC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD0FCu); c.r[4].d[0] = ld64((c.r[15].w[0] + 31880u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD0FCu) [[unlikely]] return; }
L_003AD0FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD108u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD108u) [[unlikely]] return; }
L_003AD108:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD118u); c.r[4].d[0] = ld64((c.r[15].w[0] + 31888u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD118u) [[unlikely]] return; }
L_003AD118:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD124u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD124u) [[unlikely]] return; }
L_003AD124:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD134u); c.r[4].d[0] = ld64((c.r[15].w[0] + 31896u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD134u) [[unlikely]] return; }
L_003AD134:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD140u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD140u) [[unlikely]] return; }
L_003AD140:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD150u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD150u) [[unlikely]] return; }
L_003AD150:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD160u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD160u) [[unlikely]] return; }
L_003AD160:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD16Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD16Cu) [[unlikely]] return; }
L_003AD16C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD178u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD178u) [[unlikely]] return; }
L_003AD178:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD184u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD184u) [[unlikely]] return; }
L_003AD184:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD190u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD190u) [[unlikely]] return; }
L_003AD190:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = ld64((c.r[15].w[0] + 31904u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD1A4u) [[unlikely]] return; }
L_003AD1A4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1B0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD1B0u) [[unlikely]] return; }
L_003AD1B0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD1C0u) [[unlikely]] return; }
L_003AD1C0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FE50000u);
    c.r[15].d[0] = c.r[15].d[0] | 37927ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AD264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1DCu); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003AD1DCu) [[unlikely]] return; }
L_003AD1DC:
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 30));
    set32(c.r[4], 0u + 1u);
    c.r[15].d[0] = c.r[15].d[0] & 2ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD1F4u); set32(c.r[4], c.r[4].w[0] - c.r[15].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003AD1F4u) [[unlikely]] return; }
L_003AD1F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD204u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD204u) [[unlikely]] return; }
L_003AD204:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD214u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD214u) [[unlikely]] return; }
L_003AD214:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD220u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003AD220u) [[unlikely]] return; }
L_003AD220:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD22Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AD22Cu) [[unlikely]] return; }
L_003AD22C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD238u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AD238u) [[unlikely]] return; }
L_003AD238:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD244u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD244u) [[unlikely]] return; }
L_003AD244:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD250u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AD250u) [[unlikely]] return; }
L_003AD250:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD25Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD25Cu) [[unlikely]] return; }
L_003AD25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACF2Cu | kUnwind; return; } goto L_003ACF2C; } }
L_003AD264:
    set32(c.r[13], ld32((c.r[29].w[0])));
    set32(c.r[15], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[13].d[0] == c.r[15].d[0]; set32(c.r[17], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACF28u | kUnwind; return; } goto L_003ACF28; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = c.r[17].d[0] << 32;
    c.r[16].d[0] = c.r[18].d[0] & c.r[17].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD288u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AD288u) [[unlikely]] return; }
L_003AD288:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD294u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AD294u) [[unlikely]] return; }
L_003AD294:
    set32(c.r[4], 0u - 1025u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2A8u); c.r[4].d[0] = c.r[4].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003AD2A8u) [[unlikely]] return; }
L_003AD2A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD2BCu) [[unlikely]] return; }
L_003AD2BC:
    set32(c.r[5], 0u + 1023u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2CCu); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD2CCu) [[unlikely]] return; }
L_003AD2CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2DCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD2DCu) [[unlikely]] return; }
L_003AD2DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD2E8u) [[unlikely]] return; }
L_003AD2E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD2F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AD2F4u) [[unlikely]] return; }
L_003AD2F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD300u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AD300u) [[unlikely]] return; }
L_003AD300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACF2Cu | kUnwind; return; } goto L_003ACF2C; } }
L_003AD308:
    c.f[0] = fp::cvt_w_s(c.f[12]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[13], c.f[12]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x31FF0000u);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[12], c.f[0]);  if (t) { goto L_003AD340; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 31940u);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == 0ull; c.f[0] = ld32((c.r[14].w[0]));  if (t) { goto L_003AD44C; } }
L_003AD340:
    c.f[2] = fp::mul(c.f[12], c.f[12]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 31944u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.f[0] = ld32((c.r[14].w[0]));
    c.r[15].d[0] = c.r[15].d[0] | 39321ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 31948u);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 31952u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[14], c.r[14].w[0] + 31956u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[14], c.r[14].w[0] + 31960u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[14], c.r[14].w[0] + 31964u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 34;
    { const bool t = c.r[15].d[0] != 0ull; c.f[0] = fp::mul(c.f[2], c.f[0]);  if (t) { goto L_003AD3F8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.facc = fp::mul(c.f[2], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 31968u);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[12], c.f[13]));
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 31940u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[14].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[2], c.f[0]);  c.pc = t; return; }
L_003AD3F8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3F480000u);
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[14].sd[0] = static_cast<std::int32_t>(0x3E900000u);  if (t) { goto L_003AD410; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[14], c.r[13].w[0] + c.r[15].w[0]);
    c.budget -= 2;
L_003AD410:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.facc = fp::mul(c.f[2], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 31968u);
    c.f[1] = c.r[14].w[0];
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[3] = c.r[14].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 31940u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[12], c.f[13]));
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 15;
L_003AD44C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AD458:
    set32(c.r[29], c.r[29].w[0] - 432u);
    set32(c.r[15], c.r[6].w[0] - 3u);
    set32(c.r[13], c.r[6].w[0] + 4u);
    st64((c.r[29].w[0] + 376u), c.r[21].d[0]);
    c.r[14].d[0] = c.r[15].sd[0] < 0ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 344u), c.r[17].d[0]);
    if (c.r[14].d[0] != 0) c.r[15].d[0] = c.r[13].d[0];
    st64((c.r[29].w[0] + 360u), c.r[19].d[0]);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 3));
    st64((c.r[29].w[0] + 384u), c.r[22].d[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 336u), c.r[16].d[0]);
    c.r[13].d[0] = c.r[21].sd[0] < 0ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 352u), c.r[18].d[0]);
    set32(c.r[15], c.r[15].w[0] + 31976u);
    st64((c.r[29].w[0] + 368u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 392u), c.r[23].d[0]);
    set32(c.r[14], c.r[8].w[0] << 2);
    st64((c.r[29].w[0] + 400u), c.r[30].d[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    st64((c.r[29].w[0] + 408u), c.r[31].d[0]);
    if (c.r[13].d[0] != 0) c.r[21].d[0] = 0ull;
    st32((c.r[29].w[0] + 416u), c.f[20]);
    set32(c.r[15], c.r[21].w[0] << 3);
    set32(c.r[17], c.r[7].w[0] - 1u);
    st32((c.r[29].w[0] + 324u), c.r[8].w[0]);
    set32(c.r[16], ld32((c.r[14].w[0])));
    set32(c.r[6], c.r[6].w[0] - c.r[15].w[0]);
    st32((c.r[29].w[0] + 320u), c.r[5].w[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 328u), c.r[9].w[0]);
    set32(c.r[19], c.r[6].w[0] - 8u);
    set32(c.r[13], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 35;
    { const bool t = c.r[13].sd[0] < 0; set32(c.r[14], c.r[21].w[0] - c.r[17].w[0]);  if (t) { goto L_003AD520; } }
    set32(c.r[15], c.r[14].w[0] << 2);
    c.r[12].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] + c.r[9].w[0]);
    set32(c.r[14], c.r[29].w[0] + 80u);
    c.budget -= 5;
L_003AD4F8:
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] < 0; c.f[0] = 0u;  if (t) { goto L_003AD508; } }
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 2;
L_003AD508:
    st32((c.r[14].w[0]), c.f[0]);
    set32(c.r[13], c.r[13].w[0] - 1u);
    set32(c.r[15], c.r[15].w[0] + 4u);
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[13].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD4F8u | kUnwind; return; } goto L_003AD4F8; } }
L_003AD520:
    c.r[14].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; st32((c.r[29].w[0] + 332u), c.r[14].w[0]);  if (t) { goto L_003AD58C; } }
    set32(c.r[15], c.r[17].w[0] << 2);
    c.r[7].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[12], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[11], c.r[29].w[0] + 240u);
    c.budget -= 4;
L_003AD540:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.f[2] = 0u;  if (t) { goto L_003AD574; } }
    set32(c.r[14], c.r[12].w[0] + 80u);
    c.r[15].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[13], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_003AD554:
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.f[1] = ld32((c.r[14].w[0]));
    set32(c.r[15], c.r[15].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[14], c.r[14].w[0] - 4u);
    c.budget -= 8;
    { const bool t = c.r[13].d[0] != 0ull; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD554u | kUnwind; return; } goto L_003AD554; } }
L_003AD574:
    st32((c.r[11].w[0]), c.f[2]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.r[15].d[0] = c.r[16].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD540u | kUnwind; return; } goto L_003AD540; } }
L_003AD58C:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003AD590:
    set32(c.r[20], c.r[18].w[0] << 2);
    set32(c.r[15], c.r[20].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; c.f[20] = ld32((c.r[15].w[0] + 240u));  if (t) { goto L_003AD604; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[12].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[14], c.r[14].w[0] + 32052u);
    c.r[13].d[0] = c.r[29].d[0] + 0ull;
    c.f[4] = ld32((c.r[14].w[0]));
    set32(c.r[14], c.r[15].w[0] + 236u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32056u);
    c.f[3] = ld32((c.r[15].w[0]));
    c.budget -= 9;
L_003AD5C4:
    c.f[0] = fp::mul(c.f[20], c.f[4]);
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.f[1] = ld32((c.r[14].w[0]));
    set32(c.r[14], c.r[14].w[0] - 4u);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[15], c.f[2]);
    c.f[2] = c.r[15].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[5] = fp::cvt_w_s(c.f[0]);
    c.f[20] = fp::add(c.f[1], c.f[2]);
    set32(c.r[15], c.f[5]);
    st32((c.r[13].w[0]), c.r[15].w[0]);
    c.budget -= 16;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD5C4u | kUnwind; return; } goto L_003AD5C4; } }
L_003AD604:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD614u); c.r[30].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 402u, depth + 1u); else { c.pc = 0x003AF460u; return; } if (c.pc != 0x003AD614u) [[unlikely]] return; }
L_003AD614:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[20] = c.f[0];
    set32(c.r[14], c.r[14].w[0] + 32060u);
    c.f[12] = ld32((c.r[14].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD62Cu); c.f[12] = fp::mul(c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_00AB(c, 392u, depth + 1u); else { c.pc = 0x003AF2A8u; return; } if (c.pc != 0x003AD62Cu) [[unlikely]] return; }
L_003AD62C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32064u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[23], c.f[0]);
    c.f[0] = c.r[23].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[19].sd[0] <= 0; c.f[20] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_003ADC44; } }
    set32(c.r[12], c.r[20].w[0] + c.r[29].w[0]);
    set32(c.r[15], 0u + 8u);
    set32(c.r[13], ld32((c.r[12].w[0] - 4u)));
    set32(c.r[15], c.r[15].w[0] - c.r[19].w[0]);
    set32(c.r[14], 0u + 7u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> (c.r[15].w[0] & 31u)));
    set32(c.r[14], c.r[14].w[0] - c.r[19].w[0]);
    set32(c.r[15], c.r[9].w[0] << (c.r[15].w[0] & 31u));
    set32(c.r[23], c.r[23].w[0] + c.r[9].w[0]);
    set32(c.r[13], c.r[13].w[0] - c.r[15].w[0]);
    st32((c.r[12].w[0] - 4u), c.r[13].w[0]);
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> (c.r[14].w[0] & 31u)));
    c.budget -= 12;
L_003AD688:
    c.budget -= 2;
    if (c.r[30].sd[0] <= 0) { c.f[0] = 0u;  goto L_003AD720; }
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_003AD6D4; } }
    set32(c.r[9], 0u + 256u);
    set32(c.r[10], 0u + 255u);
    c.r[13].d[0] = c.r[29].d[0] + 0ull;
    c.r[12].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_003AD6AC:
    set32(c.r[14], ld32((c.r[13].w[0])));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[15], c.r[10].w[0] - c.r[14].w[0]);  if (t) { goto L_003AD6C4; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[15], c.r[9].w[0] - c.r[14].w[0]);  if (t) { goto L_003AD6C8; } }
    set32(c.r[11], 0u + 1u);
    c.budget -= 1;
L_003AD6C4:
    st32((c.r[13].w[0]), c.r[15].w[0]);
    c.budget -= 1;
L_003AD6C8:
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD6ACu | kUnwind; return; } goto L_003AD6AC; } }
L_003AD6D4:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; set32(c.r[15], 0u + 1u);  if (t) { goto L_003AD6F0; } }
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[15].d[0]) { set32(c.r[14], c.r[20].w[0] + c.r[29].w[0]);  goto L_003ADC38; }
    set32(c.r[15], 0u + 2u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[15].d[0]) { set32(c.r[14], c.r[20].w[0] + c.r[29].w[0]);  goto L_003ADC28; }
L_003AD6F0:
    set32(c.r[15], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != c.r[15].d[0]; c.f[0] = 0u;  if (t) { goto L_003AD720; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32072u);
    c.f[12] = ld32((c.r[15].w[0]));
    c.budget -= 5;
    { const bool t = c.r[11].d[0] == 0ull; c.f[20] = fp::sub(c.f[12], c.f[20]);  if (t) { goto L_003AD720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD718u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 402u, depth + 1u); else { c.pc = 0x003AF460u; return; } if (c.pc != 0x003AD718u) [[unlikely]] return; }
L_003AD718:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.f[0] = 0u;
    c.budget -= 2;
L_003AD720:
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[9], c.r[18].w[0] - 1u);  if (t) { goto L_003ADB98; } }
    c.r[15].d[0] = c.r[9].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_003AD764; } }
    set32(c.r[15], c.r[9].w[0] << 2);
    c.r[13].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[12], c.r[15].w[0] + c.r[29].w[0]);
    c.budget -= 3;
L_003AD744:
    set32(c.r[15], ld32((c.r[12].w[0])));
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.r[14].d[0] = c.r[9].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    c.budget -= 7;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[12], c.r[12].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD744u | kUnwind; return; } goto L_003AD744; } }
    c.r[14].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 1;
L_003AD764:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != 0ull; c.f[0] = 0u;  if (t) { goto L_003AD864; } }
    set32(c.r[15], c.r[16].w[0] - 1u);
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[14], ld32((c.r[15].w[0])));
    c.budget -= 6;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[12], 0u + 1u);  if (t) { goto L_003AD7AC; } }
    set32(c.r[15], c.r[16].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[14], c.r[15].w[0] - 4u);
    c.budget -= 3;
L_003AD790:
    set32(c.r[14], c.r[14].w[0] - 4u);
    set32(c.r[15], ld32((c.r[14].w[0])));
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD790u | kUnwind; return; } goto L_003AD790; } }
L_003AD7AC:
    set32(c.r[6], c.r[18].w[0] + c.r[12].w[0]);
    set32(c.r[9], c.r[18].w[0] + 1u);
    c.r[15].d[0] = c.r[6].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD590u | kUnwind; return; } goto L_003AD590; } }
    set32(c.r[14], c.r[9].w[0] << 2);
    set32(c.r[15], c.r[17].w[0] << 2);
    set32(c.r[15], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[13], c.r[21].w[0] + c.r[9].w[0]);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[12], c.r[17].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[15].w[0] + 80u);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[15], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + c.r[29].w[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[29].w[0]);
    set32(c.r[14], c.r[14].w[0] + 240u);
    set32(c.r[13], c.r[13].w[0] + c.r[15].w[0]);
    c.r[7].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 15;
L_003AD7FC:
    c.f[0] = ld32((c.r[13].w[0]));
    c.f[2] = 0u;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[8].w[0]), c.f[0]);  if (t) { goto L_003AD83C; } }
    set32(c.r[11], c.r[12].w[0] + 80u);
    c.r[15].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[10], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_003AD81C:
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.f[1] = ld32((c.r[11].w[0]));
    set32(c.r[15], c.r[15].w[0] + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[11], c.r[11].w[0] - 4u);
    c.budget -= 8;
    { const bool t = c.r[10].d[0] != 0ull; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD81Cu | kUnwind; return; } goto L_003AD81C; } }
L_003AD83C:
    st32((c.r[14].w[0]), c.f[2]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[13], c.r[13].w[0] + 4u);
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.r[15].d[0] = c.r[6].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[12], c.r[12].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD7FCu | kUnwind; return; } goto L_003AD7FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD590u | kUnwind; return; } goto L_003AD590; } }
L_003AD864:
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = c.f[20];  if (t) { goto L_003ADB9C; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[15], c.r[18].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[14], ld32((c.r[15].w[0])));
    c.budget -= 6;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 8u);  if (t) { goto L_003AD8A8; } }
    c.r[14].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 1;
L_003AD88C:
    set32(c.r[14], c.r[14].w[0] - 4u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[15], ld32((c.r[14].w[0])));
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD88Cu | kUnwind; return; } goto L_003AD88C; } }
L_003AD8A8:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[14], c.r[14].w[0] + 32072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD8BCu); c.f[12] = ld32((c.r[14].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 402u, depth + 1u); else { c.pc = 0x003AF460u; return; } if (c.pc != 0x003AD8BCu) [[unlikely]] return; }
L_003AD8BC:
    c.f[2] = c.f[0];
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; c.r[9].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AD980; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[18].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + 32052u);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.budget -= 5;
L_003AD8DC:
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[15].w[0] + 240u), c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[15], c.r[15].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD8DCu | kUnwind; return; } goto L_003AD8DC; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; c.r[9].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AD980; } }
    set32(c.r[14], c.r[18].w[0] << 2);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[15].w[0] + 31992u);
    set32(c.r[14], c.r[14].w[0] + c.r[29].w[0]);
    c.budget -= 4;
L_003AD914:
    c.f[2] = 0u;
    set32(c.r[15], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_003ADB90; } }
    set32(c.r[8], c.r[18].w[0] - c.r[9].w[0]);
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] < 0; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003AD968; } }
    set32(c.r[11], c.r[14].w[0] + 240u);
    c.r[13].d[0] = c.r[6].d[0] + 0ull;
    c.f[0] = ld32((c.r[13].w[0]));
    c.budget -= 3;
L_003AD93C:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.f[1] = ld32((c.r[11].w[0]));
    c.r[10].d[0] = c.r[7].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    set32(c.r[13], c.r[13].w[0] + 4u);
    c.r[15].d[0] = c.r[16].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.budget -= 9;
    { const bool t = c.r[15].d[0] != 0ull; c.f[2] = fp::add(c.f[2], c.f[0]);  if (t) { goto L_003AD968; } }
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { c.f[0] = ld32((c.r[13].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD93Cu | kUnwind; return; } goto L_003AD93C; }
L_003AD968:
    set32(c.r[15], c.r[8].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] - 4u);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] >= 0; st32((c.r[15].w[0] + 160u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD914u | kUnwind; return; } goto L_003AD914; } }
L_003AD980:
    set32(c.r[14], ld32((c.r[29].w[0] + 324u)));
    c.r[15].d[0] = c.r[14].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { set32(c.r[15], 0u + 3u);  goto L_003ADA94; }
    c.budget -= 2;
    if (c.r[14].sd[0] > 0) { c.f[2] = 0u;  goto L_003ADA18; }
    c.budget -= 2;
    if (c.r[14].d[0] == 0ull) { c.f[2] = 0u;  goto L_003AD9D8; }
L_003AD9A0:
    c.r[2].d[0] = c.r[23].d[0] & 7ull;
    c.budget -= 1;
L_003AD9A4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 336u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 344u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 352u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 360u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 368u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 376u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 384u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 392u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 400u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 408u));
    c.f[20] = ld32((c.r[29].w[0] + 416u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_003AD9D8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; c.r[9].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003ADA00; } }
    set32(c.r[15], c.r[18].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[15], c.r[15].w[0] + 160u);
    c.budget -= 3;
L_003AD9EC:
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[15], c.r[15].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD9ECu | kUnwind; return; } goto L_003AD9EC; } }
L_003ADA00:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; c.f[0] = c.f[2];  if (t) { goto L_003ADA0C; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_003ADA0C:
    set32(c.r[15], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD9A0u | kUnwind; return; } goto L_003AD9A0; } }
L_003ADA18:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; c.r[9].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003ADA40; } }
    set32(c.r[15], c.r[18].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[15], c.r[15].w[0] + 160u);
    c.budget -= 3;
L_003ADA2C:
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[15], c.r[15].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADA2Cu | kUnwind; return; } goto L_003ADA2C; } }
L_003ADA40:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; c.f[0] = c.f[2];  if (t) { goto L_003ADA4C; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_003ADA4C:
    set32(c.r[14], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[14].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] <= 0; c.f[2] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_003ADA7C; } }
    c.r[14].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[13], c.r[29].w[0] + 164u);
    c.budget -= 2;
L_003ADA68:
    c.f[0] = ld32((c.r[13].w[0]));
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADA68u | kUnwind; return; } goto L_003ADA68; } }
L_003ADA7C:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; c.f[0] = c.f[2];  if (t) { goto L_003ADA88; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_003ADA88:
    set32(c.r[15], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_003ADA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD9A0u | kUnwind; return; } goto L_003AD9A0; } }
L_003ADA94:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != c.r[15].d[0]; c.r[2].d[0] = c.r[23].d[0] & 7ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD9A4u | kUnwind; return; } goto L_003AD9A4; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[9].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003ADAD4; } }
    set32(c.r[15], c.r[18].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    c.budget -= 2;
L_003ADAAC:
    c.f[0] = ld32((c.r[15].w[0] + 156u));
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.f[1] = ld32((c.r[15].w[0] + 160u));
    c.f[2] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[15].w[0] + 156u), c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[15].w[0] + 160u), c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[9].sd[0] > 0; set32(c.r[15], c.r[15].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADAACu | kUnwind; return; } goto L_003ADAAC; } }
L_003ADAD4:
    c.r[15].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.r[9].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003ADB14; } }
    set32(c.r[15], c.r[18].w[0] << 2);
    set32(c.r[12], c.r[15].w[0] + c.r[29].w[0]);
    c.budget -= 2;
L_003ADAE8:
    c.f[1] = ld32((c.r[12].w[0] + 156u));
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.f[0] = ld32((c.r[12].w[0] + 160u));
    c.r[15].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.f[2] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[12].w[0] + 156u), c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[12].w[0] + 160u), c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[12], c.r[12].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADAE8u | kUnwind; return; } goto L_003ADAE8; } }
L_003ADB14:
    c.f[2] = 0u;
    c.r[15].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[9].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003ADB48; } }
    set32(c.r[15], c.r[18].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[29].w[0]);
    set32(c.r[12], c.r[15].w[0] + 160u);
    c.budget -= 3;
L_003ADB30:
    c.f[0] = ld32((c.r[12].w[0]));
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.r[15].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[12], c.r[12].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADB30u | kUnwind; return; } goto L_003ADB30; } }
L_003ADB48:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.f[1] = ld32((c.r[29].w[0] + 160u));  if (t) { goto L_003ADB6C; } }
    set32(c.r[14], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[14].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[14].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0] + 4u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD9A0u | kUnwind; return; } goto L_003AD9A0; } }
L_003ADB6C:
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.f[2] = c.f[2] ^ fp::kSign;
    set32(c.r[15], ld32((c.r[29].w[0] + 320u)));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[15].w[0] + 8u), c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADA8Cu | kUnwind; return; } goto L_003ADA8C; } }
    c.budget -= 1;
L_003ADB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[18].w[0] - c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD968u | kUnwind; return; } goto L_003AD968; } }
L_003ADB98:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003ADB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADBA4u); set32(c.r[4], 0u - c.r[19].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 402u, depth + 1u); else { c.pc = 0x003AF460u; return; } if (c.pc != 0x003ADBA4u) [[unlikely]] return; }
L_003ADBA4:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 32056u);
    c.f[1] = ld32((c.r[14].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_003ADC14; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[20].w[0] + c.r[29].w[0]);
    set32(c.r[15], c.r[15].w[0] + 32052u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[14], c.r[18].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[15], c.f[2]);
    c.f[2] = c.r[15].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[15], c.f[1]);
    st32((c.r[13].w[0]), c.r[15].w[0]);
    set32(c.r[15], c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0]), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD8A8u | kUnwind; return; } goto L_003AD8A8; } }
L_003ADC14:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[15], c.r[20].w[0] + c.r[29].w[0]);
    set32(c.r[14], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0]), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD8A8u | kUnwind; return; } goto L_003AD8A8; } }
L_003ADC28:
    set32(c.r[15], ld32((c.r[14].w[0] - 4u)));
    c.r[15].d[0] = c.r[15].d[0] & 63ull;
    c.budget -= 2;
L_003ADC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[14].w[0] - 4u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD6F0u | kUnwind; return; } goto L_003AD6F0; } }
L_003ADC38:
    set32(c.r[15], ld32((c.r[14].w[0] - 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[15].d[0] & 127ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADC30u | kUnwind; return; } goto L_003ADC30; } }
L_003ADC44:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ADC5C; } }
    set32(c.r[15], c.r[20].w[0] + c.r[29].w[0]);
    set32(c.r[14], ld32((c.r[15].w[0] - 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 8));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD688u | kUnwind; return; } goto L_003AD688; } }
L_003ADC5C:
    set32(c.r[14], c.r[14].w[0] + 32068u);
    c.f[0] = ld32((c.r[14].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[30], 0u + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD688u | kUnwind; return; } goto L_003AD688; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD688u | kUnwind; return; } goto L_003AD688; } }
L_003ADC78:
    c.f[0] = fp::cvt_w_s(c.f[12]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[15], c.f[12]);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x31FF0000u);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].d[0] & c.r[13].d[0];
    set32(c.r[12], c.f[0]);
    c.r[14].d[0] = c.r[14].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[14].d[0] != 0ull; c.f[0] = c.f[12];  if (t) { goto L_003ADCAC; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_003ADD64; } }
L_003ADCAC:
    c.f[2] = fp::mul(c.f[12], c.f[12]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32108u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 32112u);
    c.f[3] = fp::mul(c.f[2], c.f[12]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32116u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 32120u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 32124u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.budget -= 26;
    { const bool t = c.r[4].d[0] != 0ull; c.f[0] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_003ADD34; } }
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32128u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::add(c.f[12], c.f[0]);  c.pc = t; return; }
L_003ADD34:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32132u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.facc = fp::mul(c.f[13], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    set32(c.r[15], c.r[15].w[0] + 32128u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.facc = fp::sub(c.f[0], c.f[13]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 12;
L_003ADD64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003ADD70:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[11], c.f[12]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x317F0000u);
    c.r[13].d[0] = c.r[11].d[0] & c.r[14].d[0];
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[15].d[0] != 0ull; c.f[5] = c.f[12];  if (t) { goto L_003ADE18; } }
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[15], c.f[0]);
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3F2C0000u);  if (t) { goto L_003ADE1C; } }
    set32(c.r[15], c.r[4].w[0] + 1u);
    c.r[15].d[0] = c.r[13].d[0] | c.r[15].d[0];
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], 0u + 1u);  if (t) { goto L_003ADDEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADDC4u);  if (depth < kMaxDepth) unit_00AB(c, 390u, depth + 1u); else { c.pc = 0x003AF288u; return; } if (c.pc != 0x003ADDC4u) [[unlikely]] return; }
L_003ADDC4:
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[12], c.r[12].w[0] + 32204u);
    c.f[1] = ld32((c.r[12].w[0]));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 7;
L_003ADDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003ADDE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ADDEC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[15].d[0]; c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ADE10; } }
    set32(c.r[13], c.r[13].w[0] + 32208u);
    c.f[0] = ld32((c.r[13].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[12]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDE4u | kUnwind; return; } goto L_003ADDE4; } }
L_003ADE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[12];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDE0u | kUnwind; return; } goto L_003ADDE0; } }
L_003ADE18:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3F2C0000u);
    c.budget -= 1;
L_003ADE1C:
    c.r[15].d[0] = c.r[15].d[0] | 41279ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { c.f[0] = fp::mul(c.f[5], c.f[5]);  goto L_003ADE64; }
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] >= 0; c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ADE3C; } }
    c.f[5] = c.f[5] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 2;
L_003ADE3C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 32212u);
    set32(c.r[15], c.r[15].w[0] + 32216u);
    c.f[0] = ld32((c.r[14].w[0]));
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[1] = fp::sub(c.f[1], c.f[13]);
    c.f[5] = fp::add(c.f[0], c.f[1]);
    c.f[13] = 0u;
    c.f[0] = fp::mul(c.f[5], c.f[5]);
    c.budget -= 10;
L_003ADE64:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3F2C0000u);
    c.r[15].d[0] = c.r[15].d[0] | 41279ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[12], c.f[0]);
    set32(c.r[13], c.r[13].w[0] + 32220u);
    c.f[1] = c.r[12].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[4] = fp::mul(c.f[1], c.f[5]);
    set32(c.r[14], c.f[0]);
    c.f[0] = ld32((c.r[13].w[0]));
    c.f[1] = c.r[14].w[0];
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = c.r[14].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[13], c.r[13].w[0] + 32224u);
    c.f[1] = ld32((c.r[13].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 32228u);
    c.f[2] = ld32((c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[13], c.r[13].w[0] + 32232u);
    c.f[3] = ld32((c.r[13].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = c.r[14].w[0];
    set32(c.r[13], c.r[13].w[0] + 32236u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[13], c.r[13].w[0] + 32240u);
    c.f[3] = ld32((c.r[13].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = c.r[14].w[0];
    set32(c.r[13], c.r[13].w[0] + 32244u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[13], c.r[13].w[0] + 32248u);
    c.f[3] = ld32((c.r[13].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = c.r[14].w[0];
    set32(c.r[13], c.r[13].w[0] + 32252u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[13], c.r[13].w[0] + 32256u);
    c.f[3] = ld32((c.r[13].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = c.r[14].w[0];
    set32(c.r[13], c.r[13].w[0] + 32260u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[14], c.r[14].w[0] + 32264u);
    c.f[3] = ld32((c.r[14].w[0]));
    c.f[2] = ld32((c.r[13].w[0]));
    c.facc = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = c.r[12].w[0];
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    set32(c.r[12], c.r[12].w[0] + 32268u);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[13]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[12].w[0]));
    c.facc = fp::add(c.f[13], c.f[0]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.f[5], c.f[3]);
    c.budget -= 83;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], c.f[0]);  if (t) { goto L_003AE000; } }
    c.f[12] = c.r[4].w[0];
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 30));
    c.f[1] = c.f[0];
    c.r[14].d[0] = c.r[14].d[0] & 2ull;
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[15], 0u + 1u);
    set32(c.r[15], c.r[15].w[0] - c.r[14].w[0]);
    c.f[2] = c.r[15].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[12]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[2], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDE0u | kUnwind; return; } goto L_003ADDE0; } }
L_003AE000:
    set32(c.r[15], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[15].d[0]; c.r[12].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDE0u | kUnwind; return; } goto L_003ADDE0; } }
    set32(c.r[13], 0u - 4096u);
    set32(c.r[12], c.r[12].w[0] + 32208u);
    c.f[2] = ld32((c.r[12].w[0]));
    fpu_div(c, 2u, c.f[2], c.f[0]);
    c.r[12].d[0] = c.r[14].d[0] & c.r[13].d[0];
    c.f[1] = c.r[12].w[0];
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[12], c.r[12].w[0] + 32204u);
    c.f[0] = fp::sub(c.f[1], c.f[5]);
    set32(c.r[15], c.f[2]);
    c.r[14].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.f[12] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = c.r[14].w[0];
    c.f[3] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[12].w[0]));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = c.r[14].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[12]));
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDE0u | kUnwind; return; } goto L_003ADDE0; } }
L_003AE068:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x440F0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[16].d[0] = c.r[19].d[0] & c.r[15].d[0];
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[14].d[0] = c.r[14].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[14].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AE124; } }
    c.r[13].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[14].d[0] = c.r[4].d[0] << 32;
    c.r[15].d[0] = c.r[13].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);  if (t) { goto L_003AE0CC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[13].d[0];  if (t) { goto L_003AE0FC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_003AE0FC; } }
L_003AE0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE0D4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE0D4u) [[unlikely]] return; }
L_003AE0D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003AE0D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AE0FC:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AE10C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld64((c.r[15].w[0] + 32440u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE0D8u | kUnwind; return; } goto L_003AE0D8; } }
L_003AE10C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 32440u));
    c.budget -= 2;
L_003AE114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE11Cu);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AE11Cu) [[unlikely]] return; }
L_003AE11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE0D8u | kUnwind; return; } goto L_003AE0D8; } }
L_003AE124:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FDB0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3E1F0000u);  if (t) { goto L_003AE33C; } }
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], 0u - 1u);  if (t) { goto L_003AE170; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE154u); c.r[5].d[0] = ld64((c.r[15].w[0] + 32448u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE154u) [[unlikely]] return; }
L_003AE154:
    set32(c.r[4], 0u + 1023u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE164u); c.r[4].d[0] = c.r[4].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AE164u) [[unlikely]] return; }
L_003AE164:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE0D8u | kUnwind; return; } goto L_003AE0D8; } }
    set32(c.r[20], 0u - 1u);
    c.budget -= 1;
L_003AE170:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE17Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE17Cu) [[unlikely]] return; }
L_003AE17C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE18Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE18Cu) [[unlikely]] return; }
L_003AE18C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 32456u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE1A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE1A0u) [[unlikely]] return; }
L_003AE1A0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE1B0u); c.r[4].d[0] = ld64((c.r[15].w[0] + 32464u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE1B0u) [[unlikely]] return; }
L_003AE1B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE1BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE1BCu) [[unlikely]] return; }
L_003AE1BC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE1CCu); c.r[4].d[0] = ld64((c.r[15].w[0] + 32472u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE1CCu) [[unlikely]] return; }
L_003AE1CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE1D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE1D8u) [[unlikely]] return; }
L_003AE1D8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE1E8u); c.r[4].d[0] = ld64((c.r[15].w[0] + 32480u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE1E8u) [[unlikely]] return; }
L_003AE1E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE1F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE1F4u) [[unlikely]] return; }
L_003AE1F4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE204u); c.r[4].d[0] = ld64((c.r[15].w[0] + 32488u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE204u) [[unlikely]] return; }
L_003AE204:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE210u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE210u) [[unlikely]] return; }
L_003AE210:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE220u); c.r[4].d[0] = ld64((c.r[15].w[0] + 32496u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE220u) [[unlikely]] return; }
L_003AE220:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE22Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE22Cu) [[unlikely]] return; }
L_003AE22C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 32504u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE240u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE240u) [[unlikely]] return; }
L_003AE240:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE250u); c.r[4].d[0] = ld64((c.r[15].w[0] + 32512u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE250u) [[unlikely]] return; }
L_003AE250:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE25Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE25Cu) [[unlikely]] return; }
L_003AE25C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE26Cu); c.r[4].d[0] = ld64((c.r[15].w[0] + 32520u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE26Cu) [[unlikely]] return; }
L_003AE26C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE278u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE278u) [[unlikely]] return; }
L_003AE278:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE288u); c.r[4].d[0] = ld64((c.r[15].w[0] + 32528u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE288u) [[unlikely]] return; }
L_003AE288:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE294u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE294u) [[unlikely]] return; }
L_003AE294:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE2A4u); c.r[4].d[0] = ld64((c.r[15].w[0] + 32536u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE2A4u) [[unlikely]] return; }
L_003AE2A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE2B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE2B0u) [[unlikely]] return; }
L_003AE2B0:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AE2D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE2C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE2C0u) [[unlikely]] return; }
L_003AE2C0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE2CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE2CCu) [[unlikely]] return; }
L_003AE2CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE114u | kUnwind; return; } goto L_003AE114; } }
L_003AE2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE2E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE2E0u) [[unlikely]] return; }
L_003AE2E0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE2F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE2F0u) [[unlikely]] return; }
L_003AE2F0:
    set32(c.r[16], c.r[20].w[0] << 3);
    set32(c.r[17], c.r[17].w[0] + 32272u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32304u);
    set32(c.r[17], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[15].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE314u); c.r[5].d[0] = ld64((c.r[16].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AE314u) [[unlikely]] return; }
L_003AE314:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE320u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AE320u) [[unlikely]] return; }
L_003AE320:
    c.r[4].d[0] = ld64((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE32Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AE32Cu) [[unlikely]] return; }
L_003AE32C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE0D8u | kUnwind; return; } goto L_003AE0D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE114u | kUnwind; return; } goto L_003AE114; } }
L_003AE33C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE344u);  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x003AE344u) [[unlikely]] return; }
L_003AE344:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FF20000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003AE3EC; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FE50000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[16], 0u + 1023u);  if (t) { goto L_003AE3B8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE378u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE378u) [[unlikely]] return; }
L_003AE378:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1023u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE38Cu); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AE38Cu) [[unlikely]] return; }
L_003AE38C:
    set32(c.r[5], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE3A0u); c.r[5].d[0] = c.r[5].d[0] << 62;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE3A0u) [[unlikely]] return; }
L_003AE3A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003AE3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE3B0u);  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003AE3B0u) [[unlikely]] return; }
L_003AE3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE170u | kUnwind; return; } goto L_003AE170; } }
L_003AE3B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] << 52;
    set32(c.r[20], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE3CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AE3CCu) [[unlikely]] return; }
L_003AE3CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_003AE3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE3E0u);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE3E0u) [[unlikely]] return; }
L_003AE3E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE3A8u | kUnwind; return; } goto L_003AE3A8; } }
L_003AE3EC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x40030000u);
    c.r[15].d[0] = c.r[15].d[0] | 32767ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[15].d[0] != 0ull) { set32(c.r[4], 0u - 1025u);  goto L_003AE438; }
    set32(c.r[16], 0u + 2047u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] << 51;
    set32(c.r[20], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE418u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AE418u) [[unlikely]] return; }
L_003AE418:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE428u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE428u) [[unlikely]] return; }
L_003AE428:
    set32(c.r[5], 0u + 1023u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] << 52;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE3D8u | kUnwind; return; } goto L_003AE3D8; } }
L_003AE438:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 52;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE3A8u | kUnwind; return; } goto L_003AE3A8; } }
L_003AE448:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 20));
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[14].d[0] = c.r[14].d[0] & 2047ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[18].d[0] = c.r[4].d[0] << 32;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[16], c.r[14].w[0] - 1023u);
    c.r[15].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[15].d[0] == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (t) { goto L_003AE570; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[14].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_003AE518; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE49Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 32552u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE49Cu) [[unlikely]] return; }
L_003AE49C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE4A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AE4A8u) [[unlikely]] return; }
L_003AE4A8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[19].d[0] << 32;  goto L_003AE4C4; }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[15].d[0] = c.r[17].d[0] | c.r[18].d[0];  if (t) { goto L_003AE508; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_003AE4BC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AE4C0:
    c.r[19].d[0] = c.r[19].d[0] << 32;
    c.budget -= 1;
L_003AE4C4:
    c.r[15].d[0] = c.r[17].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] >> 32;
    c.r[14].d[0] = c.r[18].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] | c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    set32(c.r[15], 0u - 1u);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] & c.r[15].d[0];
    c.r[2].d[0] = c.r[19].d[0] | c.r[14].d[0];
    c.budget -= 9;
L_003AE4E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AE4EC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AE508:
    c.budget -= 2;
    if (c.r[15].d[0] == 0ull) { c.r[19].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE4C4u | kUnwind; return; } goto L_003AE4C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x3FF00000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE4BCu | kUnwind; return; } goto L_003AE4BC; } }
L_003AE518:
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> (c.r[16].w[0] & 31u)));
    c.r[15].d[0] = c.r[17].d[0] & c.r[20].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[18].d[0];
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE4E8u | kUnwind; return; } goto L_003AE4E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE538u); c.r[5].d[0] = ld64((c.r[15].w[0] + 32552u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE538u) [[unlikely]] return; }
L_003AE538:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE544u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AE544u) [[unlikely]] return; }
L_003AE544:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE4C4u | kUnwind; return; } goto L_003AE4C4; }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_003AE55C; } }
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> (c.r[16].w[0] & 31u)));
    set32(c.r[17], c.r[17].w[0] + c.r[15].w[0]);
    c.budget -= 2;
L_003AE55C:
    c.r[15].d[0] = ~(0ull | c.r[20].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE4C0u | kUnwind; return; } goto L_003AE4C0; } }
    c.budget -= 1;
L_003AE570:
    c.r[15].d[0] = c.r[16].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], c.r[14].w[0] - 1043u);  if (t) { goto L_003AE598; } }
    set32(c.r[15], 0u + 1024u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[15].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE4ECu | kUnwind; return; } goto L_003AE4EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE590u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE590u) [[unlikely]] return; }
L_003AE590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE4ECu | kUnwind; return; } goto L_003AE4EC; } }
L_003AE598:
    set32(c.r[14], 0u - 1u);
    set32(c.r[20], c.r[14].w[0] >> (c.r[15].w[0] & 31u));
    c.r[13].d[0] = c.r[18].d[0] & c.r[20].d[0];
    c.budget -= 5;
    { const bool t = c.r[13].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE4E8u | kUnwind; return; } goto L_003AE4E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE5B4u); c.r[5].d[0] = ld64((c.r[15].w[0] + 32552u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE5B4u) [[unlikely]] return; }
L_003AE5B4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE5C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AE5C0u) [[unlikely]] return; }
L_003AE5C0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE4C4u | kUnwind; return; } goto L_003AE4C4; }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[15], 0u + 20u);  if (t) { goto L_003AE5DC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; set32(c.r[15], 0u + 52u);  if (t) { goto L_003AE5E8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003AE5DC:
    c.r[15].d[0] = ~(0ull | c.r[20].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] & c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE4C0u | kUnwind; return; } goto L_003AE4C0; } }
L_003AE5E8:
    set32(c.r[14], 0u + 1u);
    set32(c.r[15], c.r[15].w[0] - c.r[16].w[0]);
    set32(c.r[14], c.r[14].w[0] << (c.r[15].w[0] & 31u));
    set32(c.r[14], c.r[18].w[0] + c.r[14].w[0]);
    c.r[15].d[0] = c.r[14].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[15].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[14].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE5DCu | kUnwind; return; } goto L_003AE5DC; } }
L_003AE608:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[13].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[15].d[0] = c.r[15].d[0] & c.r[14].d[0];
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[14].d[0] = c.r[4].d[0] << 32;
    c.r[15].d[0] = c.r[15].d[0] | c.r[12].d[0];
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[14].d[0] | c.r[15].d[0];  c.pc = t; return; }
L_003AE640:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3FE90000u);
    c.r[13].d[0] = c.r[13].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] | 8699ull;
    c.r[14].d[0] = c.r[14].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[14].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AE684; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AE670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE678u);  if (depth < kMaxDepth) unit_00AB(c, 4u, depth + 1u); else { c.pc = 0x003AC028u; return; } if (c.pc != 0x003AE678u) [[unlikely]] return; }
L_003AE678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AE67C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AE684:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_003AE6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE6A0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 279u, depth + 1u); else { c.pc = 0x003A9AD8u; return; } if (c.pc != 0x003AE6A0u) [[unlikely]] return; }
L_003AE6A0:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[15], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003AE708; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 2u);  if (t) { goto L_003AE6E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AE6D4; } }
L_003AE6C0:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE6CCu); c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 120u, depth + 1u); else { c.pc = 0x003ACCB8u; return; } if (c.pc != 0x003AE6CCu) [[unlikely]] return; }
L_003AE6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE67Cu | kUnwind; return; } goto L_003AE67C; } }
L_003AE6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE670u | kUnwind; return; } goto L_003AE670; } }
    c.budget -= 1;
L_003AE6E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[15].d[0]; c.r[4].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE6C0u | kUnwind; return; } goto L_003AE6C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE6F0u); c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 4u, depth + 1u); else { c.pc = 0x003AC028u; return; } if (c.pc != 0x003AE6F0u) [[unlikely]] return; }
L_003AE6F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003AE6F4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AE6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE700u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AE700u) [[unlikely]] return; }
L_003AE700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE67Cu | kUnwind; return; } goto L_003AE67C; } }
L_003AE708:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE718u); c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 120u, depth + 1u); else { c.pc = 0x003ACCB8u; return; } if (c.pc != 0x003AE718u) [[unlikely]] return; }
L_003AE718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE6F4u | kUnwind; return; } goto L_003AE6F4; } }
L_003AE720:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[13].d[0] = c.r[4].d[0] << 32;
    c.r[14].d[0] = c.r[14].d[0] & c.r[15].d[0];
    c.r[13].d[0] = c.r[13].d[0] >> 32;
    c.r[14].d[0] = c.r[14].d[0] << 32;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[13].d[0] | c.r[14].d[0];  c.pc = t; return; }
L_003AE748:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x80100000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[14].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[15].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 31);  c.pc = t; return; }
L_003AE768:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 20));
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[14].d[0] = c.r[14].d[0] & 2047ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[18].d[0] = c.r[4].d[0] << 32;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[16], c.r[14].w[0] - 1023u);
    c.r[15].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[15].d[0] == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (t) { goto L_003AE8A0; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[14].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_003AE848; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE7BCu); c.r[5].d[0] = ld64((c.r[15].w[0] + 32568u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE7BCu) [[unlikely]] return; }
L_003AE7BC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE7C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AE7C8u) [[unlikely]] return; }
L_003AE7C8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[19].d[0] << 32;  goto L_003AE7E4; }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003AE828; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003AE7E0:
    c.r[19].d[0] = c.r[19].d[0] << 32;
    c.budget -= 1;
L_003AE7E4:
    c.r[15].d[0] = c.r[17].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] >> 32;
    c.r[14].d[0] = c.r[18].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] | c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    set32(c.r[15], 0u - 1u);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] & c.r[15].d[0];
    c.r[2].d[0] = c.r[19].d[0] | c.r[14].d[0];
    c.budget -= 9;
L_003AE808:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AE80C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AE828:
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[17].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[18].d[0];
    c.budget -= 5;
    if (c.r[15].d[0] == 0ull) { c.r[19].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE7E4u | kUnwind; return; } goto L_003AE7E4; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0xBFF00000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE7E0u | kUnwind; return; } goto L_003AE7E0; } }
L_003AE848:
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> (c.r[16].w[0] & 31u)));
    c.r[15].d[0] = c.r[17].d[0] & c.r[20].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[18].d[0];
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE808u | kUnwind; return; } goto L_003AE808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE868u); c.r[5].d[0] = ld64((c.r[15].w[0] + 32568u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE868u) [[unlikely]] return; }
L_003AE868:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE874u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AE874u) [[unlikely]] return; }
L_003AE874:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE7E4u | kUnwind; return; } goto L_003AE7E4; }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[15].d[0] = ~(0ull | c.r[20].d[0]);  if (t) { goto L_003AE894; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> (c.r[16].w[0] & 31u)));
    set32(c.r[17], c.r[17].w[0] + c.r[15].w[0]);
    c.r[15].d[0] = ~(0ull | c.r[20].d[0]);
    c.budget -= 4;
L_003AE894:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE7E0u | kUnwind; return; } goto L_003AE7E0; } }
L_003AE8A0:
    c.r[15].d[0] = c.r[16].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], c.r[14].w[0] - 1043u);  if (t) { goto L_003AE8C8; } }
    set32(c.r[15], 0u + 1024u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[15].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE80Cu | kUnwind; return; } goto L_003AE80C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE8C0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE8C0u) [[unlikely]] return; }
L_003AE8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE80Cu | kUnwind; return; } goto L_003AE80C; } }
L_003AE8C8:
    set32(c.r[14], 0u - 1u);
    set32(c.r[20], c.r[14].w[0] >> (c.r[15].w[0] & 31u));
    c.r[13].d[0] = c.r[18].d[0] & c.r[20].d[0];
    c.budget -= 5;
    { const bool t = c.r[13].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE808u | kUnwind; return; } goto L_003AE808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE8E4u); c.r[5].d[0] = ld64((c.r[15].w[0] + 32568u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AE8E4u) [[unlikely]] return; }
L_003AE8E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE8F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AE8F0u) [[unlikely]] return; }
L_003AE8F0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE7E4u | kUnwind; return; } goto L_003AE7E4; }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[15].d[0] = ~(0ull | c.r[20].d[0]);  if (t) { goto L_003AE914; } }
    set32(c.r[15], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; set32(c.r[15], 0u + 52u);  if (t) { goto L_003AE91C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003AE910:
    c.r[15].d[0] = ~(0ull | c.r[20].d[0]);
    c.budget -= 1;
L_003AE914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] & c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE7E0u | kUnwind; return; } goto L_003AE7E0; } }
L_003AE91C:
    set32(c.r[14], 0u + 1u);
    set32(c.r[15], c.r[15].w[0] - c.r[16].w[0]);
    set32(c.r[14], c.r[14].w[0] << (c.r[15].w[0] & 31u));
    set32(c.r[14], c.r[18].w[0] + c.r[14].w[0]);
    c.r[15].d[0] = c.r[14].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[15].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[14].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE910u | kUnwind; return; } goto L_003AE910; } }
    c.budget -= 1;
L_003AE940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[5].w[0]), 0u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.r[14].d[0] = c.r[4].d[0] << 32;
    c.r[13].d[0] = c.r[11].d[0] & c.r[17].d[0];
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 19;
    { const bool t = c.r[15].d[0] != 0ull; c.r[14].d[0] = c.r[13].d[0] | c.r[14].d[0];  if (t) { goto L_003AE9FC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_003AE9FC; } }
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] != 0ull) { set32(c.r[14], ld32((c.r[16].w[0])));  goto L_003AE9C8; }
    set32(c.r[5], 0u + 1077u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE9B0u); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AE9B0u) [[unlikely]] return; }
L_003AE9B0:
    set32(c.r[14], 0u - 54u);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0]), c.r[14].w[0]);
    c.r[12].d[0] = c.r[2].d[0] + 0ull;
    c.r[13].d[0] = c.r[11].d[0] & c.r[17].d[0];
    set32(c.r[14], ld32((c.r[16].w[0])));
    c.budget -= 6;
L_003AE9C8:
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 20));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x800F0000u);
    c.r[12].d[0] = c.r[12].d[0] << 32;
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    set32(c.r[14], c.r[14].w[0] - 1022u);
    c.r[13].d[0] = c.r[11].d[0] & c.r[13].d[0];
    st32((c.r[16].w[0]), c.r[14].w[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[11].d[0] = c.r[13].d[0] | c.r[15].d[0];
    c.r[12].d[0] = c.r[12].d[0] >> 32;
    c.r[14].d[0] = c.r[11].d[0] << 32;
    c.r[2].d[0] = c.r[12].d[0] | c.r[14].d[0];
    c.budget -= 13;
L_003AE9FC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AEA10:
    c.r[14].d[0] = c.r[4].d[0] << 32;
    c.r[13].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    set32(c.r[12], 0u - c.r[14].w[0]);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[14].d[0] = c.r[14].d[0] | c.r[12].d[0];
    c.r[15].d[0] = c.r[15].d[0] & c.r[13].d[0];
    set32(c.r[14], c.r[14].w[0] >> 31);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    set32(c.r[2], 0u + 1u);
    set32(c.r[15], c.r[13].w[0] - c.r[15].w[0]);
    set32(c.r[14], 0u - c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    set32(c.r[15], c.r[15].w[0] >> 31);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - c.r[15].w[0]);  c.pc = t; return; }
L_003AEA58:
    c.r[15].d[0] = c.r[4].d[0] << 32;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    set32(c.r[13], 0u - c.r[15].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[15].d[0] = c.r[15].d[0] | c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[14].d[0];
    set32(c.r[15], c.r[15].w[0] >> 31);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[15].d[0];
    set32(c.r[2], c.r[14].w[0] - c.r[2].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 31);  c.pc = t; return; }
L_003AEA90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEAB0u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AE748u; return; } if (c.pc != 0x003AEAB0u) [[unlikely]] return; }
L_003AEAB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AEB10; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEAC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AEAC4u) [[unlikely]] return; }
L_003AEAC4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AEB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEAD8u);  if (depth < kMaxDepth) unit_00AB(c, 347u, depth + 1u); else { c.pc = 0x003AEB30u; return; } if (c.pc != 0x003AEAD8u) [[unlikely]] return; }
L_003AEAD8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEAE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AE748u; return; } if (c.pc != 0x003AEAE4u) [[unlikely]] return; }
L_003AEAE4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AEB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEAF8u);  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AEAF8u) [[unlikely]] return; }
L_003AEAF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AEB14; } }
L_003AEB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEB08u);  if (depth < kMaxDepth) unit_00AD(c, 230u, depth + 1u); else { c.pc = 0x003B69F0u; return; } if (c.pc != 0x003AEB08u) [[unlikely]] return; }
L_003AEB08:
    set32(c.r[15], 0u + 34u);
    st32((c.r[2].w[0]), c.r[15].w[0]);
    c.budget -= 2;
L_003AEB10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003AEB14:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AEB30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[14].d[0] = c.r[4].d[0] << 32;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[15].d[0] = c.r[12].d[0] & c.r[17].d[0];
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 20));
    c.budget -= 13;
    { const bool t = c.r[13].d[0] != 0ull; c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);  if (t) { goto L_003AEBCC; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[14].d[0] | c.r[15].d[0];
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[5], 0u + 1077u);  if (t) { goto L_003AEBB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEB84u); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AEB84u) [[unlikely]] return; }
L_003AEB84:
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[14].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[15].d[0] = c.r[12].d[0] & c.r[17].d[0];
    c.r[14].d[0] = c.r[14].d[0] | 15536ull;
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 20));
    c.r[14].d[0] = c.r[16].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[13], c.r[15].w[0] - 54u);  if (t) { goto L_003AEBCC; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 32608u));
    c.budget -= 3;
L_003AEBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEBB8u);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AEBB8u) [[unlikely]] return; }
L_003AEBB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AEBBC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AEBCC:
    set32(c.r[15], 0u + 2047u);
    c.budget -= 3;
    { const bool t = c.r[13].d[0] != c.r[15].d[0]; set32(c.r[13], c.r[13].w[0] + c.r[16].w[0]);  if (t) { goto L_003AEBEC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEBE4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AEBE4u) [[unlikely]] return; }
L_003AEBE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEBBCu | kUnwind; return; } goto L_003AEBBC; } }
L_003AEBEC:
    c.r[15].d[0] = c.r[13].sd[0] < 2047ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AEC3C; } }
    c.budget -= 2;
    { const bool t = c.r[13].sd[0] <= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x800F0000u);  if (t) { goto L_003AEC24; } }
    set32(c.r[13], c.r[13].w[0] << 20);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[14].d[0] = c.r[2].d[0] << 32;
    c.r[15].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] | c.r[13].d[0];
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[14].d[0] | c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEBB8u | kUnwind; return; } goto L_003AEBB8; } }
L_003AEC24:
    c.r[15].d[0] = c.r[13].sd[0] < -53ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].d[0] = 0ull | 50000ull;  if (t) { goto L_003AEC68; } }
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AEC58; } }
L_003AEC3C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[15].w[0] + 32616u));
    c.budget -= 2;
L_003AEC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEC4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 309u, depth + 1u); else { c.pc = 0x003AE608u; return; } if (c.pc != 0x003AEC4Cu) [[unlikely]] return; }
L_003AEC4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEBB0u | kUnwind; return; } goto L_003AEBB0; } }
L_003AEC58:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[15].w[0] + 32608u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEC44u | kUnwind; return; } goto L_003AEC44; } }
L_003AEC68:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x800F0000u);
    set32(c.r[13], c.r[13].w[0] + 54u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    set32(c.r[13], c.r[13].w[0] << 20);
    c.r[15].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[2].d[0] << 32;
    c.r[15].d[0] = c.r[15].d[0] | c.r[13].d[0];
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    set32(c.r[5], 0u + 969u);
    c.r[2].d[0] = c.r[14].d[0] | c.r[15].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 52;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEBB0u | kUnwind; return; } goto L_003AEBB0; } }
L_003AECA0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3FE90000u);
    c.r[13].d[0] = c.r[13].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] | 8699ull;
    c.r[14].d[0] = c.r[14].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[14].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AECE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003AECD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AECDCu);  if (depth < kMaxDepth) unit_00AB(c, 120u, depth + 1u); else { c.pc = 0x003ACCB8u; return; } if (c.pc != 0x003AECDCu) [[unlikely]] return; }
L_003AECDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AECE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AECE8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_003AED34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED04u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 279u, depth + 1u); else { c.pc = 0x003A9AD8u; return; } if (c.pc != 0x003AED04u) [[unlikely]] return; }
L_003AED04:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[15], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003AED6C; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 2u);  if (t) { goto L_003AED50; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AED44; } }
L_003AED24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED2Cu); c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 4u, depth + 1u); else { c.pc = 0x003AC028u; return; } if (c.pc != 0x003AED2Cu) [[unlikely]] return; }
L_003AED2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003AED30:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AED34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED3Cu);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AED3Cu) [[unlikely]] return; }
L_003AED3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AECE0u | kUnwind; return; } goto L_003AECE0; } }
L_003AED44:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AECD4u | kUnwind; return; } goto L_003AECD4; } }
L_003AED50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[15].d[0]; c.r[4].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AED24u | kUnwind; return; } goto L_003AED24; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED64u); c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 120u, depth + 1u); else { c.pc = 0x003ACCB8u; return; } if (c.pc != 0x003AED64u) [[unlikely]] return; }
L_003AED64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AED30u | kUnwind; return; } goto L_003AED30; } }
L_003AED6C:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED78u); c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 4u, depth + 1u); else { c.pc = 0x003AC028u; return; } if (c.pc != 0x003AED78u) [[unlikely]] return; }
L_003AED78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AECE0u | kUnwind; return; } goto L_003AECE0; } }
L_003AED80:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3FE90000u);
    c.r[13].d[0] = c.r[13].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] | 8699ull;
    c.r[14].d[0] = c.r[14].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[14].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AEDC8; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 2;
L_003AEDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDBCu);  if (depth < kMaxDepth) unit_00AB(c, 145u, depth + 1u); else { c.pc = 0x003ACE88u; return; } if (c.pc != 0x003AEDBCu) [[unlikely]] return; }
L_003AEDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AEDC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AEDC8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003AEDEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDE4u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AEDE4u) [[unlikely]] return; }
L_003AEDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEDC0u | kUnwind; return; } goto L_003AEDC0; } }
L_003AEDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDF4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 279u, depth + 1u); else { c.pc = 0x003A9AD8u; return; } if (c.pc != 0x003AEDF4u) [[unlikely]] return; }
L_003AEDF4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEDB4u | kUnwind; return; } goto L_003AEDB4; } }
L_003AEE10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    set32(c.r[17], c.f[12]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x507F0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[17].d[0] & c.r[14].d[0];
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[15].d[0] == 0ull; c.f[6] = c.f[12];  if (t) { goto L_003AEE78; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32708u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] > 0; c.f[4] = ld32((c.r[15].w[0]));  if (t) { goto L_003AEE60; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32712u);
    c.f[4] = ld32((c.r[15].w[0]));
    c.budget -= 3;
L_003AEE60:
    c.f[0] = c.f[4];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AEE78:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3EDF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x30FF0000u);  if (t) { goto L_003AF000; } }
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[14], 0u - 1u);  if (t) { goto L_003AEEC8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32716u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[12], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 32720u);
    c.f[1] = ld32((c.r[15].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = c.f[12];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEE60u | kUnwind; return; } goto L_003AEE60; } }
    set32(c.r[14], 0u - 1u);
    c.budget -= 1;
L_003AEEC8:
    c.f[5] = fp::mul(c.f[6], c.f[6]);
    c.budget -= 1;
L_003AEECC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32736u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[4] = fp::mul(c.f[5], c.f[5]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32740u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32744u);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 32748u);
    c.f[3] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32752u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 32756u);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32760u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 32764u);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[15].w[0] - 32768u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] - 32764u);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[15].w[0] - 32760u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[4] = fp::mul(c.f[4], c.f[1]);
    c.budget -= 55;
    { const bool t = c.r[14].sd[0] >= 0; c.f[0] = fp::mul(c.f[5], c.f[0]);  if (t) { goto L_003AEFB8; } }
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[4] = fp::sub(c.f[6], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEE60u | kUnwind; return; } goto L_003AEE60; } }
L_003AEFB8:
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + 32640u);
    set32(c.r[15], c.r[14].w[0] + c.r[15].w[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 32624u);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[6]);
    c.budget -= 15;
    { const bool t = c.r[17].sd[0] >= 0; c.f[0] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_003AEFF8; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_003AEFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEE60u | kUnwind; return; } goto L_003AEE60; } }
L_003AF000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF008u);  if (depth < kMaxDepth) unit_00AB(c, 390u, depth + 1u); else { c.pc = 0x003AF288u; return; } if (c.pc != 0x003AF008u) [[unlikely]] return; }
L_003AF008:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3F970000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.f[6] = c.f[0];  if (t) { goto L_003AF084; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3F2F0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AF06C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 32724u);
    c.r[14].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::add(c.f[6], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 32720u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 10;
L_003AF058:
    fpu_div(c, 6u, c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[5] = fp::mul(c.f[6], c.f[6]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEECCu | kUnwind; return; } goto L_003AEECC; } }
L_003AF06C:
    set32(c.r[14], 0u + 1u);
    set32(c.r[15], c.r[15].w[0] + 32720u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[1] = fp::add(c.f[6], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[6], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF058u | kUnwind; return; } goto L_003AF058; } }
L_003AF084:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x401B0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AF0C4; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], 0u + 2u);
    set32(c.r[15], c.r[15].w[0] + 32728u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::mul(c.f[6], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 32720u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[0] = fp::sub(c.f[6], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[1] = fp::add(c.f[1], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF058u | kUnwind; return; } goto L_003AF058; } }
L_003AF0C4:
    set32(c.r[15], c.r[15].w[0] + 32732u);
    c.f[0] = ld32((c.r[15].w[0]));
    fpu_div(c, 6u, c.f[0], c.f[6]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[14], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEEC8u | kUnwind; return; } goto L_003AEEC8; } }
L_003AF0E0:
    set32(c.r[15], c.f[12]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[11].d[0] = c.r[15].d[0] & c.r[14].d[0];
    c.r[12].d[0] = c.r[15].d[0] + 0ull;
    set32(c.r[15], c.r[11].w[0] >> 23);
    set32(c.r[13], c.r[15].w[0] - 127u);
    c.r[14].d[0] = c.r[13].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[14].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_003AF140; } }
    c.budget -= 2;
    { const bool t = c.r[13].sd[0] >= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_003AF160; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[1] = 0u;
    set32(c.r[15], c.r[15].w[0] - 32748u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.r[12].w[0];  if (t) { goto L_003AF140; } }
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_003AF148; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_003AF13C:
    c.f[0] = c.r[12].w[0];
    c.budget -= 1;
L_003AF140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AF148:
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] != 0ull) { c.r[12].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF13Cu | kUnwind; return; } goto L_003AF13C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.r[12].w[0];  c.pc = t; return; }
L_003AF160:
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> (c.r[13].w[0] & 31u)));
    c.r[14].d[0] = c.r[12].d[0] & c.r[11].d[0];
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF140u | kUnwind; return; } goto L_003AF140; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[1] = 0u;
    set32(c.r[15], c.r[15].w[0] - 32748u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.r[12].w[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF140u | kUnwind; return; } goto L_003AF140; } }
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] <= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x00800000u);  if (t) { goto L_003AF1A4; } }
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> (c.r[13].w[0] & 31u)));
    set32(c.r[12], c.r[12].w[0] + c.r[15].w[0]);
    c.budget -= 2;
L_003AF1A4:
    c.r[15].d[0] = ~(0ull | c.r[11].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[12].d[0] & c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF13Cu | kUnwind; return; } goto L_003AF13C; } }
L_003AF1B0:
    set32(c.r[13], c.f[12]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[15], c.f[13]);
    c.r[12].d[0] = c.r[12].d[0] | 65535ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[13].d[0] = c.r[13].d[0] & c.r[12].d[0];
    c.r[15].d[0] = c.r[15].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[15].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.r[13].w[0];  c.pc = t; return; }
L_003AF1D8:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[15], c.f[12]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[15].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[14].d[0] = c.r[14].d[0] | 4056ull;
    c.r[14].d[0] = c.r[14].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[14].d[0] == 0ull; c.f[13] = 0u;  if (t) { goto L_003AF248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF20Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 401u, depth + 1u); else { c.pc = 0x003ABBB0u; return; } if (c.pc != 0x003AF20Cu) [[unlikely]] return; }
L_003AF20C:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[15], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003AF270; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 2u);  if (t) { goto L_003AF258; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = ld32((c.r[29].w[0]));  if (t) { goto L_003AF244; } }
L_003AF22C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF238u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 242u, depth + 1u); else { c.pc = 0x003ADC78u; return; } if (c.pc != 0x003AF238u) [[unlikely]] return; }
L_003AF238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AF23C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF244:
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.budget -= 1;
L_003AF248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF250u);  if (depth < kMaxDepth) unit_00AB(c, 207u, depth + 1u); else { c.pc = 0x003AD308u; return; } if (c.pc != 0x003AF250u) [[unlikely]] return; }
L_003AF250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF23Cu | kUnwind; return; } goto L_003AF23C; } }
L_003AF258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[15].d[0]; c.f[12] = ld32((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF22Cu | kUnwind; return; } goto L_003AF22C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF268u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 207u, depth + 1u); else { c.pc = 0x003AD308u; return; } if (c.pc != 0x003AF268u) [[unlikely]] return; }
L_003AF268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF238u | kUnwind; return; } goto L_003AF238; } }
L_003AF270:
    c.f[12] = ld32((c.r[29].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF280u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 242u, depth + 1u); else { c.pc = 0x003ADC78u; return; } if (c.pc != 0x003AF280u) [[unlikely]] return; }
L_003AF280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF238u | kUnwind; return; } goto L_003AF238; } }
L_003AF288:
    set32(c.r[14], c.f[12]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[14].d[0] = c.r[14].d[0] & c.r[15].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.r[14].w[0];  c.pc = t; return; }
L_003AF2A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003AF2A8:
    set32(c.r[15], c.f[12]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[11].d[0] = c.r[15].d[0] & c.r[14].d[0];
    c.r[12].d[0] = c.r[15].d[0] + 0ull;
    set32(c.r[15], c.r[11].w[0] >> 23);
    set32(c.r[13], c.r[15].w[0] - 127u);
    c.r[14].d[0] = c.r[13].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[14].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { goto L_003AF308; } }
    c.budget -= 2;
    { const bool t = c.r[13].sd[0] >= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_003AF328; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[1] = 0u;
    set32(c.r[15], c.r[15].w[0] - 32740u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.r[12].w[0];  if (t) { goto L_003AF308; } }
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] < 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_003AF310; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AF304:
    c.f[0] = c.r[12].w[0];
    c.budget -= 1;
L_003AF308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AF310:
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] != 0ull) { c.r[12].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF304u | kUnwind; return; } goto L_003AF304; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.r[12].w[0];  c.pc = t; return; }
L_003AF328:
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> (c.r[13].w[0] & 31u)));
    c.r[14].d[0] = c.r[12].d[0] & c.r[11].d[0];
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull; c.f[0] = c.f[12];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF308u | kUnwind; return; } goto L_003AF308; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[1] = 0u;
    set32(c.r[15], c.r[15].w[0] - 32740u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.r[12].w[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF308u | kUnwind; return; } goto L_003AF308; } }
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0; c.r[15].d[0] = ~(0ull | c.r[11].d[0]);  if (t) { goto L_003AF374; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> (c.r[13].w[0] & 31u)));
    set32(c.r[12], c.r[12].w[0] + c.r[15].w[0]);
    c.r[15].d[0] = ~(0ull | c.r[11].d[0]);
    c.budget -= 4;
L_003AF374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = c.r[12].d[0] & c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF304u | kUnwind; return; } goto L_003AF304; } }
    c.budget -= 1;
L_003AF380:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[11], c.f[12]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st32((c.r[4].w[0]), 0u);
    c.r[15].d[0] = c.r[11].d[0] & c.r[15].d[0];
    set32(c.r[12], c.f[12]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 23));
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[14].d[0] = c.r[14].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[13], c.r[13].w[0] - 126u);  if (t) { goto L_003AF3C8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x807F0000u);
    st32((c.r[4].w[0]), c.r[13].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[15].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.r[12].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 6;
L_003AF3C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.r[12].w[0];  c.pc = t; return; }
L_003AF3D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003AF3D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF3F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x003AF3F8u) [[unlikely]] return; }
L_003AF3F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = 0u;  if (t) { goto L_003AF444; } }
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[20];  if (t) { goto L_003AF448; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF418u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 402u, depth + 1u); else { c.pc = 0x003AF460u; return; } if (c.pc != 0x003AF418u) [[unlikely]] return; }
L_003AF418:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF424u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x003AF424u) [[unlikely]] return; }
L_003AF424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[21]));  if (t) { goto L_003AF434; } }
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[20];  if (t) { goto L_003AF448; } }
L_003AF434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF43Cu);  if (depth < kMaxDepth) unit_00AD(c, 230u, depth + 1u); else { c.pc = 0x003B69F0u; return; } if (c.pc != 0x003AF43Cu) [[unlikely]] return; }
L_003AF43C:
    set32(c.r[15], 0u + 34u);
    st32((c.r[2].w[0]), c.r[15].w[0]);
    c.budget -= 2;
L_003AF444:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_003AF448:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF460:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[11], c.f[12]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    set32(c.r[12], c.f[12]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[15].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.r[14].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st32((c.r[29].w[0] + 8u), c.f[20]);
    set32(c.r[13], c.r[15].w[0] >> 23);
    c.r[14].d[0] = c.r[14].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[13], c.r[13].w[0] + c.r[4].w[0]);  if (t) { goto L_003AF4BC; } }
    c.r[15].d[0] = c.r[13].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003AF4E4; } }
    c.budget -= 2;
    { const bool t = c.r[13].sd[0] <= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x807F0000u);  if (t) { goto L_003AF4D0; } }
    set32(c.r[14], c.r[13].w[0] << 23);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.r[12].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 4;
L_003AF4BC:
    c.f[0] = c.r[12].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AF4D0:
    c.r[15].d[0] = 0ull | 50000ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003AF504; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_003AF4E4:
    set32(c.r[15], c.r[15].w[0] - 32720u);
    c.budget -= 1;
L_003AF4E8:
    c.f[13] = c.f[12];
    c.f[20] = ld32((c.r[15].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF4F8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 381u, depth + 1u); else { c.pc = 0x003AF1B0u; return; } if (c.pc != 0x003AF4F8u) [[unlikely]] return; }
L_003AF4F8:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF4BCu | kUnwind; return; } goto L_003AF4BC; } }
L_003AF504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[15].w[0] - 32716u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF4E8u | kUnwind; return; } goto L_003AF4E8; } }
    c.budget -= 1;
L_003AF510:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[15], c.f[12]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 4056ull;
    c.r[15].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[14].d[0] = c.r[14].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[14].d[0] != 0ull; c.f[13] = 0u;  if (t) { goto L_003AF554; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AF540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF548u);  if (depth < kMaxDepth) unit_00AB(c, 242u, depth + 1u); else { c.pc = 0x003ADC78u; return; } if (c.pc != 0x003AF548u) [[unlikely]] return; }
L_003AF548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003AF54C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF55Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 401u, depth + 1u); else { c.pc = 0x003ABBB0u; return; } if (c.pc != 0x003AF55Cu) [[unlikely]] return; }
L_003AF55C:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[15], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003AF5B4; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 2u);  if (t) { goto L_003AF598; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = ld32((c.r[29].w[0]));  if (t) { goto L_003AF58C; } }
L_003AF57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF584u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 207u, depth + 1u); else { c.pc = 0x003AD308u; return; } if (c.pc != 0x003AF584u) [[unlikely]] return; }
L_003AF584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF548u | kUnwind; return; } goto L_003AF548; } }
L_003AF58C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = ld32((c.r[29].w[0] + 4u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF540u | kUnwind; return; } goto L_003AF540; } }
L_003AF598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[15].d[0]; c.f[12] = ld32((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF57Cu | kUnwind; return; } goto L_003AF57C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF5ACu); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 242u, depth + 1u); else { c.pc = 0x003ADC78u; return; } if (c.pc != 0x003AF5ACu) [[unlikely]] return; }
L_003AF5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF548u | kUnwind; return; } goto L_003AF548; } }
L_003AF5B4:
    c.f[12] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF5C0u); c.f[13] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 207u, depth + 1u); else { c.pc = 0x003AD308u; return; } if (c.pc != 0x003AF5C0u) [[unlikely]] return; }
L_003AF5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF54Cu | kUnwind; return; } goto L_003AF54C; } }
L_003AF5C8:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[15], c.f[12]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 4058ull;
    c.r[15].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[14].d[0] = c.r[14].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { goto L_003AF610; } }
    c.f[13] = 0u;
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_003AF5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF604u);  if (depth < kMaxDepth) unit_00AB(c, 243u, depth + 1u); else { c.pc = 0x003ADD70u; return; } if (c.pc != 0x003AF604u) [[unlikely]] return; }
L_003AF604:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF618u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 401u, depth + 1u); else { c.pc = 0x003ABBB0u; return; } if (c.pc != 0x003AF618u) [[unlikely]] return; }
L_003AF618:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.f[12] = ld32((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF5FCu | kUnwind; return; } goto L_003AF5FC; } }
    c.budget -= 1;
L_003AF638:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7258u | kUnwind; return; } [[clang::musttail]] return unit_00A9(c, 343u, depth); }
L_003AF650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7818u | kUnwind; return; } [[clang::musttail]] return unit_00A9(c, 433u, depth); }
L_003AF668:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7D40u | kUnwind; return; } [[clang::musttail]] return unit_00A9(c, 511u, depth); }
L_003AF680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7FF8u | kUnwind; return; } [[clang::musttail]] return unit_00A9(c, 528u, depth); }
L_003AF698:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A83D0u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 44u, depth); }
L_003AF6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A87B0u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 66u, depth); }
L_003AF6C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8C80u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 128u, depth); }
L_003AF6E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8DF0u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 141u, depth); }
L_003AF6F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA2B8u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 346u, depth); }
L_003AF710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA6C8u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 352u, depth); }
L_003AF728:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAA60u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 358u, depth); }
L_003AF740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAC28u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 366u, depth); }
L_003AF758:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAE98u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 372u, depth); }
L_003AF770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB020u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 379u, depth); }
L_003AF788:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB2D8u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 383u, depth); }
L_003AF7A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB3B0u | kUnwind; return; } [[clang::musttail]] return unit_00AA(c, 387u, depth); }
L_003AF7B8:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    mmi::mult(c, 0, c.r[2].w[0], c.r[15].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    mmi::multu(c, 1, c.r[2].w[0], c.r[5].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    mmi::madd(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::pmfhl(c, c.r[1], 0u);
    mmi::pcpyud(c.r[1], c.r[1], c.r[0]);
    c.r[2].d[0] = c.r[1].d[0] + 0ull;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[15], c.r[15].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | c.r[15].d[0];  c.pc = t; return; }
L_003AF808:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[17], 0u + 1039u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF830u); c.r[16].d[0] = c.r[16].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003AF830u) [[unlikely]] return; }
L_003AF830:
    c.r[17].d[0] = c.r[17].d[0] << 52;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF840u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AF840u) [[unlikely]] return; }
L_003AF840:
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF854u); c.r[16].d[0] = c.r[16].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AF854u) [[unlikely]] return; }
L_003AF854:
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003AF864u) [[unlikely]] return; }
L_003AF864:
    set32(c.r[5], 0u + 1055u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[5].d[0] << 52;  if (t) { goto L_003AF87C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF87Cu);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AF87Cu) [[unlikely]] return; }
L_003AF87C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF888u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AF888u) [[unlikely]] return; }
L_003AF888:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF8A0:
    set32(c.r[15], 0u - 2048u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[15].d[0] = c.r[15].d[0] >> 11;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[14], 0u - 2048u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[15].d[0] = c.r[4].d[0] + c.r[15].d[0];
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[14].d[0] = c.r[14].d[0] >> 10;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[14].d[0] = c.r[14].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[13].d[0] = c.r[4].d[0] & 2047ull;
    c.budget -= 15;
    { const bool t = c.r[14].d[0] == 0ull; c.r[15].d[0] = c.r[4].d[0] | 2048ull;  if (t) { goto L_003AF8E0; } }
    if (c.r[13].d[0] != 0) c.r[18].d[0] = c.r[15].d[0];
    c.budget -= 1;
L_003AF8E0:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    set32(c.r[16], 0u + 1039u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF8F0u); c.r[16].d[0] = c.r[16].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003AF8F0u) [[unlikely]] return; }
L_003AF8F0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF8FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AF8FCu) [[unlikely]] return; }
L_003AF8FC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF90Cu); c.r[16].d[0] = c.r[18].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AF90Cu) [[unlikely]] return; }
L_003AF90C:
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF924u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003AF924u) [[unlikely]] return; }
L_003AF924:
    set32(c.r[5], 0u + 1055u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[5].d[0] << 52;  if (t) { goto L_003AF93C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF93Cu);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AF93Cu) [[unlikely]] return; }
L_003AF93C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF948u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AF948u) [[unlikely]] return; }
L_003AF948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF950u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x003AF950u) [[unlikely]] return; }
L_003AF950:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AF968:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF988u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AF988u) [[unlikely]] return; }
L_003AF988:
    set32(c.r[5], 0u + 991u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 52;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.r[15].d[0] = 0ull + 0ull;  if (t) { goto L_003AFA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF9A4u);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AF9A4u) [[unlikely]] return; }
L_003AF9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF9ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x003AF9ACu) [[unlikely]] return; }
L_003AF9AC:
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.r[15].d[0] = c.r[17].d[0] >> 1;
    c.r[14].d[0] = c.r[17].d[0] & 1ull;
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] < 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003AFA4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF9CCu);  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x003AF9CCu) [[unlikely]] return; }
L_003AF9CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003AF9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF9D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AF9D8u) [[unlikely]] return; }
L_003AF9D8:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF9ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AF9ECu) [[unlikely]] return; }
L_003AF9EC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AFA34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFA00u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AFA00u) [[unlikely]] return; }
L_003AFA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFA08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x003AFA08u) [[unlikely]] return; }
L_003AFA08:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[17].d[0] = c.r[17].d[0] - c.r[2].d[0];
    c.budget -= 3;
L_003AFA14:
    c.r[15].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003AFA18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[15].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFA3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x003AFA3Cu) [[unlikely]] return; }
L_003AFA3C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] + c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFA14u | kUnwind; return; } goto L_003AFA14; } }
L_003AFA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFA54u); c.r[4].d[0] = c.r[14].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x003AFA54u) [[unlikely]] return; }
L_003AFA54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFA60u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AFA60u) [[unlikely]] return; }
L_003AFA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF9D0u | kUnwind; return; } goto L_003AF9D0; } }
L_003AFA68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFA88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AFA88u) [[unlikely]] return; }
L_003AFA88:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AFAAC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF968u | kUnwind; return; } goto L_003AF968; }
L_003AFAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFAB4u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AFAB4u) [[unlikely]] return; }
L_003AFAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFABCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 451u, depth + 1u); else { c.pc = 0x003AF968u; return; } if (c.pc != 0x003AFABCu) [[unlikely]] return; }
L_003AFABC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull - c.r[2].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFAD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFAF0u); st64((c.r[29].w[0] + 16u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003AFAF0u) [[unlikely]] return; }
L_003AFAF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AFB00u) [[unlikely]] return; }
L_003AFB00:
    set32(c.r[5], 0u + 991u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 52;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.r[15].d[0] = 0ull + 0ull;  if (t) { goto L_003AFB90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB1Cu);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003AFB1Cu) [[unlikely]] return; }
L_003AFB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x003AFB24u) [[unlikely]] return; }
L_003AFB24:
    c.r[18].d[0] = c.r[2].d[0] << 32;
    c.r[15].d[0] = c.r[18].d[0] >> 1;
    c.r[14].d[0] = c.r[18].d[0] & 1ull;
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    c.budget -= 6;
    { const bool t = c.r[18].sd[0] < 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003AFBC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB44u);  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x003AFB44u) [[unlikely]] return; }
L_003AFB44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003AFB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB50u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AFB50u) [[unlikely]] return; }
L_003AFB50:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AFB64u) [[unlikely]] return; }
L_003AFB64:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003AFBAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB78u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AFB78u) [[unlikely]] return; }
L_003AFB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x003AFB80u) [[unlikely]] return; }
L_003AFB80:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[18].d[0] = c.r[18].d[0] - c.r[2].d[0];
    c.budget -= 3;
L_003AFB8C:
    c.r[15].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003AFB90:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[15].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFBB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x003AFBB4u) [[unlikely]] return; }
L_003AFBB4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] + c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFB8Cu | kUnwind; return; } goto L_003AFB8C; } }
L_003AFBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFBCCu); c.r[4].d[0] = c.r[14].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x003AFBCCu) [[unlikely]] return; }
L_003AFBCC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFBD8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AFBD8u) [[unlikely]] return; }
L_003AFBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFB48u | kUnwind; return; } goto L_003AFB48; } }
L_003AFBE0:
    c.f[0] = 0u;
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[12] ^ fp::kSign;  if (t) { goto L_003AFC04; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFAD8u | kUnwind; return; } goto L_003AFAD8; }
L_003AFC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFC0Cu); c.f[12] = c.f[2];  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x003AFC0Cu) [[unlikely]] return; }
L_003AFC0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull - c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AFC20:
    c.r[15].d[0] = c.r[4].d[0] << 32;
    c.r[14].d[0] = c.r[5].d[0] << 32;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[15], 0u - c.r[15].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[13].d[0] = c.r[15].d[0] << 32;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[14], 0u - c.r[14].w[0]);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[14].d[0] = c.r[14].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[13].d[0] = c.r[13].d[0] >> 32;
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - c.r[15].w[0]);
    c.budget -= 20;
    { const bool t = c.r[15].sd[0] >= 0; set32(c.r[8], 0u - c.r[12].w[0]);  if (t) { goto L_003AFCA4; } }
    set32(c.r[15], 0u - 1u);
    set32(c.r[17], 0u - 1u);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[13].d[0];
    c.r[15].d[0] = c.r[11].d[0] << 32;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    c.r[11].d[0] = c.r[11].d[0] << 32;
    c.r[15].d[0] = 0ull < c.r[15].d[0] ? 1ull : 0ull;
    c.r[11].d[0] = c.r[11].d[0] >> 32;
    set32(c.r[15], c.r[9].w[0] - c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[4].d[0] = c.r[11].d[0] | c.r[15].d[0];
    c.budget -= 13;
L_003AFCA4:
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0; set32(c.r[15], 0u - 1u);  if (t) { goto L_003AFCDC; } }
    c.r[17].d[0] = ~(0ull | c.r[17].d[0]);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[10].d[0] = c.r[10].d[0] & c.r[15].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[14].d[0];
    c.r[15].d[0] = c.r[10].d[0] << 32;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[15].d[0] = 0ull < c.r[15].d[0] ? 1ull : 0ull;
    c.r[10].d[0] = c.r[10].d[0] >> 32;
    set32(c.r[15], c.r[8].w[0] - c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[5].d[0] = c.r[10].d[0] | c.r[15].d[0];
    c.budget -= 12;
L_003AFCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFCE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 488u, depth + 1u); else { c.pc = 0x003AFD48u; return; } if (c.pc != 0x003AFCE4u) [[unlikely]] return; }
L_003AFCE4:
    c.r[15].d[0] = c.r[2].d[0] << 32;
    set32(c.r[14], 0u - 1u);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    c.r[14].d[0] = c.r[14].d[0] << 32;
    set32(c.r[15], 0u - c.r[15].w[0]);
    c.r[16].d[0] = c.r[16].d[0] & c.r[14].d[0];
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[15].d[0] = c.r[15].d[0] >> 32;
    set32(c.r[14], 0u - c.r[14].w[0]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] | c.r[15].d[0];  if (t) { goto L_003AFD34; } }
    c.r[15].d[0] = c.r[16].d[0] << 32;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[15].d[0] = 0ull < c.r[15].d[0] ? 1ull : 0ull;
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    set32(c.r[15], c.r[14].w[0] - c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] | c.r[15].d[0];
    c.budget -= 8;
L_003AFD34:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFD48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[24].d[0] = c.r[4].d[0] << 32;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 12;
    { const bool t = c.r[10].d[0] != 0ull; c.r[24].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 32);  if (t) { [[clang::musttail]] return unit_00AC(c, 4u, depth); } }
    c.r[15].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].d[0] = 0ull | 65535ull;  if (t) { goto L_003AFF2C; } }
    c.r[15].d[0] = c.r[15].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_003AFF10; } }
    set32(c.r[15], 0u + 8u);
    c.r[14].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.r[12].d[0] = c.r[15].d[0] + 0ull;
    if (c.r[14].d[0] != 0) c.r[12].d[0] = 0ull;
    c.budget -= 4;
L_003AFDA0:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[5].w[0] >> (c.r[12].w[0] & 31u));
    set32(c.r[14], c.r[14].w[0] - 32712u);
    set32(c.r[11], 0u + 32u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    c.r[13].d[0] = ld8((c.r[15].w[0]));
    set32(c.r[13], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[25], c.r[11].w[0] - c.r[13].w[0]);
    c.budget -= 10;
    { const bool t = c.r[25].d[0] == 0ull; set32(c.r[15], c.r[11].w[0] - c.r[25].w[0]);  if (t) { goto L_003AFDDC; } }
    set32(c.r[14], c.r[9].w[0] << (c.r[25].w[0] & 31u));
    set32(c.r[15], c.r[24].w[0] >> (c.r[15].w[0] & 31u));
    set32(c.r[5], c.r[5].w[0] << (c.r[25].w[0] & 31u));
    c.r[9].d[0] = c.r[14].d[0] | c.r[15].d[0];
    set32(c.r[24], c.r[24].w[0] << (c.r[25].w[0] & 31u));
    c.budget -= 5;
L_003AFDDC:
    set32(c.r[11], c.r[5].w[0] >> 16);
    c.r[7].d[0] = c.r[5].d[0] & 65535ull;
    mmi::divu(c, 0, c.r[9].w[0], c.r[11].w[0]);
    set32(c.r[13], c.r[24].w[0] >> 16);
    c.budget -= 6;
    if (c.r[11].d[0] == 0ull) { breakpoint(c, 0x003AFDF0u);  goto L_003AFDF4; }
L_003AFDF4:
    c.r[15].d[0] = c.lo.d[0];
    c.r[14].d[0] = c.hi.d[0];
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[14], c.r[14].w[0] << 16);
    mmi::mult(c, 0, c.r[15].w[0], c.r[7].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[13].d[0];
    c.r[15].d[0] = c.r[14].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[15].d[0] == 0ull) { set32(c.r[14], c.r[14].w[0] - c.r[10].w[0]);  goto L_003AFE40; }
    set32(c.r[14], c.r[14].w[0] + c.r[5].w[0]);
    c.r[15].d[0] = c.r[14].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] - 1u);  if (t) { goto L_003AFE3C; } }
    c.r[15].d[0] = c.r[14].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { set32(c.r[14], c.r[14].w[0] - c.r[10].w[0]);  goto L_003AFE40; }
    set32(c.r[12], c.r[12].w[0] - 1u);
    set32(c.r[14], c.r[14].w[0] + c.r[5].w[0]);
    c.budget -= 2;
L_003AFE3C:
    set32(c.r[14], c.r[14].w[0] - c.r[10].w[0]);
    c.budget -= 1;
L_003AFE40:
    c.r[13].d[0] = c.r[24].d[0] & 65535ull;
    mmi::divu(c, 0, c.r[14].w[0], c.r[11].w[0]);
    c.budget -= 4;
    if (c.r[11].d[0] == 0ull) { breakpoint(c, 0x003AFE4Cu);  goto L_003AFE50; }
L_003AFE50:
    c.r[15].d[0] = c.lo.d[0];
    c.r[14].d[0] = c.hi.d[0];
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[14], c.r[14].w[0] << 16);
    mmi::mult(c, 0, c.r[15].w[0], c.r[7].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[14].d[0] | c.r[13].d[0];
    c.r[15].d[0] = c.r[4].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], c.r[12].w[0] << 16);  if (t) { goto L_003AFE9C; } }
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[15].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] - 1u);  if (t) { goto L_003AFE98; } }
    c.r[15].d[0] = c.r[4].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], c.r[12].w[0] << 16);  if (t) { goto L_003AFE9C; } }
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[11], c.r[11].w[0] - 1u);
    c.budget -= 2;
L_003AFE98:
    set32(c.r[15], c.r[12].w[0] << 16);
    c.budget -= 1;
L_003AFE9C:
    set32(c.r[24], c.r[4].w[0] - c.r[10].w[0]);
    c.r[7].d[0] = c.r[15].d[0] | c.r[11].d[0];
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003AFEA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[15], c.r[24].w[0] >> (c.r[25].w[0] & 31u));  if (t) { goto L_003AFED4; } }
    set32(c.r[14], 0u - 1u);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[14].d[0] = c.r[14].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] & c.r[14].d[0];
    c.r[15].d[0] = c.r[15].d[0] >> 32;
    c.r[8].d[0] = c.r[8].d[0] | c.r[15].d[0];
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    c.budget -= 8;
L_003AFED0:
    st64((c.r[17].w[0]), c.r[8].d[0]);
    c.budget -= 1;
L_003AFED4:
    set32(c.r[14], 0u - 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[15].d[0] = c.r[7].d[0] << 32;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[14].d[0] = c.r[14].d[0] << 32;
    c.r[15].d[0] = c.r[15].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] & c.r[14].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[15].d[0];
    c.r[14].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[14].d[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AFF10:
    set32(c.r[14], 0u + 16u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    set32(c.r[13], 0u + 24u);
    c.r[15].d[0] = c.r[15].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.r[12].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[15].d[0] != 0) c.r[12].d[0] = c.r[13].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFDA0u | kUnwind; return; } goto L_003AFDA0; } }
L_003AFF2C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[15].d[0] = c.r[15].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_003AFF50; } }
    set32(c.r[15], 0u + 1u);
    mmi::divu(c, 0, c.r[15].w[0], c.r[10].w[0]);
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x003AFF40u);  goto L_003AFF44; }
L_003AFF44:
    c.r[5].d[0] = c.lo.d[0];
    c.r[15].d[0] = 0ull | 65535ull;
    c.r[15].d[0] = c.r[15].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003AFF50:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { [[clang::musttail]] return unit_00AC(c, 3u, depth); } }
    set32(c.r[15], 0u + 8u);
    c.r[14].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.r[12].d[0] = c.r[15].d[0] + 0ull;
    if (c.r[14].d[0] != 0) c.r[12].d[0] = 0ull;
    c.budget -= 4;
L_003AFF68:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[5].w[0] >> (c.r[12].w[0] & 31u));
    set32(c.r[14], c.r[14].w[0] - 32712u);
    set32(c.r[11], 0u + 32u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    c.r[13].d[0] = ld8((c.r[15].w[0]));
    set32(c.r[13], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[25], c.r[11].w[0] - c.r[13].w[0]);
    c.budget -= 10;
    { const bool t = c.r[25].d[0] != 0ull; set32(c.r[16], c.r[11].w[0] - c.r[25].w[0]);  if (t) { [[clang::musttail]] return unit_00AC(c, 2u, depth); } }
    set32(c.r[9], c.r[9].w[0] - c.r[5].w[0]);
    set32(c.r[18], 0u + 1u);
    set32(c.r[10], c.r[5].w[0] >> 16);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 4;
L_003AFFA0:
    mmi::divu(c, 0, c.r[9].w[0], c.r[10].w[0]);
    set32(c.r[12], c.r[24].w[0] >> 16);
    c.budget -= 4;
    if (c.r[10].d[0] == 0ull) { breakpoint(c, 0x003AFFACu);  goto L_003AFFB0; }
L_003AFFB0:
    c.r[14].d[0] = c.hi.d[0];
    c.r[13].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[14], c.r[14].w[0] << 16);
    mmi::mult(c, 0, c.r[13].w[0], c.r[3].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[12].d[0];
    c.r[15].d[0] = c.r[14].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[15].d[0] == 0ull) { set32(c.r[14], c.r[14].w[0] - c.r[11].w[0]);  goto L_003AFFFC; }
    set32(c.r[14], c.r[14].w[0] + c.r[5].w[0]);
    c.r[15].d[0] = c.r[14].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[9], c.r[13].w[0] - 1u);  if (t) { goto L_003AFFF8; } }
    c.r[15].d[0] = c.r[14].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { set32(c.r[14], c.r[14].w[0] - c.r[11].w[0]);  goto L_003AFFFC; }
    set32(c.r[9], c.r[9].w[0] - 1u);
    set32(c.r[14], c.r[14].w[0] + c.r[5].w[0]);
    c.budget -= 2;
L_003AFFF8:
    set32(c.r[14], c.r[14].w[0] - c.r[11].w[0]);
    c.budget -= 1;
L_003AFFFC:
    c.r[13].d[0] = c.r[24].d[0] & 65535ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_00AC(c, 1u, depth);
}

}
