#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00F3[4096] = {
    1, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14,
    0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0,
    0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0,
    0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0,
    0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0,
    113, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0,
    0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0,
    202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213,
    0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0,
    0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0,
    0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263,
    0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0,
    0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0,
    328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0,
    0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0,
    0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0,
    400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0,
    0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0,
    0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415,
    0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0,
    0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433,
    0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0,
    0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0,
    0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458,
    0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0,
    0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0,
    0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0,
    0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0,
    0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0,
    0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0,
    0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0,
    0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503,
    0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0,
    0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0,
    513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0,
    0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0,
    0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0,
    0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0,
};

void unit_00F3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004CC000;
    case 2u: goto L_004CC008;
    case 3u: goto L_004CC014;
    case 4u: goto L_004CC020;
    case 5u: goto L_004CC02C;
    case 6u: goto L_004CC034;
    case 7u: goto L_004CC0A0;
    case 8u: goto L_004CC0AC;
    case 9u: goto L_004CC0B8;
    case 10u: goto L_004CC0C8;
    case 11u: goto L_004CC0D4;
    case 12u: goto L_004CC0E0;
    case 13u: goto L_004CC0F0;
    case 14u: goto L_004CC0FC;
    case 15u: goto L_004CC108;
    case 16u: goto L_004CC118;
    case 17u: goto L_004CC124;
    case 18u: goto L_004CC130;
    case 19u: goto L_004CC138;
    case 20u: goto L_004CC144;
    case 21u: goto L_004CC164;
    case 22u: goto L_004CC250;
    case 23u: goto L_004CC260;
    case 24u: goto L_004CC28C;
    case 25u: goto L_004CC298;
    case 26u: goto L_004CC2B4;
    case 27u: goto L_004CC2C0;
    case 28u: goto L_004CC2CC;
    case 29u: goto L_004CC2EC;
    case 30u: goto L_004CC33C;
    case 31u: goto L_004CC34C;
    case 32u: goto L_004CC37C;
    case 33u: goto L_004CC388;
    case 34u: goto L_004CC3A8;
    case 35u: goto L_004CC3DC;
    case 36u: goto L_004CC3EC;
    case 37u: goto L_004CC41C;
    case 38u: goto L_004CC428;
    case 39u: goto L_004CC440;
    case 40u: goto L_004CC450;
    case 41u: goto L_004CC468;
    case 42u: goto L_004CC478;
    case 43u: goto L_004CC490;
    case 44u: goto L_004CC4B0;
    case 45u: goto L_004CC4C0;
    case 46u: goto L_004CC4DC;
    case 47u: goto L_004CC4F0;
    case 48u: goto L_004CC500;
    case 49u: goto L_004CC520;
    case 50u: goto L_004CC530;
    case 51u: goto L_004CC54C;
    case 52u: goto L_004CC560;
    case 53u: goto L_004CC570;
    case 54u: goto L_004CC590;
    case 55u: goto L_004CC5A0;
    case 56u: goto L_004CC5BC;
    case 57u: goto L_004CC5D0;
    case 58u: goto L_004CC5E0;
    case 59u: goto L_004CC60C;
    case 60u: goto L_004CC620;
    case 61u: goto L_004CC634;
    case 62u: goto L_004CC640;
    case 63u: goto L_004CC680;
    case 64u: goto L_004CC68C;
    case 65u: goto L_004CC694;
    case 66u: goto L_004CC6C0;
    case 67u: goto L_004CC6F0;
    case 68u: goto L_004CC6FC;
    case 69u: goto L_004CC70C;
    case 70u: goto L_004CC72C;
    case 71u: goto L_004CC738;
    case 72u: goto L_004CC744;
    case 73u: goto L_004CC760;
    case 74u: goto L_004CC76C;
    case 75u: goto L_004CC778;
    case 76u: goto L_004CC790;
    case 77u: goto L_004CC79C;
    case 78u: goto L_004CC7A8;
    case 79u: goto L_004CC7B8;
    case 80u: goto L_004CC7D4;
    case 81u: goto L_004CC7E0;
    case 82u: goto L_004CC7EC;
    case 83u: goto L_004CC7F8;
    case 84u: goto L_004CC804;
    case 85u: goto L_004CC810;
    case 86u: goto L_004CC880;
    case 87u: goto L_004CC890;
    case 88u: goto L_004CC910;
    case 89u: goto L_004CC920;
    case 90u: goto L_004CC990;
    case 91u: goto L_004CC9A0;
    case 92u: goto L_004CC9A8;
    case 93u: goto L_004CC9BC;
    case 94u: goto L_004CC9CC;
    case 95u: goto L_004CC9D8;
    case 96u: goto L_004CC9EC;
    case 97u: goto L_004CCA0C;
    case 98u: goto L_004CCA1C;
    case 99u: goto L_004CCAA8;
    case 100u: goto L_004CCAB8;
    case 101u: goto L_004CCAD4;
    case 102u: goto L_004CCAE8;
    case 103u: goto L_004CCAF8;
    case 104u: goto L_004CCB08;
    case 105u: goto L_004CCB14;
    case 106u: goto L_004CCB20;
    case 107u: goto L_004CCB30;
    case 108u: goto L_004CCB3C;
    case 109u: goto L_004CCB48;
    case 110u: goto L_004CCB58;
    case 111u: goto L_004CCB64;
    case 112u: goto L_004CCB70;
    case 113u: goto L_004CCB80;
    case 114u: goto L_004CCB8C;
    case 115u: goto L_004CCB98;
    case 116u: goto L_004CCBA0;
    case 117u: goto L_004CCBAC;
    case 118u: goto L_004CCBCC;
    case 119u: goto L_004CCC30;
    case 120u: goto L_004CCC40;
    case 121u: goto L_004CCC6C;
    case 122u: goto L_004CCC78;
    case 123u: goto L_004CCC94;
    case 124u: goto L_004CCCA0;
    case 125u: goto L_004CCCAC;
    case 126u: goto L_004CCCF0;
    case 127u: goto L_004CCD10;
    case 128u: goto L_004CCD20;
    case 129u: goto L_004CCD3C;
    case 130u: goto L_004CCD50;
    case 131u: goto L_004CCD60;
    case 132u: goto L_004CCD6C;
    case 133u: goto L_004CCD78;
    case 134u: goto L_004CCDB8;
    case 135u: goto L_004CCDD8;
    case 136u: goto L_004CCDE8;
    case 137u: goto L_004CCE04;
    case 138u: goto L_004CCE18;
    case 139u: goto L_004CCE28;
    case 140u: goto L_004CCE34;
    case 141u: goto L_004CCE40;
    case 142u: goto L_004CCE68;
    case 143u: goto L_004CCE74;
    case 144u: goto L_004CCE80;
    case 145u: goto L_004CCEC0;
    case 146u: goto L_004CCECC;
    case 147u: goto L_004CCEE0;
    case 148u: goto L_004CCEF0;
    case 149u: goto L_004CCF0C;
    case 150u: goto L_004CCF18;
    case 151u: goto L_004CCF50;
    case 152u: goto L_004CCF78;
    case 153u: goto L_004CCF84;
    case 154u: goto L_004CD000;
    case 155u: goto L_004CD010;
    case 156u: goto L_004CD018;
    case 157u: goto L_004CD048;
    case 158u: goto L_004CD050;
    case 159u: goto L_004CD068;
    case 160u: goto L_004CD074;
    case 161u: goto L_004CD07C;
    case 162u: goto L_004CD0A4;
    case 163u: goto L_004CD0BC;
    case 164u: goto L_004CD0DC;
    case 165u: goto L_004CD0EC;
    case 166u: goto L_004CD108;
    case 167u: goto L_004CD11C;
    case 168u: goto L_004CD12C;
    case 169u: goto L_004CD138;
    case 170u: goto L_004CD148;
    case 171u: goto L_004CD15C;
    case 172u: goto L_004CD194;
    case 173u: goto L_004CD1FC;
    case 174u: goto L_004CD21C;
    case 175u: goto L_004CD22C;
    case 176u: goto L_004CD248;
    case 177u: goto L_004CD25C;
    case 178u: goto L_004CD26C;
    case 179u: goto L_004CD278;
    case 180u: goto L_004CD284;
    case 181u: goto L_004CD2F0;
    case 182u: goto L_004CD310;
    case 183u: goto L_004CD320;
    case 184u: goto L_004CD33C;
    case 185u: goto L_004CD350;
    case 186u: goto L_004CD360;
    case 187u: goto L_004CD36C;
    case 188u: goto L_004CD384;
    case 189u: goto L_004CD394;
    case 190u: goto L_004CD39C;
    case 191u: goto L_004CD3CC;
    case 192u: goto L_004CD3D4;
    case 193u: goto L_004CD3EC;
    case 194u: goto L_004CD3F8;
    case 195u: goto L_004CD400;
    case 196u: goto L_004CD428;
    case 197u: goto L_004CD490;
    case 198u: goto L_004CD4B0;
    case 199u: goto L_004CD4C0;
    case 200u: goto L_004CD4DC;
    case 201u: goto L_004CD4F0;
    case 202u: goto L_004CD500;
    case 203u: goto L_004CD50C;
    case 204u: goto L_004CD514;
    case 205u: goto L_004CD540;
    case 206u: goto L_004CD55C;
    case 207u: goto L_004CD568;
    case 208u: goto L_004CD578;
    case 209u: goto L_004CD59C;
    case 210u: goto L_004CD5BC;
    case 211u: goto L_004CD5CC;
    case 212u: goto L_004CD5E8;
    case 213u: goto L_004CD5FC;
    case 214u: goto L_004CD60C;
    case 215u: goto L_004CD618;
    case 216u: goto L_004CD63C;
    case 217u: goto L_004CD65C;
    case 218u: goto L_004CD66C;
    case 219u: goto L_004CD688;
    case 220u: goto L_004CD69C;
    case 221u: goto L_004CD6AC;
    case 222u: goto L_004CD6B8;
    case 223u: goto L_004CD6DC;
    case 224u: goto L_004CD6FC;
    case 225u: goto L_004CD70C;
    case 226u: goto L_004CD728;
    case 227u: goto L_004CD73C;
    case 228u: goto L_004CD74C;
    case 229u: goto L_004CD7B8;
    case 230u: goto L_004CD7D0;
    case 231u: goto L_004CD7E8;
    case 232u: goto L_004CD7F4;
    case 233u: goto L_004CD808;
    case 234u: goto L_004CD828;
    case 235u: goto L_004CD838;
    case 236u: goto L_004CD854;
    case 237u: goto L_004CD868;
    case 238u: goto L_004CD878;
    case 239u: goto L_004CD884;
    case 240u: goto L_004CD898;
    case 241u: goto L_004CD8B8;
    case 242u: goto L_004CD8C8;
    case 243u: goto L_004CD8E4;
    case 244u: goto L_004CD8F8;
    case 245u: goto L_004CD908;
    case 246u: goto L_004CD914;
    case 247u: goto L_004CD928;
    case 248u: goto L_004CD948;
    case 249u: goto L_004CD958;
    case 250u: goto L_004CD974;
    case 251u: goto L_004CD988;
    case 252u: goto L_004CD998;
    case 253u: goto L_004CD9AC;
    case 254u: goto L_004CD9C0;
    case 255u: goto L_004CD9D4;
    case 256u: goto L_004CD9EC;
    case 257u: goto L_004CDA10;
    case 258u: goto L_004CDA2C;
    case 259u: goto L_004CDA38;
    case 260u: goto L_004CDB1C;
    case 261u: goto L_004CDB80;
    case 262u: goto L_004CDBAC;
    case 263u: goto L_004CDBFC;
    case 264u: goto L_004CDC10;
    case 265u: goto L_004CDC20;
    case 266u: goto L_004CDC28;
    case 267u: goto L_004CDC40;
    case 268u: goto L_004CDC5C;
    case 269u: goto L_004CDC68;
    case 270u: goto L_004CDC78;
    case 271u: goto L_004CDC90;
    case 272u: goto L_004CDCB0;
    case 273u: goto L_004CDCC0;
    case 274u: goto L_004CDCDC;
    case 275u: goto L_004CDCF0;
    case 276u: goto L_004CDD00;
    case 277u: goto L_004CDD34;
    case 278u: goto L_004CDD50;
    case 279u: goto L_004CDD70;
    case 280u: goto L_004CDD78;
    case 281u: goto L_004CDD9C;
    case 282u: goto L_004CDDB0;
    case 283u: goto L_004CDDD4;
    case 284u: goto L_004CDDE4;
    case 285u: goto L_004CDDF8;
    case 286u: goto L_004CDE28;
    case 287u: goto L_004CDE38;
    case 288u: goto L_004CDE54;
    case 289u: goto L_004CDE68;
    case 290u: goto L_004CDE78;
    case 291u: goto L_004CDE8C;
    case 292u: goto L_004CDEA0;
    case 293u: goto L_004CDEC0;
    case 294u: goto L_004CDF00;
    case 295u: goto L_004CDF24;
    case 296u: goto L_004CDF34;
    case 297u: goto L_004CDF48;
    case 298u: goto L_004CDF78;
    case 299u: goto L_004CDF88;
    case 300u: goto L_004CDFA4;
    case 301u: goto L_004CDFB8;
    case 302u: goto L_004CDFC8;
    case 303u: goto L_004CDFDC;
    case 304u: goto L_004CDFF0;
    case 305u: goto L_004CE010;
    case 306u: goto L_004CE050;
    case 307u: goto L_004CE06C;
    case 308u: goto L_004CE078;
    case 309u: goto L_004CE088;
    case 310u: goto L_004CE090;
    case 311u: goto L_004CE0B0;
    case 312u: goto L_004CE128;
    case 313u: goto L_004CE13C;
    case 314u: goto L_004CE158;
    case 315u: goto L_004CE170;
    case 316u: goto L_004CE1E0;
    case 317u: goto L_004CE1F0;
    case 318u: goto L_004CE20C;
    case 319u: goto L_004CE220;
    case 320u: goto L_004CE230;
    case 321u: goto L_004CE290;
    case 322u: goto L_004CE2D0;
    case 323u: goto L_004CE328;
    case 324u: goto L_004CE748;
    case 325u: goto L_004CE76C;
    case 326u: goto L_004CE7C0;
    case 327u: goto L_004CE7F4;
    case 328u: goto L_004CE800;
    case 329u: goto L_004CE814;
    case 330u: goto L_004CE830;
    case 331u: goto L_004CE840;
    case 332u: goto L_004CE85C;
    case 333u: goto L_004CE86C;
    case 334u: goto L_004CE948;
    case 335u: goto L_004CEB8C;
    case 336u: goto L_004CEBD4;
    case 337u: goto L_004CEBE4;
    case 338u: goto L_004CEBFC;
    case 339u: goto L_004CEC1C;
    case 340u: goto L_004CEC2C;
    case 341u: goto L_004CEC48;
    case 342u: goto L_004CEC5C;
    case 343u: goto L_004CEC6C;
    case 344u: goto L_004CEC84;
    case 345u: goto L_004CEC9C;
    case 346u: goto L_004CED10;
    case 347u: goto L_004CED34;
    case 348u: goto L_004CED70;
    case 349u: goto L_004CED9C;
    case 350u: goto L_004CEDB0;
    case 351u: goto L_004CEDC4;
    case 352u: goto L_004CEDE4;
    case 353u: goto L_004CEDFC;
    case 354u: goto L_004CEE10;
    case 355u: goto L_004CEE24;
    case 356u: goto L_004CEE44;
    case 357u: goto L_004CEE5C;
    case 358u: goto L_004CEE70;
    case 359u: goto L_004CEE84;
    case 360u: goto L_004CEEA4;
    case 361u: goto L_004CEEBC;
    case 362u: goto L_004CEED0;
    case 363u: goto L_004CEEE4;
    case 364u: goto L_004CEF04;
    case 365u: goto L_004CEF10;
    case 366u: goto L_004CEF18;
    case 367u: goto L_004CEF34;
    case 368u: goto L_004CEF44;
    case 369u: goto L_004CEF60;
    case 370u: goto L_004CEF74;
    case 371u: goto L_004CEF84;
    case 372u: goto L_004CEFA0;
    case 373u: goto L_004CEFB0;
    case 374u: goto L_004CEFCC;
    case 375u: goto L_004CEFE0;
    case 376u: goto L_004CEFF0;
    case 377u: goto L_004CF010;
    case 378u: goto L_004CF034;
    case 379u: goto L_004CF040;
    case 380u: goto L_004CF064;
    case 381u: goto L_004CF074;
    case 382u: goto L_004CF090;
    case 383u: goto L_004CF0A4;
    case 384u: goto L_004CF0B4;
    case 385u: goto L_004CF0DC;
    case 386u: goto L_004CF0EC;
    case 387u: goto L_004CF108;
    case 388u: goto L_004CF11C;
    case 389u: goto L_004CF12C;
    case 390u: goto L_004CF144;
    case 391u: goto L_004CF168;
    case 392u: goto L_004CF180;
    case 393u: goto L_004CF198;
    case 394u: goto L_004CF204;
    case 395u: goto L_004CF20C;
    case 396u: goto L_004CF214;
    case 397u: goto L_004CF21C;
    case 398u: goto L_004CF240;
    case 399u: goto L_004CF26C;
    case 400u: goto L_004CF280;
    case 401u: goto L_004CF294;
    case 402u: goto L_004CF2B4;
    case 403u: goto L_004CF2CC;
    case 404u: goto L_004CF2E0;
    case 405u: goto L_004CF2F4;
    case 406u: goto L_004CF314;
    case 407u: goto L_004CF32C;
    case 408u: goto L_004CF340;
    case 409u: goto L_004CF354;
    case 410u: goto L_004CF374;
    case 411u: goto L_004CF394;
    case 412u: goto L_004CF3A8;
    case 413u: goto L_004CF3BC;
    case 414u: goto L_004CF3DC;
    case 415u: goto L_004CF3FC;
    case 416u: goto L_004CF410;
    case 417u: goto L_004CF424;
    case 418u: goto L_004CF444;
    case 419u: goto L_004CF458;
    case 420u: goto L_004CF470;
    case 421u: goto L_004CF488;
    case 422u: goto L_004CF4A0;
    case 423u: goto L_004CF4B0;
    case 424u: goto L_004CF4D8;
    case 425u: goto L_004CF4F0;
    case 426u: goto L_004CF520;
    case 427u: goto L_004CF564;
    case 428u: goto L_004CF584;
    case 429u: goto L_004CF594;
    case 430u: goto L_004CF5B0;
    case 431u: goto L_004CF5D0;
    case 432u: goto L_004CF5E0;
    case 433u: goto L_004CF5FC;
    case 434u: goto L_004CF61C;
    case 435u: goto L_004CF62C;
    case 436u: goto L_004CF648;
    case 437u: goto L_004CF668;
    case 438u: goto L_004CF678;
    case 439u: goto L_004CF694;
    case 440u: goto L_004CF6B4;
    case 441u: goto L_004CF6C4;
    case 442u: goto L_004CF6E0;
    case 443u: goto L_004CF700;
    case 444u: goto L_004CF710;
    case 445u: goto L_004CF72C;
    case 446u: goto L_004CF74C;
    case 447u: goto L_004CF75C;
    case 448u: goto L_004CF778;
    case 449u: goto L_004CF798;
    case 450u: goto L_004CF7A8;
    case 451u: goto L_004CF7C4;
    case 452u: goto L_004CF7E4;
    case 453u: goto L_004CF7F4;
    case 454u: goto L_004CF810;
    case 455u: goto L_004CF830;
    case 456u: goto L_004CF840;
    case 457u: goto L_004CF85C;
    case 458u: goto L_004CF87C;
    case 459u: goto L_004CF88C;
    case 460u: goto L_004CF8A8;
    case 461u: goto L_004CF8C8;
    case 462u: goto L_004CF8D8;
    case 463u: goto L_004CF8F4;
    case 464u: goto L_004CF914;
    case 465u: goto L_004CF924;
    case 466u: goto L_004CF940;
    case 467u: goto L_004CF960;
    case 468u: goto L_004CF970;
    case 469u: goto L_004CF98C;
    case 470u: goto L_004CF9AC;
    case 471u: goto L_004CF9BC;
    case 472u: goto L_004CF9D8;
    case 473u: goto L_004CF9F8;
    case 474u: goto L_004CFA08;
    case 475u: goto L_004CFA24;
    case 476u: goto L_004CFA44;
    case 477u: goto L_004CFA54;
    case 478u: goto L_004CFA70;
    case 479u: goto L_004CFA90;
    case 480u: goto L_004CFAA0;
    case 481u: goto L_004CFABC;
    case 482u: goto L_004CFADC;
    case 483u: goto L_004CFAEC;
    case 484u: goto L_004CFB08;
    case 485u: goto L_004CFB28;
    case 486u: goto L_004CFB38;
    case 487u: goto L_004CFB54;
    case 488u: goto L_004CFB74;
    case 489u: goto L_004CFB84;
    case 490u: goto L_004CFBA0;
    case 491u: goto L_004CFBC0;
    case 492u: goto L_004CFBD0;
    case 493u: goto L_004CFBEC;
    case 494u: goto L_004CFC0C;
    case 495u: goto L_004CFC1C;
    case 496u: goto L_004CFC38;
    case 497u: goto L_004CFC58;
    case 498u: goto L_004CFC68;
    case 499u: goto L_004CFC84;
    case 500u: goto L_004CFCA4;
    case 501u: goto L_004CFCB4;
    case 502u: goto L_004CFCD0;
    case 503u: goto L_004CFCFC;
    case 504u: goto L_004CFD20;
    case 505u: goto L_004CFD68;
    case 506u: goto L_004CFD78;
    case 507u: goto L_004CFD8C;
    case 508u: goto L_004CFD9C;
    case 509u: goto L_004CFDB0;
    case 510u: goto L_004CFDC0;
    case 511u: goto L_004CFDDC;
    case 512u: goto L_004CFDEC;
    case 513u: goto L_004CFE00;
    case 514u: goto L_004CFE10;
    case 515u: goto L_004CFE2C;
    case 516u: goto L_004CFE3C;
    case 517u: goto L_004CFE50;
    case 518u: goto L_004CFE60;
    case 519u: goto L_004CFE74;
    case 520u: goto L_004CFE84;
    case 521u: goto L_004CFE98;
    case 522u: goto L_004CFEA8;
    case 523u: goto L_004CFEBC;
    case 524u: goto L_004CFECC;
    case 525u: goto L_004CFEE0;
    case 526u: goto L_004CFEF0;
    case 527u: goto L_004CFF08;
    case 528u: goto L_004CFF18;
    case 529u: goto L_004CFF2C;
    case 530u: goto L_004CFF3C;
    case 531u: goto L_004CFF50;
    case 532u: goto L_004CFF60;
    case 533u: goto L_004CFF74;
    case 534u: goto L_004CFF84;
    case 535u: goto L_004CFF98;
    case 536u: goto L_004CFFA8;
    case 537u: goto L_004CFFBC;
    case 538u: goto L_004CFFCC;
    case 539u: goto L_004CFFE0;
    case 540u: goto L_004CFFF0;
    default: bad_entry(c, 0x004CC000u); return;
    }
