#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0053[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0,
    144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0,
    153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0,
    161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227,
    0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335,
    0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0,
    0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0,
    0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0,
    0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0,
};

void unit_0053(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0024C000;
    case 2u: goto L_0024C010;
    case 3u: goto L_0024C01C;
    case 4u: goto L_0024C030;
    case 5u: goto L_0024C0B0;
    case 6u: goto L_0024C0E0;
    case 7u: goto L_0024C0F0;
    case 8u: goto L_0024C100;
    case 9u: goto L_0024C120;
    case 10u: goto L_0024C150;
    case 11u: goto L_0024C160;
    case 12u: goto L_0024C17C;
    case 13u: goto L_0024C188;
    case 14u: goto L_0024C19C;
    case 15u: goto L_0024C1AC;
    case 16u: goto L_0024C1C0;
    case 17u: goto L_0024C1D0;
    case 18u: goto L_0024C1E4;
    case 19u: goto L_0024C200;
    case 20u: goto L_0024C21C;
    case 21u: goto L_0024C230;
    case 22u: goto L_0024C24C;
    case 23u: goto L_0024C2CC;
    case 24u: goto L_0024C324;
    case 25u: goto L_0024C340;
    case 26u: goto L_0024C35C;
    case 27u: goto L_0024C368;
    case 28u: goto L_0024C374;
    case 29u: goto L_0024C388;
    case 30u: goto L_0024C39C;
    case 31u: goto L_0024C3B0;
    case 32u: goto L_0024C3CC;
    case 33u: goto L_0024C3F4;
    case 34u: goto L_0024C410;
    case 35u: goto L_0024C430;
    case 36u: goto L_0024C440;
    case 37u: goto L_0024C464;
    case 38u: goto L_0024C470;
    case 39u: goto L_0024C47C;
    case 40u: goto L_0024C484;
    case 41u: goto L_0024C4A4;
    case 42u: goto L_0024C4B4;
    case 43u: goto L_0024C4D0;
    case 44u: goto L_0024C4E4;
    case 45u: goto L_0024C4F4;
    case 46u: goto L_0024C500;
    case 47u: goto L_0024C520;
    case 48u: goto L_0024C530;
    case 49u: goto L_0024C54C;
    case 50u: goto L_0024C560;
    case 51u: goto L_0024C570;
    case 52u: goto L_0024C590;
    case 53u: goto L_0024C5B8;
    case 54u: goto L_0024C5E8;
    case 55u: goto L_0024C5F8;
    case 56u: goto L_0024C614;
    case 57u: goto L_0024C628;
    case 58u: goto L_0024C638;
    case 59u: goto L_0024C64C;
    case 60u: goto L_0024C66C;
    case 61u: goto L_0024C67C;
    case 62u: goto L_0024C698;
    case 63u: goto L_0024C6AC;
    case 64u: goto L_0024C6BC;
    case 65u: goto L_0024C6E0;
    case 66u: goto L_0024C70C;
    case 67u: goto L_0024C740;
    case 68u: goto L_0024C760;
    case 69u: goto L_0024C780;
    case 70u: goto L_0024C7A4;
    case 71u: goto L_0024C7C0;
    case 72u: goto L_0024C7D8;
    case 73u: goto L_0024C7F4;
    case 74u: goto L_0024C80C;
    case 75u: goto L_0024C830;
    case 76u: goto L_0024C840;
    case 77u: goto L_0024C850;
    case 78u: goto L_0024C860;
    case 79u: goto L_0024C870;
    case 80u: goto L_0024C8C0;
    case 81u: goto L_0024C908;
    case 82u: goto L_0024C918;
    case 83u: goto L_0024C934;
    case 84u: goto L_0024C954;
    case 85u: goto L_0024C964;
    case 86u: goto L_0024C980;
    case 87u: goto L_0024C98C;
    case 88u: goto L_0024C9A8;
    case 89u: goto L_0024C9D0;
    case 90u: goto L_0024C9F4;
    case 91u: goto L_0024CA20;
    case 92u: goto L_0024CA30;
    case 93u: goto L_0024CA40;
    case 94u: goto L_0024CA50;
    case 95u: goto L_0024CA70;
    case 96u: goto L_0024CA80;
    case 97u: goto L_0024CA9C;
    case 98u: goto L_0024CAA8;
    case 99u: goto L_0024CABC;
    case 100u: goto L_0024CACC;
    case 101u: goto L_0024CAE0;
    case 102u: goto L_0024CB00;
    case 103u: goto L_0024CB1C;
    case 104u: goto L_0024CBC0;
    case 105u: goto L_0024CBDC;
    case 106u: goto L_0024CBE8;
    case 107u: goto L_0024CBF4;
    case 108u: goto L_0024CC10;
    case 109u: goto L_0024CC20;
    case 110u: goto L_0024CC30;
    case 111u: goto L_0024CC4C;
    case 112u: goto L_0024CC58;
    case 113u: goto L_0024CC64;
    case 114u: goto L_0024CC80;
    case 115u: goto L_0024CC98;
    case 116u: goto L_0024CCB0;
    case 117u: goto L_0024CCE0;
    case 118u: goto L_0024CCFC;
    case 119u: goto L_0024CD30;
    case 120u: goto L_0024CD58;
    case 121u: goto L_0024CD70;
    case 122u: goto L_0024CD94;
    case 123u: goto L_0024CDD0;
    case 124u: goto L_0024CDF0;
    case 125u: goto L_0024CE10;
    case 126u: goto L_0024CE30;
    case 127u: goto L_0024CE50;
    case 128u: goto L_0024CE70;
    case 129u: goto L_0024CE90;
    case 130u: goto L_0024CF20;
    case 131u: goto L_0024CF70;
    case 132u: goto L_0024CF80;
    case 133u: goto L_0024CF90;
    case 134u: goto L_0024CFB0;
    case 135u: goto L_0024CFE0;
    case 136u: goto L_0024CFF0;
    case 137u: goto L_0024D00C;
    case 138u: goto L_0024D018;
    case 139u: goto L_0024D02C;
    case 140u: goto L_0024D038;
    case 141u: goto L_0024D048;
    case 142u: goto L_0024D05C;
    case 143u: goto L_0024D06C;
    case 144u: goto L_0024D080;
    case 145u: goto L_0024D090;
    case 146u: goto L_0024D0A4;
    case 147u: goto L_0024D0C0;
    case 148u: goto L_0024D0DC;
    case 149u: goto L_0024D240;
    case 150u: goto L_0024D25C;
    case 151u: goto L_0024D268;
    case 152u: goto L_0024D274;
    case 153u: goto L_0024D280;
    case 154u: goto L_0024D28C;
    case 155u: goto L_0024D2A0;
    case 156u: goto L_0024D2B0;
    case 157u: goto L_0024D2C0;
    case 158u: goto L_0024D2DC;
    case 159u: goto L_0024D2E8;
    case 160u: goto L_0024D2F4;
    case 161u: goto L_0024D300;
    case 162u: goto L_0024D30C;
    case 163u: goto L_0024D320;
    case 164u: goto L_0024D338;
    case 165u: goto L_0024D350;
    case 166u: goto L_0024D3E0;
    case 167u: goto L_0024D3FC;
    case 168u: goto L_0024D450;
    case 169u: goto L_0024D478;
    case 170u: goto L_0024D490;
    case 171u: goto L_0024D51C;
    case 172u: goto L_0024D580;
    case 173u: goto L_0024D5B0;
    case 174u: goto L_0024D5E0;
    case 175u: goto L_0024D610;
    case 176u: goto L_0024D640;
    case 177u: goto L_0024D684;
    case 178u: goto L_0024D6BC;
    case 179u: goto L_0024D6F8;
    case 180u: goto L_0024D730;
    case 181u: goto L_0024D82C;
    case 182u: goto L_0024D86C;
    case 183u: goto L_0024D884;
    case 184u: goto L_0024D88C;
    case 185u: goto L_0024D8D4;
    case 186u: goto L_0024D9A0;
    case 187u: goto L_0024D9B0;
    case 188u: goto L_0024D9C0;
    case 189u: goto L_0024D9F0;
    case 190u: goto L_0024DA90;
    case 191u: goto L_0024DAA0;
    case 192u: goto L_0024DABC;
    case 193u: goto L_0024DAC8;
    case 194u: goto L_0024DADC;
    case 195u: goto L_0024DAEC;
    case 196u: goto L_0024DB00;
    case 197u: goto L_0024DB20;
    case 198u: goto L_0024DB44;
    case 199u: goto L_0024DBA4;
    case 200u: goto L_0024DBBC;
    case 201u: goto L_0024DC00;
    case 202u: goto L_0024DC1C;
    case 203u: goto L_0024DC28;
    case 204u: goto L_0024DC40;
    case 205u: goto L_0024DC68;
    case 206u: goto L_0024DC80;
    case 207u: goto L_0024DC90;
    case 208u: goto L_0024DCA0;
    case 209u: goto L_0024DCC4;
    case 210u: goto L_0024DCD0;
    case 211u: goto L_0024DCE8;
    case 212u: goto L_0024DD0C;
    case 213u: goto L_0024DD40;
    case 214u: goto L_0024DDA0;
    case 215u: goto L_0024DDB8;
    case 216u: goto L_0024DDC8;
    case 217u: goto L_0024DE00;
    case 218u: goto L_0024DE3C;
    case 219u: goto L_0024DE50;
    case 220u: goto L_0024DE60;
    case 221u: goto L_0024DE74;
    case 222u: goto L_0024DE88;
    case 223u: goto L_0024DEA8;
    case 224u: goto L_0024DEE0;
    case 225u: goto L_0024DF18;
    case 226u: goto L_0024DF6C;
    case 227u: goto L_0024DF7C;
    case 228u: goto L_0024DF90;
    case 229u: goto L_0024DFA0;
    case 230u: goto L_0024DFBC;
    case 231u: goto L_0024DFF0;
    case 232u: goto L_0024E01C;
    case 233u: goto L_0024E040;
    case 234u: goto L_0024E090;
    case 235u: goto L_0024E0F0;
    case 236u: goto L_0024E144;
    case 237u: goto L_0024E150;
    case 238u: goto L_0024E16C;
    case 239u: goto L_0024E190;
    case 240u: goto L_0024E1C0;
    case 241u: goto L_0024E1DC;
    case 242u: goto L_0024E200;
    case 243u: goto L_0024E210;
    case 244u: goto L_0024E224;
    case 245u: goto L_0024E230;
    case 246u: goto L_0024E244;
    case 247u: goto L_0024E260;
    case 248u: goto L_0024E270;
    case 249u: goto L_0024E280;
    case 250u: goto L_0024E290;
    case 251u: goto L_0024E2B0;
    case 252u: goto L_0024E2D0;
    case 253u: goto L_0024E2E0;
    case 254u: goto L_0024E2F8;
    case 255u: goto L_0024E318;
    case 256u: goto L_0024E328;
    case 257u: goto L_0024E344;
    case 258u: goto L_0024E358;
    case 259u: goto L_0024E368;
    case 260u: goto L_0024E37C;
    case 261u: goto L_0024E3A0;
    case 262u: goto L_0024E3B4;
    case 263u: goto L_0024E3D4;
    case 264u: goto L_0024E3F0;
    case 265u: goto L_0024E408;
    case 266u: goto L_0024E418;
    case 267u: goto L_0024E440;
    case 268u: goto L_0024E468;
    case 269u: goto L_0024E478;
    case 270u: goto L_0024E494;
    case 271u: goto L_0024E4B0;
    case 272u: goto L_0024E4D0;
    case 273u: goto L_0024E550;
    case 274u: goto L_0024E5B0;
    case 275u: goto L_0024E5F4;
    case 276u: goto L_0024E610;
    case 277u: goto L_0024E620;
    case 278u: goto L_0024E64C;
    case 279u: goto L_0024E668;
    case 280u: goto L_0024E680;
    case 281u: goto L_0024E6B4;
    case 282u: goto L_0024E6C0;
    case 283u: goto L_0024E71C;
    case 284u: goto L_0024E730;
    case 285u: goto L_0024E74C;
    case 286u: goto L_0024E784;
    case 287u: goto L_0024E7A0;
    case 288u: goto L_0024E7E8;
    case 289u: goto L_0024E7F8;
    case 290u: goto L_0024E814;
    case 291u: goto L_0024E820;
    case 292u: goto L_0024E83C;
    case 293u: goto L_0024E860;
    case 294u: goto L_0024E870;
    case 295u: goto L_0024E88C;
    case 296u: goto L_0024E898;
    case 297u: goto L_0024E8AC;
    case 298u: goto L_0024E8BC;
    case 299u: goto L_0024E8D0;
    case 300u: goto L_0024E8E0;
    case 301u: goto L_0024E8F4;
    case 302u: goto L_0024E910;
    case 303u: goto L_0024E92C;
    case 304u: goto L_0024EA04;
    case 305u: goto L_0024EA30;
    case 306u: goto L_0024EA4C;
    case 307u: goto L_0024EA58;
    case 308u: goto L_0024EA6C;
    case 309u: goto L_0024EA80;
    case 310u: goto L_0024EA9C;
    case 311u: goto L_0024EAC4;
    case 312u: goto L_0024EAE0;
    case 313u: goto L_0024EAF0;
    case 314u: goto L_0024EB10;
    case 315u: goto L_0024EB1C;
    case 316u: goto L_0024EB24;
    case 317u: goto L_0024EB44;
    case 318u: goto L_0024EB54;
    case 319u: goto L_0024EB70;
    case 320u: goto L_0024EB84;
    case 321u: goto L_0024EB94;
    case 322u: goto L_0024EBB0;
    case 323u: goto L_0024EBCC;
    case 324u: goto L_0024EBDC;
    case 325u: goto L_0024EC2C;
    case 326u: goto L_0024EC3C;
    case 327u: goto L_0024EC60;
    case 328u: goto L_0024EC8C;
    case 329u: goto L_0024EC9C;
    case 330u: goto L_0024ECEC;
    case 331u: goto L_0024ECFC;
    case 332u: goto L_0024ED10;
    case 333u: goto L_0024ED50;
    case 334u: goto L_0024ED60;
    case 335u: goto L_0024ED7C;
    case 336u: goto L_0024ED90;
    case 337u: goto L_0024EDA0;
    case 338u: goto L_0024EDD0;
    case 339u: goto L_0024EEF4;
    case 340u: goto L_0024EFE0;
    case 341u: goto L_0024F00C;
    case 342u: goto L_0024F028;
    case 343u: goto L_0024F048;
    case 344u: goto L_0024F058;
    case 345u: goto L_0024F074;
    case 346u: goto L_0024F088;
    case 347u: goto L_0024F098;
    case 348u: goto L_0024F0B0;
    case 349u: goto L_0024F0C0;
    case 350u: goto L_0024F0DC;
    case 351u: goto L_0024F100;
    case 352u: goto L_0024F11C;
    case 353u: goto L_0024F130;
    case 354u: goto L_0024F164;
    case 355u: goto L_0024F174;
    case 356u: goto L_0024F190;
    case 357u: goto L_0024F1A4;
    case 358u: goto L_0024F1B4;
    case 359u: goto L_0024F1F0;
    case 360u: goto L_0024F248;
    case 361u: goto L_0024F258;
    case 362u: goto L_0024F274;
    case 363u: goto L_0024F288;
    case 364u: goto L_0024F298;
    case 365u: goto L_0024F324;
    case 366u: goto L_0024F3E4;
    case 367u: goto L_0024F3F4;
    case 368u: goto L_0024F410;
    case 369u: goto L_0024F424;
    case 370u: goto L_0024F434;
    case 371u: goto L_0024F470;
    case 372u: goto L_0024F520;
    case 373u: goto L_0024F540;
    case 374u: goto L_0024F560;
    case 375u: goto L_0024F570;
    case 376u: goto L_0024F590;
    case 377u: goto L_0024F5B0;
    case 378u: goto L_0024F5C0;
    case 379u: goto L_0024F5D0;
    case 380u: goto L_0024F5F0;
    case 381u: goto L_0024F630;
    case 382u: goto L_0024F640;
    case 383u: goto L_0024F660;
    case 384u: goto L_0024F67C;
    case 385u: goto L_0024F6C8;
    case 386u: goto L_0024F6D8;
    case 387u: goto L_0024F700;
    case 388u: goto L_0024F71C;
    case 389u: goto L_0024F728;
    case 390u: goto L_0024F740;
    case 391u: goto L_0024F750;
    case 392u: goto L_0024F76C;
    case 393u: goto L_0024F778;
    case 394u: goto L_0024F790;
    case 395u: goto L_0024F7A0;
    case 396u: goto L_0024F7BC;
    case 397u: goto L_0024F860;
    case 398u: goto L_0024F8EC;
    case 399u: goto L_0024F930;
    case 400u: goto L_0024F9A4;
    case 401u: goto L_0024FA28;
    case 402u: goto L_0024FA60;
    case 403u: goto L_0024FAA0;
    case 404u: goto L_0024FB70;
    case 405u: goto L_0024FB80;
    case 406u: goto L_0024FB90;
    case 407u: goto L_0024FBA0;
    case 408u: goto L_0024FBB0;
    case 409u: goto L_0024FBC0;
    case 410u: goto L_0024FBD0;
    case 411u: goto L_0024FBE0;
    case 412u: goto L_0024FBF0;
    case 413u: goto L_0024FC18;
    case 414u: goto L_0024FC44;
    case 415u: goto L_0024FC78;
    case 416u: goto L_0024FC98;
    case 417u: goto L_0024FCD0;
    case 418u: goto L_0024FD0C;
    case 419u: goto L_0024FD50;
    case 420u: goto L_0024FD58;
    case 421u: goto L_0024FD94;
    case 422u: goto L_0024FDC8;
    case 423u: goto L_0024FE20;
    case 424u: goto L_0024FE3C;
    case 425u: goto L_0024FE48;
    case 426u: goto L_0024FE64;
    case 427u: goto L_0024FE90;
    case 428u: goto L_0024FEC0;
    case 429u: goto L_0024FEC8;
    case 430u: goto L_0024FEF0;
    case 431u: goto L_0024FEF8;
    case 432u: goto L_0024FF10;
    case 433u: goto L_0024FF20;
    case 434u: goto L_0024FF34;
    case 435u: goto L_0024FF44;
    case 436u: goto L_0024FF50;
    case 437u: goto L_0024FF90;
    case 438u: goto L_0024FF9C;
    case 439u: goto L_0024FFB0;
    case 440u: goto L_0024FFD4;
    case 441u: goto L_0024FFDC;
    case 442u: goto L_0024FFF4;
    default: bad_entry(c, 0x0024C000u); return;
    }