L_004CC000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC008u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004CC008u) [[unlikely]] return; }
L_004CC008:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x004CC014u) [[unlikely]] return; }
L_004CC014:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC020u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x004CC020u) [[unlikely]] return; }
L_004CC020:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC02Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x004CC02Cu) [[unlikely]] return; }
L_004CC02C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004CC034:
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[4], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 12ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 224ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC0A0u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CC0A0u) [[unlikely]] return; }
L_004CC0A0:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC0ACu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CC0ACu) [[unlikely]] return; }
L_004CC0AC:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC0B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CC0B8u) [[unlikely]] return; }
L_004CC0B8:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC0C8u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CC0C8u) [[unlikely]] return; }
L_004CC0C8:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC0D4u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CC0D4u) [[unlikely]] return; }
L_004CC0D4:
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC0E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CC0E0u) [[unlikely]] return; }
L_004CC0E0:
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC0F0u); set32(c.r[4], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CC0F0u) [[unlikely]] return; }
L_004CC0F0:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC0FCu); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CC0FCu) [[unlikely]] return; }
L_004CC0FC:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC108u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CC108u) [[unlikely]] return; }
L_004CC108:
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC118u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CC118u) [[unlikely]] return; }
L_004CC118:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC124u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CC124u) [[unlikely]] return; }
L_004CC124:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC130u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CC130u) [[unlikely]] return; }
L_004CC130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC138u); set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004CC138u) [[unlikely]] return; }
L_004CC138:
    set32(c.r[4], 0u + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC144u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004CC144u) [[unlikely]] return; }
L_004CC144:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13328u);
    set32(c.r[6], c.r[6].w[0] + 13248u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC164u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004CC164u) [[unlikely]] return; }
L_004CC164:
    st32((c.r[2].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[3].w[0] + 18144u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 16u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[4].w[0] + 18148u));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 20u), c.f[1]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[3].w[0] + 18152u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 24u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[5].w[0] + 18156u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 24u);
    st32((c.r[2].w[0] + 28u), c.f[1]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 18144u));
    st32((c.r[2].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[15].w[0] + 18148u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[14].w[0] + 18152u));
    st32((c.r[2].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] + 18156u));
    st32((c.r[2].w[0] + 60u), c.f[0]);
    st32((c.r[2].w[0] + 64u), c.r[20].w[0]);
    c.f[0] = ld32((c.r[12].w[0] + 18144u));
    st32((c.r[2].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 18148u));
    st32((c.r[2].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 18152u));
    st32((c.r[2].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 18156u));
    st32((c.r[2].w[0] + 92u), c.f[0]);
    st32((c.r[2].w[0] + 96u), c.r[19].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 18144u));
    st32((c.r[2].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 18148u));
    st32((c.r[2].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 18152u));
    st32((c.r[2].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 18156u));
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC250u); st32((c.r[2].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC250u) [[unlikely]] return; }
L_004CC250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CC278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC260u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x004CC260u) [[unlikely]] return; }
L_004CC260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 432u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 6;
L_004CC278:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC28Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 233u, depth + 1u); else { c.pc = 0x0024E040u; return; } if (c.pc != 0x004CC28Cu) [[unlikely]] return; }
L_004CC28C:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC298u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC298u) [[unlikely]] return; }
L_004CC298:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_004CC2B8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC2B4u); set32(c.r[5], c.r[5].w[0] + 3215u);  if (depth < kMaxDepth) unit_003F(c, 336u, depth + 1u); else { c.pc = 0x001FF0E0u; return; } if (c.pc != 0x004CC2B4u) [[unlikely]] return; }
L_004CC2B4:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_004CC2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC2C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CC2C0u) [[unlikely]] return; }
L_004CC2C0:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC2CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004CC2CCu) [[unlikely]] return; }
L_004CC2CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 14592u);
    set32(c.r[6], c.r[6].w[0] + 14512u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC2ECu); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004CC2ECu) [[unlikely]] return; }