L_0024C000:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C010u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C010u) [[unlikely]] return; }
L_0024C010:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0024C020; } }
L_0024C01C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024C020:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024C030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024C06C; } }
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_0024C0C0; } }
L_0024C06C:
    set32(c.r[8], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 28u));  goto L_0024C0B4; }
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], c.r[17].w[0] + 28u);
    set32(c.r[6], 0u + 1u);
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C0B0u);  if (depth < kMaxDepth) unit_0052(c, 353u, depth + 1u); else { c.pc = 0x0024B590u; return; } if (c.pc != 0x0024C0B0u) [[unlikely]] return; }
L_0024C0B0:
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 1;
L_0024C0B4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 3;
L_0024C0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024C0E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0024C0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0024C100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C120u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x0024C120u) [[unlikely]] return; }
L_0024C120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1200u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024C150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11776u);  c.pc = t; return; }
L_0024C160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C17Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 212u, depth + 1u); else { c.pc = 0x00261BF0u; return; } if (c.pc != 0x0024C17Cu) [[unlikely]] return; }
L_0024C17C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C188u); set32(c.r[4], ld32((c.r[2].w[0] + 11776u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0024C188u) [[unlikely]] return; }
L_0024C188:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C19Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024C19Cu) [[unlikely]] return; }
L_0024C19C:
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1ACu); set32(c.r[4], c.r[4].w[0] + 11792u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0024C1ACu) [[unlikely]] return; }
L_0024C1AC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1C0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024C1C0u) [[unlikely]] return; }
L_0024C1C0:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1D0u); set32(c.r[4], c.r[4].w[0] + 11805u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0024C1D0u) [[unlikely]] return; }
L_0024C1D0:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C1E4u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024C1E4u) [[unlikely]] return; }
L_0024C1E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0024C204; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C200u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C200u) [[unlikely]] return; }
L_0024C200:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0024C204:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0024C220; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C21Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C21Cu) [[unlikely]] return; }
L_0024C21C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024C220:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024C230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C24Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 216u, depth + 1u); else { c.pc = 0x00261C40u; return; } if (c.pc != 0x0024C24Cu) [[unlikely]] return; }
L_0024C24C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 12u));  goto L_0024C25C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024C328; } }
L_0024C25C:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0024C28C; }
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024C288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024C328; } }
L_0024C288:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0024C28C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C2A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024C328; }
L_0024C2A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0024C2B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C2D4; } }
L_0024C2B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0024C2E4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2CCu); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C2CCu) [[unlikely]] return; }
L_0024C2CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C2E0; } }
L_0024C2D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C328; } }
L_0024C2E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0024C2E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C2F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024C328; }
L_0024C2F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0024C30C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C324; } }
L_0024C30C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024C328; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C324u); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C324u) [[unlikely]] return; }
L_0024C324:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024C328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024C340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C35Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 217u, depth + 1u); else { c.pc = 0x00261C50u; return; } if (c.pc != 0x0024C35Cu) [[unlikely]] return; }
L_0024C35C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C368u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0024C368u) [[unlikely]] return; }
L_0024C368:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C374u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0024C374u) [[unlikely]] return; }
L_0024C374:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C388u) [[unlikely]] return; }
L_0024C388:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C39Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C39Cu) [[unlikely]] return; }
L_0024C39C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024C3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C3CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 218u, depth + 1u); else { c.pc = 0x00261C60u; return; } if (c.pc != 0x0024C3CCu) [[unlikely]] return; }
L_0024C3CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0024C3DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024C414; } }
L_0024C3DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0024C3F8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C3F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C3F4u) [[unlikely]] return; }
L_0024C3F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0024C3F8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024C414; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C410u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C410u) [[unlikely]] return; }
L_0024C410:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024C414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024C430:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0058(c, 219u, depth); }
L_0024C440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C464u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 220u, depth + 1u); else { c.pc = 0x00261C80u; return; } if (c.pc != 0x0024C464u) [[unlikely]] return; }
L_0024C464:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C470u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0024C470u) [[unlikely]] return; }
L_0024C470:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C47Cu); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0024C47Cu) [[unlikely]] return; }
L_0024C47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C484u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x0024C484u) [[unlikely]] return; }
L_0024C484:
    set32(c.r[19], ld32((c.r[18].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0024C4F8; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[18].w[0] + 20u), c.r[16].w[0]);  goto L_0024C4D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C4A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024C4A4u) [[unlikely]] return; }