L_004CC2EC:
    st32((c.r[18].w[0] + 128u), c.r[2].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x44610000u);
    st32((c.r[2].w[0]), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    st32((c.r[2].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC33Cu); st32((c.r[2].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC33Cu) [[unlikely]] return; }
L_004CC33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CC368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC34Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x004CC34Cu) [[unlikely]] return; }
L_004CC34C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 1088u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_004CC368:
    set32(c.r[5], ld32((c.r[18].w[0] + 128u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC37Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0057(c, 65u, depth + 1u); else { c.pc = 0x0025C850u; return; } if (c.pc != 0x004CC37Cu) [[unlikely]] return; }
L_004CC37C:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004CC388u) [[unlikely]] return; }
L_004CC388:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12928u);
    set32(c.r[6], c.r[6].w[0] + 12848u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC3A8u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004CC3A8u) [[unlikely]] return; }
L_004CC3A8:
    st32((c.r[18].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC3DCu); st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC3DCu) [[unlikely]] return; }
L_004CC3DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CC408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC3ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x004CC3ECu) [[unlikely]] return; }
L_004CC3EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 2960u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 16u), 0u);
    st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_004CC408:
    set32(c.r[5], ld32((c.r[18].w[0] + 124u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC41Cu); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_0051(c, 329u, depth + 1u); else { c.pc = 0x002474C0u; return; } if (c.pc != 0x004CC41Cu) [[unlikely]] return; }
L_004CC41C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC428u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC428u) [[unlikely]] return; }
L_004CC428:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 24u);  goto L_004CC448; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC440u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 240u, depth + 1u); else { c.pc = 0x0025DD40u; return; } if (c.pc != 0x004CC440u) [[unlikely]] return; }
L_004CC440:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 24u);
    c.budget -= 2;
L_004CC448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC450u) [[unlikely]] return; }
L_004CC450:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 92u);  goto L_004CC470; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC468u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 49u, depth + 1u); else { c.pc = 0x00248610u; return; } if (c.pc != 0x004CC468u) [[unlikely]] return; }
L_004CC468:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 92u);
    c.budget -= 2;
L_004CC470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC478u) [[unlikely]] return; }
L_004CC478:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[19], ld32((c.r[18].w[0] + 120u)));  goto L_004CC498; }
    set32(c.r[5], ld32((c.r[28].w[0] - 29468u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC490u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 39u, depth + 1u); else { c.pc = 0x002048B0u; return; } if (c.pc != 0x004CC490u) [[unlikely]] return; }
L_004CC490:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 2;
L_004CC498:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[20].d[0]) { set32(c.r[19], ld32((c.r[18].w[0] + 120u)));  goto L_004CC504; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[18].w[0] + 120u), c.r[20].w[0]);  goto L_004CC4E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC4B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CC4B0u) [[unlikely]] return; }
L_004CC4B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC4C0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CC4C0u) [[unlikely]] return; }
L_004CC4C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CC4DC; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC4DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CC4DCu) [[unlikely]] return; }
L_004CC4DC:
    st32((c.r[18].w[0] + 120u), c.r[20].w[0]);
    c.budget -= 1;
L_004CC4E0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004CC500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC4F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CC4F0u) [[unlikely]] return; }
L_004CC4F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC500u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CC500u) [[unlikely]] return; }
L_004CC500:
    set32(c.r[19], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 1;
L_004CC504:
    set32(c.r[20], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[17].d[0]) { set32(c.r[17], ld32((c.r[18].w[0] + 120u)));  goto L_004CC574; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[19].w[0] + 52u), c.r[17].w[0]);  goto L_004CC550; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC520u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CC520u) [[unlikely]] return; }
L_004CC520:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC530u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CC530u) [[unlikely]] return; }
L_004CC530:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CC54C; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC54Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CC54Cu) [[unlikely]] return; }
L_004CC54C:
    st32((c.r[19].w[0] + 52u), c.r[17].w[0]);
    c.budget -= 1;
L_004CC550:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004CC570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC560u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CC560u) [[unlikely]] return; }
L_004CC560:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC570u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CC570u) [[unlikely]] return; }
L_004CC570:
    set32(c.r[17], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 1;
L_004CC574:
    set32(c.r[19], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 120u)));  goto L_004CC5E4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  goto L_004CC5C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC590u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CC590u) [[unlikely]] return; }
L_004CC590:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC5A0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CC5A0u) [[unlikely]] return; }
L_004CC5A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CC5BC; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC5BCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CC5BCu) [[unlikely]] return; }
L_004CC5BC:
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    c.budget -= 1;
L_004CC5C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004CC5E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC5D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CC5D0u) [[unlikely]] return; }
L_004CC5D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC5E0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CC5E0u) [[unlikely]] return; }
L_004CC5E0:
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    c.budget -= 1;
L_004CC5E4:
    set32(c.r[2], 0u - 7u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC60Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CC60Cu) [[unlikely]] return; }
L_004CC60C:
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC620u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CC620u) [[unlikely]] return; }
L_004CC620:
    set32(c.r[4], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC634u); set32(c.r[5], ld32((c.r[18].w[0] + 76u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CC634u) [[unlikely]] return; }
L_004CC634:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC640u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC640u) [[unlikely]] return; }
L_004CC640:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_004CC684; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[4].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[14] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3244u);
    c.f[13] = c.r[3].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[15] = c.f[14];
    set32(c.r[7], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC680u); set32(c.r[8], c.r[8].w[0] + 31040u);  if (depth < kMaxDepth) unit_0045(c, 159u, depth + 1u); else { c.pc = 0x002159D0u; return; } if (c.pc != 0x004CC680u) [[unlikely]] return; }
L_004CC680:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_004CC684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC68Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CC68Cu) [[unlikely]] return; }
L_004CC68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC694u); set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CC694u) [[unlikely]] return; }
L_004CC694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004CC6C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC6F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CC6F0u) [[unlikely]] return; }
L_004CC6F0:
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC6FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CC6FCu) [[unlikely]] return; }
L_004CC6FC:
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC70Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC70Cu) [[unlikely]] return; }
L_004CC70C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_004CC730; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3166u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC72Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 152u, depth + 1u); else { c.pc = 0x001F94E0u; return; } if (c.pc != 0x004CC72Cu) [[unlikely]] return; }
L_004CC72C:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_004CC730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC738u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CC738u) [[unlikely]] return; }
L_004CC738:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC744u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC744u) [[unlikely]] return; }
L_004CC744:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_004CC764; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC760u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_003F(c, 82u, depth + 1u); else { c.pc = 0x001FD180u; return; } if (c.pc != 0x004CC760u) [[unlikely]] return; }
L_004CC760:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_004CC764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC76Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CC76Cu) [[unlikely]] return; }
L_004CC76C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC778u) [[unlikely]] return; }
L_004CC778:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_004CC794; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC790u); set32(c.r[5], c.r[5].w[0] + 3188u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214210u; return; } if (c.pc != 0x004CC790u) [[unlikely]] return; }
L_004CC790:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_004CC794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC79Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CC79Cu) [[unlikely]] return; }
L_004CC79C:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC7A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC7A8u) [[unlikely]] return; }
L_004CC7A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CC818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC7B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004CC7B8u) [[unlikely]] return; }
L_004CC7B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC7D4u); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004CC7D4u) [[unlikely]] return; }
L_004CC7D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC7E0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004CC7E0u) [[unlikely]] return; }
L_004CC7E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC7ECu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004CC7ECu) [[unlikely]] return; }
L_004CC7EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC7F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x004CC7F8u) [[unlikely]] return; }
L_004CC7F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC804u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x004CC804u) [[unlikely]] return; }
L_004CC804:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC810u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x004CC810u) [[unlikely]] return; }
L_004CC810:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004CC818:
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 32u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 12ull;
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 224ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC880u); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC880u) [[unlikely]] return; }
L_004CC880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CC8D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC890u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004CC890u) [[unlikely]] return; }
L_004CC890:
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
L_004CC8D8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    set32(c.r[4], 0u + 32u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC910u); st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC910u) [[unlikely]] return; }
L_004CC910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CC960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC920u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004CC920u) [[unlikely]] return; }
L_004CC920:
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
L_004CC960:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], c.r[4].w[0] + 3253u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC990u); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004CC990u) [[unlikely]] return; }
L_004CC990:
    st32((c.r[20].w[0] + 152u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC9A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004CC9A0u) [[unlikely]] return; }
L_004CC9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC9A8u); set32(c.r[4], ld32((c.r[20].w[0] + 152u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004CC9A8u) [[unlikely]] return; }
L_004CC9A8:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[16].w[0]);  if (t) { goto L_004CC9CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC9BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CC9BCu) [[unlikely]] return; }
L_004CC9BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC9CCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CC9CCu) [[unlikely]] return; }
L_004CC9CC:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC9D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CC9D8u) [[unlikely]] return; }
L_004CC9D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_004CC9F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CC9ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004CC9ECu) [[unlikely]] return; }
L_004CC9EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 2;
L_004CC9F4:
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_004CCA8C; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCA0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CCA0Cu) [[unlikely]] return; }
L_004CCA0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_004CCA20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCA1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004CCA1Cu) [[unlikely]] return; }
L_004CCA1C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_004CCA20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CCA44; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CCA84; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CCA84; } }
L_004CCA44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004CCA6C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004CCA88; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004CCA84; } }
L_004CCA6C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004CCA84; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004CCA84:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_004CCA88:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004CCA8C:
    set32(c.r[21], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[21].d[0] == c.r[22].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_004CCAFC; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[23].w[0] + 8u), c.r[22].w[0]);  goto L_004CCAD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCAA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CCAA8u) [[unlikely]] return; }
L_004CCAA8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCAB8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CCAB8u) [[unlikely]] return; }
L_004CCAB8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CCAD4; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCAD4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CCAD4u) [[unlikely]] return; }
L_004CCAD4:
    st32((c.r[23].w[0] + 8u), c.r[22].w[0]);
    c.budget -= 1;
L_004CCAD8:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_004CCAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCAE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CCAE8u) [[unlikely]] return; }
L_004CCAE8:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCAF8u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CCAF8u) [[unlikely]] return; }
L_004CCAF8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004CCAFC:
    set32(c.r[17], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB08u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CCB08u) [[unlikely]] return; }
L_004CCB08:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB14u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CCB14u) [[unlikely]] return; }
L_004CCB14:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CCB20u) [[unlikely]] return; }
L_004CCB20:
    set32(c.r[17], ld32((c.r[20].w[0] + 72u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB30u); set32(c.r[4], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CCB30u) [[unlikely]] return; }
L_004CCB30:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB3Cu); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CCB3Cu) [[unlikely]] return; }
L_004CCB3C:
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CCB48u) [[unlikely]] return; }
L_004CCB48:
    set32(c.r[17], ld32((c.r[20].w[0] + 72u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB58u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CCB58u) [[unlikely]] return; }
L_004CCB58:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB64u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CCB64u) [[unlikely]] return; }
L_004CCB64:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CCB70u) [[unlikely]] return; }
L_004CCB70:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB80u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004CCB80u) [[unlikely]] return; }
L_004CCB80:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB8Cu); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004CCB8Cu) [[unlikely]] return; }
L_004CCB8C:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCB98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004CCB98u) [[unlikely]] return; }
L_004CCB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCBA0u); set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004CCBA0u) [[unlikely]] return; }
L_004CCBA0:
    set32(c.r[4], 0u + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCBACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004CCBACu) [[unlikely]] return; }
L_004CCBAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13328u);
    set32(c.r[6], c.r[6].w[0] + 13248u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCBCCu); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004CCBCCu) [[unlikely]] return; }
L_004CCBCC:
    c.f[2] = ld32((c.r[28].w[0] - 31760u));
    st32((c.r[2].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32304u));
    st32((c.r[2].w[0] + 20u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 31756u));
    st32((c.r[2].w[0] + 28u), c.f[1]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[4], 0u + 24u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 56u), c.f[0]);
    st32((c.r[2].w[0] + 60u), c.f[1]);
    st32((c.r[2].w[0] + 64u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 80u), 0u);
    st32((c.r[2].w[0] + 84u), 0u);
    st32((c.r[2].w[0] + 88u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCC30u); st32((c.r[2].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CCC30u) [[unlikely]] return; }
L_004CCC30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004CCC58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCC40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x004CCC40u) [[unlikely]] return; }
L_004CCC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 432u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 6;
L_004CCC58:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCC6Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 233u, depth + 1u); else { c.pc = 0x0024E040u; return; } if (c.pc != 0x004CCC6Cu) [[unlikely]] return; }
L_004CCC6C:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCC78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CCC78u) [[unlikely]] return; }
L_004CCC78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_004CCC98; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCC94u); set32(c.r[5], c.r[5].w[0] + 3215u);  if (depth < kMaxDepth) unit_003F(c, 336u, depth + 1u); else { c.pc = 0x001FF0E0u; return; } if (c.pc != 0x004CCC94u) [[unlikely]] return; }
L_004CCC94:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_004CCC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCCA0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CCCA0u) [[unlikely]] return; }
L_004CCCA0:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCCACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CCCACu) [[unlikely]] return; }
L_004CCCAC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 112u)));  goto L_004CCCF8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    c.f[13] = c.r[2].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[15] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] + 3236u);
    set32(c.r[7], c.r[7].w[0] + 31056u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCCF0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x002092F0u; return; } if (c.pc != 0x004CCCF0u) [[unlikely]] return; }