L_0024C4A4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C4B4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024C4B4u) [[unlikely]] return; }
L_0024C4B4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C4D0; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C4D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C4D0u) [[unlikely]] return; }
L_0024C4D0:
    st32((c.r[18].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_0024C4D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0024C4F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C4E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024C4E4u) [[unlikely]] return; }
L_0024C4E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C4F4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024C4F4u) [[unlikely]] return; }
L_0024C4F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024C4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C500u);  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x0024C500u) [[unlikely]] return; }
L_0024C500:
    set32(c.r[17], ld32((c.r[18].w[0] + 24u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0024C574; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 24u), c.r[16].w[0]);  goto L_0024C550; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C520u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024C520u) [[unlikely]] return; }
L_0024C520:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C530u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024C530u) [[unlikely]] return; }
L_0024C530:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C54C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C54Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C54Cu) [[unlikely]] return; }
L_0024C54C:
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_0024C550:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0024C570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C560u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024C560u) [[unlikely]] return; }
L_0024C560:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C570u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024C570u) [[unlikely]] return; }
L_0024C570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0024C574:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024C590:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C5B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 221u, depth + 1u); else { c.pc = 0x00261C90u; return; } if (c.pc != 0x0024C5B8u) [[unlikely]] return; }
L_0024C5B8:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 8;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 24u)));  goto L_0024C63C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 20u)));  goto L_0024C618; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C5E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024C5E8u) [[unlikely]] return; }
L_0024C5E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C5F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024C5F8u) [[unlikely]] return; }
L_0024C5F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C614; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C614u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C614u) [[unlikely]] return; }
L_0024C614:
    set32(c.r[16], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_0024C618:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 20u), c.r[16].w[0]);  if (t) { goto L_0024C638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C628u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024C628u) [[unlikely]] return; }
L_0024C628:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C638u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024C638u) [[unlikely]] return; }
L_0024C638:
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_0024C63C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0024C6C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C64Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 454u, depth + 1u); else { c.pc = 0x002BB650u; return; } if (c.pc != 0x0024C64Cu) [[unlikely]] return; }
L_0024C64C:
    set32(c.r[17], ld32((c.r[18].w[0] + 24u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_0024C6BC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 24u), c.r[16].w[0]);  goto L_0024C69C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C66Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024C66Cu) [[unlikely]] return; }
L_0024C66C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C67Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024C67Cu) [[unlikely]] return; }
L_0024C67C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C698; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C698u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C698u) [[unlikely]] return; }
L_0024C698:
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_0024C69C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0024C6BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C6ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024C6ACu) [[unlikely]] return; }
L_0024C6AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C6BCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024C6BCu) [[unlikely]] return; }
L_0024C6BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0024C6C0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024C6E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C70Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C70Cu) [[unlikely]] return; }
L_0024C70C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_0024C724; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024C764; } }
L_0024C724:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024C764; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C740u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C740u) [[unlikely]] return; }
L_0024C740:
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_0024C758; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C764; } }
L_0024C758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C760u);  if (depth < kMaxDepth) unit_0052(c, 129u, depth + 1u); else { c.pc = 0x00249170u; return; } if (c.pc != 0x0024C760u) [[unlikely]] return; }
L_0024C760:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0024C764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024C780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C7A4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C7A4u) [[unlikely]] return; }
L_0024C7A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0024C7E4; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C7C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C7C0u) [[unlikely]] return; }
L_0024C7C0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C7D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C7D8u) [[unlikely]] return; }
L_0024C7D8:
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_0024C814; } }
L_0024C7E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C7F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C7F4u) [[unlikely]] return; }
L_0024C7F4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C80Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C80Cu) [[unlikely]] return; }
L_0024C80C:
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 2;
L_0024C814:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024C830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0024C840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0024C850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C870:
    c.f[1] = ld32((c.r[28].w[0] - 32640u));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[4].w[0] + 12u));  goto L_0024C8A8; }
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024C8A4; } }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), 0u);  if (t) { goto L_0024C8B4; } }
L_0024C8A4:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 1;
L_0024C8A8:
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 3;
L_0024C8B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024C8C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024C9A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] - 1008u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0024C934; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_0024C938; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C908u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024C908u) [[unlikely]] return; }
L_0024C908:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C918u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024C918u) [[unlikely]] return; }
L_0024C918:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C934; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C934u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C934u) [[unlikely]] return; }
L_0024C934:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_0024C938:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0024C984; }
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0024C980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C954u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024C954u) [[unlikely]] return; }
L_0024C954:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C964u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024C964u) [[unlikely]] return; }
L_0024C964:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024C980; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C980u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024C980u) [[unlikely]] return; }
L_0024C980:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024C984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C98Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 243u, depth + 1u); else { c.pc = 0x00261E00u; return; } if (c.pc != 0x0024C98Cu) [[unlikely]] return; }
L_0024C98C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024C9AC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C9A8u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0024C9A8u) [[unlikely]] return; }
L_0024C9A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024C9AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024C9D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C9F4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 246u, depth + 1u); else { c.pc = 0x00261E70u; return; } if (c.pc != 0x0024C9F4u) [[unlikely]] return; }
L_0024C9F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 1008u);
    c.f[1] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[18].w[0] + 12u), c.f[1]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 20u), c.r[17].w[0]);  if (t) { goto L_0024CA30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024CA20u) [[unlikely]] return; }
L_0024CA20:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA30u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024CA30u) [[unlikely]] return; }
L_0024CA30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 24u), c.r[16].w[0]);  if (t) { goto L_0024CA50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024CA40u) [[unlikely]] return; }
L_0024CA40:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA50u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024CA50u) [[unlikely]] return; }
L_0024CA50:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024CA70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11840u);  c.pc = t; return; }
L_0024CA80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CA9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C160u; return; } if (c.pc != 0x0024CA9Cu) [[unlikely]] return; }
L_0024CA9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CAA8u); set32(c.r[4], ld32((c.r[2].w[0] + 11840u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0024CAA8u) [[unlikely]] return; }
L_0024CAA8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CABCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024CABCu) [[unlikely]] return; }
L_0024CABC:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CACCu); set32(c.r[4], c.r[4].w[0] + 11856u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0024CACCu) [[unlikely]] return; }
L_0024CACC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CAE0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024CAE0u) [[unlikely]] return; }
L_0024CAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024CB00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CB1Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0024C230u; return; } if (c.pc != 0x0024CB1Cu) [[unlikely]] return; }
L_0024CB1C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 28u));  goto L_0024CB2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024CBA0; } }
L_0024CB2C:
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024CB40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024CB40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024CB60; } }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024CB60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024CB60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0024CB84; }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024CB80; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024CB80:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0024CB84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  goto L_0024CB94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024CBA0; } }
L_0024CB94:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0024CBA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024CBC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CBDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 25u, depth + 1u); else { c.pc = 0x0024C340u; return; } if (c.pc != 0x0024CBDCu) [[unlikely]] return; }
L_0024CBDC:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CBE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x0024CBE8u) [[unlikely]] return; }
L_0024CBE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CBF4u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0024CBF4u) [[unlikely]] return; }
L_0024CBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024CC10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C3B0u | kUnwind; return; } goto L_0024C3B0; }
L_0024CC20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C430u | kUnwind; return; } goto L_0024C430; }
L_0024CC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 36u, depth + 1u); else { c.pc = 0x0024C440u; return; } if (c.pc != 0x0024CC4Cu) [[unlikely]] return; }
L_0024CC4C:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x0024CC58u) [[unlikely]] return; }
L_0024CC58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC64u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0024CC64u) [[unlikely]] return; }
L_0024CC64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024CC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 44u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC98u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024CC98u) [[unlikely]] return; }
L_0024CC98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024CCC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CCB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x0024CCB0u) [[unlikely]] return; }
L_0024CCB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[3].w[0] - 816u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 5;
L_0024CCC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024CCE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CCFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 52u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x0024CCFCu) [[unlikely]] return; }
L_0024CCFC:
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024CD30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 44u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD58u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024CD58u) [[unlikely]] return; }
L_0024CD58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024CD84; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x0024CD70u) [[unlikely]] return; }
L_0024CD70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[3].w[0] - 816u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 5;
L_0024CD84:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 52u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x0024CD94u) [[unlikely]] return; }
L_0024CD94:
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024CDD0:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  goto L_0024CDDC; }
L_0024CDDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CDF0:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  goto L_0024CE00; }
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 1;
L_0024CE00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CE10:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024CE20; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0024CE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CE30:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024CE40; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0024CE40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024CE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0024CE7C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CE70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024CE70u) [[unlikely]] return; }
L_0024CE70:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0024CE80; } }
L_0024CE7C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024CE80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024CE90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024CEDC; } }
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_0024CF58; } }
L_0024CEDC:
    set32(c.r[8], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 28u));  goto L_0024CF3C; }
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 3u);
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CF20u);  if (depth < kMaxDepth) unit_0052(c, 353u, depth + 1u); else { c.pc = 0x0024B590u; return; } if (c.pc != 0x0024CF20u) [[unlikely]] return; }
L_0024CF20:
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 7;
L_0024CF3C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 7;
L_0024CF58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024CF70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0024CF80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0024CF90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CFB0u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x0024CFB0u) [[unlikely]] return; }
L_0024CFB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 816u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024CFE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 11904u);  c.pc = t; return; }
L_0024CFF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D00Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C160u; return; } if (c.pc != 0x0024D00Cu) [[unlikely]] return; }
L_0024D00C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D018u); set32(c.r[4], ld32((c.r[2].w[0] + 11904u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0024D018u) [[unlikely]] return; }
L_0024D018:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D02Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024D02Cu) [[unlikely]] return; }
L_0024D02C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D038u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 102u, depth + 1u); else { c.pc = 0x00271080u; return; } if (c.pc != 0x0024D038u) [[unlikely]] return; }
L_0024D038:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D048u); set32(c.r[4], c.r[4].w[0] + 11920u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0024D048u) [[unlikely]] return; }
L_0024D048:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D05Cu); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024D05Cu) [[unlikely]] return; }
L_0024D05C:
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D06Cu); set32(c.r[4], c.r[4].w[0] + 11937u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0024D06Cu) [[unlikely]] return; }
L_0024D06C:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D080u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024D080u) [[unlikely]] return; }
L_0024D080:
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D090u); set32(c.r[4], c.r[4].w[0] + 11952u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0024D090u) [[unlikely]] return; }
L_0024D090:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D0A4u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024D0A4u) [[unlikely]] return; }
L_0024D0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024D0C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D0DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0024C230u; return; } if (c.pc != 0x0024D0DCu) [[unlikely]] return; }
L_0024D0DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 32u));  goto L_0024D0EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024D224; } }
L_0024D0EC:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D100; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D120; } }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D120; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D140; } }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D140; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D1C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D160; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D180; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D180; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D1A0; } }
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D1A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024D1C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D1C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D1C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0024D1E4; }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D1E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D1E0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0024D1E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 80u)));  goto L_0024D1F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024D224; } }
L_0024D1F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024D224; }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024D220; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0024D224; }
L_0024D220:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D25Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 25u, depth + 1u); else { c.pc = 0x0024C340u; return; } if (c.pc != 0x0024D25Cu) [[unlikely]] return; }
L_0024D25C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D268u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271140u; return; } if (c.pc != 0x0024D268u) [[unlikely]] return; }
L_0024D268:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D274u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0024D274u) [[unlikely]] return; }
L_0024D274:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D280u); set32(c.r[5], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0024D280u) [[unlikely]] return; }
L_0024D280:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D28Cu); set32(c.r[5], c.r[17].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0024D28Cu) [[unlikely]] return; }
L_0024D28C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D2A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C3B0u | kUnwind; return; } goto L_0024C3B0; }
L_0024D2B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024C430u | kUnwind; return; } goto L_0024C430; }
L_0024D2C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D2DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 36u, depth + 1u); else { c.pc = 0x0024C440u; return; } if (c.pc != 0x0024D2DCu) [[unlikely]] return; }
L_0024D2DC:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D2E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 115u, depth + 1u); else { c.pc = 0x00271190u; return; } if (c.pc != 0x0024D2E8u) [[unlikely]] return; }
L_0024D2E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D2F4u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0024D2F4u) [[unlikely]] return; }
L_0024D2F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D300u); set32(c.r[5], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0024D300u) [[unlikely]] return; }
L_0024D300:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D30Cu); set32(c.r[5], c.r[17].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0024D30Cu) [[unlikely]] return; }
L_0024D30C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D338u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024D338u) [[unlikely]] return; }
L_0024D338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024D3CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D350u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x0024D350u) [[unlikely]] return; }
L_0024D350:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 624u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 14400u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[8].w[0] + 14404u));
    c.f[0] = ld32((c.r[2].w[0] + 14432u));
    st32((c.r[16].w[0] + 36u), c.f[1]);
    c.r[8].d[0] = 0ull | 65535ull;
    c.f[1] = ld32((c.r[7].w[0] + 14408u));
    st32((c.r[16].w[0] + 40u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 14416u));
    st32((c.r[16].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 14420u));
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 14424u));
    st32((c.r[16].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 14428u));
    st32((c.r[16].w[0] + 60u), c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    st32((c.r[16].w[0] + 80u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[8].w[0]);
    c.budget -= 31;
L_0024D3CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024D3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D3FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 52u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x0024D3FCu) [[unlikely]] return; }
L_0024D3FC:
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 32u), c.f[2]);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D450:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D478u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024D478u) [[unlikely]] return; }
L_0024D478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024D50C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D490u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x0024D490u) [[unlikely]] return; }
L_0024D490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 624u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 14400u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[8].w[0] + 14404u));
    c.f[0] = ld32((c.r[2].w[0] + 14432u));
    st32((c.r[16].w[0] + 36u), c.f[1]);
    c.r[8].d[0] = 0ull | 65535ull;
    c.f[1] = ld32((c.r[7].w[0] + 14408u));
    st32((c.r[16].w[0] + 40u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 14416u));
    st32((c.r[16].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 14420u));
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 14424u));
    st32((c.r[16].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 14428u));
    st32((c.r[16].w[0] + 60u), c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    st32((c.r[16].w[0] + 80u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[8].w[0]);
    c.budget -= 31;
L_0024D50C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D51Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 52u, depth + 1u); else { c.pc = 0x0024C590u; return; } if (c.pc != 0x0024D51Cu) [[unlikely]] return; }
L_0024D51C:
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[16].w[0] + 32u), c.f[2]);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024D580:
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { st32((c.r[4].w[0] + 88u), c.r[5].w[0]);  goto L_0024D5A4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { st32((c.r[4].w[0] + 84u), c.r[5].w[0]);  goto L_0024D5A4; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { st32((c.r[4].w[0] + 80u), c.r[5].w[0]);  goto L_0024D5A4; }
L_0024D5A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D5B0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 88u)));  goto L_0024D5D8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 84u)));  goto L_0024D5D8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 80u)));  goto L_0024D5D8; }
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 1;
L_0024D5D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D5E0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0024D608; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_0024D608; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_0024D608; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D608:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D610:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0024D638; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0024D638; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_0024D638; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D638:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024D640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024D6E8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_0024D6B0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_0024D678; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024D71C; } }
L_0024D678:
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D684u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D684u) [[unlikely]] return; }
L_0024D684:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 32u));  goto L_0024D694; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024D6A8; } }
L_0024D694:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D6A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0024D720; } }
L_0024D6B0:
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D6BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D6BCu) [[unlikely]] return; }
L_0024D6BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 52u));  goto L_0024D6CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024D6E0; } }
L_0024D6CC:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D6E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D71C; } }
L_0024D6E8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D6F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024D6F8u) [[unlikely]] return; }
L_0024D6F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 64u));  goto L_0024D708; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024D71C; } }
L_0024D708:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D71C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D71C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024D720:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024D730:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024D7E8; } }
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D7A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D7A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D7C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D7C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D7C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0024D97C; }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D7E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D978; } }
L_0024D7E8:
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[8], ld32((c.r[17].w[0] + 80u)));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 21u, c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_0024D844; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[12] = c.f[21];
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D82Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0052(c, 353u, depth + 1u); else { c.pc = 0x0024B590u; return; } if (c.pc != 0x0024D82Cu) [[unlikely]] return; }
L_0024D82C:
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[2]);
    c.budget -= 6;