L_004CCCF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 112u)));
    c.budget -= 2;
L_004CCCF8:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_004CCD64; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 112u), c.r[17].w[0]);  goto L_004CCD40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCD10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CCD10u) [[unlikely]] return; }
L_004CCD10:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCD20u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CCD20u) [[unlikely]] return; }
L_004CCD20:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CCD3C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCD3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CCD3Cu) [[unlikely]] return; }
L_004CCD3C:
    st32((c.r[20].w[0] + 112u), c.r[17].w[0]);
    c.budget -= 1;
L_004CCD40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004CCD60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCD50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CCD50u) [[unlikely]] return; }
L_004CCD50:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCD60u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CCD60u) [[unlikely]] return; }
L_004CCD60:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_004CCD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCD6Cu); set32(c.r[5], ld32((c.r[20].w[0] + 112u)));  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CCD6Cu) [[unlikely]] return; }
L_004CCD6C:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCD78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CCD78u) [[unlikely]] return; }
L_004CCD78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 116u)));  goto L_004CCDC0; }
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] + 3221u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[14] = c.f[13];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCDB8u); set32(c.r[9], c.r[9].w[0] + 31040u);  if (depth < kMaxDepth) unit_0040(c, 89u, depth + 1u); else { c.pc = 0x002011C0u; return; } if (c.pc != 0x004CCDB8u) [[unlikely]] return; }
L_004CCDB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 2;
L_004CCDC0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_004CCE2C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 116u), c.r[17].w[0]);  goto L_004CCE08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCDD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CCDD8u) [[unlikely]] return; }
L_004CCDD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCDE8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CCDE8u) [[unlikely]] return; }
L_004CCDE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CCE04; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCE04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CCE04u) [[unlikely]] return; }
L_004CCE04:
    st32((c.r[20].w[0] + 116u), c.r[17].w[0]);
    c.budget -= 1;
L_004CCE08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004CCE28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCE18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CCE18u) [[unlikely]] return; }
L_004CCE18:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCE28u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CCE28u) [[unlikely]] return; }
L_004CCE28:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_004CCE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCE34u); set32(c.r[5], ld32((c.r[20].w[0] + 116u)));  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CCE34u) [[unlikely]] return; }
L_004CCE34:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCE40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CCE40u) [[unlikely]] return; }
L_004CCE40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_004CCE6C; }
    c.f[12] = ld32((c.r[28].w[0] - 31832u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[13] = ld32((c.r[28].w[0] - 32564u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3226u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCE68u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 177u, depth + 1u); else { c.pc = 0x00209CD0u; return; } if (c.pc != 0x004CCE68u) [[unlikely]] return; }
L_004CCE68:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_004CCE6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCE74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CCE74u) [[unlikely]] return; }
L_004CCE74:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCE80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CCE80u) [[unlikely]] return; }
L_004CCE80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  goto L_004CCEC4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[4].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[13] = ld32((c.r[28].w[0] - 32344u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[15] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] + 3244u);
    c.f[14] = 0u;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCEC0u); set32(c.r[8], c.r[8].w[0] + 31040u);  if (depth < kMaxDepth) unit_0045(c, 159u, depth + 1u); else { c.pc = 0x002159D0u; return; } if (c.pc != 0x004CCEC0u) [[unlikely]] return; }
L_004CCEC0:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_004CCEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCECCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CCECCu) [[unlikely]] return; }
L_004CCECC:
    set32(c.r[16], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 144u)));  goto L_004CCF10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCEE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CCEE0u) [[unlikely]] return; }
L_004CCEE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCEF0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CCEF0u) [[unlikely]] return; }
L_004CCEF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CCF0C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCF0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CCF0Cu) [[unlikely]] return; }
L_004CCF0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_004CCF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCF18u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CCF18u) [[unlikely]] return; }
L_004CCF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004CCF50:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 40u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[21]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCF78u); st32((c.r[29].w[0] + 32u), c.f[20]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CCF78u) [[unlikely]] return; }
L_004CCF78:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CCF84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CCF84u) [[unlikely]] return; }
L_004CCF84:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22812u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22808u)));  goto L_004CCFBC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 2952u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] + 2956u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] + 2960u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 22812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22808u)));
    c.budget -= 10;
L_004CCFBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CCFE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 2968u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] + 2972u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] + 2976u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 22808u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_004CCFE8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD000u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CD000u) [[unlikely]] return; }
L_004CD000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD010u); set32(c.r[4], c.r[4].w[0] + 2952u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x004CD010u) [[unlikely]] return; }
L_004CD010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD018u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x004CD018u) [[unlikely]] return; }
L_004CD018:
    c.f[22] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[2].w[0] + 2992u));
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.f[1] = ld32((c.r[28].w[0] - 32028u));
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = ld32((c.r[2].w[0] + 2952u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[13] = ld32((c.r[2].w[0] + 2956u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD048u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CD048u) [[unlikely]] return; }
L_004CD048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD050u); set32(c.r[4], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x004CD050u) [[unlikely]] return; }
L_004CD050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD068u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CD068u) [[unlikely]] return; }
L_004CD068:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD074u); set32(c.r[4], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x004CD074u) [[unlikely]] return; }
L_004CD074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD07Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x004CD07Cu) [[unlikely]] return; }
L_004CD07C:
    c.f[2] = ld32((c.r[29].w[0] + 204u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[21] = c.f[0];  if (t) { goto L_004CD098; } }
    c.f[21] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_004CD098:
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD0A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CD0A4u) [[unlikely]] return; }
L_004CD0A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 108u)));  goto L_004CD0C4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD0BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004CD0BCu) [[unlikely]] return; }
L_004CD0BC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 2;
L_004CD0C4:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  goto L_004CD130; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 108u), c.r[18].w[0]);  goto L_004CD10C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD0DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD0DCu) [[unlikely]] return; }
L_004CD0DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD0ECu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD0ECu) [[unlikely]] return; }
L_004CD0EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CD108; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD108u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD108u) [[unlikely]] return; }
L_004CD108:
    st32((c.r[16].w[0] + 108u), c.r[18].w[0]);
    c.budget -= 1;
L_004CD10C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CD12C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD11Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD11Cu) [[unlikely]] return; }
L_004CD11C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD12Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD12Cu) [[unlikely]] return; }
L_004CD12C:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 1;
L_004CD130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD138u);  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004CD138u) [[unlikely]] return; }
L_004CD138:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD148u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004CD148u) [[unlikely]] return; }
L_004CD148:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD15Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD15Cu) [[unlikely]] return; }
L_004CD15C:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[4], 0u + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD194u); st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CD194u) [[unlikely]] return; }
L_004CD194:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 96u)));  goto L_004CD204; }
    c.f[0] = ld32((c.r[28].w[0] - 31936u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 18144u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 29472u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 108u)));
    c.f[19] = ld32((c.r[28].w[0] - 32316u));
    c.f[15] = c.f[22];
    c.f[17] = c.f[21];
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.f[16] = c.f[20];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD1FCu); c.f[18] = c.f[20];  if (depth < kMaxDepth) unit_0045(c, 300u, depth + 1u); else { c.pc = 0x00216FE0u; return; } if (c.pc != 0x004CD1FCu) [[unlikely]] return; }
L_004CD1FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 2;
L_004CD204:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_004CD270; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 96u), c.r[18].w[0]);  goto L_004CD24C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD21Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD21Cu) [[unlikely]] return; }
L_004CD21C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD22Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD22Cu) [[unlikely]] return; }
L_004CD22C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CD248; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD248u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD248u) [[unlikely]] return; }
L_004CD248:
    st32((c.r[16].w[0] + 96u), c.r[18].w[0]);
    c.budget -= 1;
L_004CD24C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CD26C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD25Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD25Cu) [[unlikely]] return; }
L_004CD25C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD26Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD26Cu) [[unlikely]] return; }
L_004CD26C:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_004CD270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD278u); set32(c.r[5], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CD278u) [[unlikely]] return; }
L_004CD278:
    set32(c.r[4], 0u + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD284u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CD284u) [[unlikely]] return; }
L_004CD284:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 100u)));  goto L_004CD2F8; }
    c.f[0] = ld32((c.r[28].w[0] - 32344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[14] = 0u;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 29468u)));
    c.f[18] = ld32((c.r[28].w[0] - 31832u));
    c.f[12] = c.r[3].w[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[9], c.r[9].w[0] + 31040u);
    c.f[15] = c.f[14];
    set32(c.r[10], c.r[10].w[0] + 18144u);
    c.f[16] = c.f[14];
    c.f[17] = c.f[14];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD2F0u); c.f[19] = c.f[12];  if (depth < kMaxDepth) unit_0043(c, 177u, depth + 1u); else { c.pc = 0x0020ED20u; return; } if (c.pc != 0x004CD2F0u) [[unlikely]] return; }
L_004CD2F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 2;
L_004CD2F8:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  goto L_004CD364; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 100u), c.r[18].w[0]);  goto L_004CD340; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD310u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD310u) [[unlikely]] return; }
L_004CD310:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD320u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD320u) [[unlikely]] return; }
L_004CD320:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CD33C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD33Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD33Cu) [[unlikely]] return; }
L_004CD33C:
    st32((c.r[16].w[0] + 100u), c.r[18].w[0]);
    c.budget -= 1;
L_004CD340:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CD360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD350u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD350u) [[unlikely]] return; }
L_004CD350:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD360u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD360u) [[unlikely]] return; }
L_004CD360:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_004CD364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD36Cu); set32(c.r[5], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CD36Cu) [[unlikely]] return; }
L_004CD36C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD384u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CD384u) [[unlikely]] return; }
L_004CD384:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD394u); set32(c.r[4], c.r[4].w[0] + 2968u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x004CD394u) [[unlikely]] return; }
L_004CD394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD39Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x004CD39Cu) [[unlikely]] return; }
L_004CD39C:
    c.f[21] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[2].w[0] + 3000u));
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.f[1] = ld32((c.r[28].w[0] - 32028u));
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = ld32((c.r[2].w[0] + 2968u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[13] = ld32((c.r[2].w[0] + 2972u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD3CCu); c.f[22] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CD3CCu) [[unlikely]] return; }
L_004CD3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD3D4u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x004CD3D4u) [[unlikely]] return; }
L_004CD3D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD3ECu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x004CD3ECu) [[unlikely]] return; }
L_004CD3EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD3F8u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x004CD3F8u) [[unlikely]] return; }
L_004CD3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD400u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x004CD400u) [[unlikely]] return; }
L_004CD400:
    c.f[2] = ld32((c.r[29].w[0] + 156u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_004CD41C; } }
    c.f[20] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_004CD41C:
    set32(c.r[4], 0u + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD428u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CD428u) [[unlikely]] return; }
L_004CD428:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 104u)));  goto L_004CD498; }
    c.f[2] = ld32((c.r[28].w[0] - 32068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.f[1] = ld32((c.r[28].w[0] - 32076u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[28].w[0] - 31736u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[2]);
    set32(c.r[7], c.r[7].w[0] + 18144u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[14] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[28].w[0] - 29464u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    c.f[15] = c.f[21];
    c.f[17] = c.f[20];
    c.f[19] = c.r[2].w[0];
    c.f[16] = c.f[22];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD490u); c.f[18] = c.f[22];  if (depth < kMaxDepth) unit_0045(c, 300u, depth + 1u); else { c.pc = 0x00216FE0u; return; } if (c.pc != 0x004CD490u) [[unlikely]] return; }
L_004CD490:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 2;
L_004CD498:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_004CD504; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 104u), c.r[17].w[0]);  goto L_004CD4E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD4B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD4B0u) [[unlikely]] return; }
L_004CD4B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD4C0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD4C0u) [[unlikely]] return; }
L_004CD4C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CD4DC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD4DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD4DCu) [[unlikely]] return; }
L_004CD4DC:
    st32((c.r[16].w[0] + 104u), c.r[17].w[0]);
    c.budget -= 1;
L_004CD4E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004CD500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD4F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD4F0u) [[unlikely]] return; }
L_004CD4F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD500u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD500u) [[unlikely]] return; }
L_004CD500:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_004CD504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD50Cu); set32(c.r[5], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x004CD50Cu) [[unlikely]] return; }
L_004CD50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD514u); set32(c.r[4], ld32((c.r[29].w[0] + 216u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CD514u) [[unlikely]] return; }
L_004CD514:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_004CD540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD55Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CD55Cu) [[unlikely]] return; }
L_004CD55C:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD568u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CD568u) [[unlikely]] return; }
L_004CD568:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD578u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CD578u) [[unlikely]] return; }
L_004CD578:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 72u)));  goto L_004CD5A4; }
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 400u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD59Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 103u, depth + 1u); else { c.pc = 0x001F8DE0u; return; } if (c.pc != 0x004CD59Cu) [[unlikely]] return; }
L_004CD59C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_004CD5A4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[4], 0u + 352u);  goto L_004CD610; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), c.r[17].w[0]);  goto L_004CD5EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD5BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD5BCu) [[unlikely]] return; }
L_004CD5BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD5CCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD5CCu) [[unlikely]] return; }
L_004CD5CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CD5E8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD5E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD5E8u) [[unlikely]] return; }
L_004CD5E8:
    st32((c.r[16].w[0] + 72u), c.r[17].w[0]);
    c.budget -= 1;
L_004CD5EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004CD60C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD5FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD5FCu) [[unlikely]] return; }
L_004CD5FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD60Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD60Cu) [[unlikely]] return; }
L_004CD60C:
    set32(c.r[4], 0u + 352u);
    c.budget -= 1;
L_004CD610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD618u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CD618u) [[unlikely]] return; }
L_004CD618:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 76u)));  goto L_004CD644; }
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 200u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD63Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 103u, depth + 1u); else { c.pc = 0x001F8DE0u; return; } if (c.pc != 0x004CD63Cu) [[unlikely]] return; }
L_004CD63C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 2;
L_004CD644:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[4], 0u + 352u);  goto L_004CD6B0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[17].w[0]);  goto L_004CD68C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD65Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD65Cu) [[unlikely]] return; }
L_004CD65C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD66Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD66Cu) [[unlikely]] return; }
L_004CD66C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CD688; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD688u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD688u) [[unlikely]] return; }
L_004CD688:
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    c.budget -= 1;
L_004CD68C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004CD6AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD69Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD69Cu) [[unlikely]] return; }
L_004CD69C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD6ACu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD6ACu) [[unlikely]] return; }
L_004CD6AC:
    set32(c.r[4], 0u + 352u);
    c.budget -= 1;
L_004CD6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD6B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CD6B8u) [[unlikely]] return; }
L_004CD6B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 80u)));  goto L_004CD6E4; }
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 150u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD6DCu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 103u, depth + 1u); else { c.pc = 0x001F8DE0u; return; } if (c.pc != 0x004CD6DCu) [[unlikely]] return; }
L_004CD6DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 2;
L_004CD6E4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  goto L_004CD750; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[17].w[0]);  goto L_004CD72C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD6FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD6FCu) [[unlikely]] return; }
L_004CD6FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD70Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD70Cu) [[unlikely]] return; }
L_004CD70C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CD728; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD728u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD728u) [[unlikely]] return; }
L_004CD728:
    st32((c.r[16].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 1;
L_004CD72C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004CD74C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD73Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD73Cu) [[unlikely]] return; }
L_004CD73C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD74Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD74Cu) [[unlikely]] return; }
L_004CD74C:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_004CD750:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD7B8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD7B8u) [[unlikely]] return; }
L_004CD7B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD7D0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD7D0u) [[unlikely]] return; }
L_004CD7D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD7E8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD7E8u) [[unlikely]] return; }
L_004CD7E8:
    set32(c.r[4], 0u + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD7F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CD7F4u) [[unlikely]] return; }
L_004CD7F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 84u)));  goto L_004CD810; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD808u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 72u, depth + 1u); else { c.pc = 0x00218DC0u; return; } if (c.pc != 0x004CD808u) [[unlikely]] return; }
L_004CD808:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 2;
L_004CD810:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[4], 0u + 52u);  goto L_004CD87C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 84u), c.r[17].w[0]);  goto L_004CD858; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD828u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD828u) [[unlikely]] return; }
L_004CD828:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD838u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD838u) [[unlikely]] return; }
L_004CD838:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CD854; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD854u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD854u) [[unlikely]] return; }
L_004CD854:
    st32((c.r[16].w[0] + 84u), c.r[17].w[0]);
    c.budget -= 1;
L_004CD858:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004CD878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD868u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD868u) [[unlikely]] return; }
L_004CD868:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD878u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD878u) [[unlikely]] return; }
L_004CD878:
    set32(c.r[4], 0u + 52u);
    c.budget -= 1;
L_004CD87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CD884u) [[unlikely]] return; }
L_004CD884:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 88u)));  goto L_004CD8A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD898u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 72u, depth + 1u); else { c.pc = 0x00218DC0u; return; } if (c.pc != 0x004CD898u) [[unlikely]] return; }
L_004CD898:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 2;
L_004CD8A0:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[4], 0u + 52u);  goto L_004CD90C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), c.r[17].w[0]);  goto L_004CD8E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD8B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD8B8u) [[unlikely]] return; }
L_004CD8B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD8C8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD8C8u) [[unlikely]] return; }
L_004CD8C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CD8E4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD8E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD8E4u) [[unlikely]] return; }
L_004CD8E4:
    st32((c.r[16].w[0] + 88u), c.r[17].w[0]);
    c.budget -= 1;
L_004CD8E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004CD908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD8F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD8F8u) [[unlikely]] return; }
L_004CD8F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD908u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD908u) [[unlikely]] return; }
L_004CD908:
    set32(c.r[4], 0u + 52u);
    c.budget -= 1;
L_004CD90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD914u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CD914u) [[unlikely]] return; }
L_004CD914:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 92u)));  goto L_004CD930; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD928u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 72u, depth + 1u); else { c.pc = 0x00218DC0u; return; } if (c.pc != 0x004CD928u) [[unlikely]] return; }
L_004CD928:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 2;
L_004CD930:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_004CD99C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 92u), c.r[17].w[0]);  goto L_004CD978; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD948u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD948u) [[unlikely]] return; }
L_004CD948:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD958u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD958u) [[unlikely]] return; }
L_004CD958:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CD974; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD974u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD974u) [[unlikely]] return; }
L_004CD974:
    st32((c.r[16].w[0] + 92u), c.r[17].w[0]);
    c.budget -= 1;
L_004CD978:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004CD998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD988u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CD988u) [[unlikely]] return; }
L_004CD988:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD998u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CD998u) [[unlikely]] return; }
L_004CD998:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_004CD99C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD9ACu); set32(c.r[5], ld32((c.r[16].w[0] + 72u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD9ACu) [[unlikely]] return; }
L_004CD9AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD9C0u); set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD9C0u) [[unlikely]] return; }
L_004CD9C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD9D4u); set32(c.r[5], ld32((c.r[16].w[0] + 80u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CD9D4u) [[unlikely]] return; }
L_004CD9D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CD9ECu); st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CD9ECu) [[unlikely]] return; }
L_004CD9EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004CDA10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDA2Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CDA2Cu) [[unlikely]] return; }
L_004CDA2C:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDA38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CDA38u) [[unlikely]] return; }
L_004CDA38:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.f[0] = ld32((c.r[28].w[0] - 31740u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_004CDAA4; } }
    c.r[5].d[0] = ld16((c.r[6].w[0] + 196u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    st16((c.r[6].w[0] + 196u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 196u));
    c.r[5].d[0] = c.r[5].d[0] & 65533ull;
    st16((c.r[6].w[0] + 196u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 18088u));
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 18092u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 18096u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004CDB10; } }
L_004CDAA4:
    c.r[2].d[0] = ld16((c.r[6].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004CDB14; }
    c.f[2] = fp::max(c.f[20], c.f[1]);
    c.f[2] = fp::min(c.f[2], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[1] = fp::sub(c.f[20], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 68u), c.f[1]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[3].w[0] + 72u), c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 76u), c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.f[0] = c.f[0] & fp::kAbs;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 108u), c.f[0]);
    c.budget -= 22;
L_004CDB10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004CDB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDB1Cu);  if (depth < kMaxDepth) unit_00F3(c, 315u, depth + 1u); else { c.pc = 0x004CE170u; return; } if (c.pc != 0x004CDB1Cu) [[unlikely]] return; }
L_004CDB1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 148u)));  if (t) { goto L_004CDBFC; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 424u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_004CDB78; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[5].w[0] + 97u));  goto L_004CDB68; }
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004CDB64; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 100u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_004CDB78; } }
L_004CDB64:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 97u));
    c.budget -= 1;
L_004CDB68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004CDC00; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_004CDBFC; } }
L_004CDB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDB80u);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x004CDB80u) [[unlikely]] return; }
L_004CDB80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004CDBFC; } }
    c.f[0] = ld32((c.r[28].w[0] - 29056u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDBACu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 378u, depth + 1u); else { c.pc = 0x003AF0E0u; return; } if (c.pc != 0x004CDBACu) [[unlikely]] return; }
L_004CDBAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_004CDBD4; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_004CDBEC; } }
L_004CDBD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 6;
L_004CDBEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDBFCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00F2(c, 351u, depth + 1u); else { c.pc = 0x004CA830u; return; } if (c.pc != 0x004CDBFCu) [[unlikely]] return; }
L_004CDBFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004CDC00:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDC10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CDC10u) [[unlikely]] return; }
L_004CDC10:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDC20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004CDC20u) [[unlikely]] return; }
L_004CDC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDC28u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CDC28u) [[unlikely]] return; }
L_004CDC28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004CDC40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDC5Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CDC5Cu) [[unlikely]] return; }
L_004CDC5C:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDC68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CDC68u) [[unlikely]] return; }
L_004CDC68:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDC78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CDC78u) [[unlikely]] return; }
L_004CDC78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 52u)));  goto L_004CDC98; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDC90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004CDC90u) [[unlikely]] return; }
L_004CDC90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_004CDC98:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 52u)));  goto L_004CDD04; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  goto L_004CDCE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDCB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CDCB0u) [[unlikely]] return; }
L_004CDCB0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDCC0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CDCC0u) [[unlikely]] return; }
L_004CDCC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CDCDC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDCDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CDCDCu) [[unlikely]] return; }
L_004CDCDC:
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 1;
L_004CDCE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004CDD00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDCF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CDCF0u) [[unlikely]] return; }
L_004CDCF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDD00u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CDD00u) [[unlikely]] return; }
L_004CDD00:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_004CDD04:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDD34u); st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CDD34u) [[unlikely]] return; }
L_004CDD34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004CDD50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDD70u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_00F3(c, 294u, depth + 1u); else { c.pc = 0x004CDF00u; return; } if (c.pc != 0x004CDD70u) [[unlikely]] return; }
L_004CDD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDD78u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00F3(c, 282u, depth + 1u); else { c.pc = 0x004CDDB0u; return; } if (c.pc != 0x004CDD78u) [[unlikely]] return; }
L_004CDD78:
    set32(c.r[2], c.r[17].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 132u);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[6], c.r[29].w[0] + 56u);
    set32(c.r[7], c.r[29].w[0] + 52u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDD9Cu); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x004CDD9Cu) [[unlikely]] return; }
L_004CDD9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004CDDB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004CDEC8; } }
L_004CDDD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 92u), 0u);  if (t) { goto L_004CDDF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDDE4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CDDE4u) [[unlikely]] return; }
L_004CDDE4:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDDF8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CDDF8u) [[unlikely]] return; }
L_004CDDF8:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 8;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 92u)));  goto L_004CDE7C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 92u)));  goto L_004CDE58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDE28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CDE28u) [[unlikely]] return; }
L_004CDE28:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDE38u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CDE38u) [[unlikely]] return; }
L_004CDE38:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004CDE54; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDE54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CDE54u) [[unlikely]] return; }
L_004CDE54:
    set32(c.r[17], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_004CDE58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_004CDE78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDE68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CDE68u) [[unlikely]] return; }
L_004CDE68:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDE78u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CDE78u) [[unlikely]] return; }
L_004CDE78:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_004CDE7C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] + 1u);  goto L_004CDEC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDE8Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CDE8Cu) [[unlikely]] return; }
L_004CDE8C:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDEA0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CDEA0u) [[unlikely]] return; }
L_004CDEA0:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004CDEC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDEC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CDEC0u) [[unlikely]] return; }
L_004CDEC0:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004CDEC4:
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_004CDEC8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004CDDD4u | kUnwind; return; } goto L_004CDDD4; }
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004CDF00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004CE018; } }
L_004CDF24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 92u), 0u);  if (t) { goto L_004CDF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDF34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CDF34u) [[unlikely]] return; }
L_004CDF34:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDF48u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CDF48u) [[unlikely]] return; }
L_004CDF48:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 8;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 92u)));  goto L_004CDFCC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 92u)));  goto L_004CDFA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDF78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CDF78u) [[unlikely]] return; }
L_004CDF78:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDF88u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CDF88u) [[unlikely]] return; }
L_004CDF88:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004CDFA4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDFA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CDFA4u) [[unlikely]] return; }
L_004CDFA4:
    set32(c.r[17], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_004CDFA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_004CDFC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDFB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CDFB8u) [[unlikely]] return; }
L_004CDFB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDFC8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CDFC8u) [[unlikely]] return; }
L_004CDFC8:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_004CDFCC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] + 1u);  goto L_004CE014; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDFDCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CDFDCu) [[unlikely]] return; }
L_004CDFDC:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CDFF0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CDFF0u) [[unlikely]] return; }
L_004CDFF0:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004CE010; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE010u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CE010u) [[unlikely]] return; }
L_004CE010:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004CE014:
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_004CE018:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004CDF24u | kUnwind; return; } goto L_004CDF24; }
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004CE050:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE06Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CE06Cu) [[unlikely]] return; }
L_004CE06C:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE078u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CE078u) [[unlikely]] return; }
L_004CE078:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE088u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0042(c, 431u, depth + 1u); else { c.pc = 0x0020B850u; return; } if (c.pc != 0x004CE088u) [[unlikely]] return; }
L_004CE088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE090u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CE090u) [[unlikely]] return; }
L_004CE090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004CE0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 120u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004CE13C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CE128u) [[unlikely]] return; }
L_004CE128:
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE13Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CE13Cu) [[unlikely]] return; }
L_004CE13C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CE158u) [[unlikely]] return; }
L_004CE158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004CE170:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 48u), 0u);
    set32(c.r[18], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 24;
    { const bool t = c.r[19].d[0] == c.r[17].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004CE230; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 212u), c.r[17].w[0]);  goto L_004CE210; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE1E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CE1E0u) [[unlikely]] return; }