L_0024D844:
    set32(c.r[8], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[2].d[0]) { set32(c.r[8], ld32((c.r[17].w[0] + 88u)));  goto L_0024D8B0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[12] = c.f[21];
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D86Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0052(c, 353u, depth + 1u); else { c.pc = 0x0024B590u; return; } if (c.pc != 0x0024D86Cu) [[unlikely]] return; }
L_0024D86C:
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.f[13] = ld32((c.r[29].w[0] + 84u));
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    c.f[15] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D884u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0072(c, 232u, depth + 1u); else { c.pc = 0x002C9FC0u; return; } if (c.pc != 0x0024D884u) [[unlikely]] return; }
L_0024D884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D88Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005F(c, 110u, depth + 1u); else { c.pc = 0x0027E0D0u; return; } if (c.pc != 0x0024D88Cu) [[unlikely]] return; }
L_0024D88C:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[17].w[0] + 60u), c.f[0]);
    set32(c.r[8], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 9;
L_0024D8B0:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[2].d[0]) { c.f[3] = ld32((c.r[17].w[0] + 32u));  goto L_0024D8E0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[12] = c.f[21];
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D8D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0052(c, 353u, depth + 1u); else { c.pc = 0x0024B590u; return; } if (c.pc != 0x0024D8D4u) [[unlikely]] return; }
L_0024D8D4:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 3;
L_0024D8E0:
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D91C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D91C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024D93C; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D93C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D93C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0024D960; }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0024D95C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024D95C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0024D960:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.f[20]);  goto L_0024D974; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024D978; } }
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 1;
L_0024D974:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024D978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024D97C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024D9A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 3u);  c.pc = t; return; }
L_0024D9B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0024D9C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9F0u); c.r[6].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024C9D0u; return; } if (c.pc != 0x0024D9F0u) [[unlikely]] return; }
L_0024D9F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 624u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 14400u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[2].w[0] + 14404u));
    c.f[0] = ld32((c.r[3].w[0] + 14432u));
    st32((c.r[19].w[0] + 36u), c.f[1]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[8].w[0] + 14408u));
    st32((c.r[19].w[0] + 40u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 14416u));
    st32((c.r[19].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 14420u));
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 14424u));
    st32((c.r[19].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 14428u));
    st32((c.r[19].w[0] + 60u), c.f[1]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    st32((c.r[19].w[0] + 80u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 84u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024DA90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 12000u);  c.pc = t; return; }
L_0024DAA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DABCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x0024DABCu) [[unlikely]] return; }
L_0024DABC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAC8u); set32(c.r[4], ld32((c.r[2].w[0] + 12000u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0024DAC8u) [[unlikely]] return; }
L_0024DAC8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DADCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024DADCu) [[unlikely]] return; }
L_0024DADC:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAECu); set32(c.r[4], c.r[4].w[0] + 12016u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0024DAECu) [[unlikely]] return; }
L_0024DAEC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB00u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024DB00u) [[unlikely]] return; }
L_0024DB00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024DB20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB44u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x0024DB44u) [[unlikely]] return; }
L_0024DB44:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_0024DB54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024DBE0; } }
L_0024DB54:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024DBE0; }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0024DB80; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 20u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 20u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0024DB8C; }
L_0024DB80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DBE0; } }
L_0024DB8C:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 14024u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0024DBCC; } }
L_0024DBA4:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DBBCu); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DBBCu) [[unlikely]] return; }
L_0024DBBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0024DBCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024DBE0; } }
L_0024DBCC:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[19].w[0] + 20u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DBA4u | kUnwind; return; } goto L_0024DBA4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024DBE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024DC00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC1Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x0024DC1Cu) [[unlikely]] return; }
L_0024DC1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC28u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0024DC28u) [[unlikely]] return; }
L_0024DC28:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0024DC6C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC40u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0041(c, 95u, depth + 1u); else { c.pc = 0x00205090u; return; } if (c.pc != 0x0024DC40u) [[unlikely]] return; }
L_0024DC40:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14168u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DC68u) [[unlikely]] return; }
L_0024DC68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0024DC6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024DC80:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_0024DC90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_0024DCA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCC4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0024DCC4u) [[unlikely]] return; }
L_0024DCC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCD0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0024DCD0u) [[unlikely]] return; }
L_0024DCD0:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0024DD84; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DCE8u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0041(c, 96u, depth + 1u); else { c.pc = 0x002050A0u; return; } if (c.pc != 0x0024DCE8u) [[unlikely]] return; }
L_0024DCE8:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13304u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DD0Cu) [[unlikely]] return; }
L_0024DD0C:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024DD40; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14600u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DD40u) [[unlikely]] return; }
L_0024DD40:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_0024DD54; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0024DD64; }
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 1;
L_0024DD54:
    st32((c.r[19].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024DD80; } }
L_0024DD64:
    set32(c.r[3], c.r[3].w[0] + 14978u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 7;
L_0024DD80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0024DD84:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024DDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 24u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DDB8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024DDB8u) [[unlikely]] return; }
L_0024DDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024DDE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DDC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0024DDC8u) [[unlikely]] return; }
L_0024DDC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 432u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 6;
L_0024DDE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024DE00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE3Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_006E(c, 432u, depth + 1u); else { c.pc = 0x002BB390u; return; } if (c.pc != 0x0024DE3Cu) [[unlikely]] return; }
L_0024DE3C:
    set32(c.r[17], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[17].w[0]);  if (t) { goto L_0024DE60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024DE50u) [[unlikely]] return; }
L_0024DE50:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE60u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024DE60u) [[unlikely]] return; }
L_0024DE60:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0024DEAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024DE74u) [[unlikely]] return; }
L_0024DE74:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE88u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024DE88u) [[unlikely]] return; }
L_0024DE88:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024DEA8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DEA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DEA8u) [[unlikely]] return; }
L_0024DEA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0024DEAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 124u)));  goto L_0024DF5C; }
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[12] = c.f[21];
    st32((c.r[29].w[0] + 116u), 0u);
    c.f[13] = c.f[20];
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], c.r[29].w[0] + 120u);
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DEE0u); set32(c.r[9], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_004E(c, 271u, depth + 1u); else { c.pc = 0x0023ABD0u; return; } if (c.pc != 0x0024DEE0u) [[unlikely]] return; }
L_0024DEE0:
    set32(c.r[19], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 116u)));  if (t) { goto L_0024DF18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14600u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DF18u) [[unlikely]] return; }
L_0024DF18:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_0024DF2C; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0024DF3C; }
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_0024DF2C:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024DF58; } }
L_0024DF3C:
    set32(c.r[2], c.r[2].w[0] + 14978u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.budget -= 7;
L_0024DF58:
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_0024DF5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_0024DF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024DF6Cu) [[unlikely]] return; }
L_0024DF6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF7Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024DF7Cu) [[unlikely]] return; }
L_0024DF7C:
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0024DFC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024DF90u) [[unlikely]] return; }
L_0024DF90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DFA0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024DFA0u) [[unlikely]] return; }
L_0024DFA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024DFBC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DFBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024DFBCu) [[unlikely]] return; }
L_0024DFBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0024DFC0:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024DFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 8u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E01Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 266u, depth + 1u); else { c.pc = 0x0023AA50u; return; } if (c.pc != 0x0024E01Cu) [[unlikely]] return; }
L_0024E01C:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024E040:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0024E090; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14600u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E090u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E090u) [[unlikely]] return; }
L_0024E090:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_0024E0A4; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0024E0B4; }
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 1;
L_0024E0A4:
    st32((c.r[19].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024E0D0; } }