L_004CE1E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE1F0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CE1F0u) [[unlikely]] return; }
L_004CE1F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CE20C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE20Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CE20Cu) [[unlikely]] return; }
L_004CE20C:
    st32((c.r[16].w[0] + 212u), c.r[17].w[0]);
    c.budget -= 1;
L_004CE210:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 112u);  goto L_004CE234; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE220u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CE220u) [[unlikely]] return; }
L_004CE220:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE230u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CE230u) [[unlikely]] return; }
L_004CE230:
    set32(c.r[2], c.r[18].w[0] + 112u);
    c.budget -= 1;
L_004CE234:
    set32(c.r[3], ld32((c.r[18].w[0] + 220u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[18].w[0] + 172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[30], c.r[18].w[0] + 160u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[19], ld32((c.r[3].w[0] + 112u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 48u));
    c.f[22] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[18], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[21], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[22], ld32((c.r[3].w[0] + 84u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(150ll) ? 1ull : 0ull;
    set32(c.r[17], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_004CE27C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_004CE288; } }
L_004CE27C:
    set32(c.r[2], 0u + 150u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_004CE288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_004CE710; } }
L_004CE290:
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.f[2] = ld32((c.r[22].w[0]));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[21] = fp::mul(c.f[20], c.f[2]);
    c.f[2] = fp::mul(c.f[20], c.f[1]);
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[29].w[0] + 244u), c.f[1]);
    st32((c.r[29].w[0] + 248u), c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE2D0u); st32((c.r[29].w[0] + 240u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004CE2D0u) [[unlikely]] return; }
L_004CE2D0:
    c.f[3] = ld32((c.r[29].w[0] + 260u));
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.f[2] = ld32((c.r[30].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.f[0] = ld32((c.r[30].w[0]));
    c.f[24] = fp::add(c.f[3], c.f[2]);
    c.f[25] = fp::add(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 264u));
    c.f[4] = ld32((c.r[30].w[0] + 8u));
    c.f[2] = fp::mul(c.f[22], c.f[2]);
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    c.f[0] = fp::mul(c.f[22], c.f[0]);
    c.f[23] = fp::add(c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 232u), c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE328u); st32((c.r[29].w[0] + 224u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004CE328u) [[unlikely]] return; }
L_004CE328:
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.f[6] = fp::mul(c.f[21], c.f[2]);  goto L_004CE358; }
    c.f[21] = 0u;
    c.f[6] = fp::mul(c.f[21], c.f[2]);
    c.budget -= 2;
L_004CE358:
    set32(c.r[6], ld32((c.r[20].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[5] = fp::mul(c.f[21], c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[4] = ld32((c.r[29].w[0] + 272u));
    c.f[10] = fp::add(c.f[23], c.f[6]);
    c.f[7] = fp::sub(c.f[23], c.f[6]);
    c.f[3] = fp::mul(c.f[21], c.f[4]);
    c.f[9] = fp::add(c.f[24], c.f[5]);
    c.f[6] = fp::sub(c.f[24], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 276u));
    c.f[8] = fp::add(c.f[25], c.f[3]);
    c.f[5] = fp::sub(c.f[25], c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 280u));
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    fpu_rsqrt(c, 3u, c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[15] = fp::mul(c.f[4], c.f[3]);
    c.f[14] = fp::mul(c.f[2], c.f[3]);
    c.f[4] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[3].w[0] + 31064u));
    c.f[1] = ld32((c.r[2].w[0] + 31060u));
    st32((c.r[29].w[0] + 272u), c.f[15]);
    st32((c.r[29].w[0] + 276u), c.f[14]);
    st32((c.r[29].w[0] + 280u), c.f[4]);
    c.facc = fp::mul(c.f[14], c.f[2]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[4], c.f[1]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31056u));
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[15], c.f[2]));
    c.facc = fp::mul(c.f[15], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[14], c.f[0]));
    c.facc = fp::mul(c.f[14], c.f[0]);
    c.f[13] = fp::sub(c.facc, fp::mul(c.f[4], c.f[2]));
    c.facc = fp::mul(c.f[4], c.f[3]);
    c.f[12] = fp::sub(c.facc, fp::mul(c.f[15], c.f[0]));
    c.facc = fp::mul(c.f[15], c.f[2]);
    c.f[11] = fp::sub(c.facc, fp::mul(c.f[14], c.f[3]));
    c.facc = fp::mul(c.f[14], c.f[11]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[4], c.f[12]));
    c.facc = fp::mul(c.f[4], c.f[13]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[15], c.f[11]));
    c.facc = fp::mul(c.f[15], c.f[12]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[14], c.f[13]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = fp::add(c.f[2], c.f[12]);
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[19], c.r[19].w[0] + 28u);
    set32(c.r[18], c.r[18].w[0] + 12u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    c.f[15] = fp::mul(c.f[21], c.f[4]);
    c.f[0] = fp::add(c.f[3], c.f[13]);
    c.f[16] = fp::mul(c.f[21], c.f[0]);
    c.f[4] = fp::add(c.f[1], c.f[11]);
    c.f[14] = fp::mul(c.f[21], c.f[4]);
    c.f[4] = fp::add(c.f[8], c.f[16]);
    st32((c.r[4].w[0] + 24u), c.f[4]);
    c.f[4] = fp::add(c.f[9], c.f[15]);
    st32((c.r[4].w[0] + 28u), c.f[4]);
    c.f[4] = fp::add(c.f[10], c.f[14]);
    st32((c.r[4].w[0] + 32u), c.f[4]);
    c.f[4] = fp::sub(c.f[3], c.f[13]);
    c.f[17] = fp::add(c.f[7], c.f[14]);
    c.f[24] = c.f[3] ^ fp::kSign;
    c.f[3] = fp::sub(c.f[2], c.f[12]);
    c.f[14] = fp::mul(c.f[21], c.f[4]);
    c.f[23] = c.f[2] ^ fp::kSign;
    c.f[2] = fp::sub(c.f[1], c.f[11]);
    c.f[4] = c.f[1] ^ fp::kSign;
    c.f[1] = fp::add(c.f[8], c.f[14]);
    c.f[19] = fp::add(c.f[5], c.f[16]);
    c.f[3] = fp::mul(c.f[21], c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    c.f[1] = fp::add(c.f[9], c.f[3]);
    c.f[18] = fp::add(c.f[6], c.f[15]);
    c.f[15] = fp::add(c.f[6], c.f[3]);
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    c.f[16] = fp::add(c.f[5], c.f[14]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    c.f[1] = fp::add(c.f[10], c.f[2]);
    c.f[14] = fp::add(c.f[7], c.f[2]);
    st32((c.r[4].w[0] + 44u), c.f[1]);
    c.f[2] = 0u;
    c.f[3] = fp::add(c.f[24], c.f[13]);
    c.f[1] = fp::sub(c.f[24], c.f[13]);
    c.facc = fp::add(c.f[2], c.f[8]);
    c.f[13] = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    st32((c.r[4].w[0] + 48u), c.f[13]);
    c.f[13] = fp::add(c.f[23], c.f[12]);
    c.facc = fp::add(c.f[2], c.f[8]);
    c.f[8] = fp::sub(c.f[23], c.f[12]);
    c.f[13] = fp::mul(c.f[21], c.f[13]);
    c.f[12] = fp::add(c.f[9], c.f[13]);
    c.f[8] = fp::mul(c.f[21], c.f[8]);
    st32((c.r[4].w[0] + 52u), c.f[12]);
    c.f[12] = fp::add(c.f[9], c.f[8]);
    c.f[9] = fp::add(c.f[6], c.f[13]);
    c.f[6] = fp::add(c.f[6], c.f[8]);
    c.f[8] = fp::add(c.f[4], c.f[11]);
    c.f[4] = fp::sub(c.f[4], c.f[11]);
    c.f[11] = fp::mul(c.f[21], c.f[8]);
    c.f[8] = fp::add(c.f[10], c.f[11]);
    c.f[4] = fp::mul(c.f[21], c.f[4]);
    c.f[10] = fp::add(c.f[10], c.f[4]);
    st32((c.r[4].w[0] + 56u), c.f[8]);
    c.f[8] = fp::add(c.f[7], c.f[11]);
    c.f[4] = fp::add(c.f[7], c.f[4]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    st32((c.r[4].w[0] + 60u), c.f[7]);
    st32((c.r[4].w[0] + 64u), c.f[12]);
    st32((c.r[4].w[0] + 68u), c.f[10]);
    st32((c.r[4].w[0]), c.f[19]);
    st32((c.r[4].w[0] + 4u), c.f[18]);
    st32((c.r[4].w[0] + 8u), c.f[17]);
    st32((c.r[4].w[0] + 12u), c.f[16]);
    st32((c.r[4].w[0] + 16u), c.f[15]);
    c.facc = fp::add(c.f[2], c.f[5]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    st32((c.r[4].w[0] + 20u), c.f[14]);
    st32((c.r[4].w[0] + 72u), c.f[3]);
    c.facc = fp::add(c.f[2], c.f[5]);
    st32((c.r[4].w[0] + 76u), c.f[9]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    st32((c.r[4].w[0] + 80u), c.f[8]);
    st32((c.r[4].w[0] + 84u), c.f[1]);
    st32((c.r[4].w[0] + 88u), c.f[6]);
    st32((c.r[4].w[0] + 92u), c.f[4]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 32u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 36u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 40u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 44u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0] + 48u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 52u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 56u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 60u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0] + 64u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 68u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 72u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 76u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0] + 80u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 84u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 88u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 92u), c.f[2]);
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[5] = ld32((c.r[17].w[0] + 12u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[2].w[0]), c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[3]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    c.f[2] = fp::mul(c.f[5], c.f[0]);
    st32((c.r[2].w[0] + 12u), c.f[2]);
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[5] = ld32((c.r[17].w[0] + 12u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[2].w[0] + 16u), c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[2].w[0] + 20u), c.f[3]);
    st32((c.r[2].w[0] + 24u), c.f[2]);
    c.f[2] = fp::mul(c.f[5], c.f[0]);
    st32((c.r[2].w[0] + 28u), c.f[2]);
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[5] = ld32((c.r[17].w[0] + 12u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[2].w[0] + 96u), c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[2].w[0] + 100u), c.f[3]);
    st32((c.r[2].w[0] + 104u), c.f[2]);
    c.f[2] = fp::mul(c.f[5], c.f[0]);
    st32((c.r[2].w[0] + 108u), c.f[2]);
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[5] = ld32((c.r[17].w[0] + 12u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[2].w[0] + 112u), c.f[4]);
    st32((c.r[2].w[0] + 116u), c.f[3]);
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    st32((c.r[2].w[0] + 120u), c.f[2]);
    st32((c.r[2].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 16u);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 28u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.f[0]);
    st32((c.r[2].w[0] + 124u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(150ll) ? 1ull : 0ull;
    c.budget -= 236;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[20].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_004CE71C; } }
    set32(c.r[23], c.r[23].w[0] + 1u);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 2;
L_004CE710:
    c.r[2].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[3] = ld32((c.r[21].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004CE290u | kUnwind; return; } goto L_004CE290; }
L_004CE71C:
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] | 37ull;
    st16((c.r[3].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE748u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CE748u) [[unlikely]] return; }
L_004CE748:
    set32(c.r[4], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE76Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CE76Cu) [[unlikely]] return; }
L_004CE76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
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
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_004CE7C0:
    set32(c.r[29], c.r[29].w[0] - 560u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE7F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CE7F4u) [[unlikely]] return; }
L_004CE7F4:
    st32((c.r[29].w[0] + 556u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE800u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CE800u) [[unlikely]] return; }
L_004CE800:
    st32((c.r[29].w[0] + 552u), c.r[2].w[0]);
    set32(c.r[4], 0u + 14416u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE814u); st32((c.r[16].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004CE814u) [[unlikely]] return; }
L_004CE814:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE830u); set32(c.r[8], 0u + 1200u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004CE830u) [[unlikely]] return; }
L_004CE830:
    st32((c.r[29].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[4], 0u + 19216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE840u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004CE840u) [[unlikely]] return; }
L_004CE840:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE85Cu); set32(c.r[8], 0u + 1200u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004CE85Cu) [[unlikely]] return; }
L_004CE85C:
    st32((c.r[29].w[0] + 544u), c.r[2].w[0]);
    set32(c.r[4], 0u + 10800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CE86Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x004CE86Cu) [[unlikely]] return; }
L_004CE86C:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[11]);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[11]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[11]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[11]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[11]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[11]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[11]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[11]);
    c.budget -= 55;
L_004CE948:
    set32(c.r[20], c.r[21].w[0] << 3);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    set32(c.r[12], c.r[20].w[0] + c.r[21].w[0]);
    c.r[11].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[13], c.r[12].w[0] << 2);
    set32(c.r[14], c.r[11].w[0] << 4);
    set32(c.r[12], ld32((c.r[29].w[0] + 544u)));
    c.f[0] = ld32((c.r[10].w[0] + 18144u));
    set32(c.r[17], c.r[11].w[0] + 1u);
    set32(c.r[25], c.r[11].w[0] + 2u);
    set32(c.r[24], c.r[11].w[0] + 3u);
    set32(c.r[15], c.r[11].w[0] + 7u);
    set32(c.r[19], c.r[12].w[0] + c.r[14].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    st32((c.r[19].w[0]), c.f[0]);
    c.r[12].d[0] = c.r[13].d[0] & 65535ull;
    c.f[0] = ld32((c.r[9].w[0] + 18148u));
    set32(c.r[13], c.r[12].w[0] << 1);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[12]);
    set32(c.r[14], c.r[11].w[0] + 5u);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 18152u));
    set32(c.r[18], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[11].w[0] + 6u);
    set32(c.r[12], c.r[11].w[0] + 4u);
    c.r[11].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(150ll) ? 1ull : 0ull;
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 18156u));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 18144u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 18148u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 18152u));
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 18156u));
    st32((c.r[19].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 18144u));
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[23].w[0] + 18148u));
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 18152u));
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18156u));
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18144u));
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18148u));
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18152u));
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18156u));
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18144u));
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18148u));
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18152u));
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18156u));
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18144u));
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18148u));
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18152u));
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18156u));
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18144u));
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18148u));
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18152u));
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18156u));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18144u));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18148u));
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18152u));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 18156u));
    st32((c.r[19].w[0] + 124u), c.f[0]);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[25].w[0]));
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[24].w[0]));
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[25].w[0]));
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st16((c.r[18].w[0] + 16u), static_cast<std::uint16_t>(c.r[24].w[0]));
    st16((c.r[18].w[0] + 18u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st16((c.r[18].w[0] + 20u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st16((c.r[18].w[0] + 22u), static_cast<std::uint16_t>(c.r[24].w[0]));
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[13].w[0]));
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st16((c.r[18].w[0] + 30u), static_cast<std::uint16_t>(c.r[13].w[0]));
    st16((c.r[18].w[0] + 32u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[18].w[0] + 34u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st16((c.r[18].w[0] + 36u), static_cast<std::uint16_t>(c.r[13].w[0]));
    st16((c.r[18].w[0] + 38u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[18].w[0] + 40u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[25].w[0]));
    st16((c.r[18].w[0] + 46u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[18].w[0] + 48u), static_cast<std::uint16_t>(c.r[13].w[0]));
    st16((c.r[18].w[0] + 50u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st16((c.r[18].w[0] + 52u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[18].w[0] + 54u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st16((c.r[18].w[0] + 56u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[18].w[0] + 58u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st16((c.r[18].w[0] + 60u), static_cast<std::uint16_t>(c.r[25].w[0]));
    st16((c.r[18].w[0] + 62u), static_cast<std::uint16_t>(c.r[24].w[0]));
    st16((c.r[18].w[0] + 64u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[18].w[0] + 66u), static_cast<std::uint16_t>(c.r[24].w[0]));
    st16((c.r[18].w[0] + 68u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.budget -= 142;
    { const bool t = c.r[11].d[0] != 0ull; st16((c.r[18].w[0] + 70u), static_cast<std::uint16_t>(c.r[12].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CE948u | kUnwind; return; } goto L_004CE948; } }
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEB8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CEB8Cu) [[unlikely]] return; }
L_004CEB8C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_004CEBDC; }
    set32(c.r[2], 0u + 1800u);
    set32(c.r[6], ld32((c.r[29].w[0] + 548u)));
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[2]);
    set32(c.r[5], 0u + 1200u);
    set32(c.r[8], ld32((c.r[29].w[0] + 544u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), 0ull);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEBD4u); st64((c.r[29].w[0] + 24u), 0ull);  if (depth < kMaxDepth) unit_0087(c, 457u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x004CEBD4u) [[unlikely]] return; }
L_004CEBD4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.budget -= 2;
L_004CEBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEBE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004CEBE4u) [[unlikely]] return; }
L_004CEBE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 44u)));  goto L_004CEC04; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEBFCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 342u, depth + 1u); else { c.pc = 0x0031F1B0u; return; } if (c.pc != 0x004CEBFCu) [[unlikely]] return; }
L_004CEBFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_004CEC04:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_004CEC70; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 44u), c.r[17].w[0]);  goto L_004CEC4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEC1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CEC1Cu) [[unlikely]] return; }
L_004CEC1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEC2Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CEC2Cu) [[unlikely]] return; }
L_004CEC2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CEC48; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEC48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEC48u) [[unlikely]] return; }
L_004CEC48:
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    c.budget -= 1;
L_004CEC4C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004CEC6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEC5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CEC5Cu) [[unlikely]] return; }
L_004CEC5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEC6Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CEC6Cu) [[unlikely]] return; }
L_004CEC6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_004CEC70:
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEC84u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEC84u) [[unlikely]] return; }
L_004CEC84:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEC9Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEC9Cu) [[unlikely]] return; }
L_004CEC9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[7].d[0] = c.r[2].d[0] | 4095ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[5].w[0] + 220u)));
    set32(c.r[5], 0u + 10000u);
    c.f[0] = c.r[5].w[0];
    c.r[5].d[0] = ld16((c.r[8].w[0] + 52u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    st16((c.r[8].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 31024u));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CED10u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CED10u) [[unlikely]] return; }
L_004CED10:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 552u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CED34u); st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CED34u) [[unlikely]] return; }
L_004CED34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_004CED70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CED9Cu); set32(c.r[4], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CED9Cu) [[unlikely]] return; }
L_004CED9C:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_004CEDE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEDB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CEDB0u) [[unlikely]] return; }
L_004CEDB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEDC4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CEDC4u) [[unlikely]] return; }
L_004CEDC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CEDE4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEDE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEDE4u) [[unlikely]] return; }
L_004CEDE4:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004CEDE8:
    set32(c.r[6], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEDFCu); set32(c.r[4], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEDFCu) [[unlikely]] return; }
L_004CEDFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_004CEE48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEE10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CEE10u) [[unlikely]] return; }
L_004CEE10:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEE24u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CEE24u) [[unlikely]] return; }
L_004CEE24:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CEE44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEE44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEE44u) [[unlikely]] return; }
L_004CEE44:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004CEE48:
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEE5Cu); set32(c.r[4], c.r[29].w[0] + 52u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEE5Cu) [[unlikely]] return; }
L_004CEE5C:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  goto L_004CEEA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEE70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CEE70u) [[unlikely]] return; }
L_004CEE70:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEE84u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CEE84u) [[unlikely]] return; }
L_004CEE84:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CEEA4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEEA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEEA4u) [[unlikely]] return; }
L_004CEEA4:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_004CEEA8:
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEEBCu); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEEBCu) [[unlikely]] return; }
L_004CEEBC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004CEF08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEED0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CEED0u) [[unlikely]] return; }
L_004CEED0:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEEE4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CEEE4u) [[unlikely]] return; }
L_004CEEE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CEF04; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEF04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEF04u) [[unlikely]] return; }
L_004CEF04:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004CEF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEF10u);  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004CEF10u) [[unlikely]] return; }
L_004CEF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEF18u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004CEF18u) [[unlikely]] return; }
L_004CEF18:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 4u)));  goto L_004CEF88; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004CEF64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEF34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CEF34u) [[unlikely]] return; }
L_004CEF34:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEF44u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CEF44u) [[unlikely]] return; }
L_004CEF44:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004CEF60; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEF60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEF60u) [[unlikely]] return; }
L_004CEF60:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CEF64:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_004CEF84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEF74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CEF74u) [[unlikely]] return; }
L_004CEF74:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEF84u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CEF84u) [[unlikely]] return; }
L_004CEF84:
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004CEF88:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 12u), 0u);  goto L_004CEFF4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004CEFD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEFA0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CEFA0u) [[unlikely]] return; }
L_004CEFA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEFB0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CEFB0u) [[unlikely]] return; }
L_004CEFB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004CEFCC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEFCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CEFCCu) [[unlikely]] return; }
L_004CEFCC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CEFD0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_004CEFF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEFE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CEFE0u) [[unlikely]] return; }
L_004CEFE0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CEFF0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CEFF0u) [[unlikely]] return; }
L_004CEFF0:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004CEFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004CF010:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF034u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004CF034u) [[unlikely]] return; }
L_004CF034:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF040u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CF040u) [[unlikely]] return; }
L_004CF040:
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 172u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004CF0B4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), c.r[16].w[0]);  goto L_004CF094; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF064u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF064u) [[unlikely]] return; }
L_004CF064:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF074u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF074u) [[unlikely]] return; }
L_004CF074:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF090; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF090u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF090u) [[unlikely]] return; }
L_004CF090:
    st32((c.r[19].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_004CF094:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_004CF0B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF0A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF0A4u) [[unlikely]] return; }
L_004CF0A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF0B4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF0B4u) [[unlikely]] return; }
L_004CF0B4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_004CF0B8:
    set32(c.r[17], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_004CF130; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  goto L_004CF10C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF0DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF0DCu) [[unlikely]] return; }
L_004CF0DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF0ECu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF0ECu) [[unlikely]] return; }
L_004CF0EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF108; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF108u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF108u) [[unlikely]] return; }
L_004CF108:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_004CF10C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004CF12C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF11Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF11Cu) [[unlikely]] return; }
L_004CF11C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF12Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF12Cu) [[unlikely]] return; }
L_004CF12C:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004CF130:
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF144u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF144u) [[unlikely]] return; }
L_004CF144:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    st32((c.r[2].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF168u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF168u) [[unlikely]] return; }
L_004CF168:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF180u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF180u) [[unlikely]] return; }
L_004CF180:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF198u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF198u) [[unlikely]] return; }
L_004CF198:
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 108u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 22;
    { const bool t = c.r[18].d[0] == 0ull; st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004CF1F4; } }
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 1;
L_004CF1F4:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF204u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004CF204u) [[unlikely]] return; }
L_004CF204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF20Cu); set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004CF20Cu) [[unlikely]] return; }
L_004CF20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF214u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004CF214u) [[unlikely]] return; }
L_004CF214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF21Cu); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004CF21Cu) [[unlikely]] return; }
L_004CF21C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004CF240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 168u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF26Cu); set32(c.r[4], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF26Cu) [[unlikely]] return; }
L_004CF26C:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_004CF2B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF280u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF280u) [[unlikely]] return; }
L_004CF280:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF294u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF294u) [[unlikely]] return; }
L_004CF294:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF2B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF2B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF2B4u) [[unlikely]] return; }
L_004CF2B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_004CF2B8:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF2CCu); set32(c.r[4], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF2CCu) [[unlikely]] return; }
L_004CF2CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_004CF318; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF2E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF2E0u) [[unlikely]] return; }
L_004CF2E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF2F4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF2F4u) [[unlikely]] return; }
L_004CF2F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF314; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF314u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF314u) [[unlikely]] return; }
L_004CF314:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_004CF318:
    set32(c.r[6], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF32Cu); set32(c.r[4], c.r[29].w[0] + 52u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF32Cu) [[unlikely]] return; }
L_004CF32C:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  goto L_004CF378; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF340u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF340u) [[unlikely]] return; }
L_004CF340:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF354u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF354u) [[unlikely]] return; }
L_004CF354:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF374; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF374u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF374u) [[unlikely]] return; }
L_004CF374:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_004CF378:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_004CF3E0; }
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF394u); set32(c.r[4], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF394u) [[unlikely]] return; }
L_004CF394:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CF3DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF3A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF3A8u) [[unlikely]] return; }
L_004CF3A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF3BCu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF3BCu) [[unlikely]] return; }
L_004CF3BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF3DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF3DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF3DCu) [[unlikely]] return; }
L_004CF3DC:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004CF3E0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 156u)));  goto L_004CF448; }
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF3FCu); set32(c.r[4], c.r[29].w[0] + 44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF3FCu) [[unlikely]] return; }
L_004CF3FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CF444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF410u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF410u) [[unlikely]] return; }
L_004CF410:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF424u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF424u) [[unlikely]] return; }
L_004CF424:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF444; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF444u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF444u) [[unlikely]] return; }
L_004CF444:
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 1;
L_004CF448:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  goto L_004CF460; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF458u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004CF458u) [[unlikely]] return; }
L_004CF458:
    st32((c.r[16].w[0] + 156u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 2;
L_004CF460:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  goto L_004CF478; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF470u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004CF470u) [[unlikely]] return; }
L_004CF470:
    st32((c.r[16].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 2;
L_004CF478:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  goto L_004CF490; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF488u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004CF488u) [[unlikely]] return; }
L_004CF488:
    st32((c.r[16].w[0] + 160u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 2;
L_004CF490:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 164u)));  goto L_004CF4A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF4A0u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004CF4A0u) [[unlikely]] return; }
L_004CF4A0:
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 2;
L_004CF4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF4B0u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004CF4B0u) [[unlikely]] return; }
L_004CF4B0:
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[2], c.r[16].w[0] + 144u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[5], c.r[16].w[0] + 132u);
    set32(c.r[6], c.r[29].w[0] + 36u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF4D8u); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x004CF4D8u) [[unlikely]] return; }
L_004CF4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004CF4F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004CFCFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF520u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00F3(c, 398u, depth + 1u); else { c.pc = 0x004CF240u; return; } if (c.pc != 0x004CF520u) [[unlikely]] return; }
L_004CF520:
    set32(c.r[5], c.r[17].w[0] + 132u);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 120u);  goto L_004CF568; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004CF564; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004CF564; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004CF564; } }
    set32(c.r[2], c.r[17].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 72u);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[7], c.r[29].w[0] + 68u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF564u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x004CF564u) [[unlikely]] return; }
L_004CF564:
    set32(c.r[2], c.r[17].w[0] + 120u);
    c.budget -= 1;