L_0024E0B4:
    set32(c.r[3], c.r[3].w[0] + 14978u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 7;
L_0024E0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024E0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024E16C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 432u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0024E148; }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14600u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E144u) [[unlikely]] return; }
L_0024E144:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024E148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E150u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0024E150u) [[unlikely]] return; }
L_0024E150:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024E170; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E16Cu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0024E16Cu) [[unlikely]] return; }
L_0024E16C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024E170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024E190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024E1DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E1C0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 239u, depth + 1u); else { c.pc = 0x00259EE0u; return; } if (c.pc != 0x0024E1C0u) [[unlikely]] return; }
L_0024E1C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024E1E0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E1DCu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0024E1DCu) [[unlikely]] return; }
L_0024E1DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024E1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024E200:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 12040u);  c.pc = t; return; }
L_0024E210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E224u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 176u, depth + 1u); else { c.pc = 0x00259770u; return; } if (c.pc != 0x0024E224u) [[unlikely]] return; }
L_0024E224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E230u); set32(c.r[4], ld32((c.r[2].w[0] + 12040u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0024E230u) [[unlikely]] return; }
L_0024E230:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E244u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024E244u) [[unlikely]] return; }
L_0024E244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024E260:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0056(c, 182u, depth); }
L_0024E270:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0056(c, 185u, depth); }
L_0024E280:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0056(c, 188u, depth); }
L_0024E290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2B0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 199u, depth + 1u); else { c.pc = 0x00259A00u; return; } if (c.pc != 0x0024E2B0u) [[unlikely]] return; }
L_0024E2B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0024E380; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0024E2D0u) [[unlikely]] return; }
L_0024E2D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024E2E0u) [[unlikely]] return; }
L_0024E2E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 52u)));  goto L_0024E300; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 383u, depth + 1u); else { c.pc = 0x0024F660u; return; } if (c.pc != 0x0024E2F8u) [[unlikely]] return; }
L_0024E2F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_0024E300:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_0024E36C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  goto L_0024E348; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E318u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024E318u) [[unlikely]] return; }
L_0024E318:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E328u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024E328u) [[unlikely]] return; }
L_0024E328:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E344; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E344u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E344u) [[unlikely]] return; }
L_0024E344:
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 1;
L_0024E348:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0024E368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E358u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024E358u) [[unlikely]] return; }
L_0024E358:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E368u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024E368u) [[unlikely]] return; }
L_0024E368:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_0024E36C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E37Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E37Cu) [[unlikely]] return; }
L_0024E37C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024E380:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024E3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3B4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 200u, depth + 1u); else { c.pc = 0x00259A10u; return; } if (c.pc != 0x0024E3B4u) [[unlikely]] return; }
L_0024E3B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024E3D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0024E3D4u) [[unlikely]] return; }
L_0024E3D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024E3D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024E3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E408u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024E408u) [[unlikely]] return; }
L_0024E408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024E424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E418u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 251u, depth + 1u); else { c.pc = 0x0025A080u; return; } if (c.pc != 0x0024E418u) [[unlikely]] return; }
L_0024E418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0024E424:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024E440:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E468u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024E468u) [[unlikely]] return; }
L_0024E468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024E484; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 251u, depth + 1u); else { c.pc = 0x0025A080u; return; } if (c.pc != 0x0024E478u) [[unlikely]] return; }
L_0024E478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0024E484:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E494u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 213u, depth + 1u); else { c.pc = 0x00259BD0u; return; } if (c.pc != 0x0024E494u) [[unlikely]] return; }
L_0024E494:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024E4B0:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024E4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 8ull;  goto L_0024E504; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13528u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_0024E5C0; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 1;
L_0024E504:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0024E58C; }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[4].d[0] & 64ull;  goto L_0024E538; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E534; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E58C; } }
L_0024E534:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_0024E538:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_0024E580; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E550u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E550u) [[unlikely]] return; }
L_0024E550:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 40u), c.f[0]);  goto L_0024E57C; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024E578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0024E58C; } }
L_0024E578:
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_0024E57C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_0024E580:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0024E58C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0024E5C4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024E614; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E5B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E5B0u) [[unlikely]] return; }
L_0024E5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E610; } }
L_0024E5C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_0024E5C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024E610; } }
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E5F4u); set32(c.r[6], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E5F4u) [[unlikely]] return; }
L_0024E5F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E610; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024E610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E610u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0062(c, 212u, depth + 1u); else { c.pc = 0x00289BA0u; return; } if (c.pc != 0x0024E610u) [[unlikely]] return; }
L_0024E610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024E614:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024E620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E64Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024E64Cu) [[unlikely]] return; }
L_0024E64C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0024E66C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E668u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 49u, depth + 1u); else { c.pc = 0x002409B0u; return; } if (c.pc != 0x0024E668u) [[unlikely]] return; }
L_0024E668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024E66C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024E680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024E6A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024E6EC; } }
L_0024E6A4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E6B4u) [[unlikely]] return; }
L_0024E6B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 12080u);  if (t) { goto L_0024E6D0; } }
L_0024E6C0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0024E6D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0024E6DC; } }
L_0024E6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E6C0u | kUnwind; return; } goto L_0024E6C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024E6DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0024E6EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024E6EC; } }
L_0024E6EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E71Cu); st32((c.r[29].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0053(c, 353u, depth + 1u); else { c.pc = 0x0024F130u; return; } if (c.pc != 0x0024E71Cu) [[unlikely]] return; }
L_0024E71C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024E730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E74Cu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024E74Cu) [[unlikely]] return; }
L_0024E74C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0024E788; }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E784u); st32((c.r[29].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_0053(c, 379u, depth + 1u); else { c.pc = 0x0024F5D0u; return; } if (c.pc != 0x0024E784u) [[unlikely]] return; }
L_0024E784:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0024E788:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024E7A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024E83C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] - 176u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0024E814; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0024E818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E7E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024E7E8u) [[unlikely]] return; }
L_0024E7E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E7F8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024E7F8u) [[unlikely]] return; }
L_0024E7F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E814; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E814u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024E814u) [[unlikely]] return; }
L_0024E814:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024E818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E820u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 274u, depth + 1u); else { c.pc = 0x002622E0u; return; } if (c.pc != 0x0024E820u) [[unlikely]] return; }
L_0024E820:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024E840; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E83Cu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0024E83Cu) [[unlikely]] return; }
L_0024E83C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024E840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024E860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 12080u);  c.pc = t; return; }
L_0024E870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E88Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 253u, depth + 1u); else { c.pc = 0x00262040u; return; } if (c.pc != 0x0024E88Cu) [[unlikely]] return; }
L_0024E88C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E898u); set32(c.r[4], ld32((c.r[2].w[0] + 12080u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0024E898u) [[unlikely]] return; }
L_0024E898:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8ACu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024E8ACu) [[unlikely]] return; }
L_0024E8AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8BCu); set32(c.r[5], c.r[5].w[0] + 12096u);  if (depth < kMaxDepth) unit_0062(c, 152u, depth + 1u); else { c.pc = 0x002894E0u; return; } if (c.pc != 0x0024E8BCu) [[unlikely]] return; }
L_0024E8BC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8D0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024E8D0u) [[unlikely]] return; }
L_0024E8D0:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8E0u); set32(c.r[4], c.r[4].w[0] + 12110u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x0024E8E0u) [[unlikely]] return; }
L_0024E8E0:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E8F4u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024E8F4u) [[unlikely]] return; }
L_0024E8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024E910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E92Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 257u, depth + 1u); else { c.pc = 0x00262090u; return; } if (c.pc != 0x0024E92Cu) [[unlikely]] return; }
L_0024E92C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 16u));  goto L_0024E93C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024EA1C; } }
L_0024E93C:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E950; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024E950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E970; } }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E970; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024E970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E990; } }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E990; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024E990:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0024E9B4; }
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E9B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024E9B0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0024E9B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  goto L_0024E9C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024EA1C; } }
L_0024E9C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024E9D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024EA1C; }
L_0024E9D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0024E9EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024EA0C; } }
L_0024E9EC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024EA1C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA04u); set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EA04u) [[unlikely]] return; }
L_0024EA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024EA18; } }
L_0024EA0C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024EA1C; } }
L_0024EA18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024EA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024EA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 258u, depth + 1u); else { c.pc = 0x002620A0u; return; } if (c.pc != 0x0024EA4Cu) [[unlikely]] return; }
L_0024EA4C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 160u, depth + 1u); else { c.pc = 0x002895A0u; return; } if (c.pc != 0x0024EA58u) [[unlikely]] return; }
L_0024EA58:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EA6Cu) [[unlikely]] return; }
L_0024EA6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024EA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 259u, depth + 1u); else { c.pc = 0x002620B0u; return; } if (c.pc != 0x0024EA9Cu) [[unlikely]] return; }
L_0024EA9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  goto L_0024EAAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024EAC8; } }
L_0024EAAC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0024EAC8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EAC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EAC4u) [[unlikely]] return; }
L_0024EAC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024EAC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024EAE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0058(c, 260u, depth); }
L_0024EAF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB10u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 261u, depth + 1u); else { c.pc = 0x002620D0u; return; } if (c.pc != 0x0024EB10u) [[unlikely]] return; }
L_0024EB10:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB1Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 165u, depth + 1u); else { c.pc = 0x00289600u; return; } if (c.pc != 0x0024EB1Cu) [[unlikely]] return; }
L_0024EB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x0024EB24u) [[unlikely]] return; }
L_0024EB24:
    set32(c.r[17], ld32((c.r[18].w[0] + 32u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0024EB98; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 32u), c.r[16].w[0]);  goto L_0024EB74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024EB44u) [[unlikely]] return; }