L_004CF568:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 116u);  goto L_004CF5B4; }
    set32(c.r[18], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF584u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF584u) [[unlikely]] return; }
L_004CF584:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF594u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF594u) [[unlikely]] return; }
L_004CF594:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF5B0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF5B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF5B0u) [[unlikely]] return; }
L_004CF5B0:
    set32(c.r[2], c.r[17].w[0] + 116u);
    c.budget -= 1;
L_004CF5B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 112u);  goto L_004CF600; }
    set32(c.r[18], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF5FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF5D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF5D0u) [[unlikely]] return; }
L_004CF5D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF5E0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF5E0u) [[unlikely]] return; }
L_004CF5E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF5FC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF5FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF5FCu) [[unlikely]] return; }
L_004CF5FC:
    set32(c.r[2], c.r[17].w[0] + 112u);
    c.budget -= 1;
L_004CF600:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 108u);  goto L_004CF64C; }
    set32(c.r[18], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF61Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF61Cu) [[unlikely]] return; }
L_004CF61C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF62Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF62Cu) [[unlikely]] return; }
L_004CF62C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF648; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF648u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF648u) [[unlikely]] return; }
L_004CF648:
    set32(c.r[2], c.r[17].w[0] + 108u);
    c.budget -= 1;
L_004CF64C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 104u);  goto L_004CF698; }
    set32(c.r[18], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF668u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF668u) [[unlikely]] return; }
L_004CF668:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF678u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF678u) [[unlikely]] return; }
L_004CF678:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF694; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF694u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF694u) [[unlikely]] return; }
L_004CF694:
    set32(c.r[2], c.r[17].w[0] + 104u);
    c.budget -= 1;
L_004CF698:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 100u);  goto L_004CF6E4; }
    set32(c.r[18], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF6E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF6B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF6B4u) [[unlikely]] return; }
L_004CF6B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF6C4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF6C4u) [[unlikely]] return; }
L_004CF6C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF6E0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF6E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF6E0u) [[unlikely]] return; }
L_004CF6E0:
    set32(c.r[2], c.r[17].w[0] + 100u);
    c.budget -= 1;
L_004CF6E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 96u);  goto L_004CF730; }
    set32(c.r[18], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF72C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF700u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF700u) [[unlikely]] return; }
L_004CF700:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF710u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF710u) [[unlikely]] return; }
L_004CF710:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF72C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF72Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF72Cu) [[unlikely]] return; }
L_004CF72C:
    set32(c.r[2], c.r[17].w[0] + 96u);
    c.budget -= 1;
L_004CF730:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 92u);  goto L_004CF77C; }
    set32(c.r[18], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF74Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF74Cu) [[unlikely]] return; }
L_004CF74C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF75Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF75Cu) [[unlikely]] return; }
L_004CF75C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF778; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF778u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF778u) [[unlikely]] return; }
L_004CF778:
    set32(c.r[2], c.r[17].w[0] + 92u);
    c.budget -= 1;
L_004CF77C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 88u);  goto L_004CF7C8; }
    set32(c.r[18], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF7C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF798u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF798u) [[unlikely]] return; }
L_004CF798:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF7A8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF7A8u) [[unlikely]] return; }
L_004CF7A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF7C4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF7C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF7C4u) [[unlikely]] return; }
L_004CF7C4:
    set32(c.r[2], c.r[17].w[0] + 88u);
    c.budget -= 1;
L_004CF7C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 84u);  goto L_004CF814; }
    set32(c.r[18], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF7E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF7E4u) [[unlikely]] return; }
L_004CF7E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF7F4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF7F4u) [[unlikely]] return; }
L_004CF7F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF810; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF810u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF810u) [[unlikely]] return; }
L_004CF810:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_004CF814:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 80u);  goto L_004CF860; }
    set32(c.r[18], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF830u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF830u) [[unlikely]] return; }
L_004CF830:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF840u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF840u) [[unlikely]] return; }
L_004CF840:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF85C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF85Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF85Cu) [[unlikely]] return; }
L_004CF85C:
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 1;
L_004CF860:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 76u);  goto L_004CF8AC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF87Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF87Cu) [[unlikely]] return; }
L_004CF87C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF88Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF88Cu) [[unlikely]] return; }
L_004CF88C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF8A8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF8A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF8A8u) [[unlikely]] return; }
L_004CF8A8:
    set32(c.r[2], c.r[17].w[0] + 76u);
    c.budget -= 1;
L_004CF8AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 72u);  goto L_004CF8F8; }
    set32(c.r[18], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF8F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF8C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF8C8u) [[unlikely]] return; }
L_004CF8C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF8D8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF8D8u) [[unlikely]] return; }
L_004CF8D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF8F4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF8F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF8F4u) [[unlikely]] return; }
L_004CF8F4:
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 1;
L_004CF8F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 68u);  goto L_004CF944; }
    set32(c.r[18], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF914u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF914u) [[unlikely]] return; }
L_004CF914:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF924u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF924u) [[unlikely]] return; }
L_004CF924:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF940; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF940u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF940u) [[unlikely]] return; }
L_004CF940:
    set32(c.r[2], c.r[17].w[0] + 68u);
    c.budget -= 1;
L_004CF944:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 60u);  goto L_004CF990; }
    set32(c.r[18], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF98C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF960u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF960u) [[unlikely]] return; }
L_004CF960:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF970u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF970u) [[unlikely]] return; }
L_004CF970:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF98C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF98Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF98Cu) [[unlikely]] return; }
L_004CF98C:
    set32(c.r[2], c.r[17].w[0] + 60u);
    c.budget -= 1;
L_004CF990:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 56u);  goto L_004CF9DC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CF9D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF9ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF9ACu) [[unlikely]] return; }
L_004CF9AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF9BCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CF9BCu) [[unlikely]] return; }
L_004CF9BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CF9D8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF9D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CF9D8u) [[unlikely]] return; }
L_004CF9D8:
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.budget -= 1;
L_004CF9DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 52u);  goto L_004CFA28; }
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CFA24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CF9F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CF9F8u) [[unlikely]] return; }
L_004CF9F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFA08u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFA08u) [[unlikely]] return; }
L_004CFA08:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CFA24; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFA24u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CFA24u) [[unlikely]] return; }
L_004CFA24:
    set32(c.r[2], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_004CFA28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 44u);  goto L_004CFA74; }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CFA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFA44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFA44u) [[unlikely]] return; }
L_004CFA44:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFA54u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFA54u) [[unlikely]] return; }
L_004CFA54:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CFA70; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFA70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CFA70u) [[unlikely]] return; }
L_004CFA70:
    set32(c.r[2], c.r[17].w[0] + 44u);
    c.budget -= 1;
L_004CFA74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 40u);  goto L_004CFAC0; }
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CFABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFA90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFA90u) [[unlikely]] return; }
L_004CFA90:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFAA0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFAA0u) [[unlikely]] return; }
L_004CFAA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CFABC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFABCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CFABCu) [[unlikely]] return; }
L_004CFABC:
    set32(c.r[2], c.r[17].w[0] + 40u);
    c.budget -= 1;
L_004CFAC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 36u);  goto L_004CFB0C; }
    set32(c.r[18], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CFB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFADCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFADCu) [[unlikely]] return; }
L_004CFADC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFAECu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFAECu) [[unlikely]] return; }
L_004CFAEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CFB08; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFB08u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CFB08u) [[unlikely]] return; }
L_004CFB08:
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 1;
L_004CFB0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 28u);  goto L_004CFB58; }
    set32(c.r[18], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CFB54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFB28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFB28u) [[unlikely]] return; }
L_004CFB28:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFB38u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFB38u) [[unlikely]] return; }
L_004CFB38:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CFB54; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFB54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CFB54u) [[unlikely]] return; }
L_004CFB54:
    set32(c.r[2], c.r[17].w[0] + 28u);
    c.budget -= 1;
L_004CFB58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 24u);  goto L_004CFBA4; }
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CFBA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFB74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFB74u) [[unlikely]] return; }
L_004CFB74:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFB84u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFB84u) [[unlikely]] return; }
L_004CFB84:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CFBA0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFBA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CFBA0u) [[unlikely]] return; }
L_004CFBA0:
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_004CFBA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 16u);  goto L_004CFBF0; }
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CFBEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFBC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFBC0u) [[unlikely]] return; }
L_004CFBC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFBD0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFBD0u) [[unlikely]] return; }
L_004CFBD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CFBEC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFBECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CFBECu) [[unlikely]] return; }
L_004CFBEC:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_004CFBF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_004CFC3C; }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CFC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFC0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFC0Cu) [[unlikely]] return; }
L_004CFC0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFC1Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFC1Cu) [[unlikely]] return; }
L_004CFC1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CFC38; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFC38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CFC38u) [[unlikely]] return; }
L_004CFC38:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_004CFC3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_004CFC88; }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CFC84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFC58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFC58u) [[unlikely]] return; }
L_004CFC58:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFC68u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFC68u) [[unlikely]] return; }
L_004CFC68:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CFC84; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFC84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CFC84u) [[unlikely]] return; }
L_004CFC84:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_004CFC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CFCD0; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004CFCD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFCA4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFCA4u) [[unlikely]] return; }
L_004CFCA4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFCB4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFCB4u) [[unlikely]] return; }
L_004CFCB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CFCD0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFCD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CFCD0u) [[unlikely]] return; }
L_004CFCD0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004CFCE8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_004CFCE8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004CFD00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFCFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004CFCFCu) [[unlikely]] return; }
L_004CFCFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004CFD00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004CFD20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + 22384u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 23872u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_004CFD78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFD68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFD68u) [[unlikely]] return; }
L_004CFD68:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFD78u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFD78u) [[unlikely]] return; }
L_004CFD78:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 8u), 0u);  if (t) { goto L_004CFD9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFD8Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFD8Cu) [[unlikely]] return; }
L_004CFD8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFD9Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFD9Cu) [[unlikely]] return; }
L_004CFD9C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 16u), 0u);  if (t) { goto L_004CFDC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFDB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFDB0u) [[unlikely]] return; }
L_004CFDB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFDC0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFDC0u) [[unlikely]] return; }
L_004CFDC0:
    set32(c.r[2], 0u + 2u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 24u), 0u);  if (t) { goto L_004CFDEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFDDCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFDDCu) [[unlikely]] return; }
L_004CFDDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFDECu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFDECu) [[unlikely]] return; }
L_004CFDEC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 28u), 0u);  if (t) { goto L_004CFE10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFE00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFE00u) [[unlikely]] return; }
L_004CFE00:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFE10u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFE10u) [[unlikely]] return; }
L_004CFE10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 36u), 0u);  if (t) { goto L_004CFE3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFE2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFE2Cu) [[unlikely]] return; }
L_004CFE2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFE3Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFE3Cu) [[unlikely]] return; }
L_004CFE3C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 40u), 0u);  if (t) { goto L_004CFE60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFE50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFE50u) [[unlikely]] return; }
L_004CFE50:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFE60u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFE60u) [[unlikely]] return; }
L_004CFE60:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 44u), 0u);  if (t) { goto L_004CFE84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFE74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFE74u) [[unlikely]] return; }
L_004CFE74:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFE84u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFE84u) [[unlikely]] return; }
L_004CFE84:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 52u), 0u);  if (t) { goto L_004CFEA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFE98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFE98u) [[unlikely]] return; }
L_004CFE98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFEA8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFEA8u) [[unlikely]] return; }
L_004CFEA8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 56u), 0u);  if (t) { goto L_004CFECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFEBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFEBCu) [[unlikely]] return; }
L_004CFEBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFECCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFECCu) [[unlikely]] return; }
L_004CFECC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 60u), 0u);  if (t) { goto L_004CFEF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFEE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFEE0u) [[unlikely]] return; }
L_004CFEE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFEF0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFEF0u) [[unlikely]] return; }
L_004CFEF0:
    st32((c.r[19].w[0] + 64u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 68u), 0u);  if (t) { goto L_004CFF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFF08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFF08u) [[unlikely]] return; }
L_004CFF08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFF18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFF18u) [[unlikely]] return; }
L_004CFF18:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 72u), 0u);  if (t) { goto L_004CFF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFF2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFF2Cu) [[unlikely]] return; }
L_004CFF2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFF3Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFF3Cu) [[unlikely]] return; }
L_004CFF3C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 76u), 0u);  if (t) { goto L_004CFF60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFF50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFF50u) [[unlikely]] return; }
L_004CFF50:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFF60u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFF60u) [[unlikely]] return; }
L_004CFF60:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 80u), 0u);  if (t) { goto L_004CFF84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFF74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFF74u) [[unlikely]] return; }
L_004CFF74:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFF84u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFF84u) [[unlikely]] return; }
L_004CFF84:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 84u), 0u);  if (t) { goto L_004CFFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFF98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFF98u) [[unlikely]] return; }
L_004CFF98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFFA8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFFA8u) [[unlikely]] return; }
L_004CFFA8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 88u), 0u);  if (t) { goto L_004CFFCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFFBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFFBCu) [[unlikely]] return; }
L_004CFFBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFFCCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFFCCu) [[unlikely]] return; }
L_004CFFCC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 92u), 0u);  if (t) { goto L_004CFFF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFFE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004CFFE0u) [[unlikely]] return; }
L_004CFFE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CFFF0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004CFFF0u) [[unlikely]] return; }
L_004CFFF0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 96u), 0u);  if (t) { [[clang::musttail]] return unit_00F4(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0004u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004D0004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00F4(c, 2u, depth);
}

}