L_0024EB44:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB54u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024EB54u) [[unlikely]] return; }
L_0024EB54:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024EB70; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024EB70u) [[unlikely]] return; }
L_0024EB70:
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 1;
L_0024EB74:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0024EB94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024EB84u) [[unlikely]] return; }
L_0024EB84:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB94u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024EB94u) [[unlikely]] return; }
L_0024EB94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024EB98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024EBB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBCCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024EBCCu) [[unlikely]] return; }
L_0024EBCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024EC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0024EBDCu) [[unlikely]] return; }
L_0024EBDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 176u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 13648u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 13652u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13656u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13660u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 32u), 0u);  if (t) { goto L_0024EC3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024EC2Cu) [[unlikely]] return; }
L_0024EC2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC3Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024EC3Cu) [[unlikely]] return; }
L_0024EC3C:
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_0024EC40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024EC60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC8Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0024EC8Cu) [[unlikely]] return; }
L_0024EC8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024ED00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0024EC9Cu) [[unlikely]] return; }
L_0024EC9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 176u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 13648u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 13652u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13656u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13660u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_0024ECFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024ECECu) [[unlikely]] return; }
L_0024ECEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECFCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024ECFCu) [[unlikely]] return; }
L_0024ECFC:
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 1;
L_0024ED00:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED10u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x002620E0u; return; } if (c.pc != 0x0024ED10u) [[unlikely]] return; }
L_0024ED10:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 12;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_0024EDA4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 32u)));  goto L_0024ED80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024ED50u) [[unlikely]] return; }
L_0024ED50:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED60u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024ED60u) [[unlikely]] return; }
L_0024ED60:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024ED7C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024ED7Cu) [[unlikely]] return; }
L_0024ED7C:
    set32(c.r[16], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 1;
L_0024ED80:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 32u), c.r[16].w[0]);  if (t) { goto L_0024EDA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ED90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024ED90u) [[unlikely]] return; }
L_0024ED90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EDA0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024EDA0u) [[unlikely]] return; }
L_0024EDA0:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_0024EDA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024EDD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024EEB0; } }
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13648u));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024EE38; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024EE38:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EE5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 13652u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024EE5C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024EE5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EE80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 13656u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024EE80; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024EE80:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] ^ 1ull;  goto L_0024EFC8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[2].w[0] + 13660u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024EEA4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024EEA4:
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024EFC8; } }
L_0024EEB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_0024EED0; }
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0024EEDC; } }
L_0024EED0:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0024EEDC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0024EF14; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[8], c.r[17].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EEF4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0053(c, 399u, depth + 1u); else { c.pc = 0x0024F930u; return; } if (c.pc != 0x0024EEF4u) [[unlikely]] return; }
L_0024EEF4:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 8;
L_0024EF14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 13648u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0024EF50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 13652u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024EF50; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024EF50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024EF74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 13656u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024EF74; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024EF74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024EF98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[2].w[0] + 13660u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024EF98; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0024EF98:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[16].w[0]), c.f[2]);  goto L_0024EFA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024EFC8; } }
L_0024EFA8:
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 8;
L_0024EFC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024EFE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F00Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 223u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x0024F00Cu) [[unlikely]] return; }
L_0024F00C:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024F0DC; } }
    c.f[12] = c.f[21];
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F028u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0053(c, 217u, depth + 1u); else { c.pc = 0x0024DE00u; return; } if (c.pc != 0x0024F028u) [[unlikely]] return; }
L_0024F028:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { st32((c.r[17].w[0] + 36u), 0u);  goto L_0024F09C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 32u), c.r[16].w[0]);  goto L_0024F078; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F048u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024F048u) [[unlikely]] return; }
L_0024F048:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F058u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024F058u) [[unlikely]] return; }
L_0024F058:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F074; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F074u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024F074u) [[unlikely]] return; }
L_0024F074:
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 1;
L_0024F078:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0024F098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F088u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024F088u) [[unlikely]] return; }
L_0024F088:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F098u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024F098u) [[unlikely]] return; }
L_0024F098:
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 1;
L_0024F09C:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0024F0E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F0B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024F0B0u) [[unlikely]] return; }
L_0024F0B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F0C0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024F0C0u) [[unlikely]] return; }
L_0024F0C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F0DC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F0DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024F0DCu) [[unlikely]] return; }
L_0024F0DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024F0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024F100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0024F120; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F11Cu);  if (depth < kMaxDepth) unit_0053(c, 231u, depth + 1u); else { c.pc = 0x0024DFF0u; return; } if (c.pc != 0x0024F11Cu) [[unlikely]] return; }
L_0024F11C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0024F120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024F130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_0024F1B4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0024F194; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F164u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024F164u) [[unlikely]] return; }
L_0024F164:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F174u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024F174u) [[unlikely]] return; }
L_0024F174:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024F190; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F190u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024F190u) [[unlikely]] return; }
L_0024F190:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F194:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 32u), 0u);  if (t) { goto L_0024F1B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024F1A4u) [[unlikely]] return; }
L_0024F1A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1B4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024F1B4u) [[unlikely]] return; }
L_0024F1B4:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[16].w[0] + 20u), c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024F1F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024F444; } }
    set32(c.r[13], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[12], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[13].d[0] != 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_0024F2CC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0024F298; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0024F278; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F248u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024F248u) [[unlikely]] return; }
L_0024F248:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F258u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024F258u) [[unlikely]] return; }
L_0024F258:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024F274; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F274u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024F274u) [[unlikely]] return; }
L_0024F274:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F278:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_0024F298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F288u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024F288u) [[unlikely]] return; }
L_0024F288:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F298u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024F298u) [[unlikely]] return; }
L_0024F298:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13648u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[5].w[0] + 13652u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 13656u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13660u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.f[0]);  if (t) { goto L_0024F444; } }
L_0024F2CC:
    c.f[20] = ld32((c.r[12].w[0] + 16u));
    set32(c.r[4], 0u + 1u);
    c.f[21] = ld32((c.r[12].w[0] + 20u));
    c.f[22] = ld32((c.r[12].w[0] + 24u));
    c.f[23] = ld32((c.r[12].w[0] + 28u));
    c.budget -= 7;
    { const bool t = c.r[13].d[0] != c.r[4].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0024F2F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0024F3C4; } }
L_0024F2F0:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[4].d[0]) { set32(c.r[14], 0u + 1u);  goto L_0024F308; }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0024F3C4; } }
    set32(c.r[14], 0u + 1u);
    c.budget -= 1;
L_0024F308:
    c.r[11].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[8].d[0] = c.r[14].d[0] + 0ull;
    c.r[7].d[0] = c.r[14].d[0] + 0ull;
    c.r[6].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_0024F3A8; } }
L_0024F324:
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[10], c.r[12].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[10].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[9], c.r[10].w[0] + 16u);  if (t) { goto L_0024F340; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F340:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024F35C; } }
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0024F35C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F35C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024F378; } }
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0024F378; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F378:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[4].d[0] ^ 1ull;  goto L_0024F398; }
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024F394; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F394:
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 1;
L_0024F398:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[14], c.r[14].w[0] + 1u);  goto L_0024F3A8; }
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 2;
L_0024F3A8:
    c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0024F3C4; } }
    c.r[4].d[0] = c.r[14].d[0] < c.r[13].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { mmi::mult(c, 0, c.r[14].w[0], c.r[11].w[0]); c.r[9].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F324u | kUnwind; return; } goto L_0024F324; }
L_0024F3C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0024F448; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.f[20]);  goto L_0024F438; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0024F414; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024F3E4u) [[unlikely]] return; }
L_0024F3E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3F4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024F3F4u) [[unlikely]] return; }
L_0024F3F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024F410; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F410u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024F410u) [[unlikely]] return; }
L_0024F410:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F414:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_0024F434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F424u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024F424u) [[unlikely]] return; }
L_0024F424:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F434u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024F434u) [[unlikely]] return; }
L_0024F434:
    st32((c.r[17].w[0] + 16u), c.f[20]);
    c.budget -= 1;
L_0024F438:
    st32((c.r[17].w[0] + 20u), c.f[21]);
    st32((c.r[17].w[0] + 24u), c.f[22]);
    st32((c.r[17].w[0] + 28u), c.f[23]);
    c.budget -= 3;
L_0024F444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0024F448:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024F470:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0024F484; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024F50C; } }
L_0024F484:
    c.f[0] = ld32((c.r[2].w[0] + 13648u));
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F49C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F49C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F4C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13652u));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F4C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F4E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13656u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F4E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F4E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0024F50C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13660u));
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F508; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F508:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0024F50C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F520:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024F530; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 1;
L_0024F530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F540:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024F550; }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0024F550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 3u);  c.pc = t; return; }
L_0024F570:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024F580; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0024F580:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F590:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0024F5A0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0024F5A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F5B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0024F5C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0024F5D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F5F0u); st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0024F5F0u) [[unlikely]] return; }
L_0024F5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 176u);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[17].w[0] + 24u), c.f[1]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_0024F640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F630u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024F630u) [[unlikely]] return; }
L_0024F630:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F640u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024F640u) [[unlikely]] return; }
L_0024F640:
    st32((c.r[17].w[0] + 36u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024F660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F67Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0024F67Cu) [[unlikely]] return; }
L_0024F67C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 176u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13648u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 13652u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13656u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13660u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 32u), c.r[16].w[0]);  if (t) { goto L_0024F6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F6C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0024F6C8u) [[unlikely]] return; }
L_0024F6C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F6D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0024F6D8u) [[unlikely]] return; }
L_0024F6D8:
    st32((c.r[17].w[0] + 36u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024F700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F71Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 289u, depth + 1u); else { c.pc = 0x0023B020u; return; } if (c.pc != 0x0024F71Cu) [[unlikely]] return; }
L_0024F71C:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F728u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 160u, depth + 1u); else { c.pc = 0x002895A0u; return; } if (c.pc != 0x0024F728u) [[unlikely]] return; }
L_0024F728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024F740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024F750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F76Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 290u, depth + 1u); else { c.pc = 0x0023B030u; return; } if (c.pc != 0x0024F76Cu) [[unlikely]] return; }
L_0024F76C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F778u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 165u, depth + 1u); else { c.pc = 0x00289600u; return; } if (c.pc != 0x0024F778u) [[unlikely]] return; }
L_0024F778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024F790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0024F7A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 288u, depth + 1u); else { c.pc = 0x0023B000u; return; } if (c.pc != 0x0024F7BCu) [[unlikely]] return; }
L_0024F7BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 16u));  goto L_0024F7CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024F840; } }
L_0024F7CC:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F7E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F7E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F800; } }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F800; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F820; } }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F820; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024F840; } }
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F840; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024F840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024F860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0024F8F4; } }
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[8], c.r[7].w[0] - 1u);  goto L_0024F8A4; }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0024F924; } }
L_0024F8A4:
    c.r[3].d[0] = c.r[9].d[0] & 255ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[8], c.r[29].w[0] + 28u);  goto L_0024F8E4; }
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_0024F924; } }
L_0024F8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F8ECu); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0053(c, 399u, depth + 1u); else { c.pc = 0x0024F930u; return; } if (c.pc != 0x0024F8ECu) [[unlikely]] return; }
L_0024F8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0024F928; } }
L_0024F8F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[3].w[0] + 15008u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[6].w[0] + 15012u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 15016u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 15020u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 12;
L_0024F924:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0024F928:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024F930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024F96C; } }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_0024FA48; } }
L_0024F96C:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[4].d[0] = c.r[9].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[7].w[0] - 1u);  if (t) { goto L_0024F994; } }
    st32((c.r[8].w[0]), 0u);
    c.f[1] = ld32((c.r[5].w[0]));
    c.budget -= 2;
L_0024F994:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.f[0] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 1u);  if (t) { goto L_0024F9CC; } }
L_0024F9A4:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_0024F9DC; }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.f[1] = c.f[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0024F9CC:
    c.r[1].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]); c.r[2].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F9A4u | kUnwind; return; } goto L_0024F9A4; }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 1;
L_0024F9DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13592u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    mmi::mult(c, 1, c.r[7].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    c.f[1] = fp::sub(c.f[12], c.f[1]);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA28u); set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024FA28u) [[unlikely]] return; }
L_0024FA28:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_0024FA48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024FA60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 18128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[5].w[0] + 18132u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 18136u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 18140u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_0024FAA0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28264u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00250000u);  goto L_0024FAB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024FB5C; } }
L_0024FAB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] - 2160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13304u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 2240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14168u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] - 1136u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14312u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[5], c.r[5].w[0] - 1152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14456u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00250000u);
    set32(c.r[4], c.r[4].w[0] - 1168u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14600u), c.r[4].w[0]);
    set32(c.r[5], 0u + 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[4].w[0] + 14978u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00250000u);
    st32((c.r[3].w[0] + 13448u), 0u);
    set32(c.r[4], c.r[4].w[0] - 1440u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13592u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13736u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 28264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 13880u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 14888u), 0u);
    st32((c.r[3].w[0] + 14024u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14744u), 0u);
    c.budget -= 42;
L_0024FB5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024FB70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024FB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0024FB90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024FBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 12144u);  c.pc = t; return; }
L_0024FBB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024FBC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024FBD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024FBE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024FBF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FC18u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 135u, depth + 1u); else { c.pc = 0x0031D710u; return; } if (c.pc != 0x0024FC18u) [[unlikely]] return; }
L_0024FC18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 62u));  goto L_0024FC28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024FE00; } }
L_0024FC28:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 62u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 72u)));  goto L_0024FC3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024FE00; } }
L_0024FC3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0024FC60; } }
L_0024FC44:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0024FC60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FC70; } }
L_0024FC60:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FC44u | kUnwind; return; } goto L_0024FC44; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024FC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FD84; } }
L_0024FC78:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 72u)));  goto L_0024FC8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 72u)));  if (t) { goto L_0024FD00; } }
L_0024FC8C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0024FCAC; } }
L_0024FC98:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0024FCAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FC98u | kUnwind; return; } goto L_0024FC98; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);  if (t) { goto L_0024FCC4; } }
    breakpoint(c, 0x0024FCC0u);
    c.budget -= 1;
L_0024FCC4:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 1u);  if (t) { goto L_0024FCEC; } }
L_0024FCD0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0024FCEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FCFC; } }
L_0024FCEC:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FCD0u | kUnwind; return; } goto L_0024FCD0; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024FCFC:
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 1;
L_0024FD00:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0024FD20; } }
L_0024FD0C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0024FD20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FD0Cu | kUnwind; return; } goto L_0024FD0C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);  if (t) { goto L_0024FD38; } }
    breakpoint(c, 0x0024FD34u);
    c.budget -= 1;
L_0024FD38:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0])));  if (t) { goto L_0024FD68; } }
L_0024FD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0024FD58u) [[unlikely]] return; }
L_0024FD58:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], ld32((c.r[20].w[0])));  goto L_0024FD68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0024FD74; } }
L_0024FD68:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FD50u | kUnwind; return; } goto L_0024FD50; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024FD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024FD84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024FE00; } }
L_0024FD84:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FC78u | kUnwind; return; } goto L_0024FC78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024FDEC; } }
L_0024FD94:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_0024FDD8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024FDD8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FDC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024FDC8u) [[unlikely]] return; }
L_0024FDC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0024FDEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024FE00; } }
L_0024FDD8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0024FDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024FE00; } }
L_0024FDE8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024FDEC:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 62u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FD94u | kUnwind; return; } goto L_0024FD94; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0024FE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024FE20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE3Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 426u, depth + 1u); else { c.pc = 0x002BB300u; return; } if (c.pc != 0x0024FE3Cu) [[unlikely]] return; }
L_0024FE3C:
    set32(c.r[17], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024FE68; } }
L_0024FE48:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0024FE68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 439u, depth + 1u); else { c.pc = 0x00257730u; return; } if (c.pc != 0x0024FE64u) [[unlikely]] return; }
L_0024FE64:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024FE68:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 62u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FE48u | kUnwind; return; } goto L_0024FE48; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024FE90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FEC0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 151u, depth + 1u); else { c.pc = 0x0031D920u; return; } if (c.pc != 0x0024FEC0u) [[unlikely]] return; }
L_0024FEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FEC8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 104u, depth + 1u); else { c.pc = 0x0030CAE0u; return; } if (c.pc != 0x0024FEC8u) [[unlikely]] return; }
L_0024FEC8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 60u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0054(c, 4u, depth); } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 62u));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[20], ld32((c.r[16].w[0] + 56u)));  goto L_0024FF80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[19].d[0] & 65535ull;  if (t) { goto L_0024FF64; } }
L_0024FEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FEF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x0024FEF8u) [[unlikely]] return; }
L_0024FEF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF10u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0054(c, 25u, depth + 1u); else { c.pc = 0x00250260u; return; } if (c.pc != 0x0024FF10u) [[unlikely]] return; }
L_0024FF10:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x0024FF20u) [[unlikely]] return; }
L_0024FF20:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_0024FF60; }
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x0024FF34u) [[unlikely]] return; }
L_0024FF34:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF44u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0054(c, 19u, depth + 1u); else { c.pc = 0x002501B0u; return; } if (c.pc != 0x0024FF44u) [[unlikely]] return; }
L_0024FF44:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x0024FF50u) [[unlikely]] return; }
L_0024FF50:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 64u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_0024FF60:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0024FF64:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 62u));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FEF0u | kUnwind; return; } goto L_0024FEF0; }
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[20], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 2;
L_0024FF80:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (t) { [[clang::musttail]] return unit_0054(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF90u); c.r[4].d[0] = ld16((c.r[16].w[0] + 60u));  if (depth < kMaxDepth) unit_0054(c, 12u, depth + 1u); else { c.pc = 0x00250110u; return; } if (c.pc != 0x0024FF90u) [[unlikely]] return; }
L_0024FF90:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0024FFB8; } }
L_0024FF9C:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FFB0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0054(c, 19u, depth + 1u); else { c.pc = 0x002501B0u; return; } if (c.pc != 0x0024FFB0u) [[unlikely]] return; }
L_0024FFB0:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0024FFB8:
    c.r[18].d[0] = ld16((c.r[16].w[0] + 62u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FF9Cu | kUnwind; return; } goto L_0024FF9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[16].w[0] + 60u));  if (t) { [[clang::musttail]] return unit_0054(c, 2u, depth); } }
L_0024FFD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FFDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x0024FFDCu) [[unlikely]] return; }
L_0024FFDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FFF4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0054(c, 19u, depth + 1u); else { c.pc = 0x002501B0u; return; } if (c.pc != 0x0024FFF4u) [[unlikely]] return; }
L_0024FFF4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250000u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x00250000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0054(c, 1u, depth);
}

}
